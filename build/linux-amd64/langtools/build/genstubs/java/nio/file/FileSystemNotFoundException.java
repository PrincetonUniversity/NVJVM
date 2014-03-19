package java.nio.file;

public class FileSystemNotFoundException extends RuntimeException {
    static final long serialVersionUID = 0L;
    
    public FileSystemNotFoundException() {
    }
    
    public FileSystemNotFoundException(String msg) {
        super(msg);
    }
}