package java.nio.file;

public class ProviderMismatchException extends java.lang.IllegalArgumentException {
    static final long serialVersionUID = 0L;
    
    public ProviderMismatchException() {
    }
    
    public ProviderMismatchException(String msg) {
        super(msg);
    }
}