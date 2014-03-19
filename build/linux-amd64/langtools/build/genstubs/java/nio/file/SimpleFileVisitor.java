package java.nio.file;

import java.nio.file.attribute.BasicFileAttributes;
import java.io.IOException;

public class SimpleFileVisitor<T> implements FileVisitor<T> {
    
    protected SimpleFileVisitor() {
    }
    
    public native FileVisitResult preVisitDirectory(T dir, BasicFileAttributes attrs) throws IOException;
    
    public native FileVisitResult visitFile(T file, BasicFileAttributes attrs) throws IOException;
    
    public native FileVisitResult visitFileFailed(T file, IOException exc) throws IOException;
    
    public native FileVisitResult postVisitDirectory(T dir, IOException exc) throws IOException;
}