package org.strategoxt.lang;

import static org.spoofax.interpreter.terms.IStrategoTerm.*;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;

/**
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class SRTS_some extends Strategy {
	public static SRTS_some instance = new SRTS_some();

	@Override
	public IStrategoTerm invoke(Context context, IStrategoTerm current, IStrategy s) {
		
		IStrategoTerm[] results = null;
		IStrategoTerm[] inputs = current.getAllSubterms();
		
		for (int i = 0; i < inputs.length; i++) {
			IStrategoTerm arg = inputs[i];
			IStrategoTerm arg2 = s.invoke(context, arg);
			if (arg2 != arg) {
				if (results == null)
					results = inputs.clone();
				results[i] = arg2;
			}
		}
		
		if (results == null) return current;
		
		switch (current.getTermType()) {
			case APPL:
    			return context.getFactory().replaceAppl(((IStrategoAppl) current).getConstructor(), inputs, (IStrategoAppl) current);
    		case LIST:
    			return context.getFactory().replaceList(inputs, (IStrategoList) current);
    		case TUPLE:
    			return context.getFactory().replaceTuple(inputs, (IStrategoTuple) current);
    		default:
    			return current;
		}
	}
}
