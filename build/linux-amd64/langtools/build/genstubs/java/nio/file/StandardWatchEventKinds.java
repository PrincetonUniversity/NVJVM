package java.nio.file;

public final class StandardWatchEventKinds {
    
    private StandardWatchEventKinds() {
    }
    public static final WatchEvent.Kind<Object> OVERFLOW = new StdWatchEventKind<Object>("OVERFLOW", Object.class);
    public static final WatchEvent.Kind<Path> ENTRY_CREATE = new StdWatchEventKind<Path>("ENTRY_CREATE", Path.class);
    public static final WatchEvent.Kind<Path> ENTRY_DELETE = new StdWatchEventKind<Path>("ENTRY_DELETE", Path.class);
    public static final WatchEvent.Kind<Path> ENTRY_MODIFY = new StdWatchEventKind<Path>("ENTRY_MODIFY", Path.class);
    
    private static class StdWatchEventKind<T> implements WatchEvent.Kind<T> {
        private final String name;
        private final Class<T> type;
        
        StdWatchEventKind(String name, Class<T> type) {
            this.name = name;
            this.type = type;
        }
        
        public native String name();
        
        public native Class<T> type();
        
        public native String toString();
    }
}