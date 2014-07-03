package java.nio.file;

public class NotDirectoryException extends FileSystemException {
    private static final long serialVersionUID = 0L;
    
    public NotDirectoryException(String file) {
        super(file);
    }
}