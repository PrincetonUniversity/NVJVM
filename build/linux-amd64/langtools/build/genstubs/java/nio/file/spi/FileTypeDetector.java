package java.nio.file.spi;

import java.nio.file.Path;
import java.io.IOException;

public abstract class FileTypeDetector {
    
    private static native Void checkPermission();
    
    private FileTypeDetector(Void ignore) {
    }
    
    protected FileTypeDetector() {
        this(checkPermission());
    }
    
    public abstract String probeContentType(Path path) throws IOException;
}