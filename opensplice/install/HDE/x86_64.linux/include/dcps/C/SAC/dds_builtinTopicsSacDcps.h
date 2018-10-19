#ifndef DDS_BUILTINTOPICSSACDCPS_H
#define DDS_BUILTINTOPICSSACDCPS_H

#include "dds_dcps.h"
#include "dds_builtinTopicsDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define DDS_ParticipantBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_ParticipantBuiltinTopicDataTypeSupport
DDS_ParticipantBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataTypeSupport_register_type (
    DDS_ParticipantBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_ParticipantBuiltinTopicDataTypeSupport_get_type_name (
    DDS_ParticipantBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_ParticipantBuiltinTopicData_defined
#define _DDS_sequence_DDS_ParticipantBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_ParticipantBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_ParticipantBuiltinTopicData;

 DDS_sequence_DDS_ParticipantBuiltinTopicData *DDS_sequence_DDS_ParticipantBuiltinTopicData__alloc (void);
 DDS_ParticipantBuiltinTopicData *DDS_sequence_DDS_ParticipantBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_ParticipantBuiltinTopicData_defined */

#define DDS_ParticipantBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_ParticipantBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_ParticipantBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_ParticipantBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_ParticipantBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_ParticipantBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_register_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_unregister_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_write (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_dispose (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_writedispose (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *key_holder
    );

#define DDS_ParticipantBuiltinTopicDataDataReader DDS_DataReader

#define DDS_ParticipantBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_ParticipantBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_ParticipantBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_ParticipantBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_ParticipantBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_ParticipantBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_ParticipantBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_ParticipantBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_ParticipantBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_ParticipantBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_ParticipantBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_ParticipantBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_ParticipantBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_ParticipantBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_ParticipantBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_ParticipantBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_ParticipantBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_ParticipantBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_return_loan (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataReader_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    const DDS_ParticipantBuiltinTopicData *key_holder
    );

#define DDS_ParticipantBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_ParticipantBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_ParticipantBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_ParticipantBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_ParticipantBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_ParticipantBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_ParticipantBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_ParticipantBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_ParticipantBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_ParticipantBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_return_loan (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *key_holder
    );


#define DDS_TopicBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_TopicBuiltinTopicDataTypeSupport
DDS_TopicBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataTypeSupport_register_type (
    DDS_TopicBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_TopicBuiltinTopicDataTypeSupport_get_type_name (
    DDS_TopicBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_TopicBuiltinTopicData_defined
#define _DDS_sequence_DDS_TopicBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_TopicBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_TopicBuiltinTopicData;

 DDS_sequence_DDS_TopicBuiltinTopicData *DDS_sequence_DDS_TopicBuiltinTopicData__alloc (void);
 DDS_TopicBuiltinTopicData *DDS_sequence_DDS_TopicBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_TopicBuiltinTopicData_defined */

#define DDS_TopicBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_TopicBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_TopicBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_TopicBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_TopicBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TopicBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_TopicBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_TopicBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_TopicBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_TopicBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_TopicBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_TopicBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_TopicBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_TopicBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_TopicBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_TopicBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_TopicBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_TopicBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_register_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_unregister_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_write (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_dispose (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_writedispose (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_get_key_value (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_lookup_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *key_holder
    );

#define DDS_TopicBuiltinTopicDataDataReader DDS_DataReader

#define DDS_TopicBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_TopicBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_TopicBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_TopicBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TopicBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_TopicBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_TopicBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_TopicBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_TopicBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_TopicBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_TopicBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_TopicBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_TopicBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_TopicBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_TopicBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_TopicBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_TopicBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_TopicBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_TopicBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_TopicBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_TopicBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_TopicBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_TopicBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_sample (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_sample (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_return_loan (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_get_key_value (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataReader_lookup_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    const DDS_TopicBuiltinTopicData *key_holder
    );

#define DDS_TopicBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_TopicBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_TopicBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TopicBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_TopicBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_TopicBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_TopicBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_TopicBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_TopicBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_TopicBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_return_loan (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_get_key_value (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *key_holder
    );


#define DDS_TypeBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_TypeBuiltinTopicDataTypeSupport
DDS_TypeBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataTypeSupport_register_type (
    DDS_TypeBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_TypeBuiltinTopicDataTypeSupport_get_type_name (
    DDS_TypeBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_TypeBuiltinTopicData_defined
#define _DDS_sequence_DDS_TypeBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_TypeBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_TypeBuiltinTopicData;

 DDS_sequence_DDS_TypeBuiltinTopicData *DDS_sequence_DDS_TypeBuiltinTopicData__alloc (void);
 DDS_TypeBuiltinTopicData *DDS_sequence_DDS_TypeBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_TypeBuiltinTopicData_defined */

#define DDS_TypeBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_TypeBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_TypeBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_TypeBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_TypeBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TypeBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_TypeBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_TypeBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_TypeBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_TypeBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_TypeBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_TypeBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_TypeBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_TypeBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_TypeBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_TypeBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_TypeBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_TypeBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_register_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_unregister_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_write (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_dispose (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_writedispose (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_get_key_value (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_lookup_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *key_holder
    );

#define DDS_TypeBuiltinTopicDataDataReader DDS_DataReader

#define DDS_TypeBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_TypeBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_TypeBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_TypeBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TypeBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_TypeBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_TypeBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_TypeBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_TypeBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_TypeBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_TypeBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_TypeBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_TypeBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_TypeBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_TypeBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_TypeBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_TypeBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_TypeBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_TypeBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_TypeBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_TypeBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_TypeBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_TypeBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_sample (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_sample (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_return_loan (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_get_key_value (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataReader_lookup_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    const DDS_TypeBuiltinTopicData *key_holder
    );

#define DDS_TypeBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_TypeBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_TypeBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_TypeBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_TypeBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_TypeBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_TypeBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_TypeBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_TypeBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_TypeBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_return_loan (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_get_key_value (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *key_holder
    );


#define DDS_PublicationBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_PublicationBuiltinTopicDataTypeSupport
DDS_PublicationBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataTypeSupport_register_type (
    DDS_PublicationBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_PublicationBuiltinTopicDataTypeSupport_get_type_name (
    DDS_PublicationBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_PublicationBuiltinTopicData_defined
#define _DDS_sequence_DDS_PublicationBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_PublicationBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_PublicationBuiltinTopicData;

 DDS_sequence_DDS_PublicationBuiltinTopicData *DDS_sequence_DDS_PublicationBuiltinTopicData__alloc (void);
 DDS_PublicationBuiltinTopicData *DDS_sequence_DDS_PublicationBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_PublicationBuiltinTopicData_defined */

#define DDS_PublicationBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_PublicationBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_PublicationBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_PublicationBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_PublicationBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_PublicationBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_PublicationBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_PublicationBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_PublicationBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_PublicationBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_PublicationBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_PublicationBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_PublicationBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_PublicationBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_PublicationBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_PublicationBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_PublicationBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_PublicationBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_register_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_unregister_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_write (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_dispose (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_writedispose (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_get_key_value (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *key_holder
    );

#define DDS_PublicationBuiltinTopicDataDataReader DDS_DataReader

#define DDS_PublicationBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_PublicationBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_PublicationBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_PublicationBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_PublicationBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_PublicationBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_PublicationBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_PublicationBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_PublicationBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_PublicationBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_PublicationBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_PublicationBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_PublicationBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_PublicationBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_PublicationBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_PublicationBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_PublicationBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_PublicationBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_sample (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_sample (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_return_loan (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_get_key_value (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataReader_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    const DDS_PublicationBuiltinTopicData *key_holder
    );

#define DDS_PublicationBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_PublicationBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_PublicationBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_PublicationBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_PublicationBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_PublicationBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_PublicationBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_PublicationBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_PublicationBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_PublicationBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_return_loan (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_get_key_value (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *key_holder
    );


#define DDS_SubscriptionBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_SubscriptionBuiltinTopicDataTypeSupport
DDS_SubscriptionBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataTypeSupport_register_type (
    DDS_SubscriptionBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_SubscriptionBuiltinTopicDataTypeSupport_get_type_name (
    DDS_SubscriptionBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_SubscriptionBuiltinTopicData_defined
#define _DDS_sequence_DDS_SubscriptionBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_SubscriptionBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_SubscriptionBuiltinTopicData;

 DDS_sequence_DDS_SubscriptionBuiltinTopicData *DDS_sequence_DDS_SubscriptionBuiltinTopicData__alloc (void);
 DDS_SubscriptionBuiltinTopicData *DDS_sequence_DDS_SubscriptionBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_SubscriptionBuiltinTopicData_defined */

#define DDS_SubscriptionBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_SubscriptionBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_SubscriptionBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_SubscriptionBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_SubscriptionBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_SubscriptionBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_register_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_unregister_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_write (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_dispose (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_writedispose (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *key_holder
    );

#define DDS_SubscriptionBuiltinTopicDataDataReader DDS_DataReader

#define DDS_SubscriptionBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_SubscriptionBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_SubscriptionBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_SubscriptionBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_SubscriptionBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_SubscriptionBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_SubscriptionBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_SubscriptionBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_SubscriptionBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_return_loan (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataReader_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    const DDS_SubscriptionBuiltinTopicData *key_holder
    );

#define DDS_SubscriptionBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_SubscriptionBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_return_loan (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *key_holder
    );


#define DDS_CMParticipantBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_CMParticipantBuiltinTopicDataTypeSupport
DDS_CMParticipantBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataTypeSupport_register_type (
    DDS_CMParticipantBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_CMParticipantBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMParticipantBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_CMParticipantBuiltinTopicData_defined
#define _DDS_sequence_DDS_CMParticipantBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_CMParticipantBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_CMParticipantBuiltinTopicData;

 DDS_sequence_DDS_CMParticipantBuiltinTopicData *DDS_sequence_DDS_CMParticipantBuiltinTopicData__alloc (void);
 DDS_CMParticipantBuiltinTopicData *DDS_sequence_DDS_CMParticipantBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_CMParticipantBuiltinTopicData_defined */

#define DDS_CMParticipantBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_CMParticipantBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMParticipantBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_CMParticipantBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_CMParticipantBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_CMParticipantBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_register_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_write (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_dispose (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_writedispose (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *key_holder
    );

#define DDS_CMParticipantBuiltinTopicDataDataReader DDS_DataReader

#define DDS_CMParticipantBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMParticipantBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_CMParticipantBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_CMParticipantBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_CMParticipantBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_CMParticipantBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_CMParticipantBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_CMParticipantBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_CMParticipantBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_return_loan (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    const DDS_CMParticipantBuiltinTopicData *key_holder
    );

#define DDS_CMParticipantBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_CMParticipantBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *key_holder
    );


#define DDS_CMPublisherBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_CMPublisherBuiltinTopicDataTypeSupport
DDS_CMPublisherBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataTypeSupport_register_type (
    DDS_CMPublisherBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_CMPublisherBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMPublisherBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_CMPublisherBuiltinTopicData_defined
#define _DDS_sequence_DDS_CMPublisherBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_CMPublisherBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_CMPublisherBuiltinTopicData;

 DDS_sequence_DDS_CMPublisherBuiltinTopicData *DDS_sequence_DDS_CMPublisherBuiltinTopicData__alloc (void);
 DDS_CMPublisherBuiltinTopicData *DDS_sequence_DDS_CMPublisherBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_CMPublisherBuiltinTopicData_defined */

#define DDS_CMPublisherBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_CMPublisherBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMPublisherBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_CMPublisherBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_CMPublisherBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_CMPublisherBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_register_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_write (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_dispose (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_writedispose (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *key_holder
    );

#define DDS_CMPublisherBuiltinTopicDataDataReader DDS_DataReader

#define DDS_CMPublisherBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMPublisherBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_CMPublisherBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_CMPublisherBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_CMPublisherBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_CMPublisherBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_CMPublisherBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_CMPublisherBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_CMPublisherBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_return_loan (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    const DDS_CMPublisherBuiltinTopicData *key_holder
    );

#define DDS_CMPublisherBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_CMPublisherBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *key_holder
    );


#define DDS_CMSubscriberBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_CMSubscriberBuiltinTopicDataTypeSupport
DDS_CMSubscriberBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataTypeSupport_register_type (
    DDS_CMSubscriberBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_CMSubscriberBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMSubscriberBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_CMSubscriberBuiltinTopicData_defined
#define _DDS_sequence_DDS_CMSubscriberBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_CMSubscriberBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_CMSubscriberBuiltinTopicData;

 DDS_sequence_DDS_CMSubscriberBuiltinTopicData *DDS_sequence_DDS_CMSubscriberBuiltinTopicData__alloc (void);
 DDS_CMSubscriberBuiltinTopicData *DDS_sequence_DDS_CMSubscriberBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_CMSubscriberBuiltinTopicData_defined */

#define DDS_CMSubscriberBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_CMSubscriberBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_register_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_write (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_dispose (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_writedispose (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *key_holder
    );

#define DDS_CMSubscriberBuiltinTopicDataDataReader DDS_DataReader

#define DDS_CMSubscriberBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMSubscriberBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_CMSubscriberBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_CMSubscriberBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_CMSubscriberBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_CMSubscriberBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_CMSubscriberBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_CMSubscriberBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_CMSubscriberBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_return_loan (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    const DDS_CMSubscriberBuiltinTopicData *key_holder
    );

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_CMSubscriberBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder
    );


#define DDS_CMDataWriterBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_CMDataWriterBuiltinTopicDataTypeSupport
DDS_CMDataWriterBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataTypeSupport_register_type (
    DDS_CMDataWriterBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_CMDataWriterBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMDataWriterBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_CMDataWriterBuiltinTopicData_defined
#define _DDS_sequence_DDS_CMDataWriterBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_CMDataWriterBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_CMDataWriterBuiltinTopicData;

 DDS_sequence_DDS_CMDataWriterBuiltinTopicData *DDS_sequence_DDS_CMDataWriterBuiltinTopicData__alloc (void);
 DDS_CMDataWriterBuiltinTopicData *DDS_sequence_DDS_CMDataWriterBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_CMDataWriterBuiltinTopicData_defined */

#define DDS_CMDataWriterBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_CMDataWriterBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_register_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_write (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_dispose (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_writedispose (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *key_holder
    );

#define DDS_CMDataWriterBuiltinTopicDataDataReader DDS_DataReader

#define DDS_CMDataWriterBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataWriterBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_CMDataWriterBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_CMDataWriterBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_CMDataWriterBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_CMDataWriterBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_CMDataWriterBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_CMDataWriterBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_CMDataWriterBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_return_loan (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    const DDS_CMDataWriterBuiltinTopicData *key_holder
    );

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_CMDataWriterBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder
    );


#define DDS_CMDataReaderBuiltinTopicDataTypeSupport DDS_TypeSupport

 DDS_CMDataReaderBuiltinTopicDataTypeSupport
DDS_CMDataReaderBuiltinTopicDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataTypeSupport_register_type (
    DDS_CMDataReaderBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_CMDataReaderBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMDataReaderBuiltinTopicDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_CMDataReaderBuiltinTopicData_defined
#define _DDS_sequence_DDS_CMDataReaderBuiltinTopicData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_CMDataReaderBuiltinTopicData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_CMDataReaderBuiltinTopicData;

 DDS_sequence_DDS_CMDataReaderBuiltinTopicData *DDS_sequence_DDS_CMDataReaderBuiltinTopicData__alloc (void);
 DDS_CMDataReaderBuiltinTopicData *DDS_sequence_DDS_CMDataReaderBuiltinTopicData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_CMDataReaderBuiltinTopicData_defined */

#define DDS_CMDataReaderBuiltinTopicDataDataWriter DDS_DataWriter

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_enable DDS_Entity_enable

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_CMDataReaderBuiltinTopicDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_register_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data
    );

 DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_write (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_dispose (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_writedispose (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *key_holder
    );

#define DDS_CMDataReaderBuiltinTopicDataDataReader DDS_DataReader

#define DDS_CMDataReaderBuiltinTopicDataDataReader_enable DDS_Entity_enable

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataReaderBuiltinTopicDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_CMDataReaderBuiltinTopicDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_CMDataReaderBuiltinTopicDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_CMDataReaderBuiltinTopicDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_CMDataReaderBuiltinTopicDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_CMDataReaderBuiltinTopicDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_CMDataReaderBuiltinTopicDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_CMDataReaderBuiltinTopicDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_return_loan (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    const DDS_CMDataReaderBuiltinTopicData *key_holder
    );

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView DDS_DataReaderView

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_enable DDS_Entity_enable

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_CMDataReaderBuiltinTopicDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder
    );

#endif
