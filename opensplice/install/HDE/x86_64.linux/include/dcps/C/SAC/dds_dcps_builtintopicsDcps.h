#ifndef DDS_DCPS_BUILTINTOPICSDCPS_H
#define DDS_DCPS_BUILTINTOPICSDCPS_H

#include <dds_primitive_types.h>

#include "dds_builtinTopicsDcps.h"


#ifndef _DDS_Time_t_defined
#define _DDS_Time_t_defined
#ifdef __cplusplus
struct DDS_Time_t;
#else /* __cplusplus */
typedef struct DDS_Time_t DDS_Time_t;
#endif /* __cplusplus */
#endif /* _DDS_Time_t_defined */
 DDS_Time_t *DDS_Time_t__alloc (void);

struct DDS_Time_t {
    DDS_long sec;
    DDS_unsigned_long nanosec;
};

enum DDS_SchedulingClassQosPolicyKind_e {
    DDS_SCHEDULE_DEFAULT,
    DDS_SCHEDULE_TIMESHARING,
    DDS_SCHEDULE_REALTIME
};
typedef enum DDS_SchedulingClassQosPolicyKind_e DDS_SchedulingClassQosPolicyKind;

#ifndef _DDS_SchedulingClassQosPolicy_defined
#define _DDS_SchedulingClassQosPolicy_defined
#ifdef __cplusplus
struct DDS_SchedulingClassQosPolicy;
#else /* __cplusplus */
typedef struct DDS_SchedulingClassQosPolicy DDS_SchedulingClassQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_SchedulingClassQosPolicy_defined */
 DDS_SchedulingClassQosPolicy *DDS_SchedulingClassQosPolicy__alloc (void);

struct DDS_SchedulingClassQosPolicy {
    DDS_SchedulingClassQosPolicyKind kind;
};

enum DDS_SchedulingPriorityQosPolicyKind_e {
    DDS_PRIORITY_RELATIVE,
    DDS_PRIORITY_ABSOLUTE
};
typedef enum DDS_SchedulingPriorityQosPolicyKind_e DDS_SchedulingPriorityQosPolicyKind;

#ifndef _DDS_SchedulingPriorityQosPolicy_defined
#define _DDS_SchedulingPriorityQosPolicy_defined
#ifdef __cplusplus
struct DDS_SchedulingPriorityQosPolicy;
#else /* __cplusplus */
typedef struct DDS_SchedulingPriorityQosPolicy DDS_SchedulingPriorityQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_SchedulingPriorityQosPolicy_defined */
 DDS_SchedulingPriorityQosPolicy *DDS_SchedulingPriorityQosPolicy__alloc (void);

struct DDS_SchedulingPriorityQosPolicy {
    DDS_SchedulingPriorityQosPolicyKind kind;
};

#ifndef _DDS_SchedulingQosPolicy_defined
#define _DDS_SchedulingQosPolicy_defined
#ifdef __cplusplus
struct DDS_SchedulingQosPolicy;
#else /* __cplusplus */
typedef struct DDS_SchedulingQosPolicy DDS_SchedulingQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_SchedulingQosPolicy_defined */
 DDS_SchedulingQosPolicy *DDS_SchedulingQosPolicy__alloc (void);

struct DDS_SchedulingQosPolicy {
    DDS_SchedulingClassQosPolicy scheduling_class;
    DDS_SchedulingPriorityQosPolicy scheduling_priority_kind;
    DDS_long scheduling_priority;
};

#ifndef _DDS_ViewKeyQosPolicy_defined
#define _DDS_ViewKeyQosPolicy_defined
#ifdef __cplusplus
struct DDS_ViewKeyQosPolicy;
#else /* __cplusplus */
typedef struct DDS_ViewKeyQosPolicy DDS_ViewKeyQosPolicy;
#endif /* __cplusplus */
#endif /* _DDS_ViewKeyQosPolicy_defined */
 DDS_ViewKeyQosPolicy *DDS_ViewKeyQosPolicy__alloc (void);

struct DDS_ViewKeyQosPolicy {
    DDS_boolean use_key_list;
    DDS_StringSeq key_list;
};

#ifndef _DDS_DataReaderViewQos_defined
#define _DDS_DataReaderViewQos_defined
#ifdef __cplusplus
struct DDS_DataReaderViewQos;
#else /* __cplusplus */
typedef struct DDS_DataReaderViewQos DDS_DataReaderViewQos;
#endif /* __cplusplus */
#endif /* _DDS_DataReaderViewQos_defined */
 DDS_DataReaderViewQos *DDS_DataReaderViewQos__alloc (void);

struct DDS_DataReaderViewQos {
    DDS_ViewKeyQosPolicy view_keys;
};

#ifndef _DDS_DomainParticipantFactoryQos_defined
#define _DDS_DomainParticipantFactoryQos_defined
#ifdef __cplusplus
struct DDS_DomainParticipantFactoryQos;
#else /* __cplusplus */
typedef struct DDS_DomainParticipantFactoryQos DDS_DomainParticipantFactoryQos;
#endif /* __cplusplus */
#endif /* _DDS_DomainParticipantFactoryQos_defined */
 DDS_DomainParticipantFactoryQos *DDS_DomainParticipantFactoryQos__alloc (void);

struct DDS_DomainParticipantFactoryQos {
    DDS_EntityFactoryQosPolicy entity_factory;
};

#ifndef _DDS_DomainParticipantQos_defined
#define _DDS_DomainParticipantQos_defined
#ifdef __cplusplus
struct DDS_DomainParticipantQos;
#else /* __cplusplus */
typedef struct DDS_DomainParticipantQos DDS_DomainParticipantQos;
#endif /* __cplusplus */
#endif /* _DDS_DomainParticipantQos_defined */
 DDS_DomainParticipantQos *DDS_DomainParticipantQos__alloc (void);

struct DDS_DomainParticipantQos {
    DDS_UserDataQosPolicy user_data;
    DDS_EntityFactoryQosPolicy entity_factory;
    DDS_SchedulingQosPolicy watchdog_scheduling;
    DDS_SchedulingQosPolicy listener_scheduling;
};

#ifndef _DDS_TopicQos_defined
#define _DDS_TopicQos_defined
#ifdef __cplusplus
struct DDS_TopicQos;
#else /* __cplusplus */
typedef struct DDS_TopicQos DDS_TopicQos;
#endif /* __cplusplus */
#endif /* _DDS_TopicQos_defined */
 DDS_TopicQos *DDS_TopicQos__alloc (void);

struct DDS_TopicQos {
    DDS_TopicDataQosPolicy topic_data;
    DDS_DurabilityQosPolicy durability;
    DDS_DurabilityServiceQosPolicy durability_service;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_TransportPriorityQosPolicy transport_priority;
    DDS_LifespanQosPolicy lifespan;
    DDS_OwnershipQosPolicy ownership;
};

#ifndef _DDS_DataWriterQos_defined
#define _DDS_DataWriterQos_defined
#ifdef __cplusplus
struct DDS_DataWriterQos;
#else /* __cplusplus */
typedef struct DDS_DataWriterQos DDS_DataWriterQos;
#endif /* __cplusplus */
#endif /* _DDS_DataWriterQos_defined */
 DDS_DataWriterQos *DDS_DataWriterQos__alloc (void);

struct DDS_DataWriterQos {
    DDS_DurabilityQosPolicy durability;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_TransportPriorityQosPolicy transport_priority;
    DDS_LifespanQosPolicy lifespan;
    DDS_UserDataQosPolicy user_data;
    DDS_OwnershipQosPolicy ownership;
    DDS_OwnershipStrengthQosPolicy ownership_strength;
    DDS_WriterDataLifecycleQosPolicy writer_data_lifecycle;
};

#ifndef _DDS_PublisherQos_defined
#define _DDS_PublisherQos_defined
#ifdef __cplusplus
struct DDS_PublisherQos;
#else /* __cplusplus */
typedef struct DDS_PublisherQos DDS_PublisherQos;
#endif /* __cplusplus */
#endif /* _DDS_PublisherQos_defined */
 DDS_PublisherQos *DDS_PublisherQos__alloc (void);

struct DDS_PublisherQos {
    DDS_PresentationQosPolicy presentation;
    DDS_PartitionQosPolicy partition;
    DDS_GroupDataQosPolicy group_data;
    DDS_EntityFactoryQosPolicy entity_factory;
};

#ifndef _DDS_DataReaderQos_defined
#define _DDS_DataReaderQos_defined
#ifdef __cplusplus
struct DDS_DataReaderQos;
#else /* __cplusplus */
typedef struct DDS_DataReaderQos DDS_DataReaderQos;
#endif /* __cplusplus */
#endif /* _DDS_DataReaderQos_defined */
 DDS_DataReaderQos *DDS_DataReaderQos__alloc (void);

struct DDS_DataReaderQos {
    DDS_DurabilityQosPolicy durability;
    DDS_DeadlineQosPolicy deadline;
    DDS_LatencyBudgetQosPolicy latency_budget;
    DDS_LivelinessQosPolicy liveliness;
    DDS_ReliabilityQosPolicy reliability;
    DDS_DestinationOrderQosPolicy destination_order;
    DDS_HistoryQosPolicy history;
    DDS_ResourceLimitsQosPolicy resource_limits;
    DDS_UserDataQosPolicy user_data;
    DDS_OwnershipQosPolicy ownership;
    DDS_TimeBasedFilterQosPolicy time_based_filter;
    DDS_ReaderDataLifecycleQosPolicy reader_data_lifecycle;
    DDS_SubscriptionKeyQosPolicy subscription_keys;
    DDS_ReaderLifespanQosPolicy reader_lifespan;
    DDS_ShareQosPolicy share;
};

#ifndef _DDS_SubscriberQos_defined
#define _DDS_SubscriberQos_defined
#ifdef __cplusplus
struct DDS_SubscriberQos;
#else /* __cplusplus */
typedef struct DDS_SubscriberQos DDS_SubscriberQos;
#endif /* __cplusplus */
#endif /* _DDS_SubscriberQos_defined */
 DDS_SubscriberQos *DDS_SubscriberQos__alloc (void);

struct DDS_SubscriberQos {
    DDS_PresentationQosPolicy presentation;
    DDS_PartitionQosPolicy partition;
    DDS_GroupDataQosPolicy group_data;
    DDS_EntityFactoryQosPolicy entity_factory;
    DDS_ShareQosPolicy share;
};

#endif
