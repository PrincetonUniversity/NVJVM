package java.nio.file;

import java.io.IOException;

public class FileSystemException extends IOException {
    static final long serialVersionUID = 0L;
    private final String file;
    private final String other;
    
    public FileSystemException(String file) {
        super((String)null);
        this.file = file;
        this.other = null;
    }
    
    public FileSystemException(String file, String other, String reason) {
        super(reason);
        this.file = file;
        this.other = other;
    }
    
    public native String getFile();
    
    public native String getOtherFile();
    
    public native String getReason();
    
    public native String getMessage();
}