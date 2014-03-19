package java.nio.file.attribute;

import static java.nio.file.attribute.PosixFilePermission.*;
import java.util.*;

public final class PosixFilePermissions {
    
    private PosixFilePermissions() {
    }
    
    private static native void writeBits(StringBuilder sb, boolean r, boolean w, boolean x);
    
    public static native String toString(Set<PosixFilePermission> perms);
    
    private static native boolean isSet(char c, char setValue);
    
    private static native boolean isR(char c);
    
    private static native boolean isW(char c);
    
    private static native boolean isX(char c);
    
    public static native Set<PosixFilePermission> fromString(String perms);
    
    public static native FileAttribute<Set<PosixFilePermission>> asFileAttribute(Set<PosixFilePermission> perms);
}