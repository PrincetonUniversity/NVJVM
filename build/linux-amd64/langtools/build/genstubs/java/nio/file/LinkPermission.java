package java.nio.file;

import java.security.BasicPermission;

public final class LinkPermission extends BasicPermission {
    static final long serialVersionUID = 0L;
    
    private native void checkName(String name);
    
    public LinkPermission(String name) {
        super(name);
        checkName(name);
    }
    
    public LinkPermission(String name, String actions) {
        super(name);
        checkName(name);
        if (actions != null && actions.length() > 0) {
            throw new IllegalArgumentException("actions: " + actions);
        }
    }
}