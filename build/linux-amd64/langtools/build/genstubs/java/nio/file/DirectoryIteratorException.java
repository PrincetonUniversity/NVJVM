package java.nio.file;

import java.util.ConcurrentModificationException;
import java.util.Objects;
import java.io.IOException;
import java.io.ObjectInputStream;

public final class DirectoryIteratorException extends ConcurrentModificationException {
    private static final long serialVersionUID = 0L;
    
    public DirectoryIteratorException(IOException cause) {
        super(Objects.requireNonNull(cause));
    }
    
    public native IOException getCause();
    
    private native void readObject(ObjectInputStream s) throws IOException, ClassNotFoundException;
}