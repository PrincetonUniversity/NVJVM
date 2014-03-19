package java.nio.file.attribute;

import java.nio.ByteBuffer;
import java.util.List;
import java.io.IOException;

public interface UserDefinedFileAttributeView extends FileAttributeView {
    
    String name();
    
    List<String> list() throws IOException;
    
    int size(String name) throws IOException;
    
    int read(String name, ByteBuffer dst) throws IOException;
    
    int write(String name, ByteBuffer src) throws IOException;
    
    void delete(String name) throws IOException;
}