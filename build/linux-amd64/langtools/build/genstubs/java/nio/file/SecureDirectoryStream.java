package java.nio.file;

import java.nio.file.attribute.*;
import java.nio.channels.SeekableByteChannel;
import java.util.Set;
import java.io.IOException;

public interface SecureDirectoryStream<T> extends DirectoryStream<T> {
    
    SecureDirectoryStream<T> newDirectoryStream(T path, LinkOption... options) throws IOException;
    
    SeekableByteChannel newByteChannel(T path, Set<? extends OpenOption> options, FileAttribute<?>... attrs) throws IOException;
    
    void deleteFile(T path) throws IOException;
    
    void deleteDirectory(T path) throws IOException;
    
    void move(T srcpath, SecureDirectoryStream<T> targetdir, T targetpath) throws IOException;
    
    <V extends FileAttributeView>V getFileAttributeView(Class<V> type);
    
    <V extends FileAttributeView>V getFileAttributeView(T path, Class<V> type, LinkOption... options);
}