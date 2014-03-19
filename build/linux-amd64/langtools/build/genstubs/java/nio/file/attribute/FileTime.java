package java.nio.file.attribute;

import java.util.concurrent.TimeUnit;

public final class FileTime implements Comparable<FileTime> {
    private final long value;
    private final TimeUnit unit;
    private String valueAsString;
    private DaysAndNanos daysAndNanos;
    
    private native DaysAndNanos asDaysAndNanos();
    
    private FileTime(long value, TimeUnit unit) {
        if (unit == null) throw new NullPointerException();
        this.value = value;
        this.unit = unit;
    }
    
    public static native FileTime from(long value, TimeUnit unit);
    
    public static native FileTime fromMillis(long value);
    
    public native long to(TimeUnit unit);
    
    public native long toMillis();
    
    public native boolean equals(Object obj);
    
    public native int hashCode();
    
    public native int compareTo(FileTime other);
    
    public native String toString();
    
    private static class DaysAndNanos implements Comparable<DaysAndNanos> {
        private static final long C0 = 0L;
        private static final long C1 = 0L;
        private static final long C2 = 0L;
        private static final long C3 = 0L;
        private static final long C4 = 0L;
        private static final long C5 = 0L;
        private static final long C6 = 0L;
        private final long days;
        private final long excessNanos;
        
        DaysAndNanos(long value, TimeUnit unit) {
            long scale;
            switch (unit) {
            case DAYS: 
                scale = C0;
                break;
            
            case HOURS: 
                scale = C1;
                break;
            
            case MINUTES: 
                scale = C2;
                break;
            
            case SECONDS: 
                scale = C3;
                break;
            
            case MILLISECONDS: 
                scale = C4;
                break;
            
            case MICROSECONDS: 
                scale = C5;
                break;
            
            case NANOSECONDS: 
                scale = C6;
                break;
            
            default: 
                throw new AssertionError("Unit not handled");
            
            }
            this.days = unit.toDays(value);
            this.excessNanos = unit.toNanos(value - (this.days * scale));
        }
        
        native long fractionOfSecondInNanos();
        
        public native boolean equals(Object obj);
        
        public native int hashCode();
        
        public native int compareTo(DaysAndNanos other);
    }
}