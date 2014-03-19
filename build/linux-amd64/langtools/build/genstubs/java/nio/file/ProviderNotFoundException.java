package java.nio.file;

public class ProviderNotFoundException extends RuntimeException {
    static final long serialVersionUID = 0L;
    
    public ProviderNotFoundException() {
    }
    
    public ProviderNotFoundException(String msg) {
        super(msg);
    }
}