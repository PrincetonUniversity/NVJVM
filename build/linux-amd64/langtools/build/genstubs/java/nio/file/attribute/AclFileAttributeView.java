package java.nio.file.attribute;

import java.nio.file.*;
import java.util.List;
import java.io.IOException;

public interface AclFileAttributeView extends FileOwnerAttributeView {
    
    String name();
    
    List<AclEntry> getAcl() throws IOException;
    
    void setAcl(List<AclEntry> acl) throws IOException;
}