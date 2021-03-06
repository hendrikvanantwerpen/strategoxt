package org.strategoxt.eclipse.ant;

import java.io.File;

import org.eclipse.ant.core.IAntPropertyValueProvider;
import org.eclipse.core.runtime.Platform;

public class StrategoJarAntPropertyProvider implements IAntPropertyValueProvider {

    public String getAntPropertyValue(String antPropertyName) {
        return getStrategoJarPath();
    }

    public static String getStrategoJarPath() {
        String result = org.strategoxt.lang.Context.class.getProtectionDomain().getCodeSource().getLocation()
                .getFile();
        if (Platform.getOS().equals(Platform.OS_WIN32)) {
            // FIXME: proper paths on Windows
            result = result.substring(1);
        }
        if (!result.endsWith(".jar")) { // ensure correct jar at development
                                        // time
            String result2 = result + "/../strategoxt.jar";
            if (new File(result2).exists())
                return result2;
            result2 = result + "/java/strategoxt.jar";
            if (new File(result2).exists())
                return result2;
        }
        return result;
    }
}
