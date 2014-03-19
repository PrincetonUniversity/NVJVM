package java.nio.file;

import java.util.Set;
import java.security.SecureRandom;
import static java.security.AccessController.*;
import java.io.IOException;
import java.nio.file.attribute.FileAttribute;
import java.nio.file.attribute.PosixFilePermission;
import static java.nio.file.attribute.PosixFilePermission.*;

class TempFileHelper {
    
    private TempFileHelper() {
    }
    private static final Path tmpdir = null;
    private static final boolean isPosix = false;
    private static final SecureRandom random = null;
    
    private static native Path generatePath(String prefix, String suffix, Path dir);
    
    private static class PosixPermissions {
        static final FileAttribute<Set<PosixFilePermission>> filePermissions = null;
        static final FileAttribute<Set<PosixFilePermission>> dirPermissions = null;
    }
    
    private static native Path create(Path dir, String prefix, String suffix, boolean createDirectory, FileAttribute[] attrs) throws IOException;
    
    static native Path createTempFile(Path dir, String prefix, String suffix, FileAttribute[] attrs) throws IOException;
    
    static native Path createTempDirectory(Path dir, String prefix, FileAttribute[] attrs) throws IOException;
}