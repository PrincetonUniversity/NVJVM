package java.nio.file;

import java.nio.file.spi.FileSystemProvider;
import java.net.URI;
import java.io.IOException;
import java.util.*;

public final class FileSystems {
    
    private FileSystems() {
    }
    
    private static class DefaultFileSystemHolder {
        static final FileSystem defaultFileSystem = null;
        
        private static native FileSystem defaultFileSystem();
        
        private static native FileSystemProvider getDefaultProvider();
    }
    
    public static native FileSystem getDefault();
    
    public static native FileSystem getFileSystem(URI uri);
    
    public static native FileSystem newFileSystem(URI uri, Map<String, ?> env) throws IOException;
    
    public static native FileSystem newFileSystem(URI uri, Map<String, ?> env, ClassLoader loader) throws IOException;
    
    public static native FileSystem newFileSystem(Path path, ClassLoader loader) throws IOException;
}