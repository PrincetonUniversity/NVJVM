package java.nio.file;

public class InvalidPathException extends IllegalArgumentException {
    static final long serialVersionUID = 0L;
    private String input;
    private int index;
    
    public InvalidPathException(String input, String reason, int index) {
        super(reason);
        if ((input == null) || (reason == null)) throw new NullPointerException();
        if (index < -1) throw new IllegalArgumentException();
        this.input = input;
        this.index = index;
    }
    
    public InvalidPathException(String input, String reason) {
        this(input, reason, -1);
    }
    
    public native String getInput();
    
    public native String getReason();
    
    public native int getIndex();
    
    public native String getMessage();
}