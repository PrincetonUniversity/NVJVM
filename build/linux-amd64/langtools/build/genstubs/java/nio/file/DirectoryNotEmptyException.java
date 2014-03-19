package java.nio.file;

public class DirectoryNotEmptyException extends FileSystemException {
    static final long serialVersionUID = 0L;
    
    public DirectoryNotEmptyException(String dir) {
        super(dir);
    }
}