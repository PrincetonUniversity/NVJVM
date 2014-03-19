package java.nio.file;

public class FileSystemLoopException extends FileSystemException {
    private static final long serialVersionUID = 0L;
    
    public FileSystemLoopException(String file) {
        super(file);
    }
}