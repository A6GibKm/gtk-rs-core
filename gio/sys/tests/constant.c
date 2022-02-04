// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files)
// DO NOT EDIT

#include "manual.h"
#include <stdio.h>

#define PRINT_CONSTANT(CONSTANT_NAME) \
    printf("%s;", #CONSTANT_NAME); \
    printf(_Generic((CONSTANT_NAME), \
                    char *: "%s", \
                    const char *: "%s", \
                    char: "%c", \
                    signed char: "%hhd", \
                    unsigned char: "%hhu", \
                    short int: "%hd", \
                    unsigned short int: "%hu", \
                    int: "%d", \
                    unsigned int: "%u", \
                    long: "%ld", \
                    unsigned long: "%lu", \
                    long long: "%lld", \
                    unsigned long long: "%llu", \
                    float: "%f", \
                    double: "%f", \
                    long double: "%ld"), \
           CONSTANT_NAME); \
    printf("\n");

int main() {
    PRINT_CONSTANT((guint) G_APPLICATION_ALLOW_REPLACEMENT);
    PRINT_CONSTANT((guint) G_APPLICATION_CAN_OVERRIDE_APP_ID);
    PRINT_CONSTANT((guint) G_APPLICATION_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_APPLICATION_HANDLES_COMMAND_LINE);
    PRINT_CONSTANT((guint) G_APPLICATION_HANDLES_OPEN);
    PRINT_CONSTANT((guint) G_APPLICATION_IS_LAUNCHER);
    PRINT_CONSTANT((guint) G_APPLICATION_IS_SERVICE);
    PRINT_CONSTANT((guint) G_APPLICATION_NON_UNIQUE);
    PRINT_CONSTANT((guint) G_APPLICATION_REPLACE);
    PRINT_CONSTANT((guint) G_APPLICATION_SEND_ENVIRONMENT);
    PRINT_CONSTANT((guint) G_APP_INFO_CREATE_NEEDS_TERMINAL);
    PRINT_CONSTANT((guint) G_APP_INFO_CREATE_NONE);
    PRINT_CONSTANT((guint) G_APP_INFO_CREATE_SUPPORTS_STARTUP_NOTIFICATION);
    PRINT_CONSTANT((guint) G_APP_INFO_CREATE_SUPPORTS_URIS);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_ANONYMOUS_SUPPORTED);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_NEED_DOMAIN);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_NEED_PASSWORD);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_NEED_USERNAME);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_SAVING_SUPPORTED);
    PRINT_CONSTANT((guint) G_ASK_PASSWORD_TCRYPT);
    PRINT_CONSTANT((guint) G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT);
    PRINT_CONSTANT((guint) G_BUS_NAME_OWNER_FLAGS_DO_NOT_QUEUE);
    PRINT_CONSTANT((guint) G_BUS_NAME_OWNER_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_BUS_NAME_OWNER_FLAGS_REPLACE);
    PRINT_CONSTANT((guint) G_BUS_NAME_WATCHER_FLAGS_AUTO_START);
    PRINT_CONSTANT((guint) G_BUS_NAME_WATCHER_FLAGS_NONE);
    PRINT_CONSTANT((gint) G_BUS_TYPE_NONE);
    PRINT_CONSTANT((gint) G_BUS_TYPE_SESSION);
    PRINT_CONSTANT((gint) G_BUS_TYPE_STARTER);
    PRINT_CONSTANT((gint) G_BUS_TYPE_SYSTEM);
    PRINT_CONSTANT((gint) G_CONVERTER_CONVERTED);
    PRINT_CONSTANT((gint) G_CONVERTER_ERROR);
    PRINT_CONSTANT((gint) G_CONVERTER_FINISHED);
    PRINT_CONSTANT((guint) G_CONVERTER_FLUSH);
    PRINT_CONSTANT((gint) G_CONVERTER_FLUSHED);
    PRINT_CONSTANT((guint) G_CONVERTER_INPUT_AT_END);
    PRINT_CONSTANT((guint) G_CONVERTER_NO_FLAGS);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_APPLE_XUCRED);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_INVALID);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_LINUX_UCRED);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_NETBSD_UNPCBID);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_SOLARIS_UCRED);
    PRINT_CONSTANT((gint) G_CREDENTIALS_TYPE_WIN32_PID);
    PRINT_CONSTANT((gint) G_DATA_STREAM_BYTE_ORDER_BIG_ENDIAN);
    PRINT_CONSTANT((gint) G_DATA_STREAM_BYTE_ORDER_HOST_ENDIAN);
    PRINT_CONSTANT((gint) G_DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN);
    PRINT_CONSTANT((gint) G_DATA_STREAM_NEWLINE_TYPE_ANY);
    PRINT_CONSTANT((gint) G_DATA_STREAM_NEWLINE_TYPE_CR);
    PRINT_CONSTANT((gint) G_DATA_STREAM_NEWLINE_TYPE_CR_LF);
    PRINT_CONSTANT((gint) G_DATA_STREAM_NEWLINE_TYPE_LF);
    PRINT_CONSTANT((guint) G_DBUS_CALL_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION);
    PRINT_CONSTANT((guint) G_DBUS_CALL_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_CALL_FLAGS_NO_AUTO_START);
    PRINT_CONSTANT((guint) G_DBUS_CAPABILITY_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_CAPABILITY_FLAGS_UNIX_FD_PASSING);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_MESSAGE_BUS_CONNECTION);
    PRINT_CONSTANT((guint) G_DBUS_CONNECTION_FLAGS_NONE);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_ACCESS_DENIED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_ADDRESS_IN_USE);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_ADT_AUDIT_DATA_UNKNOWN);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_AUTH_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_BAD_ADDRESS);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_DISCONNECTED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_FILE_EXISTS);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_FILE_NOT_FOUND);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_INVALID_ARGS);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_INVALID_FILE_CONTENT);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_INVALID_SIGNATURE);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_IO_ERROR);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_LIMITS_EXCEEDED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_MATCH_RULE_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_MATCH_RULE_NOT_FOUND);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NAME_HAS_NO_OWNER);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NO_MEMORY);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NO_NETWORK);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NO_REPLY);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_NO_SERVER);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_OBJECT_PATH_IN_USE);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_PROPERTY_READ_ONLY);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SELINUX_SECURITY_CONTEXT_UNKNOWN);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SERVICE_UNKNOWN);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_CHILD_EXITED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_CHILD_SIGNALED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_CONFIG_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_EXEC_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_FILE_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_FORK_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_NO_MEMORY);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_PERMISSIONS_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_SERVICE_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_SERVICE_NOT_FOUND);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_SPAWN_SETUP_FAILED);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_TIMED_OUT);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_TIMEOUT);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_UNIX_PROCESS_ID_UNKNOWN);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_UNKNOWN_INTERFACE);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_UNKNOWN_METHOD);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_UNKNOWN_OBJECT);
    PRINT_CONSTANT((gint) G_DBUS_ERROR_UNKNOWN_PROPERTY);
    PRINT_CONSTANT((guint) G_DBUS_INTERFACE_SKELETON_FLAGS_HANDLE_METHOD_INVOCATIONS_IN_THREAD);
    PRINT_CONSTANT((guint) G_DBUS_INTERFACE_SKELETON_FLAGS_NONE);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_BYTE_ORDER_BIG_ENDIAN);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_BYTE_ORDER_LITTLE_ENDIAN);
    PRINT_CONSTANT((guint) G_DBUS_MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION);
    PRINT_CONSTANT((guint) G_DBUS_MESSAGE_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_MESSAGE_FLAGS_NO_AUTO_START);
    PRINT_CONSTANT((guint) G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_MEMBER);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_PATH);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_SENDER);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_TYPE_ERROR);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_TYPE_INVALID);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_TYPE_METHOD_CALL);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_TYPE_METHOD_RETURN);
    PRINT_CONSTANT((gint) G_DBUS_MESSAGE_TYPE_SIGNAL);
    PRINT_CONSTANT(G_DBUS_METHOD_INVOCATION_HANDLED);
    PRINT_CONSTANT(G_DBUS_METHOD_INVOCATION_UNHANDLED);
    PRINT_CONSTANT((guint) G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_DO_NOT_AUTO_START);
    PRINT_CONSTANT((guint) G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_PROPERTY_INFO_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_PROPERTY_INFO_FLAGS_READABLE);
    PRINT_CONSTANT((guint) G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START_AT_CONSTRUCTION);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_GET_INVALIDATED_PROPERTIES);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_PROXY_FLAGS_NO_MATCH_RULE);
    PRINT_CONSTANT((guint) G_DBUS_SEND_MESSAGE_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL);
    PRINT_CONSTANT((guint) G_DBUS_SERVER_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS);
    PRINT_CONSTANT((guint) G_DBUS_SERVER_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER);
    PRINT_CONSTANT((guint) G_DBUS_SERVER_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_SERVER_FLAGS_RUN_IN_THREAD);
    PRINT_CONSTANT((guint) G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_NAMESPACE);
    PRINT_CONSTANT((guint) G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_PATH);
    PRINT_CONSTANT((guint) G_DBUS_SIGNAL_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_DBUS_SIGNAL_FLAGS_NO_MATCH_RULE);
    PRINT_CONSTANT((guint) G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES);
    PRINT_CONSTANT((guint) G_DBUS_SUBTREE_FLAGS_NONE);
    PRINT_CONSTANT(G_DEBUG_CONTROLLER_EXTENSION_POINT_NAME);
    PRINT_CONSTANT(G_DESKTOP_APP_INFO_LOOKUP_EXTENSION_POINT_NAME);
    PRINT_CONSTANT(G_DRIVE_IDENTIFIER_KIND_UNIX_DEVICE);
    PRINT_CONSTANT((guint) G_DRIVE_START_NONE);
    PRINT_CONSTANT((gint) G_DRIVE_START_STOP_TYPE_MULTIDISK);
    PRINT_CONSTANT((gint) G_DRIVE_START_STOP_TYPE_NETWORK);
    PRINT_CONSTANT((gint) G_DRIVE_START_STOP_TYPE_PASSWORD);
    PRINT_CONSTANT((gint) G_DRIVE_START_STOP_TYPE_SHUTDOWN);
    PRINT_CONSTANT((gint) G_DRIVE_START_STOP_TYPE_UNKNOWN);
    PRINT_CONSTANT((gint) G_EMBLEM_ORIGIN_DEVICE);
    PRINT_CONSTANT((gint) G_EMBLEM_ORIGIN_LIVEMETADATA);
    PRINT_CONSTANT((gint) G_EMBLEM_ORIGIN_TAG);
    PRINT_CONSTANT((gint) G_EMBLEM_ORIGIN_UNKNOWN);
    PRINT_CONSTANT((gint) G_FILESYSTEM_PREVIEW_TYPE_IF_ALWAYS);
    PRINT_CONSTANT((gint) G_FILESYSTEM_PREVIEW_TYPE_IF_LOCAL);
    PRINT_CONSTANT((gint) G_FILESYSTEM_PREVIEW_TYPE_NEVER);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_READ);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_DOS_IS_MOUNTPOINT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_DOS_IS_SYSTEM);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_DOS_REPARSE_POINT_TAG);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ETAG_VALUE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_FREE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_READONLY);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_REMOTE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_SIZE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_TYPE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_USED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_GVFS_BACKEND);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ID_FILE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_ID_FILESYSTEM);
    PRINT_CONSTANT((guint) G_FILE_ATTRIBUTE_INFO_COPY_WHEN_MOVED);
    PRINT_CONSTANT((guint) G_FILE_ATTRIBUTE_INFO_COPY_WITH_FILE);
    PRINT_CONSTANT((guint) G_FILE_ATTRIBUTE_INFO_NONE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_OWNER_GROUP);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_OWNER_USER);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_OWNER_USER_REAL);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_PREVIEW_ICON);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_RECENT_MODIFIED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_SELINUX_CONTEXT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_COPY_NAME);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_ICON);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_IS_VOLATILE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_NAME);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_SIZE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_SYMBOLIC_ICON);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_TARGET_URI);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_STANDARD_TYPE);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_STATUS_SET);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_STATUS_UNSET);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_THUMBNAILING_FAILED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_THUMBNAIL_IS_VALID);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_THUMBNAIL_PATH);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_ACCESS);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_ACCESS_USEC);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_CHANGED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_CHANGED_USEC);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_CREATED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_CREATED_USEC);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_MODIFIED);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TRASH_DELETION_DATE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_TRASH_ORIG_PATH);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_BOOLEAN);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_BYTE_STRING);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_INT32);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_INT64);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_INVALID);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_OBJECT);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_STRING);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_STRINGV);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_UINT32);
    PRINT_CONSTANT((gint) G_FILE_ATTRIBUTE_TYPE_UINT64);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_BLOCKS);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_DEVICE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_GID);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_INODE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_MODE);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_NLINK);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_RDEV);
    PRINT_CONSTANT(G_FILE_ATTRIBUTE_UNIX_UID);
    PRINT_CONSTANT((guint) G_FILE_COPY_ALL_METADATA);
    PRINT_CONSTANT((guint) G_FILE_COPY_BACKUP);
    PRINT_CONSTANT((guint) G_FILE_COPY_NOFOLLOW_SYMLINKS);
    PRINT_CONSTANT((guint) G_FILE_COPY_NONE);
    PRINT_CONSTANT((guint) G_FILE_COPY_NO_FALLBACK_FOR_MOVE);
    PRINT_CONSTANT((guint) G_FILE_COPY_OVERWRITE);
    PRINT_CONSTANT((guint) G_FILE_COPY_TARGET_DEFAULT_PERMS);
    PRINT_CONSTANT((guint) G_FILE_CREATE_NONE);
    PRINT_CONSTANT((guint) G_FILE_CREATE_PRIVATE);
    PRINT_CONSTANT((guint) G_FILE_CREATE_REPLACE_DESTINATION);
    PRINT_CONSTANT((guint) G_FILE_MEASURE_APPARENT_SIZE);
    PRINT_CONSTANT((guint) G_FILE_MEASURE_NONE);
    PRINT_CONSTANT((guint) G_FILE_MEASURE_NO_XDEV);
    PRINT_CONSTANT((guint) G_FILE_MEASURE_REPORT_ANY_ERROR);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_CHANGED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_CHANGES_DONE_HINT);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_CREATED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_DELETED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_MOVED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_MOVED_IN);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_MOVED_OUT);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_PRE_UNMOUNT);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_RENAMED);
    PRINT_CONSTANT((gint) G_FILE_MONITOR_EVENT_UNMOUNTED);
    PRINT_CONSTANT((guint) G_FILE_MONITOR_NONE);
    PRINT_CONSTANT((guint) G_FILE_MONITOR_SEND_MOVED);
    PRINT_CONSTANT((guint) G_FILE_MONITOR_WATCH_HARD_LINKS);
    PRINT_CONSTANT((guint) G_FILE_MONITOR_WATCH_MOUNTS);
    PRINT_CONSTANT((guint) G_FILE_MONITOR_WATCH_MOVES);
    PRINT_CONSTANT((guint) G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS);
    PRINT_CONSTANT((guint) G_FILE_QUERY_INFO_NONE);
    PRINT_CONSTANT((gint) G_FILE_TYPE_DIRECTORY);
    PRINT_CONSTANT((gint) G_FILE_TYPE_MOUNTABLE);
    PRINT_CONSTANT((gint) G_FILE_TYPE_REGULAR);
    PRINT_CONSTANT((gint) G_FILE_TYPE_SHORTCUT);
    PRINT_CONSTANT((gint) G_FILE_TYPE_SPECIAL);
    PRINT_CONSTANT((gint) G_FILE_TYPE_SYMBOLIC_LINK);
    PRINT_CONSTANT((gint) G_FILE_TYPE_UNKNOWN);
    PRINT_CONSTANT((gint) G_IO_ERROR_ADDRESS_IN_USE);
    PRINT_CONSTANT((gint) G_IO_ERROR_ALREADY_MOUNTED);
    PRINT_CONSTANT((gint) G_IO_ERROR_BROKEN_PIPE);
    PRINT_CONSTANT((gint) G_IO_ERROR_BUSY);
    PRINT_CONSTANT((gint) G_IO_ERROR_CANCELLED);
    PRINT_CONSTANT((gint) G_IO_ERROR_CANT_CREATE_BACKUP);
    PRINT_CONSTANT((gint) G_IO_ERROR_CLOSED);
    PRINT_CONSTANT((gint) G_IO_ERROR_CONNECTION_CLOSED);
    PRINT_CONSTANT((gint) G_IO_ERROR_CONNECTION_REFUSED);
    PRINT_CONSTANT((gint) G_IO_ERROR_DBUS_ERROR);
    PRINT_CONSTANT((gint) G_IO_ERROR_EXISTS);
    PRINT_CONSTANT((gint) G_IO_ERROR_FAILED);
    PRINT_CONSTANT((gint) G_IO_ERROR_FAILED_HANDLED);
    PRINT_CONSTANT((gint) G_IO_ERROR_FILENAME_TOO_LONG);
    PRINT_CONSTANT((gint) G_IO_ERROR_HOST_NOT_FOUND);
    PRINT_CONSTANT((gint) G_IO_ERROR_HOST_UNREACHABLE);
    PRINT_CONSTANT((gint) G_IO_ERROR_INVALID_ARGUMENT);
    PRINT_CONSTANT((gint) G_IO_ERROR_INVALID_DATA);
    PRINT_CONSTANT((gint) G_IO_ERROR_INVALID_FILENAME);
    PRINT_CONSTANT((gint) G_IO_ERROR_IS_DIRECTORY);
    PRINT_CONSTANT((gint) G_IO_ERROR_MESSAGE_TOO_LARGE);
    PRINT_CONSTANT((gint) G_IO_ERROR_NETWORK_UNREACHABLE);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_CONNECTED);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_DIRECTORY);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_EMPTY);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_FOUND);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_INITIALIZED);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_MOUNTABLE_FILE);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_MOUNTED);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_REGULAR_FILE);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) G_IO_ERROR_NOT_SYMBOLIC_LINK);
    PRINT_CONSTANT((gint) G_IO_ERROR_NO_SPACE);
    PRINT_CONSTANT((gint) G_IO_ERROR_PARTIAL_INPUT);
    PRINT_CONSTANT((gint) G_IO_ERROR_PENDING);
    PRINT_CONSTANT((gint) G_IO_ERROR_PERMISSION_DENIED);
    PRINT_CONSTANT((gint) G_IO_ERROR_PROXY_AUTH_FAILED);
    PRINT_CONSTANT((gint) G_IO_ERROR_PROXY_FAILED);
    PRINT_CONSTANT((gint) G_IO_ERROR_PROXY_NEED_AUTH);
    PRINT_CONSTANT((gint) G_IO_ERROR_PROXY_NOT_ALLOWED);
    PRINT_CONSTANT((gint) G_IO_ERROR_READ_ONLY);
    PRINT_CONSTANT((gint) G_IO_ERROR_TIMED_OUT);
    PRINT_CONSTANT((gint) G_IO_ERROR_TOO_MANY_LINKS);
    PRINT_CONSTANT((gint) G_IO_ERROR_TOO_MANY_OPEN_FILES);
    PRINT_CONSTANT((gint) G_IO_ERROR_WOULD_BLOCK);
    PRINT_CONSTANT((gint) G_IO_ERROR_WOULD_MERGE);
    PRINT_CONSTANT((gint) G_IO_ERROR_WOULD_RECURSE);
    PRINT_CONSTANT((gint) G_IO_ERROR_WRONG_ETAG);
    PRINT_CONSTANT((gint) G_IO_MODULE_SCOPE_BLOCK_DUPLICATES);
    PRINT_CONSTANT((gint) G_IO_MODULE_SCOPE_NONE);
    PRINT_CONSTANT((guint) G_IO_STREAM_SPLICE_CLOSE_STREAM1);
    PRINT_CONSTANT((guint) G_IO_STREAM_SPLICE_CLOSE_STREAM2);
    PRINT_CONSTANT((guint) G_IO_STREAM_SPLICE_NONE);
    PRINT_CONSTANT((guint) G_IO_STREAM_SPLICE_WAIT_FOR_BOTH);
    PRINT_CONSTANT(G_MEMORY_MONITOR_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((gint) G_MEMORY_MONITOR_WARNING_LEVEL_CRITICAL);
    PRINT_CONSTANT((gint) G_MEMORY_MONITOR_WARNING_LEVEL_LOW);
    PRINT_CONSTANT((gint) G_MEMORY_MONITOR_WARNING_LEVEL_MEDIUM);
    PRINT_CONSTANT(G_MENU_ATTRIBUTE_ACTION);
    PRINT_CONSTANT(G_MENU_ATTRIBUTE_ACTION_NAMESPACE);
    PRINT_CONSTANT(G_MENU_ATTRIBUTE_ICON);
    PRINT_CONSTANT(G_MENU_ATTRIBUTE_LABEL);
    PRINT_CONSTANT(G_MENU_ATTRIBUTE_TARGET);
    PRINT_CONSTANT(G_MENU_LINK_SECTION);
    PRINT_CONSTANT(G_MENU_LINK_SUBMENU);
    PRINT_CONSTANT((guint) G_MOUNT_MOUNT_NONE);
    PRINT_CONSTANT((gint) G_MOUNT_OPERATION_ABORTED);
    PRINT_CONSTANT((gint) G_MOUNT_OPERATION_HANDLED);
    PRINT_CONSTANT((gint) G_MOUNT_OPERATION_UNHANDLED);
    PRINT_CONSTANT((guint) G_MOUNT_UNMOUNT_FORCE);
    PRINT_CONSTANT((guint) G_MOUNT_UNMOUNT_NONE);
    PRINT_CONSTANT(G_NATIVE_VOLUME_MONITOR_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((gint) G_NETWORK_CONNECTIVITY_FULL);
    PRINT_CONSTANT((gint) G_NETWORK_CONNECTIVITY_LIMITED);
    PRINT_CONSTANT((gint) G_NETWORK_CONNECTIVITY_LOCAL);
    PRINT_CONSTANT((gint) G_NETWORK_CONNECTIVITY_PORTAL);
    PRINT_CONSTANT(G_NETWORK_MONITOR_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((gint) G_NOTIFICATION_PRIORITY_HIGH);
    PRINT_CONSTANT((gint) G_NOTIFICATION_PRIORITY_LOW);
    PRINT_CONSTANT((gint) G_NOTIFICATION_PRIORITY_NORMAL);
    PRINT_CONSTANT((gint) G_NOTIFICATION_PRIORITY_URGENT);
    PRINT_CONSTANT((guint) G_OUTPUT_STREAM_SPLICE_CLOSE_SOURCE);
    PRINT_CONSTANT((guint) G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET);
    PRINT_CONSTANT((guint) G_OUTPUT_STREAM_SPLICE_NONE);
    PRINT_CONSTANT((gint) G_PASSWORD_SAVE_FOR_SESSION);
    PRINT_CONSTANT((gint) G_PASSWORD_SAVE_NEVER);
    PRINT_CONSTANT((gint) G_PASSWORD_SAVE_PERMANENTLY);
    PRINT_CONSTANT((gint) G_POLLABLE_RETURN_FAILED);
    PRINT_CONSTANT((gint) G_POLLABLE_RETURN_OK);
    PRINT_CONSTANT((gint) G_POLLABLE_RETURN_WOULD_BLOCK);
    PRINT_CONSTANT(G_POWER_PROFILE_MONITOR_EXTENSION_POINT_NAME);
    PRINT_CONSTANT(G_PROXY_EXTENSION_POINT_NAME);
    PRINT_CONSTANT(G_PROXY_RESOLVER_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((gint) G_RESOLVER_ERROR_INTERNAL);
    PRINT_CONSTANT((gint) G_RESOLVER_ERROR_NOT_FOUND);
    PRINT_CONSTANT((gint) G_RESOLVER_ERROR_TEMPORARY_FAILURE);
    PRINT_CONSTANT((guint) G_RESOLVER_NAME_LOOKUP_FLAGS_DEFAULT);
    PRINT_CONSTANT((guint) G_RESOLVER_NAME_LOOKUP_FLAGS_IPV4_ONLY);
    PRINT_CONSTANT((guint) G_RESOLVER_NAME_LOOKUP_FLAGS_IPV6_ONLY);
    PRINT_CONSTANT((gint) G_RESOLVER_RECORD_MX);
    PRINT_CONSTANT((gint) G_RESOLVER_RECORD_NS);
    PRINT_CONSTANT((gint) G_RESOLVER_RECORD_SOA);
    PRINT_CONSTANT((gint) G_RESOLVER_RECORD_SRV);
    PRINT_CONSTANT((gint) G_RESOLVER_RECORD_TXT);
    PRINT_CONSTANT((gint) G_RESOURCE_ERROR_INTERNAL);
    PRINT_CONSTANT((gint) G_RESOURCE_ERROR_NOT_FOUND);
    PRINT_CONSTANT((guint) G_RESOURCE_FLAGS_COMPRESSED);
    PRINT_CONSTANT((guint) G_RESOURCE_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_RESOURCE_LOOKUP_FLAGS_NONE);
    PRINT_CONSTANT(G_SETTINGS_BACKEND_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_DEFAULT);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_GET);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_GET_NO_CHANGES);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_INVERT_BOOLEAN);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_NO_SENSITIVITY);
    PRINT_CONSTANT((guint) G_SETTINGS_BIND_SET);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_COMPLETE);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_CONNECTED);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_CONNECTING);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_PROXY_NEGOTIATED);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_PROXY_NEGOTIATING);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_RESOLVED);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_RESOLVING);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_TLS_HANDSHAKED);
    PRINT_CONSTANT((gint) G_SOCKET_CLIENT_TLS_HANDSHAKING);
    PRINT_CONSTANT((gint) G_SOCKET_FAMILY_INVALID);
    PRINT_CONSTANT((gint) G_SOCKET_FAMILY_IPV4);
    PRINT_CONSTANT((gint) G_SOCKET_FAMILY_IPV6);
    PRINT_CONSTANT((gint) G_SOCKET_FAMILY_UNIX);
    PRINT_CONSTANT((gint) G_SOCKET_LISTENER_BINDING);
    PRINT_CONSTANT((gint) G_SOCKET_LISTENER_BOUND);
    PRINT_CONSTANT((gint) G_SOCKET_LISTENER_LISTENED);
    PRINT_CONSTANT((gint) G_SOCKET_LISTENER_LISTENING);
    PRINT_CONSTANT((guint) G_SOCKET_MSG_DONTROUTE);
    PRINT_CONSTANT((guint) G_SOCKET_MSG_NONE);
    PRINT_CONSTANT((guint) G_SOCKET_MSG_OOB);
    PRINT_CONSTANT((guint) G_SOCKET_MSG_PEEK);
    PRINT_CONSTANT((gint) G_SOCKET_PROTOCOL_DEFAULT);
    PRINT_CONSTANT((gint) G_SOCKET_PROTOCOL_SCTP);
    PRINT_CONSTANT((gint) G_SOCKET_PROTOCOL_TCP);
    PRINT_CONSTANT((gint) G_SOCKET_PROTOCOL_UDP);
    PRINT_CONSTANT((gint) G_SOCKET_PROTOCOL_UNKNOWN);
    PRINT_CONSTANT((gint) G_SOCKET_TYPE_DATAGRAM);
    PRINT_CONSTANT((gint) G_SOCKET_TYPE_INVALID);
    PRINT_CONSTANT((gint) G_SOCKET_TYPE_SEQPACKET);
    PRINT_CONSTANT((gint) G_SOCKET_TYPE_STREAM);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_INHERIT_FDS);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_NONE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_SEARCH_PATH_FROM_ENVP);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDERR_MERGE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDERR_PIPE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDERR_SILENCE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDIN_INHERIT);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDIN_PIPE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDOUT_PIPE);
    PRINT_CONSTANT((guint) G_SUBPROCESS_FLAGS_STDOUT_SILENCE);
    PRINT_CONSTANT((guint) G_TEST_DBUS_NONE);
    PRINT_CONSTANT((gint) G_TLS_AUTHENTICATION_NONE);
    PRINT_CONSTANT((gint) G_TLS_AUTHENTICATION_REQUESTED);
    PRINT_CONSTANT((gint) G_TLS_AUTHENTICATION_REQUIRED);
    PRINT_CONSTANT(G_TLS_BACKEND_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_BAD_IDENTITY);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_EXPIRED);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_GENERIC_ERROR);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_INSECURE);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_NOT_ACTIVATED);
    PRINT_CONSTANT((gint) G_TLS_CERTIFICATE_REQUEST_NONE);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_REVOKED);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_UNKNOWN_CA);
    PRINT_CONSTANT((guint) G_TLS_CERTIFICATE_VALIDATE_ALL);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_ERROR_GENERAL_ERROR);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_ERROR_INVALID_STATE);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_ERROR_NOT_AVAILABLE);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_ERROR_NOT_IMPLEMENTED);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_ERROR_NOT_SUPPORTED);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_TLS_SERVER_END_POINT);
    PRINT_CONSTANT((gint) G_TLS_CHANNEL_BINDING_TLS_UNIQUE);
    PRINT_CONSTANT((gint) G_TLS_DATABASE_LOOKUP_KEYPAIR);
    PRINT_CONSTANT((gint) G_TLS_DATABASE_LOOKUP_NONE);
    PRINT_CONSTANT(G_TLS_DATABASE_PURPOSE_AUTHENTICATE_CLIENT);
    PRINT_CONSTANT(G_TLS_DATABASE_PURPOSE_AUTHENTICATE_SERVER);
    PRINT_CONSTANT((guint) G_TLS_DATABASE_VERIFY_NONE);
    PRINT_CONSTANT((gint) G_TLS_ERROR_BAD_CERTIFICATE);
    PRINT_CONSTANT((gint) G_TLS_ERROR_BAD_CERTIFICATE_PASSWORD);
    PRINT_CONSTANT((gint) G_TLS_ERROR_CERTIFICATE_REQUIRED);
    PRINT_CONSTANT((gint) G_TLS_ERROR_EOF);
    PRINT_CONSTANT((gint) G_TLS_ERROR_HANDSHAKE);
    PRINT_CONSTANT((gint) G_TLS_ERROR_INAPPROPRIATE_FALLBACK);
    PRINT_CONSTANT((gint) G_TLS_ERROR_MISC);
    PRINT_CONSTANT((gint) G_TLS_ERROR_NOT_TLS);
    PRINT_CONSTANT((gint) G_TLS_ERROR_UNAVAILABLE);
    PRINT_CONSTANT((gint) G_TLS_INTERACTION_FAILED);
    PRINT_CONSTANT((gint) G_TLS_INTERACTION_HANDLED);
    PRINT_CONSTANT((gint) G_TLS_INTERACTION_UNHANDLED);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_FINAL_TRY);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_MANY_TRIES);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_NONE);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_PKCS11_CONTEXT_SPECIFIC);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_PKCS11_SECURITY_OFFICER);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_PKCS11_USER);
    PRINT_CONSTANT((guint) G_TLS_PASSWORD_RETRY);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_DTLS_1_0);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_DTLS_1_2);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_SSL_3_0);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_TLS_1_0);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_TLS_1_1);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_TLS_1_2);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_TLS_1_3);
    PRINT_CONSTANT((gint) G_TLS_PROTOCOL_VERSION_UNKNOWN);
    PRINT_CONSTANT((gint) G_TLS_REHANDSHAKE_NEVER);
    PRINT_CONSTANT((gint) G_TLS_REHANDSHAKE_SAFELY);
    PRINT_CONSTANT((gint) G_TLS_REHANDSHAKE_UNSAFELY);
    PRINT_CONSTANT((gint) G_UNIX_SOCKET_ADDRESS_ABSTRACT);
    PRINT_CONSTANT((gint) G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED);
    PRINT_CONSTANT((gint) G_UNIX_SOCKET_ADDRESS_ANONYMOUS);
    PRINT_CONSTANT((gint) G_UNIX_SOCKET_ADDRESS_INVALID);
    PRINT_CONSTANT((gint) G_UNIX_SOCKET_ADDRESS_PATH);
    PRINT_CONSTANT(G_VFS_EXTENSION_POINT_NAME);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_CLASS);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_HAL_UDI);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_LABEL);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_NFS_MOUNT);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_UNIX_DEVICE);
    PRINT_CONSTANT(G_VOLUME_IDENTIFIER_KIND_UUID);
    PRINT_CONSTANT(G_VOLUME_MONITOR_EXTENSION_POINT_NAME);
    PRINT_CONSTANT((gint) G_ZLIB_COMPRESSOR_FORMAT_GZIP);
    PRINT_CONSTANT((gint) G_ZLIB_COMPRESSOR_FORMAT_RAW);
    PRINT_CONSTANT((gint) G_ZLIB_COMPRESSOR_FORMAT_ZLIB);
    return 0;
}
