#ifndef DDS_BUILTINTOPICSSPLTYPES_H
#define DDS_BUILTINTOPICSSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "dds_builtinTopicsDcps.h"


extern c_metaObject __dds_builtinTopics_DDS__load (c_base base);

extern c_metaObject __DDS_octSeq__load (c_base base);
typedef c_sequence _DDS_octSeq;

extern c_metaObject __DDS_BuiltinTopicKey_t__load (c_base base);
typedef c_long _DDS_BuiltinTopicKey_t[3];

extern c_metaObject __DDS_StringSeq__load (c_base base);
typedef c_sequence _DDS_StringSeq;

extern c_metaObject __DDS_DataRepresentationId_t__load (c_base base);
typedef c_short _DDS_DataRepresentationId_t;

extern const char *DDS_Duration_t_metaDescriptor[];
extern const int DDS_Duration_t_metaDescriptorArrLength;
extern const int DDS_Duration_t_metaDescriptorLength;
extern c_metaObject __DDS_Duration_t__load (c_base base);
struct _DDS_Duration_t ;
extern  v_copyin_result __DDS_Duration_t__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_Duration_t__copyOut(const void *_from, void *_to);
struct _DDS_Duration_t {
    c_long sec;
    c_ulong nanosec;
};

extern const char *DDS_UserDataQosPolicy_metaDescriptor[];
extern const int DDS_UserDataQosPolicy_metaDescriptorArrLength;
extern const int DDS_UserDataQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_UserDataQosPolicy__load (c_base base);
struct _DDS_UserDataQosPolicy ;
extern  v_copyin_result __DDS_UserDataQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_UserDataQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_UserDataQosPolicy {
    _DDS_octSeq value;
};

extern const char *DDS_TopicDataQosPolicy_metaDescriptor[];
extern const int DDS_TopicDataQosPolicy_metaDescriptorArrLength;
extern const int DDS_TopicDataQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_TopicDataQosPolicy__load (c_base base);
struct _DDS_TopicDataQosPolicy ;
extern  v_copyin_result __DDS_TopicDataQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TopicDataQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_TopicDataQosPolicy {
    _DDS_octSeq value;
};

extern const char *DDS_GroupDataQosPolicy_metaDescriptor[];
extern const int DDS_GroupDataQosPolicy_metaDescriptorArrLength;
extern const int DDS_GroupDataQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_GroupDataQosPolicy__load (c_base base);
struct _DDS_GroupDataQosPolicy ;
extern  v_copyin_result __DDS_GroupDataQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_GroupDataQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_GroupDataQosPolicy {
    _DDS_octSeq value;
};

extern const char *DDS_TransportPriorityQosPolicy_metaDescriptor[];
extern const int DDS_TransportPriorityQosPolicy_metaDescriptorArrLength;
extern const int DDS_TransportPriorityQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_TransportPriorityQosPolicy__load (c_base base);
struct _DDS_TransportPriorityQosPolicy ;
extern  v_copyin_result __DDS_TransportPriorityQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TransportPriorityQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_TransportPriorityQosPolicy {
    c_long value;
};

extern const char *DDS_LifespanQosPolicy_metaDescriptor[];
extern const int DDS_LifespanQosPolicy_metaDescriptorArrLength;
extern const int DDS_LifespanQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_LifespanQosPolicy__load (c_base base);
struct _DDS_LifespanQosPolicy ;
extern  v_copyin_result __DDS_LifespanQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_LifespanQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_LifespanQosPolicy {
    struct _DDS_Duration_t duration;
};

extern c_metaObject __DDS_DurabilityQosPolicyKind__load (c_base base);
enum _DDS_DurabilityQosPolicyKind {
    _DDS_VOLATILE_DURABILITY_QOS,
    _DDS_TRANSIENT_LOCAL_DURABILITY_QOS,
    _DDS_TRANSIENT_DURABILITY_QOS,
    _DDS_PERSISTENT_DURABILITY_QOS
};

extern const char *DDS_DurabilityQosPolicy_metaDescriptor[];
extern const int DDS_DurabilityQosPolicy_metaDescriptorArrLength;
extern const int DDS_DurabilityQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_DurabilityQosPolicy__load (c_base base);
struct _DDS_DurabilityQosPolicy ;
extern  v_copyin_result __DDS_DurabilityQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_DurabilityQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_DurabilityQosPolicy {
    enum _DDS_DurabilityQosPolicyKind kind;
};

extern c_metaObject __DDS_PresentationQosPolicyAccessScopeKind__load (c_base base);
enum _DDS_PresentationQosPolicyAccessScopeKind {
    _DDS_INSTANCE_PRESENTATION_QOS,
    _DDS_TOPIC_PRESENTATION_QOS,
    _DDS_GROUP_PRESENTATION_QOS
};

extern const char *DDS_PresentationQosPolicy_metaDescriptor[];
extern const int DDS_PresentationQosPolicy_metaDescriptorArrLength;
extern const int DDS_PresentationQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_PresentationQosPolicy__load (c_base base);
struct _DDS_PresentationQosPolicy ;
extern  v_copyin_result __DDS_PresentationQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_PresentationQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_PresentationQosPolicy {
    enum _DDS_PresentationQosPolicyAccessScopeKind access_scope;
    c_bool coherent_access;
    c_bool ordered_access;
};

extern const char *DDS_DeadlineQosPolicy_metaDescriptor[];
extern const int DDS_DeadlineQosPolicy_metaDescriptorArrLength;
extern const int DDS_DeadlineQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_DeadlineQosPolicy__load (c_base base);
struct _DDS_DeadlineQosPolicy ;
extern  v_copyin_result __DDS_DeadlineQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_DeadlineQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_DeadlineQosPolicy {
    struct _DDS_Duration_t period;
};

extern const char *DDS_LatencyBudgetQosPolicy_metaDescriptor[];
extern const int DDS_LatencyBudgetQosPolicy_metaDescriptorArrLength;
extern const int DDS_LatencyBudgetQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_LatencyBudgetQosPolicy__load (c_base base);
struct _DDS_LatencyBudgetQosPolicy ;
extern  v_copyin_result __DDS_LatencyBudgetQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_LatencyBudgetQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_LatencyBudgetQosPolicy {
    struct _DDS_Duration_t duration;
};

extern c_metaObject __DDS_OwnershipQosPolicyKind__load (c_base base);
enum _DDS_OwnershipQosPolicyKind {
    _DDS_SHARED_OWNERSHIP_QOS,
    _DDS_EXCLUSIVE_OWNERSHIP_QOS
};

extern const char *DDS_OwnershipQosPolicy_metaDescriptor[];
extern const int DDS_OwnershipQosPolicy_metaDescriptorArrLength;
extern const int DDS_OwnershipQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_OwnershipQosPolicy__load (c_base base);
struct _DDS_OwnershipQosPolicy ;
extern  v_copyin_result __DDS_OwnershipQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_OwnershipQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_OwnershipQosPolicy {
    enum _DDS_OwnershipQosPolicyKind kind;
};

extern const char *DDS_OwnershipStrengthQosPolicy_metaDescriptor[];
extern const int DDS_OwnershipStrengthQosPolicy_metaDescriptorArrLength;
extern const int DDS_OwnershipStrengthQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_OwnershipStrengthQosPolicy__load (c_base base);
struct _DDS_OwnershipStrengthQosPolicy ;
extern  v_copyin_result __DDS_OwnershipStrengthQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_OwnershipStrengthQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_OwnershipStrengthQosPolicy {
    c_long value;
};

extern c_metaObject __DDS_LivelinessQosPolicyKind__load (c_base base);
enum _DDS_LivelinessQosPolicyKind {
    _DDS_AUTOMATIC_LIVELINESS_QOS,
    _DDS_MANUAL_BY_PARTICIPANT_LIVELINESS_QOS,
    _DDS_MANUAL_BY_TOPIC_LIVELINESS_QOS
};

extern const char *DDS_LivelinessQosPolicy_metaDescriptor[];
extern const int DDS_LivelinessQosPolicy_metaDescriptorArrLength;
extern const int DDS_LivelinessQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_LivelinessQosPolicy__load (c_base base);
struct _DDS_LivelinessQosPolicy ;
extern  v_copyin_result __DDS_LivelinessQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_LivelinessQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_LivelinessQosPolicy {
    enum _DDS_LivelinessQosPolicyKind kind;
    struct _DDS_Duration_t lease_duration;
};

extern const char *DDS_TimeBasedFilterQosPolicy_metaDescriptor[];
extern const int DDS_TimeBasedFilterQosPolicy_metaDescriptorArrLength;
extern const int DDS_TimeBasedFilterQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_TimeBasedFilterQosPolicy__load (c_base base);
struct _DDS_TimeBasedFilterQosPolicy ;
extern  v_copyin_result __DDS_TimeBasedFilterQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TimeBasedFilterQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_TimeBasedFilterQosPolicy {
    struct _DDS_Duration_t minimum_separation;
};

extern const char *DDS_PartitionQosPolicy_metaDescriptor[];
extern const int DDS_PartitionQosPolicy_metaDescriptorArrLength;
extern const int DDS_PartitionQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_PartitionQosPolicy__load (c_base base);
struct _DDS_PartitionQosPolicy ;
extern  v_copyin_result __DDS_PartitionQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_PartitionQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_PartitionQosPolicy {
    _DDS_StringSeq name;
};

extern c_metaObject __DDS_ReliabilityQosPolicyKind__load (c_base base);
enum _DDS_ReliabilityQosPolicyKind {
    _DDS_BEST_EFFORT_RELIABILITY_QOS,
    _DDS_RELIABLE_RELIABILITY_QOS
};

extern const char *DDS_ReliabilityQosPolicy_metaDescriptor[];
extern const int DDS_ReliabilityQosPolicy_metaDescriptorArrLength;
extern const int DDS_ReliabilityQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ReliabilityQosPolicy__load (c_base base);
struct _DDS_ReliabilityQosPolicy ;
extern  v_copyin_result __DDS_ReliabilityQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ReliabilityQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ReliabilityQosPolicy {
    enum _DDS_ReliabilityQosPolicyKind kind;
    struct _DDS_Duration_t max_blocking_time;
    c_bool synchronous;
};

extern c_metaObject __DDS_DestinationOrderQosPolicyKind__load (c_base base);
enum _DDS_DestinationOrderQosPolicyKind {
    _DDS_BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS,
    _DDS_BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS
};

extern const char *DDS_DestinationOrderQosPolicy_metaDescriptor[];
extern const int DDS_DestinationOrderQosPolicy_metaDescriptorArrLength;
extern const int DDS_DestinationOrderQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_DestinationOrderQosPolicy__load (c_base base);
struct _DDS_DestinationOrderQosPolicy ;
extern  v_copyin_result __DDS_DestinationOrderQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_DestinationOrderQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_DestinationOrderQosPolicy {
    enum _DDS_DestinationOrderQosPolicyKind kind;
};

extern c_metaObject __DDS_HistoryQosPolicyKind__load (c_base base);
enum _DDS_HistoryQosPolicyKind {
    _DDS_KEEP_LAST_HISTORY_QOS,
    _DDS_KEEP_ALL_HISTORY_QOS
};

extern const char *DDS_HistoryQosPolicy_metaDescriptor[];
extern const int DDS_HistoryQosPolicy_metaDescriptorArrLength;
extern const int DDS_HistoryQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_HistoryQosPolicy__load (c_base base);
struct _DDS_HistoryQosPolicy ;
extern  v_copyin_result __DDS_HistoryQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_HistoryQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_HistoryQosPolicy {
    enum _DDS_HistoryQosPolicyKind kind;
    c_long depth;
};

extern const char *DDS_ResourceLimitsQosPolicy_metaDescriptor[];
extern const int DDS_ResourceLimitsQosPolicy_metaDescriptorArrLength;
extern const int DDS_ResourceLimitsQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ResourceLimitsQosPolicy__load (c_base base);
struct _DDS_ResourceLimitsQosPolicy ;
extern  v_copyin_result __DDS_ResourceLimitsQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ResourceLimitsQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ResourceLimitsQosPolicy {
    c_long max_samples;
    c_long max_instances;
    c_long max_samples_per_instance;
};

extern const char *DDS_DurabilityServiceQosPolicy_metaDescriptor[];
extern const int DDS_DurabilityServiceQosPolicy_metaDescriptorArrLength;
extern const int DDS_DurabilityServiceQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_DurabilityServiceQosPolicy__load (c_base base);
struct _DDS_DurabilityServiceQosPolicy ;
extern  v_copyin_result __DDS_DurabilityServiceQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_DurabilityServiceQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_DurabilityServiceQosPolicy {
    struct _DDS_Duration_t service_cleanup_delay;
    enum _DDS_HistoryQosPolicyKind history_kind;
    c_long history_depth;
    c_long max_samples;
    c_long max_instances;
    c_long max_samples_per_instance;
};

extern const char *DDS_ProductDataQosPolicy_metaDescriptor[];
extern const int DDS_ProductDataQosPolicy_metaDescriptorArrLength;
extern const int DDS_ProductDataQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ProductDataQosPolicy__load (c_base base);
struct _DDS_ProductDataQosPolicy ;
extern  v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ProductDataQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ProductDataQosPolicy {
    c_string value;
};

extern const char *DDS_EntityFactoryQosPolicy_metaDescriptor[];
extern const int DDS_EntityFactoryQosPolicy_metaDescriptorArrLength;
extern const int DDS_EntityFactoryQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_EntityFactoryQosPolicy__load (c_base base);
struct _DDS_EntityFactoryQosPolicy ;
extern  v_copyin_result __DDS_EntityFactoryQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_EntityFactoryQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_EntityFactoryQosPolicy {
    c_bool autoenable_created_entities;
};

extern const char *DDS_ShareQosPolicy_metaDescriptor[];
extern const int DDS_ShareQosPolicy_metaDescriptorArrLength;
extern const int DDS_ShareQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ShareQosPolicy__load (c_base base);
struct _DDS_ShareQosPolicy ;
extern  v_copyin_result __DDS_ShareQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ShareQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ShareQosPolicy {
    c_string name;
    c_bool enable;
};

extern const char *DDS_WriterDataLifecycleQosPolicy_metaDescriptor[];
extern const int DDS_WriterDataLifecycleQosPolicy_metaDescriptorArrLength;
extern const int DDS_WriterDataLifecycleQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_WriterDataLifecycleQosPolicy__load (c_base base);
struct _DDS_WriterDataLifecycleQosPolicy ;
extern  v_copyin_result __DDS_WriterDataLifecycleQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_WriterDataLifecycleQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_WriterDataLifecycleQosPolicy {
    c_bool autodispose_unregistered_instances;
    struct _DDS_Duration_t autopurge_suspended_samples_delay;
    struct _DDS_Duration_t autounregister_instance_delay;
};

extern c_metaObject __DDS_InvalidSampleVisibilityQosPolicyKind__load (c_base base);
enum _DDS_InvalidSampleVisibilityQosPolicyKind {
    _DDS_NO_INVALID_SAMPLES,
    _DDS_MINIMUM_INVALID_SAMPLES,
    _DDS_ALL_INVALID_SAMPLES
};

extern const char *DDS_InvalidSampleVisibilityQosPolicy_metaDescriptor[];
extern const int DDS_InvalidSampleVisibilityQosPolicy_metaDescriptorArrLength;
extern const int DDS_InvalidSampleVisibilityQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_InvalidSampleVisibilityQosPolicy__load (c_base base);
struct _DDS_InvalidSampleVisibilityQosPolicy ;
extern  v_copyin_result __DDS_InvalidSampleVisibilityQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_InvalidSampleVisibilityQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_InvalidSampleVisibilityQosPolicy {
    enum _DDS_InvalidSampleVisibilityQosPolicyKind kind;
};

extern const char *DDS_SubscriptionKeyQosPolicy_metaDescriptor[];
extern const int DDS_SubscriptionKeyQosPolicy_metaDescriptorArrLength;
extern const int DDS_SubscriptionKeyQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_SubscriptionKeyQosPolicy__load (c_base base);
struct _DDS_SubscriptionKeyQosPolicy ;
extern  v_copyin_result __DDS_SubscriptionKeyQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_SubscriptionKeyQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_SubscriptionKeyQosPolicy {
    c_bool use_key_list;
    _DDS_StringSeq key_list;
};

extern const char *DDS_ReaderDataLifecycleQosPolicy_metaDescriptor[];
extern const int DDS_ReaderDataLifecycleQosPolicy_metaDescriptorArrLength;
extern const int DDS_ReaderDataLifecycleQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ReaderDataLifecycleQosPolicy__load (c_base base);
struct _DDS_ReaderDataLifecycleQosPolicy ;
extern  v_copyin_result __DDS_ReaderDataLifecycleQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ReaderDataLifecycleQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ReaderDataLifecycleQosPolicy {
    struct _DDS_Duration_t autopurge_nowriter_samples_delay;
    struct _DDS_Duration_t autopurge_disposed_samples_delay;
    c_bool autopurge_dispose_all;
    c_bool enable_invalid_samples;
    struct _DDS_InvalidSampleVisibilityQosPolicy invalid_sample_visibility;
};

extern const char *DDS_UserKeyQosPolicy_metaDescriptor[];
extern const int DDS_UserKeyQosPolicy_metaDescriptorArrLength;
extern const int DDS_UserKeyQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_UserKeyQosPolicy__load (c_base base);
struct _DDS_UserKeyQosPolicy ;
extern  v_copyin_result __DDS_UserKeyQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_UserKeyQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_UserKeyQosPolicy {
    c_bool enable;
    c_string expression;
};

extern const char *DDS_ReaderLifespanQosPolicy_metaDescriptor[];
extern const int DDS_ReaderLifespanQosPolicy_metaDescriptorArrLength;
extern const int DDS_ReaderLifespanQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ReaderLifespanQosPolicy__load (c_base base);
struct _DDS_ReaderLifespanQosPolicy ;
extern  v_copyin_result __DDS_ReaderLifespanQosPolicy__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ReaderLifespanQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ReaderLifespanQosPolicy {
    c_bool use_lifespan;
    struct _DDS_Duration_t duration;
};

extern const char *DDS_TypeHash_metaDescriptor[];
extern const int DDS_TypeHash_metaDescriptorArrLength;
extern const int DDS_TypeHash_metaDescriptorLength;
extern c_metaObject __DDS_TypeHash__load (c_base base);
struct _DDS_TypeHash ;
extern  v_copyin_result __DDS_TypeHash__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TypeHash__copyOut(const void *_from, void *_to);
struct _DDS_TypeHash {
    c_ulonglong msb;
    c_ulonglong lsb;
};

extern const char *DDS_ParticipantBuiltinTopicData_metaDescriptor[];
extern const int DDS_ParticipantBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_ParticipantBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_ParticipantBuiltinTopicData__load (c_base base);
struct _DDS_ParticipantBuiltinTopicData ;
extern  v_copyin_result __DDS_ParticipantBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ParticipantBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_ParticipantBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_UserDataQosPolicy user_data;
};

extern const char *DDS_TopicBuiltinTopicData_metaDescriptor[];
extern const int DDS_TopicBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_TopicBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_TopicBuiltinTopicData__load (c_base base);
struct _DDS_TopicBuiltinTopicData ;
extern  v_copyin_result __DDS_TopicBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TopicBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_TopicBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    c_string name;
    c_string type_name;
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DurabilityServiceQosPolicy durability_service;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_TransportPriorityQosPolicy transport_priority;
    struct _DDS_LifespanQosPolicy lifespan;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_OwnershipQosPolicy ownership;
    struct _DDS_TopicDataQosPolicy topic_data;
};

extern const char *DDS_TypeBuiltinTopicData_metaDescriptor[];
extern const int DDS_TypeBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_TypeBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_TypeBuiltinTopicData__load (c_base base);
struct _DDS_TypeBuiltinTopicData ;
extern  v_copyin_result __DDS_TypeBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_TypeBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_TypeBuiltinTopicData {
    c_string name;
    _DDS_DataRepresentationId_t data_representation_id;
    struct _DDS_TypeHash type_hash;
    _DDS_octSeq meta_data;
    _DDS_octSeq extentions;
};

extern const char *DDS_PublicationBuiltinTopicData_metaDescriptor[];
extern const int DDS_PublicationBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_PublicationBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_PublicationBuiltinTopicData__load (c_base base);
struct _DDS_PublicationBuiltinTopicData ;
extern  v_copyin_result __DDS_PublicationBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_PublicationBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_PublicationBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    _DDS_BuiltinTopicKey_t participant_key;
    c_string topic_name;
    c_string type_name;
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_LifespanQosPolicy lifespan;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_UserDataQosPolicy user_data;
    struct _DDS_OwnershipQosPolicy ownership;
    struct _DDS_OwnershipStrengthQosPolicy ownership_strength;
    struct _DDS_PresentationQosPolicy presentation;
    struct _DDS_PartitionQosPolicy partition;
    struct _DDS_TopicDataQosPolicy topic_data;
    struct _DDS_GroupDataQosPolicy group_data;
};

extern const char *DDS_SubscriptionBuiltinTopicData_metaDescriptor[];
extern const int DDS_SubscriptionBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_SubscriptionBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_SubscriptionBuiltinTopicData__load (c_base base);
struct _DDS_SubscriptionBuiltinTopicData ;
extern  v_copyin_result __DDS_SubscriptionBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_SubscriptionBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_SubscriptionBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    _DDS_BuiltinTopicKey_t participant_key;
    c_string topic_name;
    c_string type_name;
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_OwnershipQosPolicy ownership;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_UserDataQosPolicy user_data;
    struct _DDS_TimeBasedFilterQosPolicy time_based_filter;
    struct _DDS_PresentationQosPolicy presentation;
    struct _DDS_PartitionQosPolicy partition;
    struct _DDS_TopicDataQosPolicy topic_data;
    struct _DDS_GroupDataQosPolicy group_data;
};

extern const char *DDS_CMParticipantBuiltinTopicData_metaDescriptor[];
extern const int DDS_CMParticipantBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_CMParticipantBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_CMParticipantBuiltinTopicData__load (c_base base);
struct _DDS_CMParticipantBuiltinTopicData ;
extern  v_copyin_result __DDS_CMParticipantBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_CMParticipantBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_CMParticipantBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_ProductDataQosPolicy product;
};

extern const char *DDS_CMPublisherBuiltinTopicData_metaDescriptor[];
extern const int DDS_CMPublisherBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_CMPublisherBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_CMPublisherBuiltinTopicData__load (c_base base);
struct _DDS_CMPublisherBuiltinTopicData ;
extern  v_copyin_result __DDS_CMPublisherBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_CMPublisherBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_CMPublisherBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_ProductDataQosPolicy product;
    _DDS_BuiltinTopicKey_t participant_key;
    c_string name;
    struct _DDS_EntityFactoryQosPolicy entity_factory;
    struct _DDS_PartitionQosPolicy partition;
};

extern const char *DDS_CMSubscriberBuiltinTopicData_metaDescriptor[];
extern const int DDS_CMSubscriberBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_CMSubscriberBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_CMSubscriberBuiltinTopicData__load (c_base base);
struct _DDS_CMSubscriberBuiltinTopicData ;
extern  v_copyin_result __DDS_CMSubscriberBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_CMSubscriberBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_CMSubscriberBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_ProductDataQosPolicy product;
    _DDS_BuiltinTopicKey_t participant_key;
    c_string name;
    struct _DDS_EntityFactoryQosPolicy entity_factory;
    struct _DDS_ShareQosPolicy share;
    struct _DDS_PartitionQosPolicy partition;
};

extern const char *DDS_CMDataWriterBuiltinTopicData_metaDescriptor[];
extern const int DDS_CMDataWriterBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_CMDataWriterBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_CMDataWriterBuiltinTopicData__load (c_base base);
struct _DDS_CMDataWriterBuiltinTopicData ;
extern  v_copyin_result __DDS_CMDataWriterBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_CMDataWriterBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_CMDataWriterBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_ProductDataQosPolicy product;
    _DDS_BuiltinTopicKey_t publisher_key;
    c_string name;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_WriterDataLifecycleQosPolicy writer_data_lifecycle;
};

extern const char *DDS_CMDataReaderBuiltinTopicData_metaDescriptor[];
extern const int DDS_CMDataReaderBuiltinTopicData_metaDescriptorArrLength;
extern const int DDS_CMDataReaderBuiltinTopicData_metaDescriptorLength;
extern c_metaObject __DDS_CMDataReaderBuiltinTopicData__load (c_base base);
struct _DDS_CMDataReaderBuiltinTopicData ;
extern  v_copyin_result __DDS_CMDataReaderBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_CMDataReaderBuiltinTopicData__copyOut(const void *_from, void *_to);
struct _DDS_CMDataReaderBuiltinTopicData {
    _DDS_BuiltinTopicKey_t key;
    struct _DDS_ProductDataQosPolicy product;
    _DDS_BuiltinTopicKey_t subscriber_key;
    c_string name;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_ReaderDataLifecycleQosPolicy reader_data_lifecycle;
    struct _DDS_UserKeyQosPolicy subscription_keys;
    struct _DDS_ReaderLifespanQosPolicy reader_lifespan;
    struct _DDS_ShareQosPolicy share;
};

#undef OS_API
#endif
