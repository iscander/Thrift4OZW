/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import <TProtocol.h>
#import <TApplicationException.h>
#import <TProtocolUtil.h>
#import <TProcessor.h>


enum OpenZWaveRemoteValueGenre {
  RemoteValueGenre_ValueGenre_Basic = 0,
  RemoteValueGenre_ValueGenre_User = 1,
  RemoteValueGenre_ValueGenre_Config = 2,
  RemoteValueGenre_ValueGenre_System = 3,
  RemoteValueGenre_ValueGenre_Count = 4
};

enum OpenZWaveRemoteValueType {
  RemoteValueType_ValueType_Bool = 0,
  RemoteValueType_ValueType_Byte = 1,
  RemoteValueType_ValueType_Decimal = 2,
  RemoteValueType_ValueType_Int = 3,
  RemoteValueType_ValueType_List = 4,
  RemoteValueType_ValueType_Schedule = 5,
  RemoteValueType_ValueType_Short = 6,
  RemoteValueType_ValueType_String = 7,
  RemoteValueType_ValueType_Button = 8,
  RemoteValueType_ValueType_Max = 8
};

enum OpenZWaveDriverControllerCommand {
  DriverControllerCommand_ControllerCommand_None = 0,
  DriverControllerCommand_ControllerCommand_AddController = 1,
  DriverControllerCommand_ControllerCommand_AddDevice = 2,
  DriverControllerCommand_ControllerCommand_CreateNewPrimary = 3,
  DriverControllerCommand_ControllerCommand_ReceiveConfiguration = 4,
  DriverControllerCommand_ControllerCommand_RemoveController = 5,
  DriverControllerCommand_ControllerCommand_RemoveDevice = 6,
  DriverControllerCommand_ControllerCommand_RemoveFailedNode = 7,
  DriverControllerCommand_ControllerCommand_HasNodeFailed = 8,
  DriverControllerCommand_ControllerCommand_ReplaceFailedNode = 9,
  DriverControllerCommand_ControllerCommand_TransferPrimaryRole = 10,
  DriverControllerCommand_ControllerCommand_RequestNetworkUpdate = 11,
  DriverControllerCommand_ControllerCommand_RequestNodeNeighborUpdate = 12,
  DriverControllerCommand_ControllerCommand_AssignReturnRoute = 13,
  DriverControllerCommand_ControllerCommand_DeleteAllReturnRoutes = 14,
  DriverControllerCommand_ControllerCommand_CreateButton = 15,
  DriverControllerCommand_ControllerCommand_DeleteButton = 16
};

@interface OpenZWaveRemoteValueID : NSObject <NSCoding> {
  int32_t ___homeId;
  uint8_t ___nodeId;
  int ___genre;
  uint8_t ___commandClassId;
  uint8_t ___instance;
  uint8_t ___valueIndex;
  int ___type;

  BOOL ___homeId_isset;
  BOOL ___nodeId_isset;
  BOOL ___genre_isset;
  BOOL ___commandClassId_isset;
  BOOL ___instance_isset;
  BOOL ___valueIndex_isset;
  BOOL ___type_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=_homeId, setter=set_homeId:) int32_t _homeId;
@property (nonatomic, getter=_nodeId, setter=set_nodeId:) uint8_t _nodeId;
@property (nonatomic, getter=_genre, setter=set_genre:) int _genre;
@property (nonatomic, getter=_commandClassId, setter=set_commandClassId:) uint8_t _commandClassId;
@property (nonatomic, getter=_instance, setter=set_instance:) uint8_t _instance;
@property (nonatomic, getter=_valueIndex, setter=set_valueIndex:) uint8_t _valueIndex;
@property (nonatomic, getter=_type, setter=set_type:) int _type;
#endif

- (id) initWith_homeId: (int32_t) _homeId _nodeId: (uint8_t) _nodeId _genre: (int) _genre _commandClassId: (uint8_t) _commandClassId _instance: (uint8_t) _instance _valueIndex: (uint8_t) _valueIndex _type: (int) _type;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) _homeId;
- (void) set_homeId: (int32_t) _homeId;
- (BOOL) _homeIdIsSet;

- (uint8_t) _nodeId;
- (void) set_nodeId: (uint8_t) _nodeId;
- (BOOL) _nodeIdIsSet;

- (int) _genre;
- (void) set_genre: (int) _genre;
- (BOOL) _genreIsSet;

- (uint8_t) _commandClassId;
- (void) set_commandClassId: (uint8_t) _commandClassId;
- (BOOL) _commandClassIdIsSet;

- (uint8_t) _instance;
- (void) set_instance: (uint8_t) _instance;
- (BOOL) _instanceIsSet;

- (uint8_t) _valueIndex;
- (void) set_valueIndex: (uint8_t) _valueIndex;
- (BOOL) _valueIndexIsSet;

- (int) _type;
- (void) set_type: (int) _type;
- (BOOL) _typeIsSet;

@end

@interface OpenZWaveDriverData : NSObject <NSCoding> {
  int32_t __s_SOFCnt;
  int32_t __s_ACKWaiting;
  int32_t __s_readAborts;
  int32_t __s_badChecksum;
  int32_t __s_readCnt;
  int32_t __s_writeCnt;
  int32_t __s_CANCnt;
  int32_t __s_NAKCnt;
  int32_t __s_ACKCnt;
  int32_t __s_OOFCnt;
  int32_t __s_dropped;
  int32_t __s_retries;
  int32_t __s_controllerReadCnt;
  int32_t __s_controllerWriteCnt;

  BOOL __s_SOFCnt_isset;
  BOOL __s_ACKWaiting_isset;
  BOOL __s_readAborts_isset;
  BOOL __s_badChecksum_isset;
  BOOL __s_readCnt_isset;
  BOOL __s_writeCnt_isset;
  BOOL __s_CANCnt_isset;
  BOOL __s_NAKCnt_isset;
  BOOL __s_ACKCnt_isset;
  BOOL __s_OOFCnt_isset;
  BOOL __s_dropped_isset;
  BOOL __s_retries_isset;
  BOOL __s_controllerReadCnt_isset;
  BOOL __s_controllerWriteCnt_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=s_SOFCnt, setter=setS_SOFCnt:) int32_t s_SOFCnt;
@property (nonatomic, getter=s_ACKWaiting, setter=setS_ACKWaiting:) int32_t s_ACKWaiting;
@property (nonatomic, getter=s_readAborts, setter=setS_readAborts:) int32_t s_readAborts;
@property (nonatomic, getter=s_badChecksum, setter=setS_badChecksum:) int32_t s_badChecksum;
@property (nonatomic, getter=s_readCnt, setter=setS_readCnt:) int32_t s_readCnt;
@property (nonatomic, getter=s_writeCnt, setter=setS_writeCnt:) int32_t s_writeCnt;
@property (nonatomic, getter=s_CANCnt, setter=setS_CANCnt:) int32_t s_CANCnt;
@property (nonatomic, getter=s_NAKCnt, setter=setS_NAKCnt:) int32_t s_NAKCnt;
@property (nonatomic, getter=s_ACKCnt, setter=setS_ACKCnt:) int32_t s_ACKCnt;
@property (nonatomic, getter=s_OOFCnt, setter=setS_OOFCnt:) int32_t s_OOFCnt;
@property (nonatomic, getter=s_dropped, setter=setS_dropped:) int32_t s_dropped;
@property (nonatomic, getter=s_retries, setter=setS_retries:) int32_t s_retries;
@property (nonatomic, getter=s_controllerReadCnt, setter=setS_controllerReadCnt:) int32_t s_controllerReadCnt;
@property (nonatomic, getter=s_controllerWriteCnt, setter=setS_controllerWriteCnt:) int32_t s_controllerWriteCnt;
#endif

- (id) initWithS_SOFCnt: (int32_t) s_SOFCnt s_ACKWaiting: (int32_t) s_ACKWaiting s_readAborts: (int32_t) s_readAborts s_badChecksum: (int32_t) s_badChecksum s_readCnt: (int32_t) s_readCnt s_writeCnt: (int32_t) s_writeCnt s_CANCnt: (int32_t) s_CANCnt s_NAKCnt: (int32_t) s_NAKCnt s_ACKCnt: (int32_t) s_ACKCnt s_OOFCnt: (int32_t) s_OOFCnt s_dropped: (int32_t) s_dropped s_retries: (int32_t) s_retries s_controllerReadCnt: (int32_t) s_controllerReadCnt s_controllerWriteCnt: (int32_t) s_controllerWriteCnt;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) s_SOFCnt;
- (void) setS_SOFCnt: (int32_t) s_SOFCnt;
- (BOOL) s_SOFCntIsSet;

- (int32_t) s_ACKWaiting;
- (void) setS_ACKWaiting: (int32_t) s_ACKWaiting;
- (BOOL) s_ACKWaitingIsSet;

- (int32_t) s_readAborts;
- (void) setS_readAborts: (int32_t) s_readAborts;
- (BOOL) s_readAbortsIsSet;

- (int32_t) s_badChecksum;
- (void) setS_badChecksum: (int32_t) s_badChecksum;
- (BOOL) s_badChecksumIsSet;

- (int32_t) s_readCnt;
- (void) setS_readCnt: (int32_t) s_readCnt;
- (BOOL) s_readCntIsSet;

- (int32_t) s_writeCnt;
- (void) setS_writeCnt: (int32_t) s_writeCnt;
- (BOOL) s_writeCntIsSet;

- (int32_t) s_CANCnt;
- (void) setS_CANCnt: (int32_t) s_CANCnt;
- (BOOL) s_CANCntIsSet;

- (int32_t) s_NAKCnt;
- (void) setS_NAKCnt: (int32_t) s_NAKCnt;
- (BOOL) s_NAKCntIsSet;

- (int32_t) s_ACKCnt;
- (void) setS_ACKCnt: (int32_t) s_ACKCnt;
- (BOOL) s_ACKCntIsSet;

- (int32_t) s_OOFCnt;
- (void) setS_OOFCnt: (int32_t) s_OOFCnt;
- (BOOL) s_OOFCntIsSet;

- (int32_t) s_dropped;
- (void) setS_dropped: (int32_t) s_dropped;
- (BOOL) s_droppedIsSet;

- (int32_t) s_retries;
- (void) setS_retries: (int32_t) s_retries;
- (BOOL) s_retriesIsSet;

- (int32_t) s_controllerReadCnt;
- (void) setS_controllerReadCnt: (int32_t) s_controllerReadCnt;
- (BOOL) s_controllerReadCntIsSet;

- (int32_t) s_controllerWriteCnt;
- (void) setS_controllerWriteCnt: (int32_t) s_controllerWriteCnt;
- (BOOL) s_controllerWriteCntIsSet;

@end

@interface OpenZWaveGetDriverStatisticsReturnStruct : NSObject <NSCoding> {
  OpenZWaveDriverData * ___data;

  BOOL ___data_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=_data, setter=set_data:) OpenZWaveDriverData * _data;
#endif

- (id) initWith_data: (OpenZWaveDriverData *) _data;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (OpenZWaveDriverData *) _data;
- (void) set_data: (OpenZWaveDriverData *) _data;
- (BOOL) _dataIsSet;

@end

@interface OpenZWaveGetSwitchPointReturnStruct : NSObject <NSCoding> {
  BOOL __retval;
  uint8_t __o_hours;
  uint8_t __o_minutes;
  uint8_t __o_setback;

  BOOL __retval_isset;
  BOOL __o_hours_isset;
  BOOL __o_minutes_isset;
  BOOL __o_setback_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_hours, setter=setO_hours:) uint8_t o_hours;
@property (nonatomic, getter=o_minutes, setter=setO_minutes:) uint8_t o_minutes;
@property (nonatomic, getter=o_setback, setter=setO_setback:) uint8_t o_setback;
#endif

- (id) initWithRetval: (BOOL) retval o_hours: (uint8_t) o_hours o_minutes: (uint8_t) o_minutes o_setback: (uint8_t) o_setback;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (uint8_t) o_hours;
- (void) setO_hours: (uint8_t) o_hours;
- (BOOL) o_hoursIsSet;

- (uint8_t) o_minutes;
- (void) setO_minutes: (uint8_t) o_minutes;
- (BOOL) o_minutesIsSet;

- (uint8_t) o_setback;
- (void) setO_setback: (uint8_t) o_setback;
- (BOOL) o_setbackIsSet;

@end

@interface OpenZWaveBool_Bool : NSObject <NSCoding> {
  BOOL __retval;
  BOOL __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_value, setter=setO_value:) BOOL o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (BOOL) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (BOOL) o_value;
- (void) setO_value: (BOOL) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_UInt8 : NSObject <NSCoding> {
  BOOL __retval;
  uint8_t __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_value, setter=setO_value:) uint8_t o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (uint8_t) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (uint8_t) o_value;
- (void) setO_value: (uint8_t) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_Float : NSObject <NSCoding> {
  BOOL __retval;
  double __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_value, setter=setO_value:) double o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (double) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (double) o_value;
- (void) setO_value: (double) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_Int : NSObject <NSCoding> {
  BOOL __retval;
  int32_t __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_value, setter=setO_value:) int32_t o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (int32_t) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (int32_t) o_value;
- (void) setO_value: (int32_t) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_Int16 : NSObject <NSCoding> {
  BOOL __retval;
  int16_t __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, getter=o_value, setter=setO_value:) int16_t o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (int16_t) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (int16_t) o_value;
- (void) setO_value: (int16_t) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_String : NSObject <NSCoding> {
  BOOL __retval;
  NSString * __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, retain, getter=o_value, setter=setO_value:) NSString * o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (NSString *) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (NSString *) o_value;
- (void) setO_value: (NSString *) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveBool_ListString : NSObject <NSCoding> {
  BOOL __retval;
  NSArray * __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, retain, getter=o_value, setter=setO_value:) NSArray * o_value;
#endif

- (id) initWithRetval: (BOOL) retval o_value: (NSArray *) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (NSArray *) o_value;
- (void) setO_value: (NSArray *) o_value;
- (BOOL) o_valueIsSet;

@end

@interface OpenZWaveUInt32_ListByte : NSObject <NSCoding> {
  int32_t __retval;
  NSArray * ___nodeNeighbors;

  BOOL __retval_isset;
  BOOL ___nodeNeighbors_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) int32_t retval;
@property (nonatomic, retain, getter=_nodeNeighbors, setter=set_nodeNeighbors:) NSArray * _nodeNeighbors;
#endif

- (id) initWithRetval: (int32_t) retval _nodeNeighbors: (NSArray *) _nodeNeighbors;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) retval;
- (void) setRetval: (int32_t) retval;
- (BOOL) retvalIsSet;

- (NSArray *) _nodeNeighbors;
- (void) set_nodeNeighbors: (NSArray *) _nodeNeighbors;
- (BOOL) _nodeNeighborsIsSet;

@end

@interface OpenZWaveBool_GetNodeClassInformation : NSObject <NSCoding> {
  BOOL __retval;
  NSString * ___className;
  uint8_t ___classVersion;

  BOOL __retval_isset;
  BOOL ___className_isset;
  BOOL ___classVersion_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) BOOL retval;
@property (nonatomic, retain, getter=_className, setter=set_className:) NSString * _className;
@property (nonatomic, getter=_classVersion, setter=set_classVersion:) uint8_t _classVersion;
#endif

- (id) initWithRetval: (BOOL) retval _className: (NSString *) _className _classVersion: (uint8_t) _classVersion;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (BOOL) retval;
- (void) setRetval: (BOOL) retval;
- (BOOL) retvalIsSet;

- (NSString *) _className;
- (void) set_className: (NSString *) _className;
- (BOOL) _classNameIsSet;

- (uint8_t) _classVersion;
- (void) set_classVersion: (uint8_t) _classVersion;
- (BOOL) _classVersionIsSet;

@end

@interface OpenZWaveGetAssociationsReturnStruct : NSObject <NSCoding> {
  int32_t __retval;
  NSArray * __o_associations;

  BOOL __retval_isset;
  BOOL __o_associations_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) int32_t retval;
@property (nonatomic, retain, getter=o_associations, setter=setO_associations:) NSArray * o_associations;
#endif

- (id) initWithRetval: (int32_t) retval o_associations: (NSArray *) o_associations;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) retval;
- (void) setRetval: (int32_t) retval;
- (BOOL) retvalIsSet;

- (NSArray *) o_associations;
- (void) setO_associations: (NSArray *) o_associations;
- (BOOL) o_associationsIsSet;

@end

@interface OpenZWaveGetAllScenesReturnStruct : NSObject <NSCoding> {
  uint8_t __retval;
  NSArray * ___sceneIds;

  BOOL __retval_isset;
  BOOL ___sceneIds_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) uint8_t retval;
@property (nonatomic, retain, getter=_sceneIds, setter=set_sceneIds:) NSArray * _sceneIds;
#endif

- (id) initWithRetval: (uint8_t) retval _sceneIds: (NSArray *) _sceneIds;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (uint8_t) retval;
- (void) setRetval: (uint8_t) retval;
- (BOOL) retvalIsSet;

- (NSArray *) _sceneIds;
- (void) set_sceneIds: (NSArray *) _sceneIds;
- (BOOL) _sceneIdsIsSet;

@end

@interface OpenZWaveSceneGetValuesReturnStruct : NSObject <NSCoding> {
  int32_t __retval;
  NSArray * __o_value;

  BOOL __retval_isset;
  BOOL __o_value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=retval, setter=setRetval:) int32_t retval;
@property (nonatomic, retain, getter=o_value, setter=setO_value:) NSArray * o_value;
#endif

- (id) initWithRetval: (int32_t) retval o_value: (NSArray *) o_value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) retval;
- (void) setRetval: (int32_t) retval;
- (BOOL) retvalIsSet;

- (NSArray *) o_value;
- (void) setO_value: (NSArray *) o_value;
- (BOOL) o_valueIsSet;

@end

@protocol OpenZWaveRemoteManager <NSObject>
- (void) WriteConfig: (int32_t) _homeId;  // throws TException
- (uint8_t) GetControllerNodeId: (int32_t) _homeId;  // throws TException
- (BOOL) IsPrimaryController: (int32_t) _homeId;  // throws TException
- (BOOL) IsStaticUpdateController: (int32_t) _homeId;  // throws TException
- (BOOL) IsBridgeController: (int32_t) _homeId;  // throws TException
- (NSString *) GetLibraryVersion: (int32_t) _homeId;  // throws TException
- (NSString *) GetLibraryTypeName: (int32_t) _homeId;  // throws TException
- (int32_t) GetSendQueueCount: (int32_t) _homeId;  // throws TException
- (void) LogDriverStatistics: (int32_t) _homeId;  // throws TException
- (int32_t) GetPollInterval;  // throws TException
- (void) SetPollInterval: (int32_t) _milliseconds : (BOOL) _bIntervalBetweenPolls;  // throws TException
- (BOOL) EnablePoll: (OpenZWaveRemoteValueID *) _valueId : (uint8_t) _intensity;  // throws TException
- (BOOL) DisablePoll: (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (BOOL) isPolled: (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (void) SetPollIntensity: (OpenZWaveRemoteValueID *) _valueId : (uint8_t) _intensity;  // throws TException
- (BOOL) RefreshNodeInfo: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) RequestNodeState: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) RequestNodeDynamic: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) IsNodeListeningDevice: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) IsNodeFrequentListeningDevice: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) IsNodeBeamingDevice: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) IsNodeRoutingDevice: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (BOOL) IsNodeSecurityDevice: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (int32_t) GetNodeMaxBaudRate: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNodeVersion: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNodeSecurity: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNodeBasic: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNodeGeneric: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNodeSpecific: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeType: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (OpenZWaveUInt32_ListByte *) GetNodeNeighbors: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeManufacturerName: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeProductName: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeName: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeLocation: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeManufacturerId: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeProductType: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (NSString *) GetNodeProductId: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (void) SetNodeManufacturerName: (int32_t) _homeId : (uint8_t) _nodeId : (NSString *) _manufacturerName;  // throws TException
- (void) SetNodeProductName: (int32_t) _homeId : (uint8_t) _nodeId : (NSString *) _productName;  // throws TException
- (void) SetNodeName: (int32_t) _homeId : (uint8_t) _nodeId : (NSString *) _nodeName;  // throws TException
- (void) SetNodeLocation: (int32_t) _homeId : (uint8_t) _nodeId : (NSString *) _location;  // throws TException
- (void) SetNodeOn: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (void) SetNodeOff: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (void) SetNodeLevel: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _level;  // throws TException
- (BOOL) IsNodeInfoReceived: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (OpenZWaveBool_GetNodeClassInformation *) GetNodeClassInformation: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _commandClassId;  // throws TException
- (NSString *) GetValueLabel: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (void) SetValueLabel: (OpenZWaveRemoteValueID *) _id : (NSString *) _value;  // throws TException
- (NSString *) GetValueUnits: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (void) SetValueUnits: (OpenZWaveRemoteValueID *) _id : (NSString *) _value;  // throws TException
- (NSString *) GetValueHelp: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (void) SetValueHelp: (OpenZWaveRemoteValueID *) _id : (NSString *) _value;  // throws TException
- (int32_t) GetValueMin: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (int32_t) GetValueMax: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) IsValueReadOnly: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) IsValueWriteOnly: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) IsValueSet: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) IsValuePolled: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_Bool *) GetValueAsBool: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_UInt8 *) GetValueAsByte: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_Float *) GetValueAsFloat: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_Int *) GetValueAsInt: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_Int16 *) GetValueAsShort: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_String *) GetValueAsString: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_String *) GetValueListSelection_String: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_Int *) GetValueListSelection_Int32: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_ListString *) GetValueListItems: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveBool_UInt8 *) GetValueFloatPrecision: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) SetValue_Bool: (OpenZWaveRemoteValueID *) _id : (BOOL) _value;  // throws TException
- (BOOL) SetValue_UInt8: (OpenZWaveRemoteValueID *) _id : (uint8_t) _value;  // throws TException
- (BOOL) SetValue_Float: (OpenZWaveRemoteValueID *) _id : (double) _value;  // throws TException
- (BOOL) SetValue_Int32: (OpenZWaveRemoteValueID *) _id : (int32_t) _value;  // throws TException
- (BOOL) SetValue_Int16: (OpenZWaveRemoteValueID *) _id : (int16_t) _value;  // throws TException
- (BOOL) SetValue_String: (OpenZWaveRemoteValueID *) _id : (NSString *) _value;  // throws TException
- (BOOL) SetValueListSelection: (OpenZWaveRemoteValueID *) _id : (NSString *) _selectedItem;  // throws TException
- (BOOL) RefreshValue: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) PressButton: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) ReleaseButton: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (uint8_t) GetNumSwitchPoints: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (BOOL) SetSwitchPoint: (OpenZWaveRemoteValueID *) _id : (uint8_t) _hours : (uint8_t) _minutes : (uint8_t) _setback;  // throws TException
- (BOOL) RemoveSwitchPoint: (OpenZWaveRemoteValueID *) _id : (uint8_t) _hours : (uint8_t) _minutes;  // throws TException
- (void) ClearSwitchPoints: (OpenZWaveRemoteValueID *) _id;  // throws TException
- (OpenZWaveGetSwitchPointReturnStruct *) GetSwitchPoint: (OpenZWaveRemoteValueID *) _id : (uint8_t) _idx;  // throws TException
- (void) SwitchAllOn: (int32_t) _homeId;  // throws TException
- (void) SwitchAllOff: (int32_t) _homeId;  // throws TException
- (BOOL) SetConfigParam: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _param : (int32_t) _value : (uint8_t) _size;  // throws TException
- (void) RequestConfigParam: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _param;  // throws TException
- (void) RequestAllConfigParams: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (uint8_t) GetNumGroups: (int32_t) _homeId : (uint8_t) _nodeId;  // throws TException
- (OpenZWaveGetAssociationsReturnStruct *) GetAssociations: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _groupIdx;  // throws TException
- (uint8_t) GetMaxAssociations: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _groupIdx;  // throws TException
- (NSString *) GetGroupLabel: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _groupIdx;  // throws TException
- (void) AddAssociation: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _groupIdx : (uint8_t) _targetNodeId;  // throws TException
- (void) RemoveAssociation: (int32_t) _homeId : (uint8_t) _nodeId : (uint8_t) _groupIdx : (uint8_t) _targetNodeId;  // throws TException
- (void) ResetController: (int32_t) _homeId;  // throws TException
- (void) SoftReset: (int32_t) _homeId;  // throws TException
- (BOOL) BeginControllerCommand: (int32_t) _homeId : (int) _command : (BOOL) _highPower : (uint8_t) _nodeId : (uint8_t) _arg;  // throws TException
- (BOOL) CancelControllerCommand: (int32_t) _homeId;  // throws TException
- (uint8_t) GetNumScenes;  // throws TException
- (OpenZWaveGetAllScenesReturnStruct *) GetAllScenes;  // throws TException
- (uint8_t) CreateScene;  // throws TException
- (BOOL) RemoveScene: (uint8_t) _sceneId;  // throws TException
- (BOOL) AddSceneValue_Bool: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (BOOL) _value;  // throws TException
- (BOOL) AddSceneValue_Uint8: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (uint8_t) _value;  // throws TException
- (BOOL) AddSceneValue_Float: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (double) _value;  // throws TException
- (BOOL) AddSceneValue_Int32: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int32_t) _value;  // throws TException
- (BOOL) AddSceneValue_Int16: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int16_t) _value;  // throws TException
- (BOOL) AddSceneValue_String: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (NSString *) _value;  // throws TException
- (BOOL) AddSceneValueListSelection_String: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (NSString *) _value;  // throws TException
- (BOOL) AddSceneValueListSelection_Int32: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int32_t) _value;  // throws TException
- (BOOL) RemoveSceneValue: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveSceneGetValuesReturnStruct *) SceneGetValues: (uint8_t) _sceneId;  // throws TException
- (OpenZWaveBool_Bool *) SceneGetValueAsBool: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_UInt8 *) SceneGetValueAsByte: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_Float *) SceneGetValueAsFloat: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_Int *) SceneGetValueAsInt: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_Int16 *) SceneGetValueAsShort: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_String *) SceneGetValueAsString: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_String *) SceneGetValueListSelection_String: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (OpenZWaveBool_Int *) SceneGetValueListSelection_Int32: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId;  // throws TException
- (BOOL) SetSceneValue_Bool: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (BOOL) _value;  // throws TException
- (BOOL) SetSceneValue_Uint8: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (uint8_t) _value;  // throws TException
- (BOOL) SetSceneValue_Float: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (double) _value;  // throws TException
- (BOOL) SetSceneValue_Int32: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int32_t) _value;  // throws TException
- (BOOL) SetSceneValue_Int16: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int16_t) _value;  // throws TException
- (BOOL) SetSceneValue_String: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (NSString *) _value;  // throws TException
- (BOOL) SetSceneValueListSelection_String: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (NSString *) _value;  // throws TException
- (BOOL) SetSceneValueListSelection_Int32: (uint8_t) _sceneId : (OpenZWaveRemoteValueID *) _valueId : (int32_t) _value;  // throws TException
- (NSString *) GetSceneLabel: (uint8_t) _sceneId;  // throws TException
- (void) SetSceneLabel: (uint8_t) _sceneId : (NSString *) _value;  // throws TException
- (BOOL) SceneExists: (uint8_t) _sceneId;  // throws TException
- (BOOL) ActivateScene: (uint8_t) _sceneId;  // throws TException
- (OpenZWaveGetDriverStatisticsReturnStruct *) GetDriverStatistics: (int32_t) _homeId;  // throws TException
- (void) SendAllValues;  // throws TException
@end

@interface OpenZWaveRemoteManagerClient : NSObject <OpenZWaveRemoteManager> {
  id <TProtocol> inProtocol;
  id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface OpenZWaveRemoteManagerProcessor : NSObject <TProcessor> {
  id <OpenZWaveRemoteManager> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithRemoteManager: (id <OpenZWaveRemoteManager>) service;
- (id<OpenZWaveRemoteManager>) service;
@end

@interface OpenZWaveozwConstants : NSObject {
}
@end
