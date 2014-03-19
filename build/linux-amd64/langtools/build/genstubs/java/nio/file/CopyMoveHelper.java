package java.nio.file;

import java.nio.file.attribute.*;
import java.io.IOException;

class CopyMoveHelper {
    
    private CopyMoveHelper() {
    }
    
    private static class CopyOptions {
        boolean replaceExisting = false;
        boolean copyAttributes = false;
        boolean followLinks = false;
        
        private CopyOptions() {
        }
        
        static native CopyOptions parse(CopyOption... options);
    }
    
    private static native CopyOption[] convertMoveToCopyOptions(CopyOption... options) throws AtomicMoveNotSupportedException;
    
    static native void copyToForeignTarget(Path source, Path target, CopyOption... options) throws IOException;
    
    static native void moveToForeignTarget(Path source, Path target, CopyOption... options) throws IOException;
}