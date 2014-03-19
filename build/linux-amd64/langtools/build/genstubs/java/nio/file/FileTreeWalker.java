package java.nio.file;

import java.nio.file.attribute.*;
import java.io.IOException;
import java.util.*;

class FileTreeWalker {
    private final boolean followLinks;
    private final LinkOption[] linkOptions;
    private final FileVisitor<? super Path> visitor;
    private final int maxDepth;
    
    FileTreeWalker(Set<FileVisitOption> options, FileVisitor<? super Path> visitor, int maxDepth) {
        boolean fl = false;
        for (FileVisitOption option : options) {
            switch (option) {
            case FOLLOW_LINKS: 
                fl = true;
                break;
            
            default: 
                throw new AssertionError("Should not get here");
            
            }
        }
        this.followLinks = fl;
        this.linkOptions = (fl) ? new LinkOption[0] : new LinkOption[]{LinkOption.NOFOLLOW_LINKS};
        this.visitor = visitor;
        this.maxDepth = maxDepth;
    }
    
    native void walk(Path start) throws IOException;
    
    private native FileVisitResult walk(Path file, int depth, List<AncestorDirectory> ancestors) throws IOException;
    
    private static class AncestorDirectory {
        private final Path dir;
        private final Object key;
        
        AncestorDirectory(Path dir, Object key) {
            this.dir = dir;
            this.key = key;
        }
        
        native Path file();
        
        native Object fileKey();
    }
}