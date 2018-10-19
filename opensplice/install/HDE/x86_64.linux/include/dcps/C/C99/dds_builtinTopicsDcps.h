#ifndef DDS_BUILTINTOPICSDCPS_H
#define DDS_BUILTINTOPICSDCPS_H

#include <dds_primitive_types.h>
#include <stdint.h>
#include <stdbool.h>


/* Definition for sequence of uint8_t */
#ifndef _DDS_sequence_octet_defined
#define _DDS_sequence_octet_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    uint8_t *_buffer;
    bool _release;
} DDS_sequence_octet;
 DDS_sequence_octet *DDS_sequence_octet__alloc (void);
 uint8_t *DDS_sequence_octet_allocbuf (uint32_t len);
#endif /* _DDS_sequence_octet_defined */

typedef DDS_sequence_octet DDS_octSeq;
 DDS_octSeq *DDS_octSeq__alloc (void);
 uint8_t *DDS_octSeq_allocbuf (uint32_t len);

typedef int32_t DDS_BuiltinTopicKey_t[3];
typedef int32_t DDS_BuiltinTopicKey_t_slice;
 DDS_BuiltinTopicKey_t_slice *DDS_BuiltinTopicKey_t__alloc (void);

/* Definition for sequence of char * */
#ifndef _DDS_sequence_string_defined
#define _DDS_sequence_string_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    char * *_buffer;
    bool _release;
} DDS_sequence_string;
 DDS_sequence_string *DDS_sequence_string__alloc (void);
 char * *DDS_sequence_string_allocbuf (uint32_t len);
#endif /* _DDS_sequence_string_defined */

typedef DDS_sequence_string DDS_StringSeq;
 DDS_StringSeq *DDS_StringSeq__alloc (void);
 char * *DDS_StringSeq_allocbuf (uint32_t len);

typedef int16_t DDS_DataRepresentationId_t;
 DDS_DataRepresentationId_t *DDS_DataRepresentationId_t__alloc (void);

#define DDS_XCDR_REPRESENTATION        0

#define DDS_XML_REPRESENTATION         1

#define DDS_OSPL_REPRESENTATION        1024

#define DDS_GPB_REPRESENTATION         1025

#define DDS_INVALID_REPRESENTATION     32767

#ifndef _DDS_Duration_t_defined
#define _DDS_Duration_t_defined
#ifdef __cplusplus
struct DDS_Duration_t;
#else /* __cplusplus */
typedef struct DDS_Duration_t DDS_Duration_t;
#endif /* __cplusplus */
#endif /* _DDS_Duration_t_defined */
 DDS_Duration_t *DDS_Duration_t__alloc (void);

struct DDS_Duration_t {
    int32_t sec;
    uint32_t nanosec;
};

#ifndef _DDS_UserDataQosPolicy_defined
#define _DDS_UserDataQosPolicy_defined
#ifdef __cplusplus
struct DDS_UserDataQosPolicy;
#else /* __cplusplus */
typedef struct DDS_UserDataQosPolicy DDS_UserDataQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_UserDataQosPolicy_defined */
 DDS_UserDataQosPolicy *DDS_UserDataQosPolicy__alloc (void);

struct DDS_UserDataQosPolicy {
    DDS_octSeq value;
};

#ifndef _DDS_TopicDataQosPolicy_defined
#define _DDS_TopicDataQosPolicy_defined
#ifdef __cplusplus
struct DDS_TopicDataQosPolicy;
#else /* __cplusplus */
typedef struct DDS_TopicDataQosPolicy DDS_TopicDataQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_TopicDataQosPolicy_defined */
 DDS_TopicDataQosPolicy *DDS_TopicDataQosPolicy__alloc (void);

struct DDS_TopicDataQosPolicy {
    DDS_octSeq value;
};

#ifndef _DDS_GroupDataQosPolicy_defined
#define _DDS_GroupDataQosPolicy_defined
#ifdef __cplusplus
struct DDS_GroupDataQosPolicy;
#else /* __cplusplus */
typedef struct DDS_GroupDataQosPolicy DDS_GroupDataQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_GroupDataQosPolicy_defined */
 DDS_GroupDataQosPolicy *DDS_GroupDataQosPolicy__alloc (void);

struct DDS_GroupDataQosPolicy {
    DDS_octSeq value;
};

#ifndef _DDS_TransportPriorityQosPolicy_defined
#define _DDS_TransportPriorityQosPolicy_defined
#ifdef __cplusplus
struct DDS_TransportPriorityQosPolicy;
#else /* __cplusplus */
typedef struct DDS_TransportPriorityQosPolicy DDS_TransportPriorityQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_TransportPriorityQosPolicy_defined */
 DDS_TransportPriorityQosPolicy *DDS_TransportPriorityQosPolicy__alloc (void);

struct DDS_TransportPriorityQosPolicy {
    int32_t value;
};

#ifndef _DDS_LifespanQosPolicy_defined
#define _DDS_LifespanQosPolicy_defined
#ifdef __cplusplus
struct DDS_LifespanQosPolicy;
#else /* __cplusplus */
typedef struct DDS_LifespanQosPolicy DDS_LifespanQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_LifespanQosPolicy_defined */
 DDS_LifespanQosPolicy *DDS_LifespanQosPolicy__alloc (void);

struct DDS_LifespanQosPolicy {
    DDS_Duration_t duration;
};

enum DDS_DurabilityQosPolicyKind_e {
    DDS_VOLATILE_DURABILITY_QOS,
    DDS_TRANSIENT_LOCAL_DURABILITY_QOS,
    DDS_TRANSIENT_DURABILITY_QOS,
    DDS_PERSISTENT_DURABILITY_QOS
};
typedef enum DDS_DurabilityQosPolicyKind_e DDS_DurabilityQosPolicyKind;

#ifndef _DDS_DurabilityQosPolicy_defined
#define _DDS_DurabilityQosPolicy_defined
#ifdef __cplusplus
struct DDS_DurabilityQosPolicy;
#else /* __cplusplus */
typedef struct DDS_DurabilityQosPolicy DDS_DurabilityQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_DurabilityQosPolicy_defined */
 DDS_DurabilityQosPolicy *DDS_DurabilityQosPolicy__alloc (void);

struct DDS_DurabilityQosPolicy {
    DDS_DurabilityQosPolicyKind kind;
};

enum DDS_PresentationQosPolicyAccessScopeKind_e {
    DDS_INSTANCE_PRESENTATION_QOS,
    DDS_TOPIC_PRESENTATION_QOS,
    DDS_GROUP_PRESENTATION_QOS
};
typedef enum DDS_PresentationQosPolicyAccessScopeKind_e DDS_PresentationQosPolicyAccessScopeKind;

#ifndef _DDS_PresentationQosPolicy_defined
#define _DDS_PresentationQosPolicy_defined
#ifdef __cplusplus
struct DDS_PresentationQosPolicy;
#else /* __cplusplus */
typedef struct DDS_PresentationQosPolicy DDS_PresentationQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_PresentationQosPolicy_defined */
 DDS_PresentationQosPolicy *DDS_PresentationQosPolicy__alloc (void);

struct DDS_PresentationQosPolicy {
    DDS_PresentationQosPolicyAccessScopeKind access_scope;
    bool coherent_access;
    bool ordered_access;
};

#ifndef _DDS_DeadlineQosPolicy_defined
#define _DDS_DeadlineQosPolicy_defined
#ifdef __cplusplus
struct DDS_DeadlineQosPolicy;
#else /* __cplusplus */
typedef struct DDS_DeadlineQosPolicy DDS_DeadlineQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_DeadlineQosPolicy_defined */
 DDS_DeadlineQosPolicy *DDS_DeadlineQosPolicy__alloc (void);

struct DDS_DeadlineQosPolicy {
    DDS_Duration_t period;
};

#ifndef _DDS_LatencyBudgetQosPolicy_defined
#define _DDS_LatencyBudgetQosPolicy_defined
#ifdef __cplusplus
struct DDS_LatencyBudgetQosPolicy;
#else /* __cplusplus */
typedef struct DDS_LatencyBudgetQosPolicy DDS_LatencyBudgetQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_LatencyBudgetQosPolicy_defined */
 DDS_LatencyBudgetQosPolicy *DDS_LatencyBudgetQosPolicy__alloc (void);

struct DDS_LatencyBudgetQosPolicy {
    DDS_Duration_t duration;
};

enum DDS_OwnershipQosPolicyKind_e {
    DDS_SHARED_OWNERSHIP_QOS,
    DDS_EXCLUSIVE_OWNERSHIP_QOS
};
typedef enum DDS_OwnershipQosPolicyKind_e DDS_OwnershipQosPolicyKind;

#ifndef _DDS_OwnershipQosPolicy_defined
#define _DDS_OwnershipQosPolicy_defined
#ifdef __cplusplus
struct DDS_OwnershipQosPolicy;
#else /* __cplusplus */
typedef struct DDS_OwnershipQosPolicy DDS_OwnershipQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_OwnershipQosPolicy_defined */
 DDS_OwnershipQosPolicy *DDS_OwnershipQosPolicy__alloc (void);

struct DDS_OwnershipQosPolicy {
    DDS_OwnershipQosPolicyKind kind;
};

#ifndef _DDS_OwnershipStrengthQosPolicy_defined
#define _DDS_OwnershipStrengthQosPolicy_defined
#ifdef __cplusplus
struct DDS_OwnershipStrengthQosPolicy;
#else /* __cplusplus */
typedef struct DDS_OwnershipStrengthQosPolicy DDS_OwnershipStrengthQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_OwnershipStrengthQosPolicy_defined */
 DDS_OwnershipStrengthQosPolicy *DDS_OwnershipStrengthQosPolicy__alloc (void);

struct DDS_OwnershipStrengthQosPolicy {
    int32_t value;
};

enum DDS_LivelinessQosPolicyKind_e {
    DDS_AUTOMATIC_LIVELINESS_QOS,
    DDS_MANUAL_BY_PARTICIPANT_LIVELINESS_QOS,
    DDS_MANUAL_BY_TOPIC_LIVELINESS_QOS
};
typedef enum DDS_LivelinessQosPolicyKind_e DDS_LivelinessQosPolicyKind;

#ifndef _DDS_LivelinessQosPolicy_defined
#define _DDS_LivelinessQosPolicy_defined
#ifdef __cplusplus
struct DDS_LivelinessQosPolicy;
#else /* __cplusplus */
typedef struct DDS_LivelinessQosPolicy DDS_LivelinessQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_LivelinessQosPolicy_defined */
 DDS_LivelinessQosPolicy *DDS_LivelinessQosPolicy__alloc (void);

struct DDS_LivelinessQosPolicy {
    DDS_LivelinessQosPolicyKind kind;
    DDS_Duration_t lease_duration;
};

#ifndef _DDS_TimeBasedFilterQosPolicy_defined
#define _DDS_TimeBasedFilterQosPolicy_defined
#ifdef __cplusplus
struct DDS_TimeBasedFilterQosPolicy;
#else /* __cplusplus */
typedef struct DDS_TimeBasedFilterQosPolicy DDS_TimeBasedFilterQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_TimeBasedFilterQosPolicy_defined */
 DDS_TimeBasedFilterQosPolicy *DDS_TimeBasedFilterQosPolicy__alloc (void);

struct DDS_TimeBasedFilterQosPolicy {
    DDS_Duration_t minimum_separation;
};

#ifndef _DDS_PartitionQosPolicy_defined
#define _DDS_PartitionQosPolicy_defined
#ifdef __cplusplus
struct DDS_PartitionQosPolicy;
#else /* __cplusplus */
typedef struct DDS_PartitionQosPolicy DDS_PartitionQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_PartitionQosPolicy_defined */
 DDS_PartitionQosPolicy *DDS_PartitionQosPolicy__alloc (void);

struct DDS_PartitionQosPolicy {
    DDS_StringSeq name;
};

enum DDS_ReliabilityQosPolicyKind_e {
    DDS_BEST_EFFORT_RELIABILITY_QOS,
    DDS_RELIABLE_RELIABILITY_QOS
};
typedef enum DDS_ReliabilityQosPolicyKind_e DDS_ReliabilityQosPolicyKind;

#ifndef _DDS_ReliabilityQosPolicy_defined
#define _DDS_ReliabilityQosPolicy_defined
#ifdef __cplusplus
struct DDS_ReliabilityQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ReliabilityQosPolicy DDS_ReliabilityQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ReliabilityQosPolicy_defined */
 DDS_ReliabilityQosPolicy *DDS_ReliabilityQosPolicy__alloc (void);

struct DDS_ReliabilityQosPolicy {
    DDS_ReliabilityQosPolicyKind kind;
    DDS_Duration_t max_blocking_time;
    bool synchronous;
};

enum DDS_DestinationOrderQosPolicyKind_e {
    DDS_BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS,
    DDS_BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS
};
typedef enum DDS_DestinationOrderQosPolicyKind_e DDS_DestinationOrderQosPolicyKind;

#ifndef _DDS_DestinationOrderQosPolicy_defined
#define _DDS_DestinationOrderQosPolicy_defined
#ifdef __cplusplus
struct DDS_DestinationOrderQosPolicy;
#else /* __cplusplus */
typedef struct DDS_DestinationOrderQosPolicy DDS_DestinationOrderQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_DestinationOrderQosPolicy_defined */
 DDS_DestinationOrderQosPolicy *DDS_DestinationOrderQosPolicy__alloc (void);

struct DDS_DestinationOrderQosPolicy {
    DDS_DestinationOrderQosPolicyKind kind;
};

enum DDS_HistoryQosPolicyKind_e {
    DDS_KEEP_LAST_HISTORY_QOS,
    DDS_KEEP_ALL_HISTORY_QOS
};
typedef enum DDS_HistoryQosPolicyKind_e DDS_HistoryQosPolicyKind;

#ifndef _DDS_HistoryQosPolicy_defined
#define _DDS_HistoryQosPolicy_defined
#ifdef __cplusplus
struct DDS_HistoryQosPolicy;
#else /* __cplusplus */
typedef struct DDS_HistoryQosPolicy DDS_HistoryQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_HistoryQosPolicy_defined */
 DDS_HistoryQosPolicy *DDS_HistoryQosPolicy__alloc (void);

struct DDS_HistoryQosPolicy {
    DDS_HistoryQosPolicyKind kind;
    int32_t depth;
};

#ifndef _DDS_ResourceLimitsQosPolicy_defined
#define _DDS_ResourceLimitsQosPolicy_defined
#ifdef __cplusplus
struct DDS_ResourceLimitsQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ResourceLimitsQosPolicy DDS_ResourceLimitsQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ResourceLimitsQosPolicy_defined */
 DDS_ResourceLimitsQosPolicy *DDS_ResourceLimitsQosPolicy__alloc (void);

struct DDS_ResourceLimitsQosPolicy {
    int32_t max_samples;
    int32_t max_instances;
    int32_t max_samples_per_instance;
};

#ifndef _DDS_DurabilityServiceQosPolicy_defined
#define _DDS_DurabilityServiceQosPolicy_defined
#ifdef __cplusplus
struct DDS_DurabilityServiceQosPolicy;
#else /* __cplusplus */
typedef struct DDS_DurabilityServiceQosPolicy DDS_DurabilityServiceQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_DurabilityServiceQosPolicy_defined */
 DDS_DurabilityServiceQosPolicy *DDS_DurabilityServiceQosPolicy__alloc (void);

struct DDS_DurabilityServiceQosPolicy {
    DDS_Duration_t service_cleanup_delay;
    DDS_HistoryQosPolicyKind history_kind;
    int32_t history_depth;
    int32_t max_samples;
    int32_t max_instances;
    int32_t max_samples_per_instance;
};

#ifndef _DDS_ProductDataQosPolicy_defined
#define _DDS_ProductDataQosPolicy_defined
#ifdef __cplusplus
struct DDS_ProductDataQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ProductDataQosPolicy DDS_ProductDataQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ProductDataQosPolicy_defined */
 DDS_ProductDataQosPolicy *DDS_ProductDataQosPolicy__alloc (void);

struct DDS_ProductDataQosPolicy {
    char * value;
};

#ifndef _DDS_EntityFactoryQosPolicy_defined
#define _DDS_EntityFactoryQosPolicy_defined
#ifdef __cplusplus
struct DDS_EntityFactoryQosPolicy;
#else /* __cplusplus */
typedef struct DDS_EntityFactoryQosPolicy DDS_EntityFactoryQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_EntityFactoryQosPolicy_defined */
 DDS_EntityFactoryQosPolicy *DDS_EntityFactoryQosPolicy__alloc (void);

struct DDS_EntityFactoryQosPolicy {
    bool autoenable_created_entities;
};

#ifndef _DDS_ShareQosPolicy_defined
#define _DDS_ShareQosPolicy_defined
#ifdef __cplusplus
struct DDS_ShareQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ShareQosPolicy DDS_ShareQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ShareQosPolicy_defined */
 DDS_ShareQosPolicy *DDS_ShareQosPolicy__alloc (void);

struct DDS_ShareQosPolicy {
    char * name;
    bool enable;
};

#ifndef _DDS_WriterDataLifecycleQosPolicy_defined
#define _DDS_WriterDataLifecycleQosPolicy_defined
#ifdef __cplusplus
struct DDS_WriterDataLifecycleQosPolicy;
#else /* __cplusplus */
typedef struct DDS_WriterDataLifecycleQosPolicy DDS_WriterDataLifecycleQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_WriterDataLifecycleQosPolicy_defined */
 DDS_WriterDataLifecycleQosPolicy *DDS_WriterDataLifecycleQosPolicy__alloc (void);

struct DDS_WriterDataLifecycleQosPolicy {
    bool autodispose_unregistered_instances;
    DDS_Duration_t autopurge_suspended_samples_delay;
    DDS_Duration_t autounregister_instance_delay;
};

enum DDS_InvalidSampleVisibilityQosPolicyKind_e {
    DDS_NO_INVALID_SAMPLES,
    DDS_MINIMUM_INVALID_SAMPLES,
    DDS_ALL_INVALID_SAMPLES
};
typedef enum DDS_InvalidSampleVisibilityQosPolicyKind_e DDS_InvalidSampleVisibilityQosPolicyKind;

#ifndef _DDS_InvalidSampleVisibilityQosPolicy_defined
#define _DDS_InvalidSampleVisibilityQosPolicy_defined
#ifdef __cplusplus
struct DDS_InvalidSampleVisibilityQosPolicy;
#else /* __cplusplus */
typedef struct DDS_InvalidSampleVisibilityQosPolicy DDS_InvalidSampleVisibilityQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_InvalidSampleVisibilityQosPolicy_defined */
 DDS_InvalidSampleVisibilityQosPolicy *DDS_InvalidSampleVisibilityQosPolicy__alloc (void);

struct DDS_InvalidSampleVisibilityQosPolicy {
    DDS_InvalidSampleVisibilityQosPolicyKind kind;
};

#ifndef _DDS_SubscriptionKeyQosPolicy_defined
#define _DDS_SubscriptionKeyQosPolicy_defined
#ifdef __cplusplus
struct DDS_SubscriptionKeyQosPolicy;
#else /* __cplusplus */
typedef struct DDS_SubscriptionKeyQosPolicy DDS_SubscriptionKeyQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_SubscriptionKeyQosPolicy_defined */
 DDS_SubscriptionKeyQosPolicy *DDS_SubscriptionKeyQosPolicy__alloc (void);

struct DDS_SubscriptionKeyQosPolicy {
    bool use_key_list;
    DDS_StringSeq key_list;
};

#ifndef _DDS_ReaderDataLifecycleQosPolicy_defined
#define _DDS_ReaderDataLifecycleQosPolicy_defined
#ifdef __cplusplus
struct DDS_ReaderDataLifecycleQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ReaderDataLifecycleQosPolicy DDS_ReaderDataLifecycleQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ReaderDataLifecycleQosPolicy_defined */
 DDS_ReaderDataLifecycleQosPolicy *DDS_ReaderDataLifecycleQosPolicy__alloc (void);

struct DDS_ReaderDataLifecycleQosPolicy {
    DDS_Duration_t autopurge_nowriter_samples_delay;
    DDS_Duration_t autopurge_disposed_samples_delay;
    bool autopurge_dispose_all;
    bool enable_invalid_samples;
    DDS_InvalidSampleVisibilityQosPolicy invalid_sample_visibility;
};

#ifndef _DDS_UserKeyQosPolicy_defined
#define _DDS_UserKeyQosPolicy_defined
#ifdef __cplusplus
struct DDS_UserKeyQosPolicy;
#else /* __cplusplus */
typedef struct DDS_UserKeyQosPolicy DDS_UserKeyQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_UserKeyQosPolicy_defined */
 DDS_UserKeyQosPolicy *DDS_UserKeyQosPolicy__alloc (void);

struct DDS_UserKeyQosPolicy {
    bool enable;
    char * expression;
};

#ifndef _DDS_ReaderLifespanQosPolicy_defined
#define _DDS_ReaderLifespanQosPolicy_defined
#ifdef __cplusplus
struct DDS_ReaderLifespanQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ReaderLifespanQosPolicy DDS_ReaderLifespanQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ReaderLifespanQosPolicy_defined */
 DDS_ReaderLifespanQosPolicy *DDS_ReaderLifespanQosPolicy__alloc (void);

struct DDS_ReaderLifespanQosPolicy {
    bool use_lifespan;
    DDS_Duration_t duration;
};

#ifndef _DDS_TypeHash_defined
#define _DDS_TypeHash_defined
#ifdef __cplusplus
struct DDS_TypeHash;
#else /* __cplusplus */
typedef struct DDS_TypeHash DDS_TypeHash;
#endif /* __cplusplus */
#endif /* _DDS_TypeHash_defined */
 DDS_TypeHash *DDS_TypeHash__alloc (void);

struct DDS_TypeHash {
    uint64_t msb;
    uint64_t lsb;
};

#ifndef _DDS_ParticipantBuiltinTopicData_defined
#define _DDS_ParticipantBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_ParticipantBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_ParticipantBuiltinTopicData DDS_ParticipantBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_ParticipantBuiltinTopicData_defined */
 DDS_ParticipantBuiltinTopicData *DDS_ParticipantBuiltinTopicData__alloc (void);

struct DDS_ParticipantBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_UserDataQosPolicy user_data;
};

#ifndef _DDS_TopicBuiltinTopicData_defined
#define _DDS_TopicBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_TopicBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_TopicBuiltinTopicData DDS_TopicBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_TopicBuiltinTopicData_defined */
 DDS_TopicBuiltinTopicData *DDS_TopicBuiltinTopicData__alloc (void);

struct DDS_TopicBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    char * name;
    char * type_name;
    DDS_DurabilityQosPolicy durability;
    DDS_DurabilityServiceQosPolicy durability_service;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_TransportPriorityQosPolicy transport_priority;
    DDS_LifespanQosPolicy lifespan;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_OwnershipQosPolicy ownership;
    DDS_TopicDataQosPolicy topic_data;
};

#ifndef _DDS_TypeBuiltinTopicData_defined
#define _DDS_TypeBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_TypeBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_TypeBuiltinTopicData DDS_TypeBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_TypeBuiltinTopicData_defined */
 DDS_TypeBuiltinTopicData *DDS_TypeBuiltinTopicData__alloc (void);

struct DDS_TypeBuiltinTopicData {
    char * name;
    DDS_DataRepresentationId_t data_representation_id;
    DDS_TypeHash type_hash;
    DDS_octSeq meta_data;
    DDS_octSeq extentions;
};

#ifndef _DDS_PublicationBuiltinTopicData_defined
#define _DDS_PublicationBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_PublicationBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_PublicationBuiltinTopicData DDS_PublicationBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_PublicationBuiltinTopicData_defined */
 DDS_PublicationBuiltinTopicData *DDS_PublicationBuiltinTopicData__alloc (void);

struct DDS_PublicationBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_BuiltinTopicKey_t participant_key;
    char * topic_name;
    char * type_name;
    DDS_DurabilityQosPolicy durability;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_LifespanQosPolicy lifespan;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_UserDataQosPolicy user_data;
    DDS_OwnershipQosPolicy ownership;
    DDS_OwnershipStrengthQosPolicy ownership_strength;
    DDS_PresentationQosPolicy presentation;
    DDS_PartitionQosPolicy partition;
    DDS_TopicDataQosPolicy topic_data;
    DDS_GroupDataQosPolicy group_data;
};

#ifndef _DDS_SubscriptionBuiltinTopicData_defined
#define _DDS_SubscriptionBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_SubscriptionBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_SubscriptionBuiltinTopicData DDS_SubscriptionBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_SubscriptionBuiltinTopicData_defined */
 DDS_SubscriptionBuiltinTopicData *DDS_SubscriptionBuiltinTopicData__alloc (void);

struct DDS_SubscriptionBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_BuiltinTopicKey_t participant_key;
    char * topic_name;
    char * type_name;
    DDS_DurabilityQosPolicy durability;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_OwnershipQosPolicy ownership;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_UserDataQosPolicy user_data;
    DDS_TimeBasedFilterQosPolicy time_based_filter;
    DDS_PresentationQosPolicy presentation;
    DDS_PartitionQosPolicy partition;
    DDS_TopicDataQosPolicy topic_data;
    DDS_GroupDataQosPolicy group_data;
};

#ifndef _DDS_CMParticipantBuiltinTopicData_defined
#define _DDS_CMParticipantBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_CMParticipantBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_CMParticipantBuiltinTopicData DDS_CMParticipantBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_CMParticipantBuiltinTopicData_defined */
 DDS_CMParticipantBuiltinTopicData *DDS_CMParticipantBuiltinTopicData__alloc (void);

struct DDS_CMParticipantBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_ProductDataQosPolicy product;
};

#ifndef _DDS_CMPublisherBuiltinTopicData_defined
#define _DDS_CMPublisherBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_CMPublisherBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_CMPublisherBuiltinTopicData DDS_CMPublisherBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_CMPublisherBuiltinTopicData_defined */
 DDS_CMPublisherBuiltinTopicData *DDS_CMPublisherBuiltinTopicData__alloc (void);

struct DDS_CMPublisherBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_ProductDataQosPolicy product;
    DDS_BuiltinTopicKey_t participant_key;
    char * name;
    DDS_EntityFactoryQosPolicy entity_factory;
    DDS_PartitionQosPolicy partition;
};

#ifndef _DDS_CMSubscriberBuiltinTopicData_defined
#define _DDS_CMSubscriberBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_CMSubscriberBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_CMSubscriberBuiltinTopicData DDS_CMSubscriberBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_CMSubscriberBuiltinTopicData_defined */
 DDS_CMSubscriberBuiltinTopicData *DDS_CMSubscriberBuiltinTopicData__alloc (void);

struct DDS_CMSubscriberBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_ProductDataQosPolicy product;
    DDS_BuiltinTopicKey_t participant_key;
    char * name;
    DDS_EntityFactoryQosPolicy entity_factory;
    DDS_ShareQosPolicy share;
    DDS_PartitionQosPolicy partition;
};

#ifndef _DDS_CMDataWriterBuiltinTopicData_defined
#define _DDS_CMDataWriterBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_CMDataWriterBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_CMDataWriterBuiltinTopicData DDS_CMDataWriterBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_CMDataWriterBuiltinTopicData_defined */
 DDS_CMDataWriterBuiltinTopicData *DDS_CMDataWriterBuiltinTopicData__alloc (void);

struct DDS_CMDataWriterBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_ProductDataQosPolicy product;
    DDS_BuiltinTopicKey_t publisher_key;
    char * name;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_WriterDataLifecycleQosPolicy writer_data_lifecycle;
};

#ifndef _DDS_CMDataReaderBuiltinTopicData_defined
#define _DDS_CMDataReaderBuiltinTopicData_defined
#ifdef __cplusplus
struct DDS_CMDataReaderBuiltinTopicData;
#else /* __cplusplus */
typedef struct DDS_CMDataReaderBuiltinTopicData DDS_CMDataReaderBuiltinTopicData;
#endif /* __cplusplus */
#endif /* _DDS_CMDataReaderBuiltinTopicData_defined */
 DDS_CMDataReaderBuiltinTopicData *DDS_CMDataReaderBuiltinTopicData__alloc (void);

struct DDS_CMDataReaderBuiltinTopicData {
    DDS_BuiltinTopicKey_t key;
    DDS_ProductDataQosPolicy product;
    DDS_BuiltinTopicKey_t subscriber_key;
    char * name;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_ReaderDataLifecycleQosPolicy reader_data_lifecycle;
    DDS_UserKeyQosPolicy subscription_keys;
    DDS_ReaderLifespanQosPolicy reader_lifespan;
    DDS_ShareQosPolicy share;
};

#endif
