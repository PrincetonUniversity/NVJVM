package java.nio.file;

public class FileAlreadyExistsException extends FileSystemException {
    static final long serialVersionUID = 0L;
    
    public FileAlreadyExistsException(String file) {
        super(file);
    }
    
    public FileAlreadyExistsException(String file, String other, String reason) {
        super(file, other, reason);
    }
}