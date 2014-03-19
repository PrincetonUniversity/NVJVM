package java.nio.file.attribute;

import java.io.IOException;

public class UserPrincipalNotFoundException extends IOException {
    static final long serialVersionUID = 0L;
    private final String name;
    
    public UserPrincipalNotFoundException(String name) {
        super();
        this.name = name;
    }
    
    public native String getName();
}