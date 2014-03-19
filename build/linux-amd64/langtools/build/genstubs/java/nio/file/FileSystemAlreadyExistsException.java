package java.nio.file;

public class FileSystemAlreadyExistsException extends RuntimeException {
    static final long serialVersionUID = 0L;
    
    public FileSystemAlreadyExistsException() {
    }
    
    public FileSystemAlreadyExistsException(String msg) {
        super(msg);
    }
}