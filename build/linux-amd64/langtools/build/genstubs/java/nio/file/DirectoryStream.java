package java.nio.file;

import java.util.Iterator;
import java.io.Closeable;
import java.io.IOException;

public interface DirectoryStream<T> extends Closeable, Iterable<T> {
    
    public static interface Filter<T> {
        
        boolean accept(T entry) throws IOException;
    }
    
    Iterator<T> iterator();
}