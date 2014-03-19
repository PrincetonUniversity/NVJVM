package java.nio.file.attribute;

import java.nio.file.*;
import java.util.Set;
import java.io.IOException;

public interface PosixFileAttributeView extends BasicFileAttributeView, FileOwnerAttributeView {
    
    String name();
    
    PosixFileAttributes readAttributes() throws IOException;
    
    void setPermissions(Set<PosixFilePermission> perms) throws IOException;
    
    void setGroup(GroupPrincipal group) throws IOException;
}