package java.nio.file;

import java.net.URI;

public final class Paths {
    
    private Paths() {
    }
    
    public static native Path get(String first, String... more);
    
    public static native Path get(URI uri);
}