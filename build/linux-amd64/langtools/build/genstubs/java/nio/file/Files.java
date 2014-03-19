package java.nio.file;

import java.nio.file.attribute.*;
import java.nio.file.spi.FileSystemProvider;
import java.nio.file.spi.FileTypeDetector;
import java.nio.channels.SeekableByteChannel;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.util.*;
import java.nio.charset.Charset;

public final class Files {
    
    private Files() {
    }
    
    private static native FileSystemProvider provider(Path path);
    
    public static native InputStream newInputStream(Path path, OpenOption... options) throws IOException;
    
    public static native OutputStream newOutputStream(Path path, OpenOption... options) throws IOException;
    
    public static native SeekableByteChannel newByteChannel(Path path, Set<? extends OpenOption> options, FileAttribute<?>... attrs) throws IOException;
    
    public static native SeekableByteChannel newByteChannel(Path path, OpenOption... options) throws IOException;
    
    public static native DirectoryStream<Path> newDirectoryStream(Path dir) throws IOException;
    
    public static native DirectoryStream<Path> newDirectoryStream(Path dir, String glob) throws IOException;
    
    public static native DirectoryStream<Path> newDirectoryStream(Path dir, DirectoryStream.Filter<? super Path> filter) throws IOException;
    
    public static native Path createFile(Path path, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createDirectory(Path dir, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createDirectories(Path dir, FileAttribute<?>... attrs) throws IOException;
    
    private static native void createAndCheckIsDirectory(Path dir, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createTempFile(Path dir, String prefix, String suffix, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createTempFile(String prefix, String suffix, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createTempDirectory(Path dir, String prefix, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createTempDirectory(String prefix, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createSymbolicLink(Path link, Path target, FileAttribute<?>... attrs) throws IOException;
    
    public static native Path createLink(Path link, Path existing) throws IOException;
    
    public static native void delete(Path path) throws IOException;
    
    public static native boolean deleteIfExists(Path path) throws IOException;
    
    public static native Path copy(Path source, Path target, CopyOption... options) throws IOException;
    
    public static native Path move(Path source, Path target, CopyOption... options) throws IOException;
    
    public static native Path readSymbolicLink(Path link) throws IOException;
    
    public static native FileStore getFileStore(Path path) throws IOException;
    
    public static native boolean isSameFile(Path path, Path path2) throws IOException;
    
    public static native boolean isHidden(Path path) throws IOException;
    
    private static class FileTypeDetectors {
        static final FileTypeDetector defaultFileTypeDetector = null;
        static final List<FileTypeDetector> installeDetectors = null;
        
        private static native List<FileTypeDetector> loadInstalledDetectors();
    }
    
    public static native String probeContentType(Path path) throws IOException;
    
    public static native <V extends FileAttributeView>V getFileAttributeView(Path path, Class<V> type, LinkOption... options);
    
    public static native <A extends BasicFileAttributes>A readAttributes(Path path, Class<A> type, LinkOption... options) throws IOException;
    
    public static native Path setAttribute(Path path, String attribute, Object value, LinkOption... options) throws IOException;
    
    public static native Object getAttribute(Path path, String attribute, LinkOption... options) throws IOException;
    
    public static native Map<String, Object> readAttributes(Path path, String attributes, LinkOption... options) throws IOException;
    
    public static native Set<PosixFilePermission> getPosixFilePermissions(Path path, LinkOption... options) throws IOException;
    
    public static native Path setPosixFilePermissions(Path path, Set<PosixFilePermission> perms) throws IOException;
    
    public static native UserPrincipal getOwner(Path path, LinkOption... options) throws IOException;
    
    public static native Path setOwner(Path path, UserPrincipal owner) throws IOException;
    
    public static native boolean isSymbolicLink(Path path);
    
    public static native boolean isDirectory(Path path, LinkOption... options);
    
    public static native boolean isRegularFile(Path path, LinkOption... options);
    
    public static native FileTime getLastModifiedTime(Path path, LinkOption... options) throws IOException;
    
    public static native Path setLastModifiedTime(Path path, FileTime time) throws IOException;
    
    public static native long size(Path path) throws IOException;
    
    private static native boolean followLinks(LinkOption... options);
    
    public static native boolean exists(Path path, LinkOption... options);
    
    public static native boolean notExists(Path path, LinkOption... options);
    
    private static native boolean isAccessible(Path path, AccessMode... modes);
    
    public static native boolean isReadable(Path path);
    
    public static native boolean isWritable(Path path);
    
    public static native boolean isExecutable(Path path);
    
    public static native Path walkFileTree(Path start, Set<FileVisitOption> options, int maxDepth, FileVisitor<? super Path> visitor) throws IOException;
    
    public static native Path walkFileTree(Path start, FileVisitor<? super Path> visitor) throws IOException;
    private static final int BUFFER_SIZE = 0;
    
    public static native BufferedReader newBufferedReader(Path path, Charset cs) throws IOException;
    
    public static native BufferedWriter newBufferedWriter(Path path, Charset cs, OpenOption... options) throws IOException;
    
    private static native long copy(InputStream source, OutputStream sink) throws IOException;
    
    public static native long copy(InputStream in, Path target, CopyOption... options) throws IOException;
    
    public static native long copy(Path source, OutputStream out) throws IOException;
    
    private static native byte[] read(InputStream source, int initialSize) throws IOException;
    
    public static native byte[] readAllBytes(Path path) throws IOException;
    
    public static native List<String> readAllLines(Path path, Charset cs) throws IOException;
    
    public static native Path write(Path path, byte[] bytes, OpenOption... options) throws IOException;
    
    public static native Path write(Path path, Iterable<? extends CharSequence> lines, Charset cs, OpenOption... options) throws IOException;
}