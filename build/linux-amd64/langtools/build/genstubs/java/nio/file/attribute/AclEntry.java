package java.nio.file.attribute;

import java.util.*;

public final class AclEntry {
    private final AclEntryType type;
    private final UserPrincipal who;
    private final Set<AclEntryPermission> perms;
    private final Set<AclEntryFlag> flags;
    private volatile int hash;
    
    private AclEntry(AclEntryType type, UserPrincipal who, Set<AclEntryPermission> perms, Set<AclEntryFlag> flags) {
        this.type = type;
        this.who = who;
        this.perms = perms;
        this.flags = flags;
    }
    
    public static final class Builder {
        private AclEntryType type;
        private UserPrincipal who;
        private Set<AclEntryPermission> perms;
        private Set<AclEntryFlag> flags;
        
        private Builder(AclEntryType type, UserPrincipal who, Set<AclEntryPermission> perms, Set<AclEntryFlag> flags) {
            assert perms != null && flags != null;
            this.type = type;
            this.who = who;
            this.perms = perms;
            this.flags = flags;
        }
        
        public native AclEntry build();
        
        public native Builder setType(AclEntryType type);
        
        public native Builder setPrincipal(UserPrincipal who);
        
        private static native void checkSet(Set<?> set, Class<?> type);
        
        public native Builder setPermissions(Set<AclEntryPermission> perms);
        
        public native Builder setPermissions(AclEntryPermission... perms);
        
        public native Builder setFlags(Set<AclEntryFlag> flags);
        
        public native Builder setFlags(AclEntryFlag... flags);
    }
    
    public static native Builder newBuilder();
    
    public static native Builder newBuilder(AclEntry entry);
    
    public native AclEntryType type();
    
    public native UserPrincipal principal();
    
    public native Set<AclEntryPermission> permissions();
    
    public native Set<AclEntryFlag> flags();
    
    public native boolean equals(Object ob);
    
    private static native int hash(int h, Object o);
    
    public native int hashCode();
    
    public native String toString();
}