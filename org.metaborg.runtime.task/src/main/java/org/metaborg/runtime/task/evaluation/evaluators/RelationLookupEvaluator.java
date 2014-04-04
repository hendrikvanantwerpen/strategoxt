package org.metaborg.runtime.task.evaluation.evaluators;

import java.util.Set;

import org.metaborg.runtime.task.ITask;
import org.metaborg.runtime.task.ITaskEngine;
import org.metaborg.runtime.task.SetTask;
import org.metaborg.runtime.task.TaskType;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationFrontend;
import org.metaborg.runtime.task.evaluation.ITaskEvaluationQueue;
import org.metaborg.runtime.task.evaluation.ITaskEvaluator;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.Tools;
import org.spoofax.interpreter.stratego.Strategy;
import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;

public class RelationLookupEvaluator implements ITaskEvaluator {
	private BaseTaskEvaluator evaluator;

	public RelationLookupEvaluator(ITermFactory factory) {
		this.evaluator = new BaseTaskEvaluator(factory);
	}

	@Override
	public IStrategoList adjustDependencies(IStrategoList dependencies, ITermFactory factory) {
		return dependencies;
	}

	@Override
	public ITask create(IStrategoTerm instruction, IStrategoList dependencies, TaskType type, boolean shortCircuit) {
		return new SetTask(instruction, dependencies, TaskType.Regular, shortCircuit);
	}

	@Override
	public ITask create(ITask task) {
		return new SetTask((SetTask) task);
	}

	@Override
	public void queue(ITaskEngine taskEngine, ITaskEvaluationQueue evaluationQueue, Set<IStrategoTerm> scheduled) {
		for(IStrategoTerm taskID : scheduled) {
			final ITask task = taskEngine.getTask(taskID);
			if(RelationLookupEvaluator.isRelationLookup(task.instruction())) {
				evaluationQueue.queueOrDefer(taskID);
			}
		}
	}

	@Override
	public void evaluate(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluator.evaluate(taskID, task, taskEngine, evaluationQueue, context, collect, insert, perform);
	}

	@Override
	public void evaluateCyclic(IStrategoTerm taskID, ITask task, ITaskEngine taskEngine,
		ITaskEvaluationQueue evaluationQueue, IContext context, Strategy collect, Strategy insert, Strategy perform) {
		evaluator.evaluateCyclic(taskID, task, taskEngine, evaluationQueue, context, collect, insert, perform);
	}

	@Override
	public IStrategoTerm current() {
		return evaluator.current();
	}

	@Override
	public void delay() {
		evaluator.delay();
	}

	@Override
	public void reset() {
		evaluator.reset();
	}

	private static boolean isRelationLookup(IStrategoTerm instruction) {
		return Tools.isTermAppl(instruction) && Tools.hasConstructor((IStrategoAppl) instruction, "RelationLookup", 2);
	}

	public static RelationLookupEvaluator register(ITaskEvaluationFrontend evaluationFrontend, ITermFactory factory) {
		final RelationLookupEvaluator evaluator = new RelationLookupEvaluator(factory);
		evaluationFrontend.addTaskEvaluator(factory.makeConstructor("RelationLookup", 2), evaluator);
		return evaluator;
	}
}