package java.nio.file;

public interface WatchEvent<T> {
    
    public static interface Kind<T> {
        
        String name();
        
        Class<T> type();
    }
    
    public static interface Modifier {
        
        String name();
    }
    
    Kind<T> kind();
    
    int count();
    
    T context();
}