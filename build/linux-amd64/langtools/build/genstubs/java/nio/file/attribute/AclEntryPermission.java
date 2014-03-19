package java.nio.file.attribute;

public enum AclEntryPermission {
    /*public static final*/ READ_DATA /*enum*/ ,
    /*public static final*/ WRITE_DATA /*enum*/ ,
    /*public static final*/ APPEND_DATA /*enum*/ ,
    /*public static final*/ READ_NAMED_ATTRS /*enum*/ ,
    /*public static final*/ WRITE_NAMED_ATTRS /*enum*/ ,
    /*public static final*/ EXECUTE /*enum*/ ,
    /*public static final*/ DELETE_CHILD /*enum*/ ,
    /*public static final*/ READ_ATTRIBUTES /*enum*/ ,
    /*public static final*/ WRITE_ATTRIBUTES /*enum*/ ,
    /*public static final*/ DELETE /*enum*/ ,
    /*public static final*/ READ_ACL /*enum*/ ,
    /*public static final*/ WRITE_ACL /*enum*/ ,
    /*public static final*/ WRITE_OWNER /*enum*/ ,
    /*public static final*/ SYNCHRONIZE /*enum*/ ;
    public static final AclEntryPermission LIST_DIRECTORY = READ_DATA;
    public static final AclEntryPermission ADD_FILE = WRITE_DATA;
    public static final AclEntryPermission ADD_SUBDIRECTORY = APPEND_DATA;
}