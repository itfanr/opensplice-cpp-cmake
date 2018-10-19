#ifndef DDS_DCPS_BUILTINTOPICSSPLTYPES_H
#define DDS_DCPS_BUILTINTOPICSSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_dds_dcps_builtintopics.h"
#include "dds_builtinTopicsSplDcps.h"



extern c_metaObject __dds_dcps_builtintopics_DDS__load (c_base base);

extern const char *DDS_Time_t_metaDescriptor[];
extern const int DDS_Time_t_metaDescriptorArrLength;
extern const int DDS_Time_t_metaDescriptorLength;
extern c_metaObject __DDS_Time_t__load (c_base base);
struct _DDS_Time_t ;
extern  v_copyin_result __DDS_Time_t__copyIn(c_base base, const struct DDS::Time_t *from, struct _DDS_Time_t *to);
extern  void __DDS_Time_t__copyOut(const void *_from, void *_to);
struct _DDS_Time_t {
    c_long sec;
    c_ulong nanosec;
};

extern c_metaObject __DDS_SchedulingClassQosPolicyKind__load (c_base base);
enum _DDS_SchedulingClassQosPolicyKind {
    _DDS_SCHEDULE_DEFAULT,
    _DDS_SCHEDULE_TIMESHARING,
    _DDS_SCHEDULE_REALTIME
};

extern const char *DDS_SchedulingClassQosPolicy_metaDescriptor[];
extern const int DDS_SchedulingClassQosPolicy_metaDescriptorArrLength;
extern const int DDS_SchedulingClassQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_SchedulingClassQosPolicy__load (c_base base);
struct _DDS_SchedulingClassQosPolicy ;
extern  v_copyin_result __DDS_SchedulingClassQosPolicy__copyIn(c_base base, const struct DDS::SchedulingClassQosPolicy *from, struct _DDS_SchedulingClassQosPolicy *to);
extern  void __DDS_SchedulingClassQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_SchedulingClassQosPolicy {
    enum _DDS_SchedulingClassQosPolicyKind kind;
};

extern c_metaObject __DDS_SchedulingPriorityQosPolicyKind__load (c_base base);
enum _DDS_SchedulingPriorityQosPolicyKind {
    _DDS_PRIORITY_RELATIVE,
    _DDS_PRIORITY_ABSOLUTE
};

extern const char *DDS_SchedulingPriorityQosPolicy_metaDescriptor[];
extern const int DDS_SchedulingPriorityQosPolicy_metaDescriptorArrLength;
extern const int DDS_SchedulingPriorityQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_SchedulingPriorityQosPolicy__load (c_base base);
struct _DDS_SchedulingPriorityQosPolicy ;
extern  v_copyin_result __DDS_SchedulingPriorityQosPolicy__copyIn(c_base base, const struct DDS::SchedulingPriorityQosPolicy *from, struct _DDS_SchedulingPriorityQosPolicy *to);
extern  void __DDS_SchedulingPriorityQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_SchedulingPriorityQosPolicy {
    enum _DDS_SchedulingPriorityQosPolicyKind kind;
};

extern const char *DDS_SchedulingQosPolicy_metaDescriptor[];
extern const int DDS_SchedulingQosPolicy_metaDescriptorArrLength;
extern const int DDS_SchedulingQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_SchedulingQosPolicy__load (c_base base);
struct _DDS_SchedulingQosPolicy ;
extern  v_copyin_result __DDS_SchedulingQosPolicy__copyIn(c_base base, const struct DDS::SchedulingQosPolicy *from, struct _DDS_SchedulingQosPolicy *to);
extern  void __DDS_SchedulingQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_SchedulingQosPolicy {
    struct _DDS_SchedulingClassQosPolicy scheduling_class;
    struct _DDS_SchedulingPriorityQosPolicy scheduling_priority_kind;
    c_long scheduling_priority;
};

extern const char *DDS_ViewKeyQosPolicy_metaDescriptor[];
extern const int DDS_ViewKeyQosPolicy_metaDescriptorArrLength;
extern const int DDS_ViewKeyQosPolicy_metaDescriptorLength;
extern c_metaObject __DDS_ViewKeyQosPolicy__load (c_base base);
struct _DDS_ViewKeyQosPolicy ;
extern  v_copyin_result __DDS_ViewKeyQosPolicy__copyIn(c_base base, const struct DDS::ViewKeyQosPolicy *from, struct _DDS_ViewKeyQosPolicy *to);
extern  void __DDS_ViewKeyQosPolicy__copyOut(const void *_from, void *_to);
struct _DDS_ViewKeyQosPolicy {
    c_bool use_key_list;
    _DDS_StringSeq key_list;
};

extern const char *DDS_DataReaderViewQos_metaDescriptor[];
extern const int DDS_DataReaderViewQos_metaDescriptorArrLength;
extern const int DDS_DataReaderViewQos_metaDescriptorLength;
extern c_metaObject __DDS_DataReaderViewQos__load (c_base base);
struct _DDS_DataReaderViewQos ;
extern  v_copyin_result __DDS_DataReaderViewQos__copyIn(c_base base, const struct DDS::DataReaderViewQos *from, struct _DDS_DataReaderViewQos *to);
extern  void __DDS_DataReaderViewQos__copyOut(const void *_from, void *_to);
struct _DDS_DataReaderViewQos {
    struct _DDS_ViewKeyQosPolicy view_keys;
};

extern const char *DDS_DomainParticipantFactoryQos_metaDescriptor[];
extern const int DDS_DomainParticipantFactoryQos_metaDescriptorArrLength;
extern const int DDS_DomainParticipantFactoryQos_metaDescriptorLength;
extern c_metaObject __DDS_DomainParticipantFactoryQos__load (c_base base);
struct _DDS_DomainParticipantFactoryQos ;
extern  v_copyin_result __DDS_DomainParticipantFactoryQos__copyIn(c_base base, const struct DDS::DomainParticipantFactoryQos *from, struct _DDS_DomainParticipantFactoryQos *to);
extern  void __DDS_DomainParticipantFactoryQos__copyOut(const void *_from, void *_to);
struct _DDS_DomainParticipantFactoryQos {
    struct _DDS_EntityFactoryQosPolicy entity_factory;
};

extern const char *DDS_DomainParticipantQos_metaDescriptor[];
extern const int DDS_DomainParticipantQos_metaDescriptorArrLength;
extern const int DDS_DomainParticipantQos_metaDescriptorLength;
extern c_metaObject __DDS_DomainParticipantQos__load (c_base base);
struct _DDS_DomainParticipantQos ;
extern  v_copyin_result __DDS_DomainParticipantQos__copyIn(c_base base, const struct DDS::DomainParticipantQos *from, struct _DDS_DomainParticipantQos *to);
extern  void __DDS_DomainParticipantQos__copyOut(const void *_from, void *_to);
struct _DDS_DomainParticipantQos {
    struct _DDS_UserDataQosPolicy user_data;
    struct _DDS_EntityFactoryQosPolicy entity_factory;
    struct _DDS_SchedulingQosPolicy watchdog_scheduling;
    struct _DDS_SchedulingQosPolicy listener_scheduling;
};

extern const char *DDS_TopicQos_metaDescriptor[];
extern const int DDS_TopicQos_metaDescriptorArrLength;
extern const int DDS_TopicQos_metaDescriptorLength;
extern c_metaObject __DDS_TopicQos__load (c_base base);
struct _DDS_TopicQos ;
extern  v_copyin_result __DDS_TopicQos__copyIn(c_base base, const struct DDS::TopicQos *from, struct _DDS_TopicQos *to);
extern  void __DDS_TopicQos__copyOut(const void *_from, void *_to);
struct _DDS_TopicQos {
    struct _DDS_TopicDataQosPolicy topic_data;
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DurabilityServiceQosPolicy durability_service;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_TransportPriorityQosPolicy transport_priority;
    struct _DDS_LifespanQosPolicy lifespan;
    struct _DDS_OwnershipQosPolicy ownership;
};

extern const char *DDS_DataWriterQos_metaDescriptor[];
extern const int DDS_DataWriterQos_metaDescriptorArrLength;
extern const int DDS_DataWriterQos_metaDescriptorLength;
extern c_metaObject __DDS_DataWriterQos__load (c_base base);
struct _DDS_DataWriterQos ;
extern  v_copyin_result __DDS_DataWriterQos__copyIn(c_base base, const struct DDS::DataWriterQos *from, struct _DDS_DataWriterQos *to);
extern  void __DDS_DataWriterQos__copyOut(const void *_from, void *_to);
struct _DDS_DataWriterQos {
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_TransportPriorityQosPolicy transport_priority;
    struct _DDS_LifespanQosPolicy lifespan;
    struct _DDS_UserDataQosPolicy user_data;
    struct _DDS_OwnershipQosPolicy ownership;
    struct _DDS_OwnershipStrengthQosPolicy ownership_strength;
    struct _DDS_WriterDataLifecycleQosPolicy writer_data_lifecycle;
};

extern const char *DDS_PublisherQos_metaDescriptor[];
extern const int DDS_PublisherQos_metaDescriptorArrLength;
extern const int DDS_PublisherQos_metaDescriptorLength;
extern c_metaObject __DDS_PublisherQos__load (c_base base);
struct _DDS_PublisherQos ;
extern  v_copyin_result __DDS_PublisherQos__copyIn(c_base base, const struct DDS::PublisherQos *from, struct _DDS_PublisherQos *to);
extern  void __DDS_PublisherQos__copyOut(const void *_from, void *_to);
struct _DDS_PublisherQos {
    struct _DDS_PresentationQosPolicy presentation;
    struct _DDS_PartitionQosPolicy partition;
    struct _DDS_GroupDataQosPolicy group_data;
    struct _DDS_EntityFactoryQosPolicy entity_factory;
};

extern const char *DDS_DataReaderQos_metaDescriptor[];
extern const int DDS_DataReaderQos_metaDescriptorArrLength;
extern const int DDS_DataReaderQos_metaDescriptorLength;
extern c_metaObject __DDS_DataReaderQos__load (c_base base);
struct _DDS_DataReaderQos ;
extern  v_copyin_result __DDS_DataReaderQos__copyIn(c_base base, const struct DDS::DataReaderQos *from, struct _DDS_DataReaderQos *to);
extern  void __DDS_DataReaderQos__copyOut(const void *_from, void *_to);
struct _DDS_DataReaderQos {
    struct _DDS_DurabilityQosPolicy durability;
    struct _DDS_DeadlineQosPolicy deadline;
    struct _DDS_LatencyBudgetQosPolicy latency_budget;
    struct _DDS_LivelinessQosPolicy liveliness;
    struct _DDS_ReliabilityQosPolicy reliability;
    struct _DDS_DestinationOrderQosPolicy destination_order;
    struct _DDS_HistoryQosPolicy history;
    struct _DDS_ResourceLimitsQosPolicy resource_limits;
    struct _DDS_UserDataQosPolicy user_data;
    struct _DDS_OwnershipQosPolicy ownership;
    struct _DDS_TimeBasedFilterQosPolicy time_based_filter;
    struct _DDS_ReaderDataLifecycleQosPolicy reader_data_lifecycle;
    struct _DDS_SubscriptionKeyQosPolicy subscription_keys;
    struct _DDS_ReaderLifespanQosPolicy reader_lifespan;
    struct _DDS_ShareQosPolicy share;
};

extern const char *DDS_SubscriberQos_metaDescriptor[];
extern const int DDS_SubscriberQos_metaDescriptorArrLength;
extern const int DDS_SubscriberQos_metaDescriptorLength;
extern c_metaObject __DDS_SubscriberQos__load (c_base base);
struct _DDS_SubscriberQos ;
extern  v_copyin_result __DDS_SubscriberQos__copyIn(c_base base, const struct DDS::SubscriberQos *from, struct _DDS_SubscriberQos *to);
extern  void __DDS_SubscriberQos__copyOut(const void *_from, void *_to);
struct _DDS_SubscriberQos {
    struct _DDS_PresentationQosPolicy presentation;
    struct _DDS_PartitionQosPolicy partition;
    struct _DDS_GroupDataQosPolicy group_data;
    struct _DDS_EntityFactoryQosPolicy entity_factory;
    struct _DDS_ShareQosPolicy share;
};

#undef OS_API
#endif
