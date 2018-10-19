#ifndef VORTEX_C99_DDS_BUILTINTOPICS_H_
#define VORTEX_C99_DDS_BUILTINTOPICS_H_

#include "dds.h"
#include "dds_builtinTopicsDcps.h" /* add to C file instead? */



#ifdef __cplusplus
extern "C" {
#endif

 extern const dds_topic_descriptor_t DDS_ParticipantBuiltinTopicData_desc;


#define DDS_ParticipantBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_ParticipantBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_TopicBuiltinTopicData_desc;


#define DDS_TopicBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_TopicBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_TypeBuiltinTopicData_desc;


#define DDS_TypeBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_TypeBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_PublicationBuiltinTopicData_desc;


#define DDS_PublicationBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_PublicationBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_SubscriptionBuiltinTopicData_desc;


#define DDS_SubscriptionBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_SubscriptionBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_CMParticipantBuiltinTopicData_desc;


#define DDS_CMParticipantBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_CMParticipantBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_CMPublisherBuiltinTopicData_desc;


#define DDS_CMPublisherBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_CMPublisherBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_CMSubscriberBuiltinTopicData_desc;


#define DDS_CMSubscriberBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_CMSubscriberBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_CMDataWriterBuiltinTopicData_desc;


#define DDS_CMDataWriterBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_CMDataWriterBuiltinTopicData_desc, (o))


 extern const dds_topic_descriptor_t DDS_CMDataReaderBuiltinTopicData_desc;


#define DDS_CMDataReaderBuiltinTopicData_free(d,o) dds_sample_free ((d), &DDS_CMDataReaderBuiltinTopicData_desc, (o))


#ifdef __cplusplus
}
#endif

#endif /* VORTEX_C99_DDS_BUILTINTOPICS_H_ */
