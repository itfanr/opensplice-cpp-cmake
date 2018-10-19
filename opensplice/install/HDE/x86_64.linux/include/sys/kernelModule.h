
#ifndef MODULE_kernelModule_HEADER
#define MODULE_kernelModule_HEADER

#include "os_if.h"
#include "c_base.h"
#include "c_misc.h"
#include "c_sync.h"
#include "c_collection.h"
#include "c_field.h"


#ifdef MODEL_kernelModule_IMPLEMENTATION
#define OS_API OS_API_EXPORT
#else
#define OS_API OS_API_IMPORT
#endif

typedef struct c_time v_duration;

struct v_gid_s {
    c_ulong systemId;
    c_ulong localId;
    c_ulong serial;
};

typedef struct v_gid_s v_gid;

typedef v_gid v_builtinTopicKey;

typedef enum v_durabilityKind {
    V_DURABILITY_VOLATILE,
    V_DURABILITY_TRANSIENT_LOCAL,
    V_DURABILITY_TRANSIENT,
    V_DURABILITY_PERSISTENT
} v_durabilityKind;

typedef enum v_presentationKind {
    V_PRESENTATION_INSTANCE,
    V_PRESENTATION_TOPIC,
    V_PRESENTATION_GROUP
} v_presentationKind;

typedef enum v_livelinessKind {
    V_LIVELINESS_AUTOMATIC,
    V_LIVELINESS_PARTICIPANT,
    V_LIVELINESS_TOPIC
} v_livelinessKind;

typedef enum v_reliabilityKind {
    V_RELIABILITY_BESTEFFORT,
    V_RELIABILITY_RELIABLE
} v_reliabilityKind;

typedef enum v_ownershipKind {
    V_OWNERSHIP_SHARED,
    V_OWNERSHIP_EXCLUSIVE
} v_ownershipKind;

typedef enum v_historyQosKind {
    V_HISTORY_KEEPLAST,
    V_HISTORY_KEEPALL
} v_historyQosKind;

typedef enum v_historyQosKind v_historyKind;

typedef enum v_orderbyKind {
    V_ORDERBY_RECEPTIONTIME,
    V_ORDERBY_SOURCETIME
} v_orderbyKind;

typedef enum v_invalidSampleVisibilityKind {
    V_VISIBILITY_NO_INVALID_SAMPLES,
    V_VISIBILITY_MINIMUM_INVALID_SAMPLES,
    V_VISIBILITY_ALL_INVALID_SAMPLES
} v_invalidSampleVisibilityKind;

struct v_userDataPolicy {
    c_array value /*C_ARRAY<c_octet>*/;
    c_long size;
};

struct v_transportPolicy {
    c_long value;
};

struct v_lifespanPolicy {
    v_duration duration;
};

struct v_durabilityPolicy {
    enum v_durabilityKind kind;
};

struct v_durabilityServicePolicy {
    v_duration service_cleanup_delay;
    enum v_historyQosKind history_kind;
    c_long history_depth;
    c_long max_samples;
    c_long max_instances;
    c_long max_samples_per_instance;
};

struct v_presentationPolicy {
    enum v_presentationKind access_scope;
    c_bool coherent_access;
    c_bool ordered_access;
};

struct v_deadlinePolicy {
    v_duration period;
};

struct v_latencyPolicy {
    v_duration duration;
};

struct v_ownershipPolicy {
    enum v_ownershipKind kind;
};

struct v_strengthPolicy {
    c_long value;
};

struct v_livelinessPolicy {
    enum v_livelinessKind kind;
    v_duration lease_duration;
};

struct v_reliabilityPolicy {
    enum v_reliabilityKind kind;
    v_duration max_blocking_time;
    c_bool synchronous;
};

struct v_historyPolicy {
    enum v_historyQosKind kind;
    c_long depth;
};

struct v_orderbyPolicy {
    enum v_orderbyKind kind;
};

struct v_resourcePolicy {
    c_long max_samples;
    c_long max_instances;
    c_long max_samples_per_instance;
};

struct v_pacingPolicy {
    v_duration minSeperation;
};

struct v_writerLifecyclePolicy {
    c_bool autodispose_unregistered_instances;
    v_duration autopurge_suspended_samples_delay;
    v_duration autounregister_instance_delay;
};

struct v_readerLifecyclePolicy {
    v_duration autopurge_nowriter_samples_delay;
    v_duration autopurge_disposed_samples_delay;
    c_bool autopurge_dispose_all;
    c_bool enable_invalid_samples;
    enum v_invalidSampleVisibilityKind invalid_sample_visibility;
};

struct v_userKeyPolicy {
    c_bool enable;
    c_string expression;
};

struct v_readerLifespanPolicy {
    c_bool used;
    v_duration duration;
};

struct v_entityFactoryPolicy {
    c_bool autoenable_created_entities;
};

struct v_sharePolicy {
    c_string name;
    c_bool enable;
};

struct v_builtinPartitionPolicy {
    c_sequence name /*C_SEQUENCE<c_string>*/;
};

struct v_builtinTopicDataPolicy {
    c_array value /*C_ARRAY<c_octet>*/;
};

struct v_builtinGroupDataPolicy {
    c_array value /*C_ARRAY<c_octet>*/;
};

struct v_builtinUserDataPolicy {
    c_array value /*C_ARRAY<c_octet>*/;
};

struct v_productDataPolicy {
    c_string value;
};

struct v_participantCMInfo {
    v_builtinTopicKey key;
    struct v_productDataPolicy product;
};

struct v_participantInfo {
    v_builtinTopicKey key;
    struct v_userDataPolicy user_data;
};

typedef c_short v_dataRepresentationId_t;

#define V_XCDR_REPRESENTATION (0)
#define V_XML_REPRESENTATION (1)
#define V_OSPL_REPRESENTATION (1024)
#define V_GPB_REPRESENTATION (1025)
struct v_typeHash_s {
    c_ulonglong msb;
    c_ulonglong lsb;
};

typedef struct v_typeHash_s v_typeHash;

struct v_topicInfo {
    v_builtinTopicKey key;
    c_string name;
    c_string type_name;
    struct v_durabilityPolicy durability;
    struct v_durabilityServicePolicy durabilityService;
    struct v_deadlinePolicy deadline;
    struct v_latencyPolicy latency_budget;
    struct v_livelinessPolicy liveliness;
    struct v_reliabilityPolicy reliability;
    struct v_transportPolicy transport_priority;
    struct v_lifespanPolicy lifespan;
    struct v_orderbyPolicy destination_order;
    struct v_historyPolicy history;
    struct v_resourcePolicy resource_limits;
    struct v_ownershipPolicy ownership;
    struct v_builtinTopicDataPolicy topic_data;
    c_string meta_data;
    c_string key_list;
};

struct v_typeInfo {
    c_string name;
    v_dataRepresentationId_t data_representation_id;
    v_typeHash type_hash;
    c_sequence meta_data /*C_SEQUENCE<c_octet>*/;
    c_sequence extentions /*C_SEQUENCE<c_octet>*/;
};

struct v_publicationInfo {
    v_builtinTopicKey key;
    v_builtinTopicKey participant_key;
    c_string topic_name;
    c_string type_name;
    struct v_durabilityPolicy durability;
    struct v_deadlinePolicy deadline;
    struct v_latencyPolicy latency_budget;
    struct v_livelinessPolicy liveliness;
    struct v_reliabilityPolicy reliability;
    struct v_lifespanPolicy lifespan;
    struct v_orderbyPolicy destination_order;
    struct v_builtinUserDataPolicy user_data;
    struct v_ownershipPolicy ownership;
    struct v_strengthPolicy ownership_strength;
    struct v_presentationPolicy presentation;
    struct v_builtinPartitionPolicy partition;
    struct v_builtinTopicDataPolicy topic_data;
    struct v_builtinGroupDataPolicy group_data;
    struct v_writerLifecyclePolicy lifecycle;
    c_bool alive;
};

struct v_dataWriterCMInfo {
    v_builtinTopicKey key;
    struct v_productDataPolicy product;
    v_builtinTopicKey publisher_key;
    c_string name;
    struct v_historyPolicy history;
    struct v_resourcePolicy resource_limits;
    struct v_writerLifecyclePolicy writer_data_lifecycle;
};

struct v_subscriptionInfo {
    v_builtinTopicKey key;
    v_builtinTopicKey participant_key;
    c_string topic_name;
    c_string type_name;
    struct v_durabilityPolicy durability;
    struct v_deadlinePolicy deadline;
    struct v_latencyPolicy latency_budget;
    struct v_livelinessPolicy liveliness;
    struct v_reliabilityPolicy reliability;
    struct v_ownershipPolicy ownership;
    struct v_orderbyPolicy destination_order;
    struct v_builtinUserDataPolicy user_data;
    struct v_pacingPolicy time_based_filter;
    struct v_presentationPolicy presentation;
    struct v_builtinPartitionPolicy partition;
    struct v_builtinTopicDataPolicy topic_data;
    struct v_builtinGroupDataPolicy group_data;
    struct v_readerLifespanPolicy lifespan;
};

struct v_dataReaderCMInfo {
    v_builtinTopicKey key;
    struct v_productDataPolicy product;
    v_builtinTopicKey subscriber_key;
    c_string name;
    struct v_historyPolicy history;
    struct v_resourcePolicy resource_limits;
    struct v_readerLifecyclePolicy reader_data_lifecycle;
    struct v_userKeyPolicy subscription_keys;
    struct v_readerLifespanPolicy reader_lifespan;
    struct v_sharePolicy share;
};

struct v_publisherCMInfo {
    v_builtinTopicKey key;
    struct v_productDataPolicy product;
    v_builtinTopicKey participant_key;
    c_string name;
    struct v_entityFactoryPolicy entity_factory;
    struct v_builtinPartitionPolicy partition;
};

struct v_subscriberCMInfo {
    v_builtinTopicKey key;
    struct v_productDataPolicy product;
    v_builtinTopicKey participant_key;
    c_string name;
    struct v_entityFactoryPolicy entity_factory;
    struct v_sharePolicy share;
    struct v_builtinPartitionPolicy partition;
};

struct v_deliveryInfo {
    v_gid writerGID;
    v_gid readerGID;
    c_ulong sequenceNumber;
};

struct v_heartbeatInfo {
    v_gid id;
    v_duration period;
};

typedef enum v_controlAndMonitoringCommandKind {
    V_COMMAND_DISPOSE_ALL_DATA
} v_controlAndMonitoringCommandKind;

struct v_commandDisposeAllData {
    c_string topicExpr;
    c_string partitionExpr;
};

struct command_kind {
    enum v_controlAndMonitoringCommandKind _d;
    union {
        struct v_commandDisposeAllData dispose_all_data_info;
    } _u;
};

struct v_controlAndMonitoringCommand_s {
    v_builtinTopicKey key;
    struct command_kind u;
};

typedef struct v_controlAndMonitoringCommand_s v_controlAndMonitoringCommand;

typedef c_array v_messageQos /*C_ARRAY<c_octet>*/;

C_CLASS(v_nodeExt);

C_STRUCT(v_nodeExt) {
    c_ulong nodeState;
};

C_CLASS(v_messageExt);

C_STRUCT(v_messageExt) {
    C_EXTENDS(v_nodeExt);
    struct c_time allocTime;
    c_ulong sequenceNumber;
    c_ulong transactionId;
    struct c_time writeTime;
    v_gid writerGID;
    v_gid writerInstanceGID;
    v_messageQos qos;
};

struct v_tid {
    v_gid wgid;
    c_ulong seqnr;
};

C_CLASS(v_messageEOTExt);

C_STRUCT(v_messageEOTExt) {
    C_EXTENDS(v_messageExt);
    c_ulong publisherId;
    c_ulong transactionId;
    c_sequence tidList /*C_SEQUENCE<kernelModule::v_tid>*/;
};

OS_API c_bool
loadkernelModule(
    c_base base);

#undef OS_API


#endif /* MODULE_kernelModule_HEADER */

