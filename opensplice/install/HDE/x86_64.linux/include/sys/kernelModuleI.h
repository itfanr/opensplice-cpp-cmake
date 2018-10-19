
#ifndef MODULE_kernelModuleI_HEADER
#define MODULE_kernelModuleI_HEADER

#include "os_if.h"
#include "c_base.h"
#include "c_misc.h"
#include "c_sync.h"
#include "c_collection.h"
#include "c_field.h"
#include "kernelModule.h"


#ifdef MODEL_kernelModuleI_IMPLEMENTATION
#define OS_API OS_API_EXPORT
#else
#define OS_API OS_API_IMPORT
#endif

typedef c_ulong v_state;

typedef enum v_writeResult {
    V_WRITE_UNDEFINED = 1024,
    V_WRITE_SUCCESS,
    V_WRITE_SUCCESS_NOT_STORED,
    V_WRITE_REGISTERED,
    V_WRITE_UNREGISTERED,
    V_WRITE_PRE_NOT_MET,
    V_WRITE_ERROR,
    V_WRITE_TIMEOUT,
    V_WRITE_OUT_OF_RESOURCES,
    V_WRITE_REJECTED,
    V_WRITE_DUPLICATE,
    V_WRITE_COUNT
} v_writeResult;

typedef enum v_messageContext {
    V_CONTEXT_UNDEFINED,
    V_CONTEXT_GROUPWRITE,
    V_CONTEXT_TRANSACTIONFLUSH,
    V_CONTEXT_GETHISTORY,
    V_CONTEXT_COUNT
} v_messageContext;

typedef enum v_dataReaderResult {
    V_DATAREADER_INSERTED = 1280,
    V_DATAREADER_OUTDATED,
    V_DATAREADER_NOT_OWNER,
    V_DATAREADER_MAX_SAMPLES,
    V_DATAREADER_MAX_INSTANCES,
    V_DATAREADER_INSTANCE_FULL,
    V_DATAREADER_SAMPLE_LOST,
    V_DATAREADER_DUPLICATE_SAMPLE,
    V_DATAREADER_OUT_OF_MEMORY,
    V_DATAREADER_INTERNAL_ERROR,
    V_DATAREADER_UNDETERMINED,
    V_DATAREADER_FILTERED_OUT,
    V_DATAREADER_COUNT
} v_dataReaderResult;

C_CLASS(v_threadInfo);

C_STRUCT(v_threadInfo) {
    c_voidp cnd;
    c_ulong flags;
    c_voidp lock;
    c_voidp mtx;
    c_ulong protectCount;
    c_ulong serial;
    c_ulonglong threadId;
};

C_CLASS(v_processInfo);

C_STRUCT(v_processInfo) {
    pa_uint32_t blockedCount;
    c_mutex lock;
    c_longlong processId;
    pa_uint32_t protectCount;
    c_ulong serial;
    pa_uint32_t waitCount;
    c_set threads;
};

struct v_timedValue_s {
    os_timeW lastUpdate;
    c_ulong value;
};

typedef struct v_timedValue_s v_timedValue;

typedef v_timedValue v_minValue;

typedef v_timedValue v_maxValue;

struct v_avgValue_s {
    c_ulong count;
    c_float value;
};

typedef struct v_avgValue_s v_avgValue;

struct v_fullCounter_s {
    c_ulong value;
    v_minValue min;
    v_maxValue max;
    v_avgValue avg;
};

typedef struct v_fullCounter_s v_fullCounter;

C_CLASS(v_statistics);

C_STRUCT(v_statistics) {
    os_timeW lastReset;
};

C_CLASS(v_writerStatistics);

C_STRUCT(v_writerStatistics) {
    C_EXTENDS(v_statistics);
    v_maxValue maxNumberOfSamplesPerInstance;
    c_ulong numberOfDisposes;
    c_ulong numberOfImplicitRegisters;
    c_ulong numberOfInstancesWithStatusAlive;
    c_ulong numberOfInstancesWithStatusDisposed;
    c_ulong numberOfInstancesWithStatusUnregistered;
    c_ulong numberOfRegisters;
    c_ulong numberOfRetries;
    c_ulong numberOfSamples;
    c_ulong numberOfTimedOutWrites;
    c_ulong numberOfUnregisters;
    c_ulong numberOfWrites;
    c_ulong numberOfWritesBlockedByInstanceLimit;
    c_ulong numberOfWritesBlockedBySamplesLimit;
    c_ulong numberOfWritesBlockedBySamplesPerInstanceLimit;
};

C_CLASS(v_dataReaderStatistics);

C_STRUCT(v_dataReaderStatistics) {
    C_EXTENDS(v_statistics);
    v_maxValue maxNumberOfInstances;
    v_maxValue maxNumberOfSamples;
    v_maxValue maxSampleSize;
    v_maxValue maxSamplesPerInstance;
    c_ulong numberOfInstanceLookups;
    c_ulong numberOfInstanceReads;
    c_ulong numberOfInstanceTakes;
    c_ulong numberOfInstances;
    c_ulong numberOfInstancesWithStatusAlive;
    c_ulong numberOfInstancesWithStatusDisposed;
    c_ulong numberOfInstancesWithStatusNew;
    c_ulong numberOfInstancesWithStatusNoWriters;
    c_ulong numberOfNextInstanceReads;
    c_ulong numberOfNextInstanceTakes;
    c_ulong numberOfReads;
    c_ulong numberOfSamples;
    c_ulong numberOfSamplesArrived;
    c_ulong numberOfSamplesDiscarded;
    c_ulong numberOfSamplesExpired;
    c_ulong numberOfSamplesInserted;
    c_ulong numberOfSamplesLost;
    c_ulong numberOfSamplesPurgedByDispose;
    c_ulong numberOfSamplesPurgedByNoWriters;
    c_ulong numberOfSamplesRead;
    c_ulong numberOfSamplesRejectedByInstancesLimit;
    c_ulong numberOfSamplesRejectedBySamplesLimit;
    c_ulong numberOfSamplesTaken;
    c_ulong numberOfSamplesWithStatusRead;
    c_ulong numberOfTakes;
    v_fullCounter readLatency;
    v_fullCounter transportLatency;
};

C_CLASS(v_queryStatistics);

C_STRUCT(v_queryStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong numberOfInstanceReads;
    c_ulong numberOfInstanceTakes;
    c_ulong numberOfNextInstanceReads;
    c_ulong numberOfNextInstanceTakes;
    c_ulong numberOfReads;
    c_ulong numberOfTakes;
};

C_CLASS(v_networkQueueStatistics);

C_STRUCT(v_networkQueueStatistics) {
    c_ulong numberOfSamplesArrived;
    c_ulong numberOfSamplesInserted;
    c_ulong numberOfSamplesRejected;
    c_ulong numberOfSamplesTaken;
    v_fullCounter numberOfSamplesWaiting;
    c_string name;
};

C_CLASS(v_networkReaderStatistics);

C_STRUCT(v_networkReaderStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong queuesCount;
    c_array queues /*C_ARRAY<kernelModuleI::v_networkQueueStatistics>*/;
};

C_CLASS(v_networkChannelStatistics);

C_STRUCT(v_networkChannelStatistics) {
    v_fullCounter adminQueueAcks;
    v_fullCounter adminQueueData;
    c_ulong maxNumberOfBytesResentToOneNode;
    c_ulong maxNumberOfPacketsResentToOneNode;
    c_ulong nofBytesAfterCompression;
    c_ulong nofBytesAfterDecompression;
    c_ulong nofBytesBeforeCompression;
    c_ulong nofBytesBeforeDecompression;
    c_ulong nofFreePacketBuffers;
    c_ulong nofUsedPacketBuffers;
    c_ulong numberOfAcksSent;
    c_ulong numberOfBytesDelivered;
    c_ulong numberOfBytesInResendBuffer;
    c_ulong numberOfBytesNotInterested;
    c_ulong numberOfBytesReceived;
    c_ulong numberOfBytesResent;
    c_ulong numberOfBytesSent;
    c_ulong numberOfKnownNodes;
    c_ulong numberOfMessagesDelivered;
    c_ulong numberOfMessagesFragmented;
    c_ulong numberOfMessagesNotInterested;
    c_ulong numberOfMessagesPacked;
    c_ulong numberOfMessagesReceived;
    c_ulong numberOfMessagesSent;
    c_ulong numberOfPacketsInResendBuffer;
    c_ulong numberOfPacketsInvalid;
    c_ulong numberOfPacketsLost;
    c_ulong numberOfPacketsNotConnectedPartition;
    c_ulong numberOfPacketsOutOfOrder;
    c_ulong numberOfPacketsOutOfOrderDropped;
    c_ulong numberOfPacketsReceived;
    c_ulong numberOfPacketsReliabilityMismatch;
    c_ulong numberOfPacketsResent;
    c_ulong numberOfPacketsSent;
    c_ulong numberOfPacketsUnknownAddress;
    c_ulong numberOfPacketsUnknownPartition;
    c_ulong reorderAdminBytesQueued;
    v_avgValue reorderAdminBytesQueuedAvg;
    v_maxValue reorderAdminBytesQueuedMax;
    v_minValue reorderAdminBytesQueuedMin;
    c_ulong reorderAdminPacketsQueued;
    v_avgValue reorderAdminPacketsQueuedAvg;
    v_maxValue reorderAdminPacketsQueuedMax;
    v_minValue reorderAdminPacketsQueuedMin;
    c_ulong resendAdminBytesQueued;
    v_avgValue resendAdminBytesQueuedAvg;
    v_maxValue resendAdminBytesQueuedMax;
    v_minValue resendAdminBytesQueuedMin;
    c_ulong resendAdminPacketsQueued;
    v_avgValue resendAdminPacketsQueuedAvg;
    v_maxValue resendAdminPacketsQueuedMax;
    v_minValue resendAdminPacketsQueuedMin;
    c_ulong ringBufferMessagesQueued;
    v_avgValue ringBufferMessagesQueuedAvg;
    v_maxValue ringBufferMessagesQueuedMax;
    v_minValue ringBufferMessagesQueuedMin;
    c_string name;
};

C_CLASS(v_networkingStatistics);

C_STRUCT(v_networkingStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong channelsCount;
    c_ulong numberOfErrors;
    c_array channels /*C_ARRAY<kernelModuleI::v_networkChannelStatistics>*/;
};

C_CLASS(v_cmsoapStatistics);

C_STRUCT(v_cmsoapStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong clientThreads;
    c_ulong connectedClients;
    v_maxValue maxClientThreads;
    v_maxValue maxConnectedClients;
    c_ulong requestsHandled;
};

C_CLASS(v_groupQueueStatistics);

C_STRUCT(v_groupQueueStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong numberOfReads;
    v_fullCounter numberOfSamples;
    c_ulong numberOfTakes;
    c_ulong numberOfWrites;
};

C_CLASS(v_durabilityStatistics);

C_STRUCT(v_durabilityStatistics) {
    C_EXTENDS(v_statistics);
    c_ulong aligneeRequestsOpen;
    v_maxValue aligneeRequestsOpenMax;
    c_ulong aligneeRequestsSent;
    c_ulong aligneeRequestsWaiting;
    v_maxValue aligneeRequestsWaitingMax;
    c_ulong aligneeSamplesDispose;
    c_ulong aligneeSamplesRegister;
    c_ulong aligneeSamplesTotal;
    c_ulong aligneeSamplesUnregister;
    c_ulong aligneeSamplesWrite;
    c_ulong aligneeSamplesWriteDispose;
    c_ulong aligneeTotalSize;
    c_ulong alignerRequestsAnswered;
    c_ulong alignerRequestsCombined;
    c_ulong alignerRequestsCombinedAnswered;
    c_ulong alignerRequestsCombinedOpen;
    v_maxValue alignerRequestsCombinedOpenMax;
    c_ulong alignerRequestsIgnored;
    c_ulong alignerRequestsOpen;
    v_maxValue alignerRequestsOpenMax;
    c_ulong alignerRequestsReceived;
    c_ulong alignerSamplesDispose;
    c_ulong alignerSamplesRegister;
    c_ulong alignerSamplesTotal;
    c_ulong alignerSamplesUnregister;
    c_ulong alignerSamplesWrite;
    c_ulong alignerSamplesWriteDispose;
    c_ulong alignerTotalSize;
    c_ulong fellowsApproved;
    c_ulong fellowsIncompatibleDataModel;
    c_ulong fellowsIncompatibleState;
    c_ulong fellowsKnown;
    v_maxValue fellowsKnownMax;
    c_ulong groupsCompletePersistent;
    c_ulong groupsCompleteTotal;
    c_ulong groupsCompleteTransient;
    c_ulong groupsCompleteVolatile;
    c_ulong groupsIgnoredPersistent;
    c_ulong groupsIgnoredTotal;
    c_ulong groupsIgnoredTransient;
    c_ulong groupsIgnoredVolatile;
    c_ulong groupsIncompletePersistent;
    c_ulong groupsIncompleteTotal;
    c_ulong groupsIncompleteTransient;
    c_ulong groupsIncompleteVolatile;
    c_ulong groupsKnownPersistent;
    c_ulong groupsKnownTotal;
    c_ulong groupsKnownTransient;
    c_ulong groupsKnownVolatile;
    c_ulong groupsToCreatePersistent;
    c_ulong groupsToCreateTotal;
    c_ulong groupsToCreateTransient;
    c_ulong groupsToCreateVolatile;
    c_ulong nameSpacesKnown;
    c_ulong nameSpacesMaster;
    c_ulong nameSpacesSlave;
    c_ulong persistentSamplesWritten;
};

C_CLASS(v_kernelStatistics);

C_STRUCT(v_kernelStatistics) {
    C_EXTENDS(v_statistics);
    v_maxValue maxShmClaims;
    v_maxValue maxShmGarbage;
    v_maxValue maxShmUsed;
    c_ulong shmClaimFails;
    c_ulong shmClaims;
    c_ulong shmGarbage;
    c_ulong shmUsed;
};

C_CLASS(v_rnrGroupStatistics);

C_STRUCT(v_rnrGroupStatistics) {
    C_EXTENDS(v_statistics);
    v_fullCounter dataRateRecorded;
    v_fullCounter dataRateReplayed;
    c_ulong numberOfBytesRecorded;
    c_ulong numberOfBytesReplayed;
    c_ulong numberOfSamplesRecorded;
    c_ulong numberOfSamplesReplayed;
    c_string name;
};

C_CLASS(v_rnrStorageStatistics);

C_STRUCT(v_rnrStorageStatistics) {
    C_EXTENDS(v_statistics);
    c_string name;
    c_set topics;
};

C_CLASS(v_rnrStatistics);

C_STRUCT(v_rnrStatistics) {
    C_EXTENDS(v_statistics);
    c_string name;
    c_set storages;
};

struct v_handleInfo_s {
    c_address object_nextFree;
    c_ulong serial;
    pa_uint32_t status_count_index;
};

typedef struct v_handleInfo_s v_handleInfo;

typedef c_array v_handleInfoList /*C_ARRAY<kernelModuleI::v_handleInfo>*/;

C_CLASS(v_handleServer);

C_STRUCT(v_handleServer) {
    c_voidp firstFree;
    c_ulong freeListLength;
    c_voidp lastFree;
    c_ulong lastIndex;
    c_mutex mutex;
    c_type handleInfo_type;
    c_array handleInfos /*C_ARRAY<kernelModuleI::v_handleInfoList>*/;
};

struct v_handle_s {
    c_address server;
    c_ulong index;
    c_ulong serial;
};

typedef struct v_handle_s v_handle;

typedef enum v_kind {
    K_KERNEL,
    K_OBJECT,
    K_ENTITY,
    K_GROUPSET,
    K_STATUSCONDITION,
    K_OBJECTLOAN,
    K_OBJECTBUFFER,
    K_WAITSET,
    K_LISTENER,
    K_CONDITION,
    K_QUERY,
    K_DATAREADERQUERY,
    K_DATAVIEW,
    K_PROJECTION,
    K_MAPPING,
    K_FILTER,
    K_DEADLINEINSTANCE,
    K_DEADLINEINSTANCELIST,
    K_MESSAGE,
    K_MESSAGEEOT,
    K_EOTLISTELEMENT,
    K_TRANSACTIONADMIN,
    K_TRANSACTION,
    K_TRANSACTIONELEMENT,
    K_TRANSACTIONGROUPADMIN,
    K_TRANSACTIONGROUP,
    K_TRANSACTIONPUBLISHER,
    K_TRANSACTIONWRITER,
    K_TRANSACTIONGROUPWRITER,
    K_TRANSACTIONGROUPREADER,
    K_TRANSACTIONPENDING,
    K_WRITERINSTANCE,
    K_WRITERSAMPLE,
    K_WRITERCACHEITEM,
    K_GROUPINSTANCE,
    K_GROUPSAMPLE,
    K_GROUPCACHEITEM,
    K_DATAREADERINSTANCE,
    K_READERSAMPLE,
    K_DATAVIEWINSTANCE,
    K_DATAVIEWQUERY,
    K_DATAVIEWSAMPLE,
    K_ORDEREDINSTANCE,
    K_ORDEREDINSTANCESAMPLE,
    K_WRITERINSTANCETEMPLATE,
    K_TOPIC,
    K_TOPIC_ADAPTER,
    K_TYPEREPRESENTATION,
    K_PUBLISHER,
    K_SUBSCRIBER,
    K_DOMAIN,
    K_DOMAININTEREST,
    K_DOMAINADMIN,
    K_READER,
    K_WRITER,
    K_ENTRY,
    K_DATAREADERENTRY,
    K_DELIVERYSERVICEENTRY,
    K_GROUP,
    K_WRITERGROUP,
    K_CACHE,
    K_GROUPACTION,
    K_GROUPSTREAM,
    K_GROUPQUEUE,
    K_GROUPQUEUESAMPLE,
    K_DATAREADER,
    K_DELIVERYSERVICE,
    K_PARTICIPANT,
    K_PURGELISTITEM,
    K_GROUPPURGEITEM,
    K_INDEX,
    K_READERSTATUS,
    K_WRITERSTATUS,
    K_PUBLISHERSTATUS,
    K_SUBSCRIBERSTATUS,
    K_DOMAINSTATUS,
    K_TOPICSTATUS,
    K_PARTICIPANTSTATUS,
    K_KERNELSTATUS,
    K_WRITERSTATISTICS,
    K_QUERYSTATISTICS,
    K_DATAREADERSTATISTICS,
    K_PROXY,
    K_WAITSETEVENT,
    K_LISTENEREVENT,
    K_WAITSETEVENTHISTORYDELETE,
    K_WAITSETEVENTHISTORYREQUEST,
    K_WAITSETEVENTPERSISTENTSNAPSHOT,
    K_WAITSETEVENTCONNECTWRITER,
    K_SERVICEMANAGER,
    K_SERVICE,
    K_SERVICESTATE,
    K_NETWORKING,
    K_DURABILITY,
    K_CMSOAP,
    K_RNR,
    K_NWBRIDGE,
    K_LEASEMANAGER,
    K_LEASE,
    K_LEASEACTION,
    K_SPLICED,
    K_CONFIGURATION,
    K_REGISTRATION,
    K_NETWORKREADER,
    K_NETWORKREADERENTRY,
    K_NETWORKMESSAGE,
    K_NETWORKMAPENTRY,
    K_HISTORICALDELETEREQUEST,
    K_HISTORICALDATAREQUEST,
    K_PERSISTENTSNAPSHOTREQUEST,
    K_PENDINGDISPOSEELEMENT,
    K_WRITEREOTSAMPLE,
    K_GID,
    K_TID,
    K_RXODATA,
    K_DURABILITYCLIENT,
    K_DURABILITYCLIENTEVENT,
    K_DURABILITYCLIENTSERVER,
    K_TYPECOUNT
} v_kind;

C_CLASS(v_object);

C_STRUCT(v_object) {
    c_voidp kernel;
    enum v_kind kind;
};

C_CLASS(v_public);

C_STRUCT(v_public) {
    C_EXTENDS(v_object);
    v_handle handle;
    c_voidp userDataPublic;
};

#define v_objectBufferLength (64)
C_CLASS(v_objectBuffer);

C_STRUCT(v_objectBuffer) {
    C_EXTENDS(v_object);
    c_object obj[64] /*C_ARRAY<c_object,64>*/;
    v_objectBuffer next;
};

C_CLASS(v_objectLoan);

C_STRUCT(v_objectLoan) {
    C_EXTENDS(v_objectBuffer);
    c_ulong index;
};

C_CLASS(v_proxy);

C_STRUCT(v_proxy) {
    C_EXTENDS(v_object);
    v_handle source;
    c_voidp source2;
    c_voidp userData;
    v_proxy next;
};

C_CLASS(v_observable);

C_STRUCT(v_observable) {
    C_EXTENDS(v_public);
    c_mutex mutex;
    v_proxy observers;
};

C_CLASS(v_observer);

C_STRUCT(v_observer) {
    C_EXTENDS(v_observable);
    c_cond cv;
    c_voidp eventData;
    c_ulong eventFlags;
    c_ulong eventMask;
    c_mutex mutex;
    c_long waitCount;
};

C_CLASS(v_status);

C_STRUCT(v_status) {
    C_EXTENDS(v_object);
    c_ulong state;
};

typedef enum v_entityState {
    V_ENTITYSTATE_DISABLED,
    V_ENTITYSTATE_SUSPENDED,
    V_ENTITYSTATE_ENABLED
} v_entityState;

typedef c_ulong v_eventMask;

C_CLASS(v_listenerEvent);

C_STRUCT(v_listenerEvent) {
    c_voidp eventData;
    c_ulong kind;
    c_voidp listenerData;
    c_voidp source;
    c_voidp userData;
    v_listenerEvent next;
};

C_CLASS(v_listener);

C_STRUCT(v_listener) {
    C_EXTENDS(v_public);
    c_cond cv;
    c_mutex mutex;
    c_voidp participant;
    c_ulong waitCount;
    c_bool combine;
    c_bool terminate;
    v_listenerEvent eventList;
    v_listenerEvent lastEvent;
};

C_CLASS(v_entity);

C_STRUCT(v_entity) {
    C_EXTENDS(v_observer);
    c_voidp listenerData;
    v_eventMask listenerInterest;
    c_bool enabled;
    v_listener listener;
    v_objectLoan loan;
    c_string name;
    v_status status;
};

C_CLASS(v_statusCondition);

C_STRUCT(v_statusCondition) {
    C_EXTENDS(v_observer);
    v_proxy entity;
};

C_CLASS(v_query);

C_CLASS(v_collection);

C_STRUCT(v_collection) {
    C_EXTENDS(v_entity);
    c_set queries;
};

C_STRUCT(v_query) {
    C_EXTENDS(v_collection);
    c_voidp source;
    c_string expression;
    v_queryStatistics statistics;
};

C_CLASS(v_lifespanSample);

C_STRUCT(v_lifespanSample) {
    os_timeE expiryTime;
    c_voidp prev;
    v_lifespanSample next;
};

C_CLASS(v_readerSample);

C_STRUCT(v_readerSample) {
    C_EXTENDS(v_lifespanSample);
    c_voidp instance;
    os_timeW readTime;
    v_state sampleState;
    c_voidp viewSamples;
};

C_CLASS(v_dataReaderSample);

C_STRUCT(v_dataReaderSample) {
    C_EXTENDS(v_readerSample);
    c_long disposeCount;
    os_timeW insertTime;
    c_voidp newer;
    c_long noWritersCount;
    v_gid publicationHandle;
    c_ulong readId;
    v_dataReaderSample older;
};

C_CLASS(v_dataReaderQuery);

C_STRUCT(v_dataReaderQuery) {
    C_EXTENDS(v_query);
    v_state sampleMask;
    c_ulong state;
    c_bool walkRequired;
    c_array instanceQ /*C_ARRAY<c_query>*/;
    c_array sampleQ /*C_ARRAY<c_query>*/;
    v_dataReaderSample triggerValue;
};

C_CLASS(v_dataViewSampleList);

C_STRUCT(v_dataViewSampleList) {
    C_EXTENDS(v_readerSample);
    c_voidp next;
    c_voidp prev;
};

C_CLASS(v_dataViewSample);

C_STRUCT(v_dataViewSample) {
    C_EXTENDS(v_dataViewSampleList);
    c_voidp next;
    v_dataViewSample prev;
};

C_CLASS(v_dataViewQuery);

C_STRUCT(v_dataViewQuery) {
    C_EXTENDS(v_query);
    v_state sampleMask;
    c_ulong state;
    c_bool walkRequired;
    c_array instanceQ /*C_ARRAY<c_query>*/;
    c_array sampleQ /*C_ARRAY<c_query>*/;
    v_dataViewSample triggerValue;
};

C_CLASS(v_waitsetEvent);

C_STRUCT(v_waitsetEvent) {
    c_ulong kind;
    v_handle source;
    c_voidp userData;
    v_object eventData;
    v_waitsetEvent next;
};

C_CLASS(v_waitset);

C_STRUCT(v_waitset) {
    C_EXTENDS(v_observer);
    c_ulong count;
    c_voidp participant;
    c_cond syncDisconnect;
    c_ulong waitDisconnectCount;
    c_bool waitsetEventEnabled;
    v_proxy observables;
};

typedef enum v_leaseActionId {
    V_LEASEACTION_UNDEFINED,
    V_LEASEACTION_SERVICESTATE_EXPIRED,
    V_LEASEACTION_READER_DEADLINE_MISSED,
    V_LEASEACTION_WRITER_DEADLINE_MISSED,
    V_LEASEACTION_LIVELINESS_CHECK,
    V_LEASEACTION_HEARTBEAT_SEND,
    V_LEASEACTION_HEARTBEAT_CHECK,
    V_LEASEACTION_SPLICED_DEATH_DETECTED,
    V_LEASEACTION_DISPOSE_TRANSACTION,
    V_LEASEACTION_MINIMUM_SEPARATION_EXPIRY,
    V_LEASEACTION_COUNT
} v_leaseActionId;

typedef enum v_leaseKind {
    V_LEASE_KIND_MONOTONIC,
    V_LEASE_KIND_ELAPSED,
    V_LEASE_KIND_COUNT
} v_leaseKind;

struct v_leaseTime_s {
    enum v_leaseKind _d;
    union {
        os_timeM tm;
        os_timeE te;
    } _u;
};

typedef struct v_leaseTime_s v_leaseTime;

C_CLASS(v_leaseManager);

C_CLASS(v_lease);

C_STRUCT(v_lease) {
    C_EXTENDS(v_object);
    os_duration duration;
    v_leaseTime expiryTime;
    c_mutex mutex;
    c_set observers;
};

C_CLASS(v_leaseAction);

C_STRUCT(v_leaseAction) {
    C_EXTENDS(v_object);
    enum v_leaseActionId actionId;
    v_handle actionObject;
    c_bool repeat;
    v_lease lease;
};

struct v_leaseAdmin_s {
    v_leaseTime nextExpiryTime;
    c_set leases;
};

typedef struct v_leaseAdmin_s v_leaseAdmin;

C_STRUCT(v_leaseManager) {
    C_EXTENDS(v_object);
    c_cond cond;
    v_leaseAdmin elapsed;
    v_leaseAdmin monotonic;
    c_mutex mutex;
    c_bool quit;
};

typedef c_long v_policyId;

#define V_LENGTH_UNLIMITED (-1)
#define V_UNKNOWN_POLICY_ID (0)
#define V_USERDATAPOLICY_ID (1)
#define V_DURABILITYPOLICY_ID (2)
#define V_PRESENTATIONPOLICY_ID (3)
#define V_DEADLINEPOLICY_ID (4)
#define V_LATENCYPOLICY_ID (5)
#define V_OWNERSHIPPOLICY_ID (6)
#define V_STRENGTHPOLICY_ID (7)
#define V_LIVELINESSPOLICY_ID (8)
#define V_PACINGPOLICY_ID (9)
#define V_PARTITIONPOLICY_ID (10)
#define V_RELIABILITYPOLICY_ID (11)
#define V_ORDERBYPOLICY_ID (12)
#define V_HISTORYPOLICY_ID (13)
#define V_RESOURCEPOLICY_ID (14)
#define V_ENTITYFACTORYPOLICY_ID (15)
#define V_WRITERLIFECYCLEPOLICY_ID (16)
#define V_READERLIFECYCLEPOLICY_ID (17)
#define V_TOPICDATAPOLICY_ID (18)
#define V_GROUPDATAPOLICY_ID (19)
#define V_TRANSPORTPOLICY_ID (20)
#define V_LIFESPANPOLICY_ID (21)
#define V_DURABILITYSERVICEPOLICY_ID (22)
#define V_USERKEYPOLICY_ID (23)
#define V_VIEWKEYPOLICY_ID (24)
#define V_READERLIFESPANPOLICY_ID (25)
#define V_SHAREPOLICY_ID (26)
#define V_SCHEDULINGPOLICY_ID (27)
#define V_POLICY_ID_COUNT (28)
#define V_USERDATAPOLICY_NAME ("UserData")
#define V_DURABILITYPOLICY_NAME ("Durability")
#define V_PRESENTATIONPOLICY_NAME ("Presentation")
#define V_DEADLINEPOLICY_NAME ("Deadline")
#define V_LATENCYPOLICY_NAME ("LatencyBudget")
#define V_OWNERSHIPPOLICY_NAME ("Ownership")
#define V_STRENGTHPOLICY_NAME ("OwnershipStrength")
#define V_LIVELINESSPOLICY_NAME ("Liveliness")
#define V_PACINGPOLICY_NAME ("TimeBasedFilter")
#define V_PARTITIONPOLICY_NAME ("Partition")
#define V_RELIABILITYPOLICY_NAME ("Reliability")
#define V_ORDERBYPOLICY_NAME ("DestinationOrder")
#define V_HISTORYPOLICY_NAME ("History")
#define V_RESOURCEPOLICY_NAME ("ResourceLimits")
#define V_ENTITYFACTORYPOLICY_NAME ("EntityFactory")
#define V_WRITERLIFECYCLEPOLICY_NAME ("WriterDataLifecycle")
#define V_READERLIFECYCLEPOLICY_NAME ("ReaderDataLifecycle")
#define V_TOPICDATAPOLICY_NAME ("TopicData")
#define V_GROUPDATAPOLICY_NAME ("GroupData")
#define V_TRANSPORTPOLICY_NAME ("TransportPriority")
#define V_LIFESPANPOLICY_NAME ("Lifespan")
#define V_DURABILITYSERVICEPOLICY_NAME ("DurabilityService")
#define V_USERKEYPOLICY_NAME ("SubscriptionKey")
#define V_READERLIFESPANPOLICY_NAME ("ReaderLifespan")
#define V_SHAREPOLICY_NAME ("Share")
#define V_SCHEDULINGPOLICY_NAME ("Scheduling")
struct v_QosPolicyCount {
    v_policyId policyId;
    c_long count;
};

typedef enum v_sampleRejectedKind {
    S_NOT_REJECTED,
    S_REJECTED_BY_INSTANCES_LIMIT,
    S_REJECTED_BY_SAMPLES_LIMIT,
    S_REJECTED_BY_SAMPLES_PER_INSTANCE_LIMIT
} v_sampleRejectedKind;

struct v_inconsistentTopicInfo {
    c_long totalCount;
    c_long totalChanged;
};

struct v_allDataDisposedInfo {
    c_long totalCount;
    c_long totalChanged;
};

struct v_sampleLostInfo {
    c_long totalCount;
    c_long totalChanged;
};

struct v_livelinessLostInfo {
    c_long totalCount;
    c_long totalChanged;
};

struct v_deadlineMissedInfo {
    c_long totalCount;
    c_long totalChanged;
    v_handle instanceHandle;
};

struct v_sampleRejectedInfo {
    c_long totalCount;
    c_long totalChanged;
    enum v_sampleRejectedKind lastReason;
    v_gid instanceHandle;
};

struct v_incompatibleQosInfo {
    c_long totalCount;
    c_long totalChanged;
    v_policyId lastPolicyId;
    c_long policyCount[28] /*C_ARRAY<c_long,28>*/;
};

struct v_livelinessChangedInfo {
    c_long activeCount;
    c_long activeChanged;
    c_long inactiveCount;
    c_long inactiveChanged;
    v_gid instanceHandle;
};

struct v_topicMatchInfo {
    c_long totalCount;
    c_long totalChanged;
    c_long currentCount;
    c_long currentChanged;
    v_gid instanceHandle;
};

struct v_servicesChangedInfo {
    c_long totalCount;
    c_long totalChanged;
};

struct v_groupsChangedInfo {
    c_long totalCount;
    c_long totalChanged;
};

C_CLASS(v_kernelStatus);

C_STRUCT(v_kernelStatus) {
    C_EXTENDS(v_status);
    struct v_servicesChangedInfo servicesInfo;
};

C_CLASS(v_partitionStatus);

C_STRUCT(v_partitionStatus) {
    C_EXTENDS(v_status);
    struct v_groupsChangedInfo groupsChanged;
};

C_CLASS(v_topicStatus);

C_STRUCT(v_topicStatus) {
    C_EXTENDS(v_status);
    struct v_allDataDisposedInfo allDataDisposed;
    struct v_inconsistentTopicInfo inconsistentTopic;
};

C_CLASS(v_subscriberStatus);

C_STRUCT(v_subscriberStatus) {
    C_EXTENDS(v_status);
    c_long dummy;
};

C_CLASS(v_writerStatus);

C_STRUCT(v_writerStatus) {
    C_EXTENDS(v_status);
    struct v_deadlineMissedInfo deadlineMissed;
    struct v_incompatibleQosInfo incompatibleQos;
    struct v_livelinessLostInfo livelinessLost;
    struct v_topicMatchInfo publicationMatch;
};

C_CLASS(v_readerStatus);

C_STRUCT(v_readerStatus) {
    C_EXTENDS(v_status);
    struct v_deadlineMissedInfo deadlineMissed;
    struct v_incompatibleQosInfo incompatibleQos;
    struct v_livelinessChangedInfo livelinessChanged;
    struct v_sampleLostInfo sampleLost;
    struct v_sampleRejectedInfo sampleRejected;
    struct v_topicMatchInfo subscriptionMatch;
};

typedef enum v_scheduleKind {
    V_SCHED_DEFAULT,
    V_SCHED_TIMESHARING,
    V_SCHED_REALTIME
} v_scheduleKind;

typedef enum v_schedulePriorityKind {
    V_SCHED_PRIO_RELATIVE,
    V_SCHED_PRIO_ABSOLUTE
} v_schedulePriorityKind;

struct v_partitionPolicyI_s {
    c_string v;
};

typedef struct v_partitionPolicyI_s v_partitionPolicyI;

struct v_topicDataPolicyI_contents_s {
    c_array value /*C_ARRAY<c_octet>*/;
    c_long size;
};

struct v_topicDataPolicyI_s {
    struct v_topicDataPolicyI_contents_s v;
};

typedef struct v_topicDataPolicyI_s v_topicDataPolicyI;

struct v_groupDataPolicyI_contents_s {
    c_array value /*C_ARRAY<c_octet>*/;
    c_long size;
};

struct v_groupDataPolicyI_s {
    struct v_groupDataPolicyI_contents_s v;
};

typedef struct v_groupDataPolicyI_s v_groupDataPolicyI;

struct v_lifespanPolicyI_contents_s {
    os_duration duration;
};

struct v_lifespanPolicyI_s {
    struct v_lifespanPolicyI_contents_s v;
};

typedef struct v_lifespanPolicyI_s v_lifespanPolicyI;

struct v_deadlinePolicyI_contents_s {
    os_duration period;
};

struct v_deadlinePolicyI_s {
    struct v_deadlinePolicyI_contents_s v;
};

typedef struct v_deadlinePolicyI_s v_deadlinePolicyI;

struct v_latencyPolicyI_contents_s {
    os_duration duration;
};

struct v_latencyPolicyI_s {
    struct v_latencyPolicyI_contents_s v;
};

typedef struct v_latencyPolicyI_s v_latencyPolicyI;

struct v_pacingPolicyI_contents_s {
    os_duration minSeperation;
};

struct v_pacingPolicyI_s {
    struct v_pacingPolicyI_contents_s v;
};

typedef struct v_pacingPolicyI_s v_pacingPolicyI;

struct v_livelinessPolicyI_contents_s {
    enum v_livelinessKind kind;
    os_duration lease_duration;
};

struct v_livelinessPolicyI_s {
    struct v_livelinessPolicyI_contents_s v;
};

typedef struct v_livelinessPolicyI_s v_livelinessPolicyI;

struct v_readerLifespanPolicyI_contents_s {
    c_bool used;
    os_duration duration;
};

struct v_readerLifespanPolicyI_s {
    struct v_readerLifespanPolicyI_contents_s v;
};

typedef struct v_readerLifespanPolicyI_s v_readerLifespanPolicyI;

struct v_readerLifecyclePolicyI_contents_s {
    os_duration autopurge_nowriter_samples_delay;
    os_duration autopurge_disposed_samples_delay;
    c_bool autopurge_dispose_all;
    c_bool enable_invalid_samples;
    enum v_invalidSampleVisibilityKind invalid_sample_visibility;
};

struct v_readerLifecyclePolicyI_s {
    struct v_readerLifecyclePolicyI_contents_s v;
};

typedef struct v_readerLifecyclePolicyI_s v_readerLifecyclePolicyI;

struct v_writerLifecyclePolicyI_contents_s {
    c_bool autodispose_unregistered_instances;
    os_duration autopurge_suspended_samples_delay;
    os_duration autounregister_instance_delay;
};

struct v_writerLifecyclePolicyI_s {
    struct v_writerLifecyclePolicyI_contents_s v;
};

typedef struct v_writerLifecyclePolicyI_s v_writerLifecyclePolicyI;

struct v_reliabilityPolicyI_contents_s {
    enum v_reliabilityKind kind;
    os_duration max_blocking_time;
    c_bool synchronous;
};

struct v_reliabilityPolicyI_s {
    struct v_reliabilityPolicyI_contents_s v;
};

typedef struct v_reliabilityPolicyI_s v_reliabilityPolicyI;

struct v_durabilityPolicyI_contents_s {
    os_duration service_cleanup_delay;
    enum v_historyQosKind history_kind;
    c_long history_depth;
    c_long max_samples;
    c_long max_instances;
    c_long max_samples_per_instance;
};

struct v_durabilityServicePolicyI_s {
    struct v_durabilityPolicyI_contents_s v;
};

typedef struct v_durabilityServicePolicyI_s v_durabilityServicePolicyI;

struct v_productDataPolicyI_s {
    struct v_productDataPolicy v;
};

typedef struct v_productDataPolicyI_s v_productDataPolicyI;

struct v_sharePolicyI_s {
    struct v_sharePolicy v;
};

typedef struct v_sharePolicyI_s v_sharePolicyI;

struct v_userDataPolicyI_s {
    struct v_userDataPolicy v;
};

typedef struct v_userDataPolicyI_s v_userDataPolicyI;

struct v_transportPolicyI_s {
    struct v_transportPolicy v;
};

typedef struct v_transportPolicyI_s v_transportPolicyI;

struct v_durabilityPolicyI_s {
    struct v_durabilityPolicy v;
};

typedef struct v_durabilityPolicyI_s v_durabilityPolicyI;

struct v_presentationPolicyI_s {
    struct v_presentationPolicy v;
};

typedef struct v_presentationPolicyI_s v_presentationPolicyI;

struct v_ownershipPolicyI_s {
    struct v_ownershipPolicy v;
};

typedef struct v_ownershipPolicyI_s v_ownershipPolicyI;

struct v_strengthPolicyI_s {
    struct v_strengthPolicy v;
};

typedef struct v_strengthPolicyI_s v_strengthPolicyI;

struct v_historyPolicyI_s {
    struct v_historyPolicy v;
};

typedef struct v_historyPolicyI_s v_historyPolicyI;

struct v_orderbyPolicyI_s {
    struct v_orderbyPolicy v;
};

typedef struct v_orderbyPolicyI_s v_orderbyPolicyI;

struct v_resourcePolicyI_s {
    struct v_resourcePolicy v;
};

typedef struct v_resourcePolicyI_s v_resourcePolicyI;

struct v_entityFactoryPolicyI_s {
    struct v_entityFactoryPolicy v;
};

typedef struct v_entityFactoryPolicyI_s v_entityFactoryPolicyI;

struct v_userKeyPolicyI_s {
    struct v_userKeyPolicy v;
};

typedef struct v_userKeyPolicyI_s v_userKeyPolicyI;

struct v_simulationPolicyI_contents_s {
    os_duration oldTime;
    os_duration newTime;
    c_double relativeSpeed;
};

struct v_simulationPolicyI_s {
    struct v_simulationPolicyI_contents_s v;
};

typedef struct v_simulationPolicyI_s v_simulationPolicyI;

struct v_schedulePolicyI_contents_s {
    enum v_scheduleKind kind;
    enum v_schedulePriorityKind priorityKind;
    c_long priority;
};

struct v_schedulePolicyI_s {
    struct v_schedulePolicyI_contents_s v;
};

typedef struct v_schedulePolicyI_s v_schedulePolicyI;

struct v_builtinTopicPolicyI_contents_s {
    c_bool enabled;
};

struct v_builtinTopicPolicyI_s {
    struct v_builtinTopicPolicyI_contents_s v;
};

typedef struct v_builtinTopicPolicyI_s v_builtinTopicPolicyI;

typedef enum v_qosKind {
    V_PARTITION_QOS,
    V_PARTICIPANT_QOS,
    V_TOPIC_QOS,
    V_WRITER_QOS,
    V_READER_QOS,
    V_PUBLISHER_QOS,
    V_SUBSCRIBER_QOS,
    V_INDEX_QOS,
    V_WRITERHISTORY_QOS,
    V_GROUPHISTORY_QOS,
    V_VIEW_QOS,
    V_DATAVIEW_QOS,
    V_KERNEL_QOS,
    V_COUNT_QOS
} v_qosKind;

C_CLASS(v_qos);

C_STRUCT(v_qos) {
    enum v_qosKind kind;
};

struct v_systemIdConfig {
    c_ulong min;
    c_ulong max;
    c_ulong entropySize;
    c_voidp entropy;
};

C_CLASS(v_kernelQos);

C_STRUCT(v_kernelQos) {
    C_EXTENDS(v_qos);
    struct v_systemIdConfig systemIdConfig;
    v_builtinTopicPolicyI builtin;
};

C_CLASS(v_partitionQos);

C_STRUCT(v_partitionQos) {
    C_EXTENDS(v_qos);
    v_simulationPolicyI simulation;
    v_userDataPolicyI userData;
    v_entityFactoryPolicyI entityFactory;
};

C_CLASS(v_participantQos);

C_STRUCT(v_participantQos) {
    C_EXTENDS(v_qos);
    v_userDataPolicyI userData;
    v_schedulePolicyI watchdogScheduling;
    v_entityFactoryPolicyI entityFactory;
};

C_CLASS(v_topicQos);

C_STRUCT(v_topicQos) {
    C_EXTENDS(v_qos);
    v_deadlinePolicyI deadline;
    v_durabilityPolicyI durability;
    v_durabilityServicePolicyI durabilityService;
    v_historyPolicyI history;
    v_latencyPolicyI latency;
    v_lifespanPolicyI lifespan;
    v_livelinessPolicyI liveliness;
    v_orderbyPolicyI orderby;
    v_ownershipPolicyI ownership;
    v_reliabilityPolicyI reliability;
    v_resourcePolicyI resource;
    v_topicDataPolicyI topicData;
    v_transportPolicyI transport;
};

C_CLASS(v_writerQos);

C_STRUCT(v_writerQos) {
    C_EXTENDS(v_qos);
    v_deadlinePolicyI deadline;
    v_durabilityPolicyI durability;
    v_historyPolicyI history;
    v_latencyPolicyI latency;
    v_writerLifecyclePolicyI lifecycle;
    v_lifespanPolicyI lifespan;
    v_livelinessPolicyI liveliness;
    v_orderbyPolicyI orderby;
    v_ownershipPolicyI ownership;
    v_reliabilityPolicyI reliability;
    v_resourcePolicyI resource;
    v_strengthPolicyI strength;
    v_transportPolicyI transport;
    v_userDataPolicyI userData;
};

C_CLASS(v_readerQos);

C_STRUCT(v_readerQos) {
    C_EXTENDS(v_qos);
    v_deadlinePolicyI deadline;
    v_durabilityPolicyI durability;
    v_historyPolicyI history;
    v_latencyPolicyI latency;
    v_readerLifecyclePolicyI lifecycle;
    v_readerLifespanPolicyI lifespan;
    v_livelinessPolicyI liveliness;
    v_orderbyPolicyI orderby;
    v_ownershipPolicyI ownership;
    v_pacingPolicyI pacing;
    v_reliabilityPolicyI reliability;
    v_resourcePolicyI resource;
    v_sharePolicyI share;
    v_userDataPolicyI userData;
    v_userKeyPolicyI userKey;
};

C_CLASS(v_publisherQos);

C_STRUCT(v_publisherQos) {
    C_EXTENDS(v_qos);
    v_groupDataPolicyI groupData;
    v_partitionPolicyI partition;
    v_presentationPolicyI presentation;
    v_entityFactoryPolicyI entityFactory;
};

C_CLASS(v_subscriberQos);

C_STRUCT(v_subscriberQos) {
    C_EXTENDS(v_qos);
    v_groupDataPolicyI groupData;
    v_partitionPolicyI partition;
    v_presentationPolicyI presentation;
    v_sharePolicyI share;
    v_entityFactoryPolicyI entityFactory;
};

C_CLASS(v_dataViewQos);

C_STRUCT(v_dataViewQos) {
    C_EXTENDS(v_qos);
    v_userKeyPolicyI userKey;
};

C_CLASS(v_rxoData);

C_STRUCT(v_rxoData) {
    C_EXTENDS(v_object);
    v_deadlinePolicyI deadline;
    v_durabilityPolicyI durability;
    v_latencyPolicyI latency;
    v_livelinessPolicyI liveliness;
    v_orderbyPolicyI orderby;
    v_ownershipPolicyI ownership;
    v_reliabilityPolicyI reliability;
};

C_CLASS(v_mapping);

C_STRUCT(v_mapping) {
    c_field destination;
    c_field source;
};

C_CLASS(v_projection);

C_STRUCT(v_projection) {
    c_type resultType;
    c_array rules /*C_ARRAY<kernelModuleI::v_mapping>*/;
};

typedef enum v_accessMode {
    V_ACCESS_MODE_UNDEFINED,
    V_ACCESS_MODE_READ,
    V_ACCESS_MODE_WRITE,
    V_ACCESS_MODE_READ_WRITE,
    V_ACCESS_MODE_NONE,
    V_ACCESS_MODE_COUNT
} v_accessMode;

C_CLASS(v_topic);

C_STRUCT(v_topic) {
    C_EXTENDS(v_entity);
    c_voidp owner;
};

C_CLASS(v_topicImpl);

C_STRUCT(v_topicImpl) {
    C_EXTENDS(v_topic);
    enum v_accessMode accessMode;
    c_ulong crcOfName;
    c_ulong crcOfTypeName;
    c_type dataType;
    c_string keyExpr;
    c_type keyType;
    c_array messageKeyList /*C_ARRAY<c_field>*/;
    c_type messageType;
    v_topicQos qos;
};

C_CLASS(v_topicAdapter);

C_STRUCT(v_topicAdapter) {
    C_EXTENDS(v_topic);
    v_topicImpl topic;
};

C_CLASS(v_filter);

C_STRUCT(v_filter) {
    c_object predicate;
    v_topic topic;
};

C_CLASS(v_typeRepresentation);

C_STRUCT(v_typeRepresentation) {
    v_typeHash typeHash;
    v_dataRepresentationId_t dataRepresentationId;
    c_sequence extentions /*C_SEQUENCE<c_octet>*/;
    c_sequence metaData /*C_SEQUENCE<c_octet>*/;
    c_string typeName;
};

C_CLASS(v_partition);

C_STRUCT(v_partition) {
    C_EXTENDS(v_entity);
    c_ushort addCount;
    v_qos qos;
};

C_CLASS(v_instance);

C_STRUCT(v_instance) {
    C_EXTENDS(v_public);
    c_voidp entity;
    v_state state;
};

C_CLASS(v_deadLineInstance);

C_STRUCT(v_deadLineInstance) {
    C_EXTENDS(v_instance);
    os_timeE lastDeadlineResetTime;
    c_voidp next;
    c_voidp prev;
};

C_CLASS(v_deadLineInstanceList);

C_STRUCT(v_deadLineInstanceList) {
    C_EXTENDS(v_object);
    enum v_leaseActionId actionId;
    c_voidp actionObject;
    os_duration leaseDuration;
    v_lease deadlineLease;
    v_deadLineInstance head;
    v_leaseManager leaseManager;
    v_deadLineInstance tail;
};

C_CLASS(v_partitionInterest);

C_STRUCT(v_partitionInterest) {
    c_string expression;
};

C_CLASS(v_partitionAdmin);

C_STRUCT(v_partitionAdmin) {
    C_EXTENDS(v_object);
    c_mutex mutex;
    c_set partitionInterests;
    c_set partitions;
};

C_CLASS(v_node);

C_STRUCT(v_node) {
    v_state nodeState;
};

C_CLASS(v_message);

C_STRUCT(v_message) {
    C_EXTENDS(v_node);
    os_timeE allocTime;
    c_ulong sequenceNumber;
    c_ulong transactionId;
    os_timeW writeTime;
    v_gid writerGID;
    v_gid writerInstanceGID;
    v_messageQos qos;
};

C_CLASS(v_messageEOT);

C_STRUCT(v_messageEOT) {
    C_EXTENDS(v_message);
    c_ulong publisherId;
    c_ulong transactionId;
    c_sequence tidList /*C_SEQUENCE<kernelModule::v_tid>*/;
};

C_CLASS(v_lifespanAdmin);

C_STRUCT(v_lifespanAdmin) {
    c_long sampleCount;
    v_lifespanSample head;
    v_lifespanSample tail;
};

typedef enum v_cacheKind {
    V_CACHE_CONNECTION,
    V_CACHE_TARGETS,
    V_CACHE_ANY
} v_cacheKind;

struct v_cacheLink {
    c_voidp next;
    c_voidp prev;
};

C_CLASS(v_cacheNode);

C_STRUCT(v_cacheNode) {
    struct v_cacheLink connections;
    struct v_cacheLink targets;
};

C_CLASS(v_cache);

C_STRUCT(v_cache) {
    C_EXTENDS(v_cacheNode);
    enum v_cacheKind kind;
    c_type itemType;
};

C_CLASS(v_cacheItem);

C_STRUCT(v_cacheItem) {
    C_EXTENDS(v_cacheNode);
    c_voidp instance;
};

typedef v_cacheItem v_writerCacheItem;

C_CLASS(v_groupCacheItem);

C_STRUCT(v_groupCacheItem) {
    C_EXTENDS(v_cacheItem);
    c_voidp groupInstance;
    c_long pendingResends;
    c_long registrationCount;
};

C_CLASS(v_orderedInstanceSample);

C_STRUCT(v_orderedInstanceSample) {
    C_EXTENDS(v_dataViewSample);
    v_readerSample sample;
};

C_CLASS(v_dataViewSampleTemplate);

C_STRUCT(v_dataViewSampleTemplate) {
    C_EXTENDS(v_dataViewSample);
    v_readerSample sample;
};

C_CLASS(v_dataViewInstance);

C_STRUCT(v_dataViewInstance) {
    C_EXTENDS(v_instance);
    c_long sampleCount;
};

C_CLASS(v_dataViewInstanceTemplate);

C_STRUCT(v_dataViewInstanceTemplate) {
    C_EXTENDS(v_dataViewInstance);
    v_dataViewSample sample;
};

C_CLASS(v_dataReaderSampleTemplate);

C_STRUCT(v_dataReaderSampleTemplate) {
    C_EXTENDS(v_dataReaderSample);
    v_message message;
};

struct v_owner {
    v_gid gid;
    c_long strength;
    c_bool exclusive;
};

struct v_historyBookmark {
    os_timeW sourceTimestamp;
    v_gid gid;
    c_ulong sequenceNumber;
    c_bool isImplicit;
};

C_CLASS(v_dataReaderInstance);

C_STRUCT(v_dataReaderInstance) {
    C_EXTENDS(v_deadLineInstance);
    c_long disposeCount;
    os_timeW epoch;
    c_long historySampleCount;
    c_voidp index;
    struct v_historyBookmark lastConsumed;
    os_timeE lastInsertionTime;
    c_long liveliness;
    c_long noWritersCount;
    struct v_owner owner;
    os_timeM purgeInsertionTime;
    c_long resourceSampleCount;
    c_voidp userData;
    c_bool hasBeenAlive;
    c_bool inNotEmptyList;
    v_dataReaderSampleTemplate pending;
};

C_CLASS(v_orderedInstance);

C_STRUCT(v_orderedInstance) {
    C_EXTENDS(v_dataViewInstanceTemplate);
    c_voidp bookmark;
    v_state mask;
    enum v_orderbyKind orderby;
    enum v_presentationKind presentation;
    c_voidp samples;
    c_list lazynew;
};

C_CLASS(v_dataReaderInstanceTemplate);

C_STRUCT(v_dataReaderInstanceTemplate) {
    C_EXTENDS(v_dataReaderInstance);
    c_voidp oldest;
    v_dataReaderSampleTemplate sample;
};

C_CLASS(v_entry);

C_STRUCT(v_entry) {
    C_EXTENDS(v_object);
    c_long nvgCount;
    c_voidp reader;
    c_bool complete;
    c_set groups;
};

struct v_entrySet {
    c_mutex mutex;
    c_set entries;
};

C_CLASS(v_historicalDeleteRequest);

C_STRUCT(v_historicalDeleteRequest) {
    C_EXTENDS(v_object);
    os_timeE deleteTime;
    c_string partitionExpr;
    c_string topicExpr;
};

C_CLASS(v_historicalDataRequest);

C_STRUCT(v_historicalDataRequest) {
    C_EXTENDS(v_object);
    os_timeW maxSourceTimestamp;
    os_timeW minSourceTimestamp;
    v_resourcePolicyI resourceLimits;
    os_duration timeout;
    c_string filter;
    c_array filterParams /*C_ARRAY<c_string>*/;
};

C_CLASS(v_persistentSnapshotRequest);

C_STRUCT(v_persistentSnapshotRequest) {
    C_EXTENDS(v_object);
    c_string partitionExpr;
    c_string topicExpr;
    c_string uri;
};

C_CLASS(v_reader);

C_STRUCT(v_reader) {
    C_EXTENDS(v_collection);
    struct v_entrySet entrySet;
    c_cond historicalDataCondition;
    c_voidp subscriber;
    c_bool historicalDataComplete;
    v_historicalDataRequest historicalDataRequest;
    v_readerQos qos;
    v_subscriberQos subQos;
};

C_CLASS(v_groupEntry);

C_STRUCT(v_groupEntry) {
    c_long sequenceNumber;
    v_cache connectionCache;
    v_entry entry;
    v_groupEntry next;
};

struct v_groupEntrySet {
    v_groupEntry firstEntry;
    c_long lastSequenceNumber;
};

C_CLASS(v_groupStream);

C_CLASS(v_transactionElement);

C_STRUCT(v_transactionElement) {
    v_instance instance;
    v_message message;
};

C_CLASS(v_transaction);

C_STRUCT(v_transaction) {
    C_EXTENDS(v_object);
    c_voidp admin;
    c_long count;
    c_long eotCount;
    c_long size;
    c_voidp transactionGroup;
    c_ulong transactionId;
    c_voidp writer;
    c_bool aborted;
    c_bool elementZero;
    c_bool isMarked;
    c_bool sampleLostNotified;
    c_array elements /*C_ARRAY<kernelModuleI::v_transactionElement>*/;
    v_messageEOT eot;
};

C_CLASS(v_registration);

C_STRUCT(v_registration) {
    c_ulong sequenceNumber;
    v_state state;
    os_timeE unregisterTime;
    os_timeW writeTime;
    v_gid writerGID;
    v_messageQos qos;
    v_registration next;
    v_transaction transaction;
};

C_CLASS(v_groupInstance);

C_STRUCT(v_groupInstance) {
    C_EXTENDS(v_object);
    c_long count;
    os_timeE epoch;
    c_voidp group;
    c_long historySampleCount;
    c_voidp oldest;
    struct v_owner owner;
    c_long resourceSampleCount;
    c_ulong state;
    v_registration registrations;
    v_cache targetCache;
    v_registration unregistrations;
};

C_CLASS(v_groupPurgeItem);

C_STRUCT(v_groupPurgeItem) {
    os_timeE insertionTime;
    v_groupInstance instance;
    v_groupPurgeItem next;
};

C_CLASS(v_groupwriterAdministration);

C_STRUCT(v_groupwriterAdministration) {
    v_gid gid;
    c_ulong seqNumber;
};

C_CLASS(v_transactionWriter);

C_STRUCT(v_transactionWriter) {
    C_EXTENDS(v_object);
    c_voidp admin;
    c_ulong matchCount;
    c_ulong publisherId;
    v_gid writerGID;
    c_list transactions;
};

C_CLASS(v_transactionAdmin);

C_STRUCT(v_transactionAdmin) {
    C_EXTENDS(v_object);
    c_voidp groupAdmin;
    c_voidp owner;
    c_list history;
    v_topic topic;
    c_set writers;
};

C_CLASS(v_group);

C_STRUCT(v_group) {
    C_EXTENDS(v_observer);
    c_voidp disposedInstancesLast;
    os_timeW lastDisposeAllTime;
    c_mutex mutex;
    struct v_groupEntrySet networkEntrySet;
    enum v_accessMode partitionAccessMode;
    c_voidp purgeListEmptyLast;
    c_long resourceSampleCount;
    struct v_groupEntrySet routedEntrySet;
    c_long sequenceNumber;
    struct v_groupEntrySet topicEntrySet;
    struct v_groupEntrySet variantEntrySet;
    c_bool complete;
    c_bool infWait;
    c_bool onRequest;
    c_bool pristine;
    c_bool routingEnabled;
    c_set attachedServices;
    v_groupInstance cachedInstance;
    v_message cachedRegMsg;
    v_groupPurgeItem disposedInstances;
    c_type instanceType;
    c_set instances;
    v_lifespanAdmin lifespanAdmin;
    c_string name;
    c_set notInterestedServices;
    v_partition partition;
    v_groupPurgeItem purgeListEmpty;
    c_type sampleType;
    c_set streams;
    v_topic topic;
    v_transactionAdmin transactionAdmin;
    c_set writerAdministration;
};

C_STRUCT(v_groupStream) {
    C_EXTENDS(v_reader);
    c_list expr;
    c_set groups;
};

C_CLASS(v_groupSample);

C_STRUCT(v_groupSample) {
    C_EXTENDS(v_lifespanSample);
    c_voidp instance;
    c_voidp newer;
    v_groupSample older;
    v_transaction transaction;
};

C_CLASS(v_groupSampleTemplate);

C_STRUCT(v_groupSampleTemplate) {
    C_EXTENDS(v_groupSample);
    v_message message;
};

C_CLASS(v_transactionGroupReader);

C_STRUCT(v_transactionGroupReader) {
    C_EXTENDS(v_object);
    v_gid gid;
    v_rxoData rxo;
    v_topic topic;
};

C_CLASS(v_transactionGroupWriter);

C_STRUCT(v_transactionGroupWriter) {
    C_EXTENDS(v_object);
    v_gid gid;
    c_voidp publisher;
    c_bool discovered;
    c_set readers;
    v_rxoData rxo;
    v_topic topic;
};

C_CLASS(v_transactionGroup);

C_STRUCT(v_transactionGroup) {
    C_EXTENDS(v_object);
    c_ulong matchCount;
    c_voidp publisher;
    c_ulong publisherId;
    c_ulong transactionId;
    c_bool aborted;
    c_bool triggered;
    c_list transactions;
    c_set writers;
};

C_CLASS(v_transactionPublisher);

C_STRUCT(v_transactionPublisher) {
    C_EXTENDS(v_object);
    c_voidp admin;
    c_ulong lastRemovedTransactionId;
    c_ulong publisherId;
    c_ulong systemId;
    c_list transactions;
    c_set writers;
};

C_CLASS(v_transactionGroupAdmin);

C_STRUCT(v_transactionGroupAdmin) {
    C_EXTENDS(v_object);
    c_mutex mutex;
    c_voidp owner;
    c_list history;
    c_list pending;
    c_set publishers;
    c_set readers;
};

C_CLASS(v_groupInstanceTemplate);

C_STRUCT(v_groupInstanceTemplate) {
    C_EXTENDS(v_groupInstance);
    v_groupSampleTemplate newest;
};

typedef enum v_groupAttachState {
    V_GROUP_ATTACH_STATE_UNKNOWN,
    V_GROUP_ATTACH_STATE_ATTACHED,
    V_GROUP_ATTACH_STATE_NO_INTEREST
} v_groupAttachState;

typedef c_octet v_resendScope;

typedef c_octet v_resendItemKind;

C_CLASS(v_writerResendItem);

C_STRUCT(v_writerResendItem) {
    c_voidp older;
    v_resendItemKind kind;
    v_resendScope scope;
    v_writerResendItem newer;
};

C_CLASS(v_writerEotSample);

C_STRUCT(v_writerEotSample) {
    C_EXTENDS(v_writerResendItem);
    v_message message;
};

C_CLASS(v_writerSample);

C_STRUCT(v_writerSample) {
    C_EXTENDS(v_writerResendItem);
    c_voidp instance;
    c_voidp prev;
    v_writerSample next;
};

C_CLASS(v_writerSampleTemplate);

C_STRUCT(v_writerSampleTemplate) {
    C_EXTENDS(v_writerSample);
    v_message message;
};

C_CLASS(v_writerInstance);

C_STRUCT(v_writerInstance) {
    C_EXTENDS(v_deadLineInstance);
    c_long deadlineCount;
    c_voidp last;
    c_long messageCount;
    v_cache targetCache;
};

C_CLASS(v_writerInstanceTemplate);

C_STRUCT(v_writerInstanceTemplate) {
    C_EXTENDS(v_writerInstance);
    v_writerSample sample;
};

C_CLASS(v_writerGroup);

C_STRUCT(v_writerGroup) {
    v_group group;
    v_cache targetCache;
    v_writerGroup next;
};

struct v_writerGroupSet {
    v_writerGroup firstGroup;
};

C_CLASS(v_deliveryWaitList);

C_STRUCT(v_deliveryWaitList) {
    c_cond cv;
    c_voidp guard;
    c_mutex mutex;
    c_ulong sequenceNumber;
    c_ulong waitCount;
    c_array readerGID /*C_ARRAY<kernelModule::v_gid>*/;
};

C_CLASS(v_deliveryPublisher);

C_STRUCT(v_deliveryPublisher) {
    c_ulong count;
    v_gid readerGID;
};

C_CLASS(v_deliveryGuard);

C_STRUCT(v_deliveryGuard) {
    c_mutex mutex;
    c_voidp owner;
    v_gid writerGID;
    c_type gidType;
    c_set publications;
    c_set waitlists;
};

struct v_writerInOrderAdmin {
    c_voidp resendNewest;
    v_writerResendItem resendOldest;
};

struct v_writerResendAdmin {
    enum v_presentationKind _d;
    union {
        c_set instances;
        struct v_writerInOrderAdmin admin;
    } _u;
};

C_CLASS(v_writer);

C_STRUCT(v_writer) {
    C_EXTENDS(v_entity);
    c_ulong count;
    c_long deadlineCountLimit;
    c_long depth;
    c_ulong eotCount;
    struct v_writerGroupSet groupSet;
    c_voidp publisher;
    struct v_writerResendAdmin resend;
    c_ulong sequenceNumber;
    c_ulong transactionId;
    c_bool alive;
    c_bool coherent_access;
    c_bool infWait;
    c_bool ordered_access;
    c_bool transactionStarted;
    v_deadLineInstanceList deadlineList;
    v_deliveryGuard deliveryGuard;
    c_type instanceType;
    c_set instances;
    v_lease livelinessLease;
    c_property messageField;
    v_messageQos msgQos;
    c_type msgQosType;
    v_writerQos qos;
    v_messageQos relQos;
    c_type sampleType;
    v_writerStatistics statistics;
    v_topic topic;
};

C_CLASS(v_subscriber);

C_STRUCT(v_subscriber) {
    C_EXTENDS(v_entity);
    c_ulong accessCount;
    c_address accessOwner;
    c_cond cond;
    c_mutex mutex;
    c_voidp participant;
    struct v_presentationPolicy presentation;
    c_ulong shareCount;
    c_mutex sharesMutex;
    c_bool accessBusy;
    v_orderedInstance orderedInstance;
    v_partitionAdmin partitions;
    v_subscriberQos qos;
    c_set readers;
    c_set shares;
    v_transactionGroupAdmin transactionGroupAdmin;
};

C_CLASS(v_publisher);

C_STRUCT(v_publisher) {
    C_EXTENDS(v_entity);
    c_ulong coherentNestingLevel;
    c_lock lock;
    enum v_orderbyKind orderby;
    c_voidp participant;
    os_timeE suspendTime;
    c_ulong transactionId;
    c_bool orderbyFixed;
    v_partitionAdmin partitions;
    v_publisherQos qos;
    c_sequence tidList /*C_SEQUENCE<kernelModule::v_tid>*/;
    c_set writers;
};

#define V_BUILT_IN_PARTICIPANT_NAME ("Built-in participant")
C_CLASS(v_participant);

C_STRUCT(v_participant) {
    C_EXTENDS(v_entity);
    c_mutex builtinLock;
    c_lock lock;
    c_mutex newGroupListMutex;
    c_longlong processId;
    c_cond resendCond;
    c_ulong resendIteration;
    c_mutex resendMutex;
    c_bool processIsZombie;
    c_bool resendQuit;
    v_subscriber builtinSubscriber;
    c_set entities;
    v_leaseManager leaseManager;
    c_list newGroupList;
    c_string processName;
    v_participantQos qos;
    c_set resendWriters;
    c_set typeRepresentations;
};

typedef enum v_serviceStateKind {
    STATE_NONE,
    STATE_INITIALISING,
    STATE_OPERATIONAL,
    STATE_INCOMPATIBLE_CONFIGURATION,
    STATE_TERMINATING,
    STATE_TERMINATED,
    STATE_DIED
} v_serviceStateKind;

typedef enum v_serviceType {
    V_SERVICETYPE_NONE,
    V_SERVICETYPE_DISCOVERY,
    V_SERVICETYPE_ROUTING,
    V_SERVICETYPE_NETWORK,
    V_SERVICETYPE_TUNER,
    V_SERVICETYPE_DDSI2,
    V_SERVICETYPE_DDSI2E,
    V_SERVICETYPE_SNETWORK,
    V_SERVICETYPE_DURABILITY,
    V_SERVICETYPE_RECORD_REPLAY,
    V_SERVICETYPE_DBMSCONNECT,
    V_SERVICETYPE_SPLICED,
    V_SERVICETYPE_NWBRIDGE,
    V_SERVICETYPE_CMAGENT,
    V_SERVICETYPE_INCOGNITO,
    V_SERVICETYPE_COUNT
} v_serviceType;

C_CLASS(v_serviceState);

C_STRUCT(v_serviceState) {
    C_EXTENDS(v_observable);
    c_lock lock;
    enum v_serviceStateKind stateKind;
    c_string name;
};

C_CLASS(v_service);

C_STRUCT(v_service) {
    C_EXTENDS(v_participant);
    enum v_serviceType serviceType;
    v_lease lease;
    v_serviceState state;
};

C_CLASS(v_networking);

C_STRUCT(v_networking) {
    C_EXTENDS(v_service);
    v_networkingStatistics statistics;
};

C_CLASS(v_durability);

C_STRUCT(v_durability) {
    C_EXTENDS(v_service);
    v_durabilityStatistics statistics;
};

C_CLASS(v_nwbridge);

C_STRUCT(v_nwbridge) {
    C_EXTENDS(v_service);
    c_long dummy;
};

C_CLASS(v_cmsoap);

C_STRUCT(v_cmsoap) {
    C_EXTENDS(v_service);
    v_cmsoapStatistics statistics;
};

C_CLASS(v_rnr);

C_STRUCT(v_rnr) {
    C_EXTENDS(v_service);
    v_rnrStatistics statistics;
};

C_CLASS(v_serviceManager);

C_STRUCT(v_serviceManager) {
    C_EXTENDS(v_entity);
    c_mutex mutex;
    c_set serviceStates;
};

typedef enum v_cfKind {
    V_CFNODE,
    V_CFATTRIBUTE,
    V_CFELEMENT,
    V_CFDATA,
    V_CFNODECOLLECTION,
    V_CFCOUNT
} v_cfKind;

C_CLASS(v_cfElement);

C_CLASS(v_configuration);

C_STRUCT(v_configuration) {
    C_EXTENDS(v_public);
    c_ulong idCounter;
    c_string uri;
    v_cfElement root;
};

C_CLASS(v_cfNode);

C_STRUCT(v_cfNode) {
    c_ulong id;
    enum v_cfKind kind;
    v_configuration configuration;
    c_string name;
};

C_CLASS(v_cfAttribute);

C_STRUCT(v_cfAttribute) {
    C_EXTENDS(v_cfNode);
    struct c_value value;
};

C_STRUCT(v_cfElement) {
    C_EXTENDS(v_cfNode);
    c_set attributes;
    c_set children;
};

C_CLASS(v_cfData);

C_STRUCT(v_cfData) {
    C_EXTENDS(v_cfNode);
    struct c_value value;
};

typedef enum v_infoId {
    V_PARTICIPANTINFO_ID,
    V_TYPEINFO_ID,
    V_TOPICINFO_ID,
    V_PUBLICATIONINFO_ID,
    V_SUBSCRIPTIONINFO_ID,
    V_HEARTBEATINFO_ID,
    V_DELIVERYINFO_ID,
    V_C_AND_M_COMMAND_ID,
    V_CMPARTICIPANTINFO_ID,
    V_CMDATAWRITERINFO_ID,
    V_CMDATAREADERINFO_ID,
    V_CMPUBLISHERINFO_ID,
    V_CMSUBSCRIBERINFO_ID,
    V_INFO_ID_COUNT
} v_infoId;

C_CLASS(v_heartbeatInfoTemplate);

C_STRUCT(v_heartbeatInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_heartbeatInfo userData;
};

C_CLASS(v_topicInfoTemplate);

C_STRUCT(v_topicInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_topicInfo userData;
};

C_CLASS(v_typeInfoTemplate);

C_STRUCT(v_typeInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_typeInfo userData;
};

C_CLASS(v_publicationInfoTemplate);

C_STRUCT(v_publicationInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_publicationInfo userData;
};

C_CLASS(v_dataWriterCMInfoTemplate);

C_STRUCT(v_dataWriterCMInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_dataWriterCMInfo userData;
};

C_CLASS(v_subscriptionInfoTemplate);

C_STRUCT(v_subscriptionInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_subscriptionInfo userData;
};

C_CLASS(v_dataReaderCMInfoTemplate);

C_STRUCT(v_dataReaderCMInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_dataReaderCMInfo userData;
};

C_CLASS(v_publisherCMInfoTemplate);

C_STRUCT(v_publisherCMInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_publisherCMInfo userData;
};

C_CLASS(v_subscriberCMInfoTemplate);

C_STRUCT(v_subscriberCMInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_subscriberCMInfo userData;
};

C_CLASS(v_deliveryInfoTemplate);

C_STRUCT(v_deliveryInfoTemplate) {
    C_EXTENDS(v_message);
    struct v_deliveryInfo userData;
};

#define V_OWNERSTRENGTH_MINIMUM (2147483647)
C_CLASS(v_index);

C_STRUCT(v_index) {
    C_EXTENDS(v_object);
    c_voidp entry;
    c_voidp reader;
    c_array messageKeyList /*C_ARRAY<c_field>*/;
    c_set notEmptyList;
    c_type objectType;
    c_set objects;
    c_array sourceKeyList /*C_ARRAY<c_field>*/;
};

C_CLASS(v_purgeListItem);

C_STRUCT(v_purgeListItem) {
    c_long genCount;
    os_timeM insertionTime;
    v_dataReaderInstance instance;
};

C_CLASS(v_dataReaderEntry);

C_STRUCT(v_dataReaderEntry) {
    C_EXTENDS(v_entry);
    c_array filterData /*C_ARRAY<kernelModuleI::v_filter>*/;
    c_array filterInstance /*C_ARRAY<kernelModuleI::v_filter>*/;
    v_index index;
    v_lifespanAdmin lifespanAdmin;
    c_list purgeListDisposed;
    c_list purgeListNotEmpty;
    v_topic topic;
    v_transactionAdmin transactionAdmin;
};

C_CLASS(v_deadLineReaderInstanceList);

C_STRUCT(v_deadLineReaderInstanceList) {
    c_voidp lastInstance;
    v_dataReaderInstance firstInstance;
};

C_CLASS(v_dataView);

C_STRUCT(v_dataView) {
    C_EXTENDS(v_collection);
    c_voidp reader;
    c_type instanceType;
    c_set instances;
    v_dataViewQos qos;
    c_type sampleType;
    v_dataViewInstance takenInstance;
};

C_CLASS(v_dataReader);

C_STRUCT(v_dataReader) {
    C_EXTENDS(v_reader);
    os_duration maximumSeparationTime;
    c_long notReadCount;
    c_long notReadTriggerCount;
    c_long notReadTriggerThreshold;
    c_ulong readCnt;
    c_long resourceSampleCount;
    c_ulong shareCount;
    c_bool maxInstances;
    c_bool walkRequired;
    v_deadLineInstanceList deadLineList;
    v_index index;
    v_lease minimumSeparationLease;
    c_list minimumSeparationList;
    v_orderedInstance orderedInstance;
    v_projection projection;
    c_type sampleType;
    v_dataReaderStatistics statistics;
    v_dataReaderSample triggerValue;
    c_set views;
};

C_CLASS(v_deliveryService);

C_STRUCT(v_deliveryService) {
    C_EXTENDS(v_reader);
    c_mutex mutex;
    c_set guards;
    c_set subscriptions;
};

C_CLASS(v_deliveryServiceEntry);

C_STRUCT(v_deliveryServiceEntry) {
    C_EXTENDS(v_entry);
    v_topic topic;
};

typedef enum v_groupActionKind {
    V_GROUP_ACTION_WRITE,
    V_GROUP_ACTION_DISPOSE,
    V_GROUP_ACTION_REGISTER,
    V_GROUP_ACTION_UNREGISTER,
    V_GROUP_ACTION_LIFESPAN_EXPIRE,
    V_GROUP_ACTION_CLEANUP_DELAY_EXPIRE,
    V_GROUP_ACTION_DELETE_DATA,
    V_GROUP_ACTION_TRANSACTION_COMPLETE
} v_groupActionKind;

C_CLASS(v_groupAction);

C_STRUCT(v_groupAction) {
    C_EXTENDS(v_object);
    os_timeE actionTime;
    enum v_groupActionKind kind;
    v_group group;
    v_message message;
};

C_CLASS(v_groupQueueSample);

C_STRUCT(v_groupQueueSample) {
    v_groupAction action;
    v_groupQueueSample next;
};

C_CLASS(v_groupQueue);

C_STRUCT(v_groupQueue) {
    C_EXTENDS(v_groupStream);
    c_voidp marker;
    c_ulong maxSize;
    c_ulong size;
    c_bool markerReached;
    v_groupQueueSample head;
    v_groupQueueStatistics statistics;
    v_groupQueueSample tail;
};

typedef c_ulong v_networkId;

#define V_NETWORKID_LOCAL (0U)
#define V_NETWORKID_ANY (4294967295U)
#define V_NETWORKID_DDSI (2880289470U)
typedef c_ulong v_networkPartitionId;

#define V_NETWORKPARTITIONID_LOCALHOST (4294967295U)
struct v_networkHashValue_s {
    c_octet h1;
    c_octet h2;
    c_octet h3;
    c_octet h4;
};

typedef struct v_networkHashValue_s v_networkHashValue;

typedef enum v_networkRoutingMode {
    V_NETWORKROUTING_NONE,
    V_NETWORKROUTING_FROM_GROUP,
    V_NETWORKROUTING_ROUTING,
    V_NETWORKROUTING_ECHO
} v_networkRoutingMode;

C_CLASS(v_networkReaderEntry);

C_STRUCT(v_networkReaderEntry) {
    C_EXTENDS(v_entry);
    c_ulong channelCountdown;
    c_mutex channelCountdownMutex;
    c_voidp group;
    v_networkId networkId;
    v_networkPartitionId networkPartitionId;
    enum v_networkRoutingMode routing;
    v_networkHashValue hashValue;
};

C_CLASS(v_networkQueueSample);

C_STRUCT(v_networkQueueSample) {
    v_gid receiver;
    v_gid sender;
    c_ulong sequenceNumber;
    c_bool sendTo;
    v_networkReaderEntry entry;
    v_message message;
    v_networkQueueSample next;
};

C_CLASS(v_networkStatusMarker);

C_STRUCT(v_networkStatusMarker) {
    c_voidp lastSample;
    c_ulong priority;
    os_timeE sendBefore;
    v_networkQueueSample firstSample;
    v_networkStatusMarker next;
};

C_CLASS(v_networkQueue);

C_STRUCT(v_networkQueue) {
    c_ulong currentMsgCount;
    c_cond cv;
    c_voidp lastStatusMarker;
    c_ulong maxMsgCount;
    c_ulong msecsResolution;
    c_mutex mutex;
    os_timeE nextWakeup;
    c_ulong phaseMilliSeconds;
    c_ulong priority;
    os_duration resolution;
    c_bool P2P;
    c_bool periodic;
    c_bool reliable;
    c_bool threadWaiting;
    c_bool triggered;
    v_networkStatusMarker firstStatusMarker;
    v_networkQueueSample freeSamples;
    v_networkStatusMarker freeStatusMarkers;
    c_type sampleType;
    v_networkQueueStatistics statistics;
    c_type statusMarkerType;
};

C_CLASS(v_networkReader);

C_STRUCT(v_networkReader) {
    C_EXTENDS(v_reader);
    c_ulong nofQueues;
    c_bool ignoreReliabilityQoS;
    c_bool remoteActivity;
    v_networkQueue defaultQueue;
    c_array queueCache /*C_ARRAY<kernelModuleI::v_networkQueue>*/;
    c_array queues /*C_ARRAY<kernelModuleI::v_networkQueue>*/;
    v_networkReaderStatistics statistics;
};

typedef enum v_durabilityClientTopicIds {
    V_DC_TOPIC_STATE_ID,
    V_DC_TOPIC_STATE_REQUEST_ID,
    V_DC_TOPIC_DATA_ID,
    V_DC_TOPIC_DATA_REQUEST_ID,
    V_DC_TOPIC_ID_COUNT
} v_durabilityClientTopicIds;

typedef enum v_durabilityClientReaderIds {
    V_DC_READER_STATE_ID,
    V_DC_READER_DATA_ID,
    V_DC_READER_SUBSCRIPTIONINFO_ID,
    V_DC_READER_ID_COUNT
} v_durabilityClientReaderIds;

typedef enum v_durabilityClientWriterIds {
    V_DC_WRITER_STATE_REQUEST_ID,
    V_DC_WRITER_DATA_REQUEST_ID,
    V_DC_WRITER_ID_COUNT
} v_durabilityClientWriterIds;

typedef enum v_durabilityClientPartitionIds {
    V_DC_PARTITION_REQUEST_ID,
    V_DC_PARTITION_GLOBAL_DATA_ID,
    V_DC_PARTITION_PRIVATE_DATA_ID,
    V_DC_PARTITION_ID_COUNT
} v_durabilityClientPartitionIds;

C_CLASS(v_durabilityClientServer);

C_STRUCT(v_durabilityClientServer) {
    c_longlong prefixId;
    c_ulong rdrFlags;
    c_longlong suffixId;
    c_ulong systemId;
};

C_CLASS(v_durabilityClientEvent);

C_STRUCT(v_durabilityClientEvent) {
    v_handle entity;
    c_ulong kind;
    os_duration timeout;
    c_object eventData;
};

C_CLASS(v_durabilityClient);

C_STRUCT(v_durabilityClient) {
    C_EXTENDS(v_object);
    c_voidp chains;
    c_voidp durablePolicies;
    c_mutex mutex;
    c_string partitions[3] /*C_ARRAY<c_string,3>*/;
    v_dataReader readers[3] /*C_ARRAY<kernelModuleI::v_dataReader,3>*/;
    c_voidp rejected_chains;
    c_ulong requestId;
    c_voidp servers2;
    v_topic topics[4] /*C_ARRAY<kernelModuleI::v_topic,4>*/;
    v_writer writers[2] /*C_ARRAY<kernelModuleI::v_writer,2>*/;
    c_bool terminate;
    c_bool y2038ready;
    v_subscriber builtinSubscriber;
    v_participant participant;
    v_publisher publisher;
    c_list queue;
    c_set servers;
    v_subscriber subscriber;
    v_waitset waitset;
};

C_CLASS(v_groupSet);

C_STRUCT(v_groupSet) {
    C_EXTENDS(v_observable);
    c_lock lock;
    c_long sequenceNumber;
    c_set groups;
};

C_CLASS(v_builtin);

C_STRUCT(v_builtin) {
    v_topic topics[13] /*C_ARRAY<kernelModuleI::v_topic,13>*/;
    v_writer writers[13] /*C_ARRAY<kernelModuleI::v_writer,13>*/;
    v_kernelQos kernelQos;
    v_participant participant;
    v_publisher publisher;
};

C_CLASS(v_pendingDisposeElement);

C_STRUCT(v_pendingDisposeElement) {
    struct v_commandDisposeAllData disposeCmd;
    os_timeW disposeTimestamp;
};

C_CLASS(v_kernel);

C_STRUCT(v_kernel) {
    C_EXTENDS(v_entity);
    v_gid GID;
    c_cond accessCond;
    c_ulong accessCount;
    c_mutex accessLock;
    c_lock lock;
    c_ulong maxInstancesWarnLevel;
    c_ulong maxSamplesPerInstanceWarnLevel;
    c_ulong maxSamplesWarnLevel;
    c_ulong networkServiceCount;
    c_mutex pendingDisposeListMutex;
    os_duration retentionPeriod;
    c_mutex sharesMutex;
    pa_uint32_t transactionCount;
    c_type type[118] /*C_ARRAY<c_type,118>*/;
    c_bool accessBusy;
    c_bool durabilitySupport;
    c_bool maxInstancesWarnShown;
    c_bool maxSamplesPerInstanceWarnShown;
    c_bool maxSamplesWarnShown;
    c_bool splicedRunning;
    c_set attachedProcesses;
    v_builtin builtin;
    v_configuration configuration;
    v_deliveryService deliveryService;
    c_set enabledStatisticsCategories;
    v_groupSet groupSet;
    v_handleServer handleServer;
    v_leaseManager livelinessLM;
    c_set participants;
    c_set partitions;
    c_list pendingDisposeList;
    v_kernelQos qos;
    v_serviceManager serviceManager;
    c_set shares;
    v_kernelStatistics statistics;
    c_set topics;
    v_transactionGroupAdmin transactionGroupAdmin;
    c_set typeRepresentations;
};

#define V_SPLICED_NAME ("splicedaemon")
C_CLASS(v_spliced);

C_STRUCT(v_spliced) {
    C_EXTENDS(v_service);
    c_set builtinData[13] /*C_ARRAY<kernelModuleI::C_SET<kernelModuleI::v_message>,13>*/;
    c_mutex builtinDataMutex;
    c_mutex cAndMCommandMutex;
    struct v_heartbeatInfo hb;
    c_mutex mtx;
    v_dataReader readers[13] /*C_ARRAY<kernelModuleI::v_dataReader,13>*/;
    c_bool cAndMCommandDispatcherQuit;
    c_bool quit;
    v_subscriber builtinSubscriber;
    v_waitset cAndMCommandWaitSet;
    v_durabilityClient durabilityClient;
    v_lease hbCheck;
    v_leaseManager hbManager;
    v_lease hbUpdate;
    c_set missedHB;
    v_waitset ws;
};

OS_API c_bool
loadkernelModuleI(
    c_base base);

#undef OS_API


#endif /* MODULE_kernelModuleI_HEADER */

