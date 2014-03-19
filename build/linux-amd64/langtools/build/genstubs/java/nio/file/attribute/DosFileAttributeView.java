package java.nio.file.attribute;

import java.io.IOException;

public interface DosFileAttributeView extends BasicFileAttributeView {
    
    String name();
    
    DosFileAttributes readAttributes() throws IOException;
    
    void setReadOnly(boolean value) throws IOException;
    
    void setHidden(boolean value) throws IOException;
    
    void setSystem(boolean value) throws IOException;
    
    void setArchive(boolean value) throws IOException;
}