package org.metaborg.runtime.task.interop;

import org.metaborg.runtime.task.TaskManager;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.Strategy;

public class task_api_stop_collection_0_1 extends Strategy {
	public static task_api_stop_collection_0_1 instance = new task_api_stop_collection_0_1();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategoTerm partition) {
		TaskManager.getInstance().getCurrent().stopCollection((IStrategoString) partition);
		return current;
	}
}
