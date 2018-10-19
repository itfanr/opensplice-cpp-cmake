#ifndef DDS_BUILTINTOPICSDCPS_IMPL_H_
#define DDS_BUILTINTOPICSDCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_dds_builtinTopics.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"


namespace DDS {

    class  ParticipantBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        ParticipantBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~ParticipantBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  ParticipantBuiltinTopicDataTypeSupport : public virtual ParticipantBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        ParticipantBuiltinTopicDataTypeSupport ();
    
        virtual ~ParticipantBuiltinTopicDataTypeSupport ();
    
    private:
        ParticipantBuiltinTopicDataTypeSupport (const ParticipantBuiltinTopicDataTypeSupport &);
    
        void operator= (const ParticipantBuiltinTopicDataTypeSupport &);
    };
    
    typedef ParticipantBuiltinTopicDataTypeSupportInterface_var ParticipantBuiltinTopicDataTypeSupport_var;
    typedef ParticipantBuiltinTopicDataTypeSupportInterface_ptr ParticipantBuiltinTopicDataTypeSupport_ptr;
    
    class  ParticipantBuiltinTopicDataDataWriter_impl : public virtual ParticipantBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class ParticipantBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const ParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const ParticipantBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const ParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            ParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const ParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        ParticipantBuiltinTopicDataDataWriter_impl ();
    
        virtual ~ParticipantBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        ParticipantBuiltinTopicDataDataWriter_impl (const ParticipantBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const ParticipantBuiltinTopicDataDataWriter &);
    };
    
    class  ParticipantBuiltinTopicDataDataReader_impl : public virtual ParticipantBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class ParticipantBuiltinTopicDataTypeSupportMetaHolder;
        friend class ParticipantBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            ParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            ParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            ParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const ParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        ParticipantBuiltinTopicDataDataReader_impl ();
    
        virtual ~ParticipantBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        ParticipantBuiltinTopicDataDataReader_impl (const ParticipantBuiltinTopicDataDataReader &);
        void operator= (const ParticipantBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  ParticipantBuiltinTopicDataDataReaderView_impl : public virtual ParticipantBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class ParticipantBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            ParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            ParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            ParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            ParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const ParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        ParticipantBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~ParticipantBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        ParticipantBuiltinTopicDataDataReaderView_impl (const ParticipantBuiltinTopicDataDataReaderView &);
    
        void operator= (const ParticipantBuiltinTopicDataDataReaderView &);
    };
    
    class  TopicBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        TopicBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~TopicBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  TopicBuiltinTopicDataTypeSupport : public virtual TopicBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        TopicBuiltinTopicDataTypeSupport ();
    
        virtual ~TopicBuiltinTopicDataTypeSupport ();
    
    private:
        TopicBuiltinTopicDataTypeSupport (const TopicBuiltinTopicDataTypeSupport &);
    
        void operator= (const TopicBuiltinTopicDataTypeSupport &);
    };
    
    typedef TopicBuiltinTopicDataTypeSupportInterface_var TopicBuiltinTopicDataTypeSupport_var;
    typedef TopicBuiltinTopicDataTypeSupportInterface_ptr TopicBuiltinTopicDataTypeSupport_ptr;
    
    class  TopicBuiltinTopicDataDataWriter_impl : public virtual TopicBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class TopicBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const TopicBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const TopicBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const TopicBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TopicBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TopicBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        TopicBuiltinTopicDataDataWriter_impl ();
    
        virtual ~TopicBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        TopicBuiltinTopicDataDataWriter_impl (const TopicBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const TopicBuiltinTopicDataDataWriter &);
    };
    
    class  TopicBuiltinTopicDataDataReader_impl : public virtual TopicBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class TopicBuiltinTopicDataTypeSupportMetaHolder;
        friend class TopicBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            TopicBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            TopicBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TopicBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TopicBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        TopicBuiltinTopicDataDataReader_impl ();
    
        virtual ~TopicBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        TopicBuiltinTopicDataDataReader_impl (const TopicBuiltinTopicDataDataReader &);
        void operator= (const TopicBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  TopicBuiltinTopicDataDataReaderView_impl : public virtual TopicBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class TopicBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            TopicBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            TopicBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            TopicBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TopicBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TopicBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        TopicBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~TopicBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        TopicBuiltinTopicDataDataReaderView_impl (const TopicBuiltinTopicDataDataReaderView &);
    
        void operator= (const TopicBuiltinTopicDataDataReaderView &);
    };
    
    class  TypeBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        TypeBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~TypeBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  TypeBuiltinTopicDataTypeSupport : public virtual TypeBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        TypeBuiltinTopicDataTypeSupport ();
    
        virtual ~TypeBuiltinTopicDataTypeSupport ();
    
    private:
        TypeBuiltinTopicDataTypeSupport (const TypeBuiltinTopicDataTypeSupport &);
    
        void operator= (const TypeBuiltinTopicDataTypeSupport &);
    };
    
    typedef TypeBuiltinTopicDataTypeSupportInterface_var TypeBuiltinTopicDataTypeSupport_var;
    typedef TypeBuiltinTopicDataTypeSupportInterface_ptr TypeBuiltinTopicDataTypeSupport_ptr;
    
    class  TypeBuiltinTopicDataDataWriter_impl : public virtual TypeBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class TypeBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const TypeBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const TypeBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const TypeBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TypeBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TypeBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        TypeBuiltinTopicDataDataWriter_impl ();
    
        virtual ~TypeBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        TypeBuiltinTopicDataDataWriter_impl (const TypeBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const TypeBuiltinTopicDataDataWriter &);
    };
    
    class  TypeBuiltinTopicDataDataReader_impl : public virtual TypeBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class TypeBuiltinTopicDataTypeSupportMetaHolder;
        friend class TypeBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            TypeBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            TypeBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TypeBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TypeBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        TypeBuiltinTopicDataDataReader_impl ();
    
        virtual ~TypeBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        TypeBuiltinTopicDataDataReader_impl (const TypeBuiltinTopicDataDataReader &);
        void operator= (const TypeBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  TypeBuiltinTopicDataDataReaderView_impl : public virtual TypeBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class TypeBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            TypeBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            TypeBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            TypeBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            TypeBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const TypeBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        TypeBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~TypeBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        TypeBuiltinTopicDataDataReaderView_impl (const TypeBuiltinTopicDataDataReaderView &);
    
        void operator= (const TypeBuiltinTopicDataDataReaderView &);
    };
    
    class  PublicationBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        PublicationBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~PublicationBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  PublicationBuiltinTopicDataTypeSupport : public virtual PublicationBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        PublicationBuiltinTopicDataTypeSupport ();
    
        virtual ~PublicationBuiltinTopicDataTypeSupport ();
    
    private:
        PublicationBuiltinTopicDataTypeSupport (const PublicationBuiltinTopicDataTypeSupport &);
    
        void operator= (const PublicationBuiltinTopicDataTypeSupport &);
    };
    
    typedef PublicationBuiltinTopicDataTypeSupportInterface_var PublicationBuiltinTopicDataTypeSupport_var;
    typedef PublicationBuiltinTopicDataTypeSupportInterface_ptr PublicationBuiltinTopicDataTypeSupport_ptr;
    
    class  PublicationBuiltinTopicDataDataWriter_impl : public virtual PublicationBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class PublicationBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const PublicationBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const PublicationBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const PublicationBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            PublicationBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const PublicationBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        PublicationBuiltinTopicDataDataWriter_impl ();
    
        virtual ~PublicationBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        PublicationBuiltinTopicDataDataWriter_impl (const PublicationBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const PublicationBuiltinTopicDataDataWriter &);
    };
    
    class  PublicationBuiltinTopicDataDataReader_impl : public virtual PublicationBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class PublicationBuiltinTopicDataTypeSupportMetaHolder;
        friend class PublicationBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            PublicationBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            PublicationBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            PublicationBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const PublicationBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        PublicationBuiltinTopicDataDataReader_impl ();
    
        virtual ~PublicationBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        PublicationBuiltinTopicDataDataReader_impl (const PublicationBuiltinTopicDataDataReader &);
        void operator= (const PublicationBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  PublicationBuiltinTopicDataDataReaderView_impl : public virtual PublicationBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class PublicationBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            PublicationBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            PublicationBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            PublicationBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            PublicationBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const PublicationBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        PublicationBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~PublicationBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        PublicationBuiltinTopicDataDataReaderView_impl (const PublicationBuiltinTopicDataDataReaderView &);
    
        void operator= (const PublicationBuiltinTopicDataDataReaderView &);
    };
    
    class  SubscriptionBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        SubscriptionBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~SubscriptionBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  SubscriptionBuiltinTopicDataTypeSupport : public virtual SubscriptionBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        SubscriptionBuiltinTopicDataTypeSupport ();
    
        virtual ~SubscriptionBuiltinTopicDataTypeSupport ();
    
    private:
        SubscriptionBuiltinTopicDataTypeSupport (const SubscriptionBuiltinTopicDataTypeSupport &);
    
        void operator= (const SubscriptionBuiltinTopicDataTypeSupport &);
    };
    
    typedef SubscriptionBuiltinTopicDataTypeSupportInterface_var SubscriptionBuiltinTopicDataTypeSupport_var;
    typedef SubscriptionBuiltinTopicDataTypeSupportInterface_ptr SubscriptionBuiltinTopicDataTypeSupport_ptr;
    
    class  SubscriptionBuiltinTopicDataDataWriter_impl : public virtual SubscriptionBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class SubscriptionBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const SubscriptionBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const SubscriptionBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const SubscriptionBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            SubscriptionBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const SubscriptionBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        SubscriptionBuiltinTopicDataDataWriter_impl ();
    
        virtual ~SubscriptionBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        SubscriptionBuiltinTopicDataDataWriter_impl (const SubscriptionBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const SubscriptionBuiltinTopicDataDataWriter &);
    };
    
    class  SubscriptionBuiltinTopicDataDataReader_impl : public virtual SubscriptionBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class SubscriptionBuiltinTopicDataTypeSupportMetaHolder;
        friend class SubscriptionBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            SubscriptionBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            SubscriptionBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            SubscriptionBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const SubscriptionBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        SubscriptionBuiltinTopicDataDataReader_impl ();
    
        virtual ~SubscriptionBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        SubscriptionBuiltinTopicDataDataReader_impl (const SubscriptionBuiltinTopicDataDataReader &);
        void operator= (const SubscriptionBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  SubscriptionBuiltinTopicDataDataReaderView_impl : public virtual SubscriptionBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class SubscriptionBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            SubscriptionBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            SubscriptionBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            SubscriptionBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            SubscriptionBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const SubscriptionBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        SubscriptionBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~SubscriptionBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        SubscriptionBuiltinTopicDataDataReaderView_impl (const SubscriptionBuiltinTopicDataDataReaderView &);
    
        void operator= (const SubscriptionBuiltinTopicDataDataReaderView &);
    };
    
    class  CMParticipantBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        CMParticipantBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~CMParticipantBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  CMParticipantBuiltinTopicDataTypeSupport : public virtual CMParticipantBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        CMParticipantBuiltinTopicDataTypeSupport ();
    
        virtual ~CMParticipantBuiltinTopicDataTypeSupport ();
    
    private:
        CMParticipantBuiltinTopicDataTypeSupport (const CMParticipantBuiltinTopicDataTypeSupport &);
    
        void operator= (const CMParticipantBuiltinTopicDataTypeSupport &);
    };
    
    typedef CMParticipantBuiltinTopicDataTypeSupportInterface_var CMParticipantBuiltinTopicDataTypeSupport_var;
    typedef CMParticipantBuiltinTopicDataTypeSupportInterface_ptr CMParticipantBuiltinTopicDataTypeSupport_ptr;
    
    class  CMParticipantBuiltinTopicDataDataWriter_impl : public virtual CMParticipantBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class CMParticipantBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const CMParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const CMParticipantBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const CMParticipantBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMParticipantBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMParticipantBuiltinTopicDataDataWriter_impl ();
    
        virtual ~CMParticipantBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMParticipantBuiltinTopicDataDataWriter_impl (const CMParticipantBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const CMParticipantBuiltinTopicDataDataWriter &);
    };
    
    class  CMParticipantBuiltinTopicDataDataReader_impl : public virtual CMParticipantBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class CMParticipantBuiltinTopicDataTypeSupportMetaHolder;
        friend class CMParticipantBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMParticipantBuiltinTopicDataDataReader_impl ();
    
        virtual ~CMParticipantBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        CMParticipantBuiltinTopicDataDataReader_impl (const CMParticipantBuiltinTopicDataDataReader &);
        void operator= (const CMParticipantBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  CMParticipantBuiltinTopicDataDataReaderView_impl : public virtual CMParticipantBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class CMParticipantBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMParticipantBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMParticipantBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMParticipantBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMParticipantBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMParticipantBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~CMParticipantBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMParticipantBuiltinTopicDataDataReaderView_impl (const CMParticipantBuiltinTopicDataDataReaderView &);
    
        void operator= (const CMParticipantBuiltinTopicDataDataReaderView &);
    };
    
    class  CMPublisherBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        CMPublisherBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~CMPublisherBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  CMPublisherBuiltinTopicDataTypeSupport : public virtual CMPublisherBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        CMPublisherBuiltinTopicDataTypeSupport ();
    
        virtual ~CMPublisherBuiltinTopicDataTypeSupport ();
    
    private:
        CMPublisherBuiltinTopicDataTypeSupport (const CMPublisherBuiltinTopicDataTypeSupport &);
    
        void operator= (const CMPublisherBuiltinTopicDataTypeSupport &);
    };
    
    typedef CMPublisherBuiltinTopicDataTypeSupportInterface_var CMPublisherBuiltinTopicDataTypeSupport_var;
    typedef CMPublisherBuiltinTopicDataTypeSupportInterface_ptr CMPublisherBuiltinTopicDataTypeSupport_ptr;
    
    class  CMPublisherBuiltinTopicDataDataWriter_impl : public virtual CMPublisherBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class CMPublisherBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const CMPublisherBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const CMPublisherBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const CMPublisherBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMPublisherBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMPublisherBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMPublisherBuiltinTopicDataDataWriter_impl ();
    
        virtual ~CMPublisherBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMPublisherBuiltinTopicDataDataWriter_impl (const CMPublisherBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const CMPublisherBuiltinTopicDataDataWriter &);
    };
    
    class  CMPublisherBuiltinTopicDataDataReader_impl : public virtual CMPublisherBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class CMPublisherBuiltinTopicDataTypeSupportMetaHolder;
        friend class CMPublisherBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMPublisherBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMPublisherBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMPublisherBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMPublisherBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMPublisherBuiltinTopicDataDataReader_impl ();
    
        virtual ~CMPublisherBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        CMPublisherBuiltinTopicDataDataReader_impl (const CMPublisherBuiltinTopicDataDataReader &);
        void operator= (const CMPublisherBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  CMPublisherBuiltinTopicDataDataReaderView_impl : public virtual CMPublisherBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class CMPublisherBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMPublisherBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMPublisherBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMPublisherBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMPublisherBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMPublisherBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMPublisherBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~CMPublisherBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMPublisherBuiltinTopicDataDataReaderView_impl (const CMPublisherBuiltinTopicDataDataReaderView &);
    
        void operator= (const CMPublisherBuiltinTopicDataDataReaderView &);
    };
    
    class  CMSubscriberBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        CMSubscriberBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~CMSubscriberBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  CMSubscriberBuiltinTopicDataTypeSupport : public virtual CMSubscriberBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        CMSubscriberBuiltinTopicDataTypeSupport ();
    
        virtual ~CMSubscriberBuiltinTopicDataTypeSupport ();
    
    private:
        CMSubscriberBuiltinTopicDataTypeSupport (const CMSubscriberBuiltinTopicDataTypeSupport &);
    
        void operator= (const CMSubscriberBuiltinTopicDataTypeSupport &);
    };
    
    typedef CMSubscriberBuiltinTopicDataTypeSupportInterface_var CMSubscriberBuiltinTopicDataTypeSupport_var;
    typedef CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr CMSubscriberBuiltinTopicDataTypeSupport_ptr;
    
    class  CMSubscriberBuiltinTopicDataDataWriter_impl : public virtual CMSubscriberBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class CMSubscriberBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const CMSubscriberBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const CMSubscriberBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const CMSubscriberBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMSubscriberBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMSubscriberBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMSubscriberBuiltinTopicDataDataWriter_impl ();
    
        virtual ~CMSubscriberBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMSubscriberBuiltinTopicDataDataWriter_impl (const CMSubscriberBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const CMSubscriberBuiltinTopicDataDataWriter &);
    };
    
    class  CMSubscriberBuiltinTopicDataDataReader_impl : public virtual CMSubscriberBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class CMSubscriberBuiltinTopicDataTypeSupportMetaHolder;
        friend class CMSubscriberBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMSubscriberBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMSubscriberBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMSubscriberBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMSubscriberBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMSubscriberBuiltinTopicDataDataReader_impl ();
    
        virtual ~CMSubscriberBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        CMSubscriberBuiltinTopicDataDataReader_impl (const CMSubscriberBuiltinTopicDataDataReader &);
        void operator= (const CMSubscriberBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  CMSubscriberBuiltinTopicDataDataReaderView_impl : public virtual CMSubscriberBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class CMSubscriberBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMSubscriberBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMSubscriberBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMSubscriberBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMSubscriberBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMSubscriberBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMSubscriberBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~CMSubscriberBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMSubscriberBuiltinTopicDataDataReaderView_impl (const CMSubscriberBuiltinTopicDataDataReaderView &);
    
        void operator= (const CMSubscriberBuiltinTopicDataDataReaderView &);
    };
    
    class  CMDataWriterBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        CMDataWriterBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~CMDataWriterBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  CMDataWriterBuiltinTopicDataTypeSupport : public virtual CMDataWriterBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        CMDataWriterBuiltinTopicDataTypeSupport ();
    
        virtual ~CMDataWriterBuiltinTopicDataTypeSupport ();
    
    private:
        CMDataWriterBuiltinTopicDataTypeSupport (const CMDataWriterBuiltinTopicDataTypeSupport &);
    
        void operator= (const CMDataWriterBuiltinTopicDataTypeSupport &);
    };
    
    typedef CMDataWriterBuiltinTopicDataTypeSupportInterface_var CMDataWriterBuiltinTopicDataTypeSupport_var;
    typedef CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr CMDataWriterBuiltinTopicDataTypeSupport_ptr;
    
    class  CMDataWriterBuiltinTopicDataDataWriter_impl : public virtual CMDataWriterBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class CMDataWriterBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const CMDataWriterBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const CMDataWriterBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const CMDataWriterBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataWriterBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataWriterBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataWriterBuiltinTopicDataDataWriter_impl ();
    
        virtual ~CMDataWriterBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMDataWriterBuiltinTopicDataDataWriter_impl (const CMDataWriterBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const CMDataWriterBuiltinTopicDataDataWriter &);
    };
    
    class  CMDataWriterBuiltinTopicDataDataReader_impl : public virtual CMDataWriterBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class CMDataWriterBuiltinTopicDataTypeSupportMetaHolder;
        friend class CMDataWriterBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMDataWriterBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMDataWriterBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataWriterBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataWriterBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataWriterBuiltinTopicDataDataReader_impl ();
    
        virtual ~CMDataWriterBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        CMDataWriterBuiltinTopicDataDataReader_impl (const CMDataWriterBuiltinTopicDataDataReader &);
        void operator= (const CMDataWriterBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  CMDataWriterBuiltinTopicDataDataReaderView_impl : public virtual CMDataWriterBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class CMDataWriterBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMDataWriterBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMDataWriterBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMDataWriterBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataWriterBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataWriterBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataWriterBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~CMDataWriterBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMDataWriterBuiltinTopicDataDataReaderView_impl (const CMDataWriterBuiltinTopicDataDataReaderView &);
    
        void operator= (const CMDataWriterBuiltinTopicDataDataReaderView &);
    };
    
    class  CMDataReaderBuiltinTopicDataTypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
    {
    public:
        CMDataReaderBuiltinTopicDataTypeSupportMetaHolder ();
        virtual ~CMDataReaderBuiltinTopicDataTypeSupportMetaHolder ();
    
    private:
        ::DDS::OpenSplice::DataWriter * create_datawriter ();
    
        ::DDS::OpenSplice::DataReader * create_datareader ();
    
        ::DDS::OpenSplice::DataReaderView * create_view ();
    };
    
    class  CMDataReaderBuiltinTopicDataTypeSupport : public virtual CMDataReaderBuiltinTopicDataTypeSupportInterface,
                                                       public ::DDS::OpenSplice::TypeSupport
    {
    public:
        CMDataReaderBuiltinTopicDataTypeSupport ();
    
        virtual ~CMDataReaderBuiltinTopicDataTypeSupport ();
    
    private:
        CMDataReaderBuiltinTopicDataTypeSupport (const CMDataReaderBuiltinTopicDataTypeSupport &);
    
        void operator= (const CMDataReaderBuiltinTopicDataTypeSupport &);
    };
    
    typedef CMDataReaderBuiltinTopicDataTypeSupportInterface_var CMDataReaderBuiltinTopicDataTypeSupport_var;
    typedef CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr CMDataReaderBuiltinTopicDataTypeSupport_ptr;
    
    class  CMDataReaderBuiltinTopicDataDataWriter_impl : public virtual CMDataReaderBuiltinTopicDataDataWriter,
                                                           public ::DDS::OpenSplice::FooDataWriter_impl
    {
        friend class DDS::OpenSplice::Publisher;
        friend class CMDataReaderBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::InstanceHandle_t register_instance (
            const CMDataReaderBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const CMDataReaderBuiltinTopicData & instance_data,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t write_w_timestamp (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
            const CMDataReaderBuiltinTopicData & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataReaderBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataReaderBuiltinTopicData & instance_data) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataReaderBuiltinTopicDataDataWriter_impl ();
    
        virtual ~CMDataReaderBuiltinTopicDataDataWriter_impl ();
    
        virtual DDS::ReturnCode_t init (
                        DDS::OpenSplice::Publisher *publisher,
                        DDS::OpenSplice::DomainParticipant *participant,
                        const DDS::DataWriterQos &qos,
                        DDS::OpenSplice::Topic *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMDataReaderBuiltinTopicDataDataWriter_impl (const CMDataReaderBuiltinTopicDataDataWriter_impl &);
    
        void operator= (const CMDataReaderBuiltinTopicDataDataWriter &);
    };
    
    class  CMDataReaderBuiltinTopicDataDataReader_impl : public virtual CMDataReaderBuiltinTopicDataDataReader,
                                                           public ::DDS::OpenSplice::FooDataReader_impl
    {
        friend class DDS::OpenSplice::Subscriber;
        friend class CMDataReaderBuiltinTopicDataTypeSupportMetaHolder;
        friend class CMDataReaderBuiltinTopicDataDataReaderView_impl;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMDataReaderBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMDataReaderBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataReaderBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataReaderBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataReaderBuiltinTopicDataDataReader_impl ();
    
        virtual ~CMDataReaderBuiltinTopicDataDataReader_impl ();
    
        DDS::ReturnCode_t init (
                DDS::OpenSplice::Subscriber *subscriber,
                const DDS::DataReaderQos &qos,
                DDS::OpenSplice::TopicDescription *a_topic,
                const char *name,
                DDS::OpenSplice::cxxCopyIn copyIn,
                DDS::OpenSplice::cxxCopyOut copyOut);
    
        static void* dataSeqAlloc (
            void * data_values,
            DDS::ULong len);
    
        static void dataSeqLength (
            void * data_values,
            DDS::ULong len);
    
        static void * dataSeqGetBuffer (
            void * data_values,
            DDS::ULong index);
    
        static void dataSeqCopyOut (
            const void * from,
            void * received_data);
        static void copyDataOut(const void *from, void *to);
    
    private:
        CMDataReaderBuiltinTopicDataDataReader_impl (const CMDataReaderBuiltinTopicDataDataReader &);
        void operator= (const CMDataReaderBuiltinTopicDataDataReader &);
    
        static ::DDS::ReturnCode_t check_preconditions (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples);
    };
    
    class  CMDataReaderBuiltinTopicDataDataReaderView_impl : public virtual CMDataReaderBuiltinTopicDataDataReaderView,
                                                               public ::DDS::OpenSplice::FooDataReaderView_impl
    {
        friend class DDS::OpenSplice::DataReader;
        friend class CMDataReaderBuiltinTopicDataTypeSupportMetaHolder;
    
    public:
        virtual ::DDS::ReturnCode_t read (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_sample (
            CMDataReaderBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_sample (
            CMDataReaderBuiltinTopicData & received_data,
            ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::DDS::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t return_loan (
            CMDataReaderBuiltinTopicDataSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::ReturnCode_t get_key_value (
            CMDataReaderBuiltinTopicData & key_holder,
            ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
    
        virtual ::DDS::InstanceHandle_t lookup_instance (
            const CMDataReaderBuiltinTopicData & instance) THROW_ORB_EXCEPTIONS;
    
    protected:
        CMDataReaderBuiltinTopicDataDataReaderView_impl ();
    
        virtual ~CMDataReaderBuiltinTopicDataDataReaderView_impl ();
    
        virtual DDS::ReturnCode_t init (
            DDS::OpenSplice::DataReader *reader,
            const char *name,
            const DDS::DataReaderViewQos &qos,
            DDS::OpenSplice::cxxCopyIn copyIn,
            DDS::OpenSplice::cxxCopyOut copyOut);
    
    private:
        CMDataReaderBuiltinTopicDataDataReaderView_impl (const CMDataReaderBuiltinTopicDataDataReaderView &);
    
        void operator= (const CMDataReaderBuiltinTopicDataDataReaderView &);
    };
    
}

#undef OS_API
#endif
