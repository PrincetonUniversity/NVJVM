package java.nio.channels;

import java.nio.file.*;
import java.nio.file.attribute.FileAttribute;
import java.nio.file.spi.*;
import java.nio.ByteBuffer;
import java.io.IOException;
import java.util.concurrent.Future;
import java.util.concurrent.ExecutorService;
import java.util.Set;

public abstract class AsynchronousFileChannel implements AsynchronousChannel {
    
    protected AsynchronousFileChannel() {
    }
    
    public static native AsynchronousFileChannel open(Path file, Set<? extends OpenOption> options, ExecutorService executor, FileAttribute<?>... attrs) throws IOException;
    private static final FileAttribute<?>[] NO_ATTRIBUTES = null;
    
    public static native AsynchronousFileChannel open(Path file, OpenOption... options) throws IOException;
    
    public abstract long size() throws IOException;
    
    public abstract AsynchronousFileChannel truncate(long size) throws IOException;
    
    public abstract void force(boolean metaData) throws IOException;
    
    public abstract <A>void lock(long position, long size, boolean shared, A attachment, CompletionHandler<FileLock, ? super A> handler);
    
    public final native <A>void lock(A attachment, CompletionHandler<FileLock, ? super A> handler);
    
    public abstract Future<FileLock> lock(long position, long size, boolean shared);
    
    public final native Future<FileLock> lock();
    
    public abstract FileLock tryLock(long position, long size, boolean shared) throws IOException;
    
    public final native FileLock tryLock() throws IOException;
    
    public abstract <A>void read(ByteBuffer dst, long position, A attachment, CompletionHandler<Integer, ? super A> handler);
    
    public abstract Future<Integer> read(ByteBuffer dst, long position);
    
    public abstract <A>void write(ByteBuffer src, long position, A attachment, CompletionHandler<Integer, ? super A> handler);
    
    public abstract Future<Integer> write(ByteBuffer src, long position);
}