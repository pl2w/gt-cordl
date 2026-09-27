#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PhotonPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TargetFrameworks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonPeer)
namespace ExitGames::Client::Photon::Encryption {
class IPhotonEncryptor;
}
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class DeserializeMethod;
}
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class ITrafficRecorder;
}
namespace ExitGames::Client::Photon {
class NetworkSimulationSet;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
struct PeerStateValue;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
namespace ExitGames::Client::Photon {
class SerializeMethod;
}
namespace ExitGames::Client::Photon {
class SerializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class SupportClass_IntegerMillisecondsDelegate;
}
namespace ExitGames::Client::Photon {
class TrafficStatsGameLevel;
}
namespace ExitGames::Client::Photon {
class TrafficStats;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::PhotonPeer*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PhotonPeer*, "ExitGames.Client.Photon", "PhotonPeer");
// Dependencies ExitGames.Client.Photon.ConnectionProtocol, ExitGames.Client.Photon.DebugLevel, ExitGames.Client.Photon.SerializationProtocol, ExitGames.Client.Photon.TargetFrameworks, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PhotonPeer
class CORDL_TYPE PhotonPeer : public ::System::Object {
public:
// Declarations
/// @brief Field AsyncKeyExchange, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AsyncKeyExchange, put=setStaticF_AsyncKeyExchange)) bool  AsyncKeyExchange;

 __declspec(property(get=get_ByteArraySlicePool)) ::ExitGames::Client::Photon::ByteArraySlicePool*  ByteArraySlicePool;

 __declspec(property(get=get_ByteCountCurrentDispatch)) int32_t  ByteCountCurrentDispatch;

 __declspec(property(get=get_ByteCountLastOperation)) int32_t  ByteCountLastOperation;

 __declspec(property(get=get_BytesIn)) int64_t  BytesIn;

 __declspec(property(get=get_BytesOut)) int64_t  BytesOut;

/// @brief Field ChannelCount, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ChannelCount, put=__cordl_internal_set_ChannelCount)) uint8_t  ChannelCount;

/// @brief Field ClientSdkId, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClientSdkId, put=__cordl_internal_set_ClientSdkId)) uint8_t  ClientSdkId;

 __declspec(property(get=get_ClientSdkIdShifted)) uint8_t  ClientSdkIdShifted;

/// @brief [Obsolete("The static string Version should be preferred.")]
 __declspec(property(get=get_ClientVersion)) ::StringW  ClientVersion;

/// @brief [Obsolete("See remarks.")]
 __declspec(property(get=get_CommandBufferSize, put=set_CommandBufferSize)) int32_t  CommandBufferSize;

 __declspec(property(get=get_CommandInfoCurrentDispatch)) ::StringW  CommandInfoCurrentDispatch;

/// @brief Field CommandLogSize, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CommandLogSize, put=__cordl_internal_set_CommandLogSize)) int32_t  CommandLogSize;

 __declspec(property(get=get_ConnectionTime)) int32_t  ConnectionTime;

 __declspec(property(get=get_CountDiscarded, put=set_CountDiscarded)) int32_t  CountDiscarded;

 __declspec(property(get=get_CrcEnabled, put=set_CrcEnabled)) bool  CrcEnabled;

/// @brief Field DebugOut, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugOut, put=__cordl_internal_set_DebugOut)) ::ExitGames::Client::Photon::DebugLevel  DebugOut;

 __declspec(property(get=get_DeltaUnreliableNumber, put=set_DeltaUnreliableNumber)) int32_t  DeltaUnreliableNumber;

 __declspec(property(get=get_DisconnectTimeout, put=set_DisconnectTimeout)) int32_t  DisconnectTimeout;

/// @brief Field DispatchLockObject, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DispatchLockObject, put=__cordl_internal_set_DispatchLockObject)) ::System::Object*  DispatchLockObject;

/// @brief Field EnableEncryptedFlag, offset 0x6b, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableEncryptedFlag, put=__cordl_internal_set_EnableEncryptedFlag)) bool  EnableEncryptedFlag;

 __declspec(property(get=get_EnableServerTracing, put=set_EnableServerTracing)) bool  EnableServerTracing;

/// @brief Field Encryptor, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_Encryptor, put=__cordl_internal_set_Encryptor)) ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*  Encryptor;

 __declspec(property(get=get_EncryptorType, put=set_EncryptorType)) ::System::Type*  EncryptorType;

/// @brief Field EnqueueLock, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_EnqueueLock, put=__cordl_internal_set_EnqueueLock)) ::System::Object*  EnqueueLock;

/// @brief Field GcmDatagramEncryption, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_GcmDatagramEncryption, put=__cordl_internal_set_GcmDatagramEncryption)) bool  GcmDatagramEncryption;

/// @brief Field InitialResendTimeMax, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitialResendTimeMax, put=__cordl_internal_set_InitialResendTimeMax)) int32_t  InitialResendTimeMax;

 __declspec(property(get=get_IsEncryptionAvailable)) bool  IsEncryptionAvailable;

/// @brief [Obsolete("Internally not used anymore. Call SendAcksOnly() instead.")]
 __declspec(property(get=get_IsSendingOnlyAcks, put=set_IsSendingOnlyAcks)) bool  IsSendingOnlyAcks;

 __declspec(property(get=get_IsSimulationEnabled, put=set_IsSimulationEnabled)) bool  IsSimulationEnabled;

 __declspec(property(get=get_LastRoundTripTime)) int32_t  LastRoundTripTime;

 __declspec(property(get=get_LastSendAckTime)) int32_t  LastSendAckTime;

 __declspec(property(get=get_LastSendOutgoingTime)) int32_t  LastSendOutgoingTime;

/// @brief [Obsolete("See remarks.")]
 __declspec(property(get=get_LimitOfUnreliableCommands, put=set_LimitOfUnreliableCommands)) int32_t  LimitOfUnreliableCommands;

 __declspec(property(get=get_Listener, put=set_Listener)) ::ExitGames::Client::Photon::IPhotonPeerListener*  Listener;

/// @brief [Obsolete("The PhotonPeer will no longer use this delegate. It uses a Stopwatch in all cases. You can access PhotonPeer.ConnectionTime.")]
 __declspec(property(put=set_LocalMsTimestampDelegate)) ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  LocalMsTimestampDelegate;

/// @brief [Obsolete("Returns SupportClass.GetTickCount(). Should be replaced by a StopWatch or the per peer PhotonPeer.ClientTime.")]
 __declspec(property(get=get_LocalTimeInMilliSeconds)) int32_t  LocalTimeInMilliSeconds;

 __declspec(property(get=get_LongestSentCall, put=set_LongestSentCall)) int32_t  LongestSentCall;

 __declspec(property(get=get_MaximumTransferUnit, put=set_MaximumTransferUnit)) int32_t  MaximumTransferUnit;

/// @brief Field NativeDatagramEncryptionLibAvailable, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NativeDatagramEncryptionLibAvailable, put=setStaticF_NativeDatagramEncryptionLibAvailable)) bool  NativeDatagramEncryptionLibAvailable;

/// @brief Field NativePayloadEncryptionLibAvailable, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NativePayloadEncryptionLibAvailable, put=setStaticF_NativePayloadEncryptionLibAvailable)) bool  NativePayloadEncryptionLibAvailable;

/// @brief Field NativeSocketLibAvailable, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NativeSocketLibAvailable, put=setStaticF_NativeSocketLibAvailable)) bool  NativeSocketLibAvailable;

 __declspec(property(get=get_NetworkSimulationSettings)) ::ExitGames::Client::Photon::NetworkSimulationSet*  NetworkSimulationSettings;

/// @brief Field NoNativeCallbacks, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NoNativeCallbacks, put=setStaticF_NoNativeCallbacks)) bool  NoNativeCallbacks;

/// @brief Field OnDisconnectMessage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnectMessage, put=__cordl_internal_set_OnDisconnectMessage)) ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  OnDisconnectMessage;

/// @brief Field OutgoingStreamBufferSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OutgoingStreamBufferSize, put=setStaticF_OutgoingStreamBufferSize)) int32_t  OutgoingStreamBufferSize;

 __declspec(property(get=get_PacketLossByChallenge)) int32_t  PacketLossByChallenge;

 __declspec(property(get=get_PacketLossByCrc)) int32_t  PacketLossByCrc;

/// @brief Field PayloadEncryptionSecret, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PayloadEncryptionSecret, put=__cordl_internal_set_PayloadEncryptionSecret)) ::ArrayW<uint8_t>  PayloadEncryptionSecret;

 __declspec(property(get=get_PayloadEncryptorType, put=set_PayloadEncryptorType)) ::System::Type*  PayloadEncryptorType;

 __declspec(property(get=get_PeerID)) ::StringW  PeerID;

 __declspec(property(get=get_PeerState)) ::ExitGames::Client::Photon::PeerStateValue  PeerState;

/// @brief Field PingUsedAsInit, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PingUsedAsInit, put=__cordl_internal_set_PingUsedAsInit)) bool  PingUsedAsInit;

 __declspec(property(get=get_QueuedIncomingCommands)) int32_t  QueuedIncomingCommands;

 __declspec(property(get=get_QueuedOutgoingCommands)) int32_t  QueuedOutgoingCommands;

 __declspec(property(get=get_QuickResendAttempts, put=set_QuickResendAttempts)) uint8_t  QuickResendAttempts;

/// @brief Field RandomizeSequenceNumbers, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_RandomizeSequenceNumbers, put=__cordl_internal_set_RandomizeSequenceNumbers)) bool  RandomizeSequenceNumbers;

/// @brief Field RandomizedSequenceNumbers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RandomizedSequenceNumbers, put=__cordl_internal_set_RandomizedSequenceNumbers)) ::ArrayW<uint8_t>  RandomizedSequenceNumbers;

/// @brief Field RemoveAppIdFromWebSocketPath, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_RemoveAppIdFromWebSocketPath, put=__cordl_internal_set_RemoveAppIdFromWebSocketPath)) bool  RemoveAppIdFromWebSocketPath;

 __declspec(property(get=get_ResentReliableCommands)) int32_t  ResentReliableCommands;

 __declspec(property(get=get_ReuseEventInstance, put=set_ReuseEventInstance)) bool  ReuseEventInstance;

 __declspec(property(get=get_RoundTripTime)) int32_t  RoundTripTime;

 __declspec(property(get=get_RoundTripTimeVariance)) int32_t  RoundTripTimeVariance;

/// @brief Field SendInCreationOrder, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_SendInCreationOrder, put=__cordl_internal_set_SendInCreationOrder)) bool  SendInCreationOrder;

/// @brief Field SendOutgoingLockObject, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SendOutgoingLockObject, put=__cordl_internal_set_SendOutgoingLockObject)) ::System::Object*  SendOutgoingLockObject;

/// @brief Field SendWindowSize, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendWindowSize, put=__cordl_internal_set_SendWindowSize)) int32_t  SendWindowSize;

/// @brief Field SentCountAllowance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_SentCountAllowance, put=__cordl_internal_set_SentCountAllowance)) int32_t  SentCountAllowance;

 __declspec(property(get=get_SentReliableCommandsCount)) int32_t  SentReliableCommandsCount;

/// @brief [Obsolete("Use SendWindowSize instead.")]
 __declspec(property(get=get_SequenceDeltaLimitSends, put=set_SequenceDeltaLimitSends)) int32_t  SequenceDeltaLimitSends;

 __declspec(property(get=get_SerializationProtocolType, put=set_SerializationProtocolType)) ::ExitGames::Client::Photon::SerializationProtocol  SerializationProtocolType;

 __declspec(property(get=get_ServerAddress)) ::StringW  ServerAddress;

 __declspec(property(get=get_ServerIpAddress)) ::StringW  ServerIpAddress;

 __declspec(property(get=get_ServerTimeInMilliSeconds)) int32_t  ServerTimeInMilliSeconds;

 __declspec(property(get=get_SocketErrorCode)) int32_t  SocketErrorCode;

 __declspec(property(get=get_SocketImplementation, put=set_SocketImplementation)) ::System::Type*  SocketImplementation;

/// @brief Field SocketImplementationConfig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SocketImplementationConfig, put=__cordl_internal_set_SocketImplementationConfig)) ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*  SocketImplementationConfig;

/// @brief Field TargetFramework, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_TargetFramework, put=__cordl_internal_set_TargetFramework)) ::ExitGames::Client::Photon::TargetFrameworks  TargetFramework;

/// @brief Field TimePingInterval, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimePingInterval, put=__cordl_internal_set_TimePingInterval)) int32_t  TimePingInterval;

 __declspec(property(get=get_TimestampOfLastSocketReceive)) int32_t  TimestampOfLastSocketReceive;

/// @brief Field TrafficRecorder, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrafficRecorder, put=__cordl_internal_set_TrafficRecorder)) ::ExitGames::Client::Photon::ITrafficRecorder*  TrafficRecorder;

 __declspec(property(get=get_TrafficStatsElapsedMs)) int64_t  TrafficStatsElapsedMs;

 __declspec(property(get=get_TrafficStatsEnabled, put=set_TrafficStatsEnabled)) bool  TrafficStatsEnabled;

 __declspec(property(get=get_TrafficStatsGameLevel, put=set_TrafficStatsGameLevel)) ::ExitGames::Client::Photon::TrafficStatsGameLevel*  TrafficStatsGameLevel;

 __declspec(property(get=get_TrafficStatsIncoming, put=set_TrafficStatsIncoming)) ::ExitGames::Client::Photon::TrafficStats*  TrafficStatsIncoming;

 __declspec(property(get=get_TrafficStatsOutgoing, put=set_TrafficStatsOutgoing)) ::ExitGames::Client::Photon::TrafficStats*  TrafficStatsOutgoing;

 __declspec(property(get=get_TransportProtocol, put=set_TransportProtocol)) ::ExitGames::Client::Photon::ConnectionProtocol  TransportProtocol;

 __declspec(property(get=get_UseByteArraySlicePoolForEvents, put=set_UseByteArraySlicePoolForEvents)) bool  UseByteArraySlicePoolForEvents;

/// @brief Field UseInitV3, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseInitV3, put=__cordl_internal_set_UseInitV3)) bool  UseInitV3;

 __declspec(property(get=get_UsedProtocol)) ::ExitGames::Client::Photon::ConnectionProtocol  UsedProtocol;

/// @brief Field WarningSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_WarningSize, put=__cordl_internal_set_WarningSize)) int32_t  WarningSize;

 __declspec(property(get=get_WrapIncomingStructs, put=set_WrapIncomingStructs)) bool  WrapIncomingStructs;

/// @brief Field <CommandBufferSize>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__CommandBufferSize_k__BackingField, put=__cordl_internal_set__CommandBufferSize_k__BackingField)) int32_t  _CommandBufferSize_k__BackingField;

/// @brief Field <CountDiscarded>k__BackingField, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__CountDiscarded_k__BackingField, put=__cordl_internal_set__CountDiscarded_k__BackingField)) int32_t  _CountDiscarded_k__BackingField;

/// @brief Field <DeltaUnreliableNumber>k__BackingField, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DeltaUnreliableNumber_k__BackingField, put=__cordl_internal_set__DeltaUnreliableNumber_k__BackingField)) int32_t  _DeltaUnreliableNumber_k__BackingField;

/// @brief Field <EnableServerTracing>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableServerTracing_k__BackingField, put=__cordl_internal_set__EnableServerTracing_k__BackingField)) bool  _EnableServerTracing_k__BackingField;

/// @brief Field <IsSendingOnlyAcks>k__BackingField, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSendingOnlyAcks_k__BackingField, put=__cordl_internal_set__IsSendingOnlyAcks_k__BackingField)) bool  _IsSendingOnlyAcks_k__BackingField;

/// @brief Field <LimitOfUnreliableCommands>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__LimitOfUnreliableCommands_k__BackingField, put=__cordl_internal_set__LimitOfUnreliableCommands_k__BackingField)) int32_t  _LimitOfUnreliableCommands_k__BackingField;

/// @brief Field <Listener>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Listener_k__BackingField, put=__cordl_internal_set__Listener_k__BackingField)) ::ExitGames::Client::Photon::IPhotonPeerListener*  _Listener_k__BackingField;

/// @brief Field <SerializationProtocolType>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__SerializationProtocolType_k__BackingField, put=__cordl_internal_set__SerializationProtocolType_k__BackingField)) ::ExitGames::Client::Photon::SerializationProtocol  _SerializationProtocolType_k__BackingField;

/// @brief Field <SocketImplementation>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SocketImplementation_k__BackingField, put=__cordl_internal_set__SocketImplementation_k__BackingField)) ::System::Type*  _SocketImplementation_k__BackingField;

/// @brief Field <TrafficStatsGameLevel>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrafficStatsGameLevel_k__BackingField, put=__cordl_internal_set__TrafficStatsGameLevel_k__BackingField)) ::ExitGames::Client::Photon::TrafficStatsGameLevel*  _TrafficStatsGameLevel_k__BackingField;

/// @brief Field <TrafficStatsIncoming>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrafficStatsIncoming_k__BackingField, put=__cordl_internal_set__TrafficStatsIncoming_k__BackingField)) ::ExitGames::Client::Photon::TrafficStats*  _TrafficStatsIncoming_k__BackingField;

/// @brief Field <TrafficStatsOutgoing>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrafficStatsOutgoing_k__BackingField, put=__cordl_internal_set__TrafficStatsOutgoing_k__BackingField)) ::ExitGames::Client::Photon::TrafficStats*  _TrafficStatsOutgoing_k__BackingField;

/// @brief Field <TransportProtocol>k__BackingField, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__TransportProtocol_k__BackingField, put=__cordl_internal_set__TransportProtocol_k__BackingField)) ::ExitGames::Client::Photon::ConnectionProtocol  _TransportProtocol_k__BackingField;

/// @brief Field clientVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clientVersion, put=setStaticF_clientVersion)) ::StringW  clientVersion;

/// @brief Field crcEnabled, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_crcEnabled, put=__cordl_internal_set_crcEnabled)) bool  crcEnabled;

/// @brief Field disconnectTimeout, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_disconnectTimeout, put=__cordl_internal_set_disconnectTimeout)) int32_t  disconnectTimeout;

/// @brief Field encryptorType, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_encryptorType, put=__cordl_internal_set_encryptorType)) ::System::Type*  encryptorType;

/// @brief Field mtu, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_mtu, put=__cordl_internal_set_mtu)) int32_t  mtu;

/// @brief Field payloadEncryptorType, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_payloadEncryptorType, put=__cordl_internal_set_payloadEncryptorType)) ::System::Type*  payloadEncryptorType;

/// @brief Field peerBase, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_peerBase, put=__cordl_internal_set_peerBase)) ::ExitGames::Client::Photon::PeerBase*  peerBase;

/// @brief Field quickResendAttempts, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_quickResendAttempts, put=__cordl_internal_set_quickResendAttempts)) uint8_t  quickResendAttempts;

/// @brief Field reuseEventInstance, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_reuseEventInstance, put=__cordl_internal_set_reuseEventInstance)) bool  reuseEventInstance;

/// @brief Field trafficStatsEnabled, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_trafficStatsEnabled, put=__cordl_internal_set_trafficStatsEnabled)) bool  trafficStatsEnabled;

/// @brief Field trafficStatsStopwatch, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_trafficStatsStopwatch, put=__cordl_internal_set_trafficStatsStopwatch)) ::System::Diagnostics::Stopwatch*  trafficStatsStopwatch;

/// @brief Field useByteArraySlicePoolForEvents, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_useByteArraySlicePoolForEvents, put=__cordl_internal_set_useByteArraySlicePoolForEvents)) bool  useByteArraySlicePoolForEvents;

/// @brief Field wrapIncomingStructs, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_wrapIncomingStructs, put=__cordl_internal_set_wrapIncomingStructs)) bool  wrapIncomingStructs;

/// [Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
/// @brief Method CommandLogToString, addr 0xa6cb9b0, size 0x18, virtual false, abstract: false, final false
inline ::StringW CommandLogToString() ;

/// @brief Method Connect, addr 0xa6cdc00, size 0x1c, virtual true, abstract: false, final false
inline bool Connect(::StringW  serverAddress, ::StringW  appId, ::System::Object*  photonToken, ::System::Object*  customInitData) ;

/// @brief Method Connect, addr 0xa6cdc1c, size 0x7d8, virtual true, abstract: false, final false
inline bool Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appId, ::System::Object*  photonToken, ::System::Object*  customInitData) ;

/// @brief Method CreatePeerBase, addr 0xa6cda6c, size 0x164, virtual false, abstract: false, final false
inline void CreatePeerBase() ;

/// @brief Method Disconnect, addr 0xa6ce3f4, size 0x16c, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method DispatchIncomingCommands, addr 0xa6cf014, size 0x108, virtual true, abstract: false, final false
inline bool DispatchIncomingCommands() ;

/// @brief Method EstablishEncryption, addr 0xa6ce708, size 0x120, virtual false, abstract: false, final false
inline bool EstablishEncryption() ;

/// @brief Method FetchServerTimestamp, addr 0xa6ce6e8, size 0x20, virtual true, abstract: false, final false
inline void FetchServerTimestamp() ;

/// @brief Method InitDatagramEncryption, addr 0xa6ce828, size 0x5a0, virtual false, abstract: false, final false
inline bool InitDatagramEncryption(::ArrayW<uint8_t>  encryptionSecret, ::ArrayW<uint8_t>  hmacSecret, bool  randomizedSequenceNumbers, bool  chainingModeGCM) ;

/// @brief Method InitPayloadEncryption, addr 0xa6cedc8, size 0x8, virtual false, abstract: false, final false
inline void InitPayloadEncryption(::ArrayW<uint8_t>  secret) ;

/// @brief Method InitializeTrafficStats, addr 0xa6ccdac, size 0x178, virtual false, abstract: false, final false
inline void InitializeTrafficStats() ;

/// @brief Method MessageBufferPoolSize, addr 0xa6cc62c, size 0x70, virtual false, abstract: false, final false
static inline int32_t MessageBufferPoolSize() ;

/// @brief Method MessageBufferPoolTrim, addr 0xa6cc3dc, size 0x250, virtual false, abstract: false, final false
static inline void MessageBufferPoolTrim(int32_t  countOfBuffers) ;

static inline ::ExitGames::Client::Photon::PhotonPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

static inline ::ExitGames::Client::Photon::PhotonPeer* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method OnDisconnectMessageCall, addr 0xa6ce560, size 0x1c, virtual false, abstract: false, final false
inline void OnDisconnectMessageCall(::ExitGames::Client::Photon::DisconnectMessage*  dm) ;

/// @brief Method RegisterType, addr 0xa6cfbec, size 0x7c, virtual false, abstract: false, final false
static inline bool RegisterType(::System::Type*  customType, uint8_t  code, ::ExitGames::Client::Photon::SerializeMethod*  serializeMethod, ::ExitGames::Client::Photon::DeserializeMethod*  constructor) ;

/// @brief Method RegisterType, addr 0xa6cfe08, size 0x7c, virtual false, abstract: false, final false
static inline bool RegisterType(::System::Type*  customType, uint8_t  code, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeMethod, ::ExitGames::Client::Photon::DeserializeStreamMethod*  constructor) ;

/// @brief Method SendAcksOnly, addr 0xa6cef10, size 0x104, virtual true, abstract: false, final false
inline bool SendAcksOnly() ;

/// @brief Method SendOperation, addr 0xa6cf684, size 0x568, virtual true, abstract: false, final false
inline bool SendOperation(uint8_t  operationCode, ::ExitGames::Client::Photon::ParameterDictionary*  operationParameters, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method SendOperation, addr 0xa6cf11c, size 0x568, virtual true, abstract: false, final false
inline bool SendOperation(uint8_t  operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  operationParameters, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method SendOutgoingCommands, addr 0xa6cee0c, size 0x104, virtual true, abstract: false, final false
inline bool SendOutgoingCommands() ;

/// @brief Method Service, addr 0xa6cedd0, size 0x3c, virtual true, abstract: false, final false
inline void Service() ;

/// @brief Method StopThread, addr 0xa6ce57c, size 0x16c, virtual true, abstract: false, final false
inline void StopThread() ;

/// @brief Method TrafficStatsReset, addr 0xa6ccf24, size 0x3c, virtual false, abstract: false, final false
inline void TrafficStatsReset() ;

/// @brief Method VitalStatsToString, addr 0xa6ccf60, size 0x59c, virtual false, abstract: false, final false
inline ::StringW VitalStatsToString(bool  all) ;

/// [CompilerGenerated]
/// @brief Method <EstablishEncryption>b__225_0, addr 0xa6d007c, size 0x2c, virtual false, abstract: false, final false
inline bool _EstablishEncryption_b__225_0() ;

constexpr uint8_t const& __cordl_internal_get_ChannelCount() const;

constexpr uint8_t& __cordl_internal_get_ChannelCount() ;

constexpr uint8_t const& __cordl_internal_get_ClientSdkId() const;

constexpr uint8_t& __cordl_internal_get_ClientSdkId() ;

constexpr int32_t const& __cordl_internal_get_CommandLogSize() const;

constexpr int32_t& __cordl_internal_get_CommandLogSize() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_DebugOut() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_DebugOut() ;

constexpr ::System::Object* const& __cordl_internal_get_DispatchLockObject() const;

constexpr ::System::Object*& __cordl_internal_get_DispatchLockObject() ;

constexpr bool const& __cordl_internal_get_EnableEncryptedFlag() const;

constexpr bool& __cordl_internal_get_EnableEncryptedFlag() ;

constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* const& __cordl_internal_get_Encryptor() const;

constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*& __cordl_internal_get_Encryptor() ;

constexpr ::System::Object* const& __cordl_internal_get_EnqueueLock() const;

constexpr ::System::Object*& __cordl_internal_get_EnqueueLock() ;

constexpr bool const& __cordl_internal_get_GcmDatagramEncryption() const;

constexpr bool& __cordl_internal_get_GcmDatagramEncryption() ;

constexpr int32_t const& __cordl_internal_get_InitialResendTimeMax() const;

constexpr int32_t& __cordl_internal_get_InitialResendTimeMax() ;

constexpr ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>* const& __cordl_internal_get_OnDisconnectMessage() const;

constexpr ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*& __cordl_internal_get_OnDisconnectMessage() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_PayloadEncryptionSecret() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_PayloadEncryptionSecret() ;

constexpr bool const& __cordl_internal_get_PingUsedAsInit() const;

constexpr bool& __cordl_internal_get_PingUsedAsInit() ;

constexpr bool const& __cordl_internal_get_RandomizeSequenceNumbers() const;

constexpr bool& __cordl_internal_get_RandomizeSequenceNumbers() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_RandomizedSequenceNumbers() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_RandomizedSequenceNumbers() ;

constexpr bool const& __cordl_internal_get_RemoveAppIdFromWebSocketPath() const;

constexpr bool& __cordl_internal_get_RemoveAppIdFromWebSocketPath() ;

constexpr bool const& __cordl_internal_get_SendInCreationOrder() const;

constexpr bool& __cordl_internal_get_SendInCreationOrder() ;

constexpr ::System::Object* const& __cordl_internal_get_SendOutgoingLockObject() const;

constexpr ::System::Object*& __cordl_internal_get_SendOutgoingLockObject() ;

constexpr int32_t const& __cordl_internal_get_SendWindowSize() const;

constexpr int32_t& __cordl_internal_get_SendWindowSize() ;

constexpr int32_t const& __cordl_internal_get_SentCountAllowance() const;

constexpr int32_t& __cordl_internal_get_SentCountAllowance() ;

constexpr ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>* const& __cordl_internal_get_SocketImplementationConfig() const;

constexpr ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*& __cordl_internal_get_SocketImplementationConfig() ;

constexpr ::ExitGames::Client::Photon::TargetFrameworks const& __cordl_internal_get_TargetFramework() const;

constexpr ::ExitGames::Client::Photon::TargetFrameworks& __cordl_internal_get_TargetFramework() ;

constexpr int32_t const& __cordl_internal_get_TimePingInterval() const;

constexpr int32_t& __cordl_internal_get_TimePingInterval() ;

constexpr ::ExitGames::Client::Photon::ITrafficRecorder* const& __cordl_internal_get_TrafficRecorder() const;

constexpr ::ExitGames::Client::Photon::ITrafficRecorder*& __cordl_internal_get_TrafficRecorder() ;

constexpr bool const& __cordl_internal_get_UseInitV3() const;

constexpr bool& __cordl_internal_get_UseInitV3() ;

constexpr int32_t const& __cordl_internal_get_WarningSize() const;

constexpr int32_t& __cordl_internal_get_WarningSize() ;

constexpr int32_t const& __cordl_internal_get__CommandBufferSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CommandBufferSize_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CountDiscarded_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CountDiscarded_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DeltaUnreliableNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DeltaUnreliableNumber_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EnableServerTracing_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableServerTracing_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSendingOnlyAcks_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSendingOnlyAcks_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LimitOfUnreliableCommands_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LimitOfUnreliableCommands_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* const& __cordl_internal_get__Listener_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::IPhotonPeerListener*& __cordl_internal_get__Listener_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::SerializationProtocol const& __cordl_internal_get__SerializationProtocolType_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::SerializationProtocol& __cordl_internal_get__SerializationProtocolType_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__SocketImplementation_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__SocketImplementation_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::TrafficStatsGameLevel* const& __cordl_internal_get__TrafficStatsGameLevel_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::TrafficStatsGameLevel*& __cordl_internal_get__TrafficStatsGameLevel_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::TrafficStats* const& __cordl_internal_get__TrafficStatsIncoming_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::TrafficStats*& __cordl_internal_get__TrafficStatsIncoming_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::TrafficStats* const& __cordl_internal_get__TrafficStatsOutgoing_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::TrafficStats*& __cordl_internal_get__TrafficStatsOutgoing_k__BackingField() ;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get__TransportProtocol_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get__TransportProtocol_k__BackingField() ;

constexpr bool const& __cordl_internal_get_crcEnabled() const;

constexpr bool& __cordl_internal_get_crcEnabled() ;

constexpr int32_t const& __cordl_internal_get_disconnectTimeout() const;

constexpr int32_t& __cordl_internal_get_disconnectTimeout() ;

constexpr ::System::Type* const& __cordl_internal_get_encryptorType() const;

constexpr ::System::Type*& __cordl_internal_get_encryptorType() ;

constexpr int32_t const& __cordl_internal_get_mtu() const;

constexpr int32_t& __cordl_internal_get_mtu() ;

constexpr ::System::Type* const& __cordl_internal_get_payloadEncryptorType() const;

constexpr ::System::Type*& __cordl_internal_get_payloadEncryptorType() ;

constexpr ::ExitGames::Client::Photon::PeerBase* const& __cordl_internal_get_peerBase() const;

constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get_peerBase() ;

constexpr uint8_t const& __cordl_internal_get_quickResendAttempts() const;

constexpr uint8_t& __cordl_internal_get_quickResendAttempts() ;

constexpr bool const& __cordl_internal_get_reuseEventInstance() const;

constexpr bool& __cordl_internal_get_reuseEventInstance() ;

constexpr bool const& __cordl_internal_get_trafficStatsEnabled() const;

constexpr bool& __cordl_internal_get_trafficStatsEnabled() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_trafficStatsStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_trafficStatsStopwatch() ;

constexpr bool const& __cordl_internal_get_useByteArraySlicePoolForEvents() const;

constexpr bool& __cordl_internal_get_useByteArraySlicePoolForEvents() ;

constexpr bool const& __cordl_internal_get_wrapIncomingStructs() const;

constexpr bool& __cordl_internal_get_wrapIncomingStructs() ;

constexpr void __cordl_internal_set_ChannelCount(uint8_t  value) ;

constexpr void __cordl_internal_set_ClientSdkId(uint8_t  value) ;

constexpr void __cordl_internal_set_CommandLogSize(int32_t  value) ;

constexpr void __cordl_internal_set_DebugOut(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_DispatchLockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_EnableEncryptedFlag(bool  value) ;

constexpr void __cordl_internal_set_Encryptor(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*  value) ;

constexpr void __cordl_internal_set_EnqueueLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_GcmDatagramEncryption(bool  value) ;

constexpr void __cordl_internal_set_InitialResendTimeMax(int32_t  value) ;

constexpr void __cordl_internal_set_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value) ;

constexpr void __cordl_internal_set_PayloadEncryptionSecret(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_PingUsedAsInit(bool  value) ;

constexpr void __cordl_internal_set_RandomizeSequenceNumbers(bool  value) ;

constexpr void __cordl_internal_set_RandomizedSequenceNumbers(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_RemoveAppIdFromWebSocketPath(bool  value) ;

constexpr void __cordl_internal_set_SendInCreationOrder(bool  value) ;

constexpr void __cordl_internal_set_SendOutgoingLockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_SendWindowSize(int32_t  value) ;

constexpr void __cordl_internal_set_SentCountAllowance(int32_t  value) ;

constexpr void __cordl_internal_set_SocketImplementationConfig(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*  value) ;

constexpr void __cordl_internal_set_TargetFramework(::ExitGames::Client::Photon::TargetFrameworks  value) ;

constexpr void __cordl_internal_set_TimePingInterval(int32_t  value) ;

constexpr void __cordl_internal_set_TrafficRecorder(::ExitGames::Client::Photon::ITrafficRecorder*  value) ;

constexpr void __cordl_internal_set_UseInitV3(bool  value) ;

constexpr void __cordl_internal_set_WarningSize(int32_t  value) ;

constexpr void __cordl_internal_set__CommandBufferSize_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CountDiscarded_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__DeltaUnreliableNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__EnableServerTracing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSendingOnlyAcks_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LimitOfUnreliableCommands_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Listener_k__BackingField(::ExitGames::Client::Photon::IPhotonPeerListener*  value) ;

constexpr void __cordl_internal_set__SerializationProtocolType_k__BackingField(::ExitGames::Client::Photon::SerializationProtocol  value) ;

constexpr void __cordl_internal_set__SocketImplementation_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__TrafficStatsGameLevel_k__BackingField(::ExitGames::Client::Photon::TrafficStatsGameLevel*  value) ;

constexpr void __cordl_internal_set__TrafficStatsIncoming_k__BackingField(::ExitGames::Client::Photon::TrafficStats*  value) ;

constexpr void __cordl_internal_set__TrafficStatsOutgoing_k__BackingField(::ExitGames::Client::Photon::TrafficStats*  value) ;

constexpr void __cordl_internal_set__TransportProtocol_k__BackingField(::ExitGames::Client::Photon::ConnectionProtocol  value) ;

constexpr void __cordl_internal_set_crcEnabled(bool  value) ;

constexpr void __cordl_internal_set_disconnectTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_encryptorType(::System::Type*  value) ;

constexpr void __cordl_internal_set_mtu(int32_t  value) ;

constexpr void __cordl_internal_set_payloadEncryptorType(::System::Type*  value) ;

constexpr void __cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase*  value) ;

constexpr void __cordl_internal_set_quickResendAttempts(uint8_t  value) ;

constexpr void __cordl_internal_set_reuseEventInstance(bool  value) ;

constexpr void __cordl_internal_set_trafficStatsEnabled(bool  value) ;

constexpr void __cordl_internal_set_trafficStatsStopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_useByteArraySlicePoolForEvents(bool  value) ;

constexpr void __cordl_internal_set_wrapIncomingStructs(bool  value) ;

/// @brief Method .ctor, addr 0xa6cdbd0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method .ctor, addr 0xa6cd7dc, size 0x290, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// [CompilerGenerated]
/// @brief Method add_OnDisconnectMessage, addr 0xa6cbfec, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value) ;

static inline bool getStaticF_AsyncKeyExchange() ;

static inline bool getStaticF_NativeDatagramEncryptionLibAvailable() ;

static inline bool getStaticF_NativePayloadEncryptionLibAvailable() ;

static inline bool getStaticF_NativeSocketLibAvailable() ;

static inline bool getStaticF_NoNativeCallbacks() ;

static inline int32_t getStaticF_OutgoingStreamBufferSize() ;

static inline ::StringW getStaticF_clientVersion() ;

/// @brief Method get_ByteArraySlicePool, addr 0xa6cc254, size 0x24, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ByteArraySlicePool* get_ByteArraySlicePool() ;

/// @brief Method get_ByteCountCurrentDispatch, addr 0xa6cc2b8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ByteCountCurrentDispatch() ;

/// @brief Method get_ByteCountLastOperation, addr 0xa6cc30c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ByteCountLastOperation() ;

/// @brief Method get_BytesIn, addr 0xa6cc288, size 0x18, virtual false, abstract: false, final false
inline int64_t get_BytesIn() ;

/// @brief Method get_BytesOut, addr 0xa6cc2a0, size 0x18, virtual false, abstract: false, final false
inline int64_t get_BytesOut() ;

/// @brief Method get_ClientSdkIdShifted, addr 0xa6cb9c8, size 0xc, virtual false, abstract: false, final false
inline uint8_t get_ClientSdkIdShifted() ;

/// @brief Method get_ClientVersion, addr 0xa6cb9d4, size 0x2e4, virtual false, abstract: false, final false
inline ::StringW get_ClientVersion() ;

/// [CompilerGenerated]
/// @brief Method get_CommandBufferSize, addr 0xa6cb940, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CommandBufferSize() ;

/// @brief Method get_CommandInfoCurrentDispatch, addr 0xa6cc2d0, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_CommandInfoCurrentDispatch() ;

/// @brief Method get_ConnectionTime, addr 0xa6cc868, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ConnectionTime() ;

/// [CompilerGenerated]
/// @brief Method get_CountDiscarded, addr 0xa6cd7bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CountDiscarded() ;

/// @brief Method get_CrcEnabled, addr 0xa6cc69c, size 0x8, virtual false, abstract: false, final false
inline bool get_CrcEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_DeltaUnreliableNumber, addr 0xa6cd7cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DeltaUnreliableNumber() ;

/// @brief Method get_DisconnectTimeout, addr 0xa6cc814, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DisconnectTimeout() ;

/// [CompilerGenerated]
/// @brief Method get_EnableServerTracing, addr 0xa6cc324, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableServerTracing() ;

/// @brief Method get_EncryptorType, addr 0xa6cd65c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_EncryptorType() ;

/// @brief Method get_IsEncryptionAvailable, addr 0xa6cccd8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsEncryptionAvailable() ;

/// [CompilerGenerated]
/// @brief Method get_IsSendingOnlyAcks, addr 0xa6cccf0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSendingOnlyAcks() ;

/// @brief Method get_IsSimulationEnabled, addr 0xa6ccab0, size 0x28, virtual true, abstract: false, final false
inline bool get_IsSimulationEnabled() ;

/// @brief Method get_LastRoundTripTime, addr 0xa6cca18, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LastRoundTripTime() ;

/// @brief Method get_LastSendAckTime, addr 0xa6cc988, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LastSendAckTime() ;

/// @brief Method get_LastSendOutgoingTime, addr 0xa6cc9a0, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LastSendOutgoingTime() ;

/// [CompilerGenerated]
/// @brief Method get_LimitOfUnreliableCommands, addr 0xa6cb950, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LimitOfUnreliableCommands() ;

/// [CompilerGenerated]
/// @brief Method get_Listener, addr 0xa6cbfdc, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::IPhotonPeerListener* get_Listener() ;

/// @brief Method get_LocalTimeInMilliSeconds, addr 0xa6cb960, size 0x50, virtual false, abstract: false, final false
inline int32_t get_LocalTimeInMilliSeconds() ;

/// @brief Method get_LongestSentCall, addr 0xa6cc9b8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LongestSentCall() ;

/// @brief Method get_MaximumTransferUnit, addr 0xa6ccc0c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaximumTransferUnit() ;

/// @brief Method get_NetworkSimulationSettings, addr 0xa6ccad8, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NetworkSimulationSet* get_NetworkSimulationSettings() ;

/// @brief Method get_PacketLossByChallenge, addr 0xa6cc738, size 0x18, virtual false, abstract: false, final false
inline int32_t get_PacketLossByChallenge() ;

/// @brief Method get_PacketLossByCrc, addr 0xa6cc720, size 0x18, virtual false, abstract: false, final false
inline int32_t get_PacketLossByCrc() ;

/// @brief Method get_PayloadEncryptorType, addr 0xa6cd4fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_PayloadEncryptorType() ;

/// @brief Method get_PeerID, addr 0xa6cc388, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_PeerID() ;

/// @brief Method get_PeerState, addr 0xa6cc354, size 0x34, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::PeerStateValue get_PeerState() ;

/// @brief Method get_QueuedIncomingCommands, addr 0xa6cc3a4, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_QueuedIncomingCommands() ;

/// @brief Method get_QueuedOutgoingCommands, addr 0xa6cc3c0, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_QueuedOutgoingCommands() ;

/// @brief Method get_QuickResendAttempts, addr 0xa6cc334, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_QuickResendAttempts() ;

/// @brief Method get_ResentReliableCommands, addr 0xa6cc76c, size 0x90, virtual false, abstract: false, final false
inline int32_t get_ResentReliableCommands() ;

/// @brief Method get_ReuseEventInstance, addr 0xa6cc14c, size 0x8, virtual false, abstract: false, final false
inline bool get_ReuseEventInstance() ;

/// @brief Method get_RoundTripTime, addr 0xa6cc9e8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RoundTripTime() ;

/// @brief Method get_RoundTripTimeVariance, addr 0xa6cca00, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RoundTripTimeVariance() ;

/// @brief Method get_SentReliableCommandsCount, addr 0xa6cc750, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_SentReliableCommandsCount() ;

/// @brief Method get_SequenceDeltaLimitSends, addr 0xa6cc278, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SequenceDeltaLimitSends() ;

/// [CompilerGenerated]
/// @brief Method get_SerializationProtocolType, addr 0xa6cbf9c, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::SerializationProtocol get_SerializationProtocolType() ;

/// @brief Method get_ServerAddress, addr 0xa6cca48, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_ServerAddress() ;

/// @brief Method get_ServerIpAddress, addr 0xa6cca60, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_ServerIpAddress() ;

/// @brief Method get_ServerTimeInMilliSeconds, addr 0xa6cc830, size 0x38, virtual false, abstract: false, final false
inline int32_t get_ServerTimeInMilliSeconds() ;

/// @brief Method get_SocketErrorCode, addr 0xa6cbfbc, size 0x20, virtual false, abstract: false, final false
inline int32_t get_SocketErrorCode() ;

/// [CompilerGenerated]
/// @brief Method get_SocketImplementation, addr 0xa6cbfac, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_SocketImplementation() ;

/// @brief Method get_TimestampOfLastSocketReceive, addr 0xa6cca30, size 0x18, virtual false, abstract: false, final false
inline int32_t get_TimestampOfLastSocketReceive() ;

/// @brief Method get_TrafficStatsElapsedMs, addr 0xa6ccd30, size 0x14, virtual false, abstract: false, final false
inline int64_t get_TrafficStatsElapsedMs() ;

/// @brief Method get_TrafficStatsEnabled, addr 0xa6ccd44, size 0x8, virtual false, abstract: false, final false
inline bool get_TrafficStatsEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_TrafficStatsGameLevel, addr 0xa6ccd20, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* get_TrafficStatsGameLevel() ;

/// [CompilerGenerated]
/// @brief Method get_TrafficStatsIncoming, addr 0xa6ccd00, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStats* get_TrafficStatsIncoming() ;

/// [CompilerGenerated]
/// @brief Method get_TrafficStatsOutgoing, addr 0xa6ccd10, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStats* get_TrafficStatsOutgoing() ;

/// [CompilerGenerated]
/// @brief Method get_TransportProtocol, addr 0xa6ccaa0, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ConnectionProtocol get_TransportProtocol() ;

/// @brief Method get_UseByteArraySlicePoolForEvents, addr 0xa6cc234, size 0x8, virtual false, abstract: false, final false
inline bool get_UseByteArraySlicePoolForEvents() ;

/// @brief Method get_UsedProtocol, addr 0xa6cc7fc, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ConnectionProtocol get_UsedProtocol() ;

/// @brief Method get_Version, addr 0xa6cbcb8, size 0x2e4, virtual false, abstract: false, final false
static inline ::StringW get_Version() ;

/// @brief Method get_WrapIncomingStructs, addr 0xa6cc244, size 0x8, virtual false, abstract: false, final false
inline bool get_WrapIncomingStructs() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDisconnectMessage, addr 0xa6cc09c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  value) ;

static inline void setStaticF_AsyncKeyExchange(bool  value) ;

static inline void setStaticF_NativeDatagramEncryptionLibAvailable(bool  value) ;

static inline void setStaticF_NativePayloadEncryptionLibAvailable(bool  value) ;

static inline void setStaticF_NativeSocketLibAvailable(bool  value) ;

static inline void setStaticF_NoNativeCallbacks(bool  value) ;

static inline void setStaticF_OutgoingStreamBufferSize(int32_t  value) ;

static inline void setStaticF_clientVersion(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CommandBufferSize, addr 0xa6cb948, size 0x8, virtual false, abstract: false, final false
inline void set_CommandBufferSize(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CountDiscarded, addr 0xa6cd7c4, size 0x8, virtual false, abstract: false, final false
inline void set_CountDiscarded(int32_t  value) ;

/// @brief Method set_CrcEnabled, addr 0xa6cc6a4, size 0x7c, virtual false, abstract: false, final false
inline void set_CrcEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeltaUnreliableNumber, addr 0xa6cd7d4, size 0x8, virtual false, abstract: false, final false
inline void set_DeltaUnreliableNumber(int32_t  value) ;

/// @brief Method set_DisconnectTimeout, addr 0xa6cc81c, size 0x14, virtual false, abstract: false, final false
inline void set_DisconnectTimeout(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnableServerTracing, addr 0xa6cc32c, size 0x8, virtual false, abstract: false, final false
inline void set_EnableServerTracing(bool  value) ;

/// @brief Method set_EncryptorType, addr 0xa6cd664, size 0x158, virtual false, abstract: false, final false
inline void set_EncryptorType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSendingOnlyAcks, addr 0xa6cccf8, size 0x8, virtual false, abstract: false, final false
inline void set_IsSendingOnlyAcks(bool  value) ;

/// @brief Method set_IsSimulationEnabled, addr 0xa6ccaf0, size 0x11c, virtual true, abstract: false, final false
inline void set_IsSimulationEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LimitOfUnreliableCommands, addr 0xa6cb958, size 0x8, virtual false, abstract: false, final false
inline void set_LimitOfUnreliableCommands(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Listener, addr 0xa6cbfe4, size 0x8, virtual false, abstract: false, final false
inline void set_Listener(::ExitGames::Client::Photon::IPhotonPeerListener*  value) ;

/// @brief Method set_LocalMsTimestampDelegate, addr 0xa6cc880, size 0x108, virtual false, abstract: false, final false
inline void set_LocalMsTimestampDelegate(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  value) ;

/// @brief Method set_LongestSentCall, addr 0xa6cc9d0, size 0x18, virtual false, abstract: false, final false
inline void set_LongestSentCall(int32_t  value) ;

/// @brief Method set_MaximumTransferUnit, addr 0xa6ccc14, size 0xc4, virtual false, abstract: false, final false
inline void set_MaximumTransferUnit(int32_t  value) ;

/// @brief Method set_PayloadEncryptorType, addr 0xa6cd504, size 0x158, virtual false, abstract: false, final false
inline void set_PayloadEncryptorType(::System::Type*  value) ;

/// @brief Method set_QuickResendAttempts, addr 0xa6cc33c, size 0x18, virtual false, abstract: false, final false
inline void set_QuickResendAttempts(uint8_t  value) ;

/// @brief Method set_ReuseEventInstance, addr 0xa6cc154, size 0xe0, virtual false, abstract: false, final false
inline void set_ReuseEventInstance(bool  value) ;

/// @brief Method set_SequenceDeltaLimitSends, addr 0xa6cc280, size 0x8, virtual false, abstract: false, final false
inline void set_SequenceDeltaLimitSends(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SerializationProtocolType, addr 0xa6cbfa4, size 0x8, virtual false, abstract: false, final false
inline void set_SerializationProtocolType(::ExitGames::Client::Photon::SerializationProtocol  value) ;

/// [CompilerGenerated]
/// @brief Method set_SocketImplementation, addr 0xa6cbfb4, size 0x8, virtual false, abstract: false, final false
inline void set_SocketImplementation(::System::Type*  value) ;

/// @brief Method set_TrafficStatsEnabled, addr 0xa6ccd4c, size 0x60, virtual false, abstract: false, final false
inline void set_TrafficStatsEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrafficStatsGameLevel, addr 0xa6ccd28, size 0x8, virtual false, abstract: false, final false
inline void set_TrafficStatsGameLevel(::ExitGames::Client::Photon::TrafficStatsGameLevel*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrafficStatsIncoming, addr 0xa6ccd08, size 0x8, virtual false, abstract: false, final false
inline void set_TrafficStatsIncoming(::ExitGames::Client::Photon::TrafficStats*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrafficStatsOutgoing, addr 0xa6ccd18, size 0x8, virtual false, abstract: false, final false
inline void set_TrafficStatsOutgoing(::ExitGames::Client::Photon::TrafficStats*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TransportProtocol, addr 0xa6ccaa8, size 0x8, virtual false, abstract: false, final false
inline void set_TransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol  value) ;

/// @brief Method set_UseByteArraySlicePoolForEvents, addr 0xa6cc23c, size 0x8, virtual false, abstract: false, final false
inline void set_UseByteArraySlicePoolForEvents(bool  value) ;

/// @brief Method set_WrapIncomingStructs, addr 0xa6cc24c, size 0x8, virtual false, abstract: false, final false
inline void set_WrapIncomingStructs(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonPeer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonPeer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonPeer(PhotonPeer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonPeer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonPeer(PhotonPeer const& ) = delete;

/// @brief Field DebugBuild offset 0xffffffff size 0x1
static constexpr bool  DebugBuild{true};

/// @brief Field NativeDatagramEncrypt offset 0xffffffff size 0x1
static constexpr bool  NativeDatagramEncrypt{true};

/// @brief Field NativeEncryptorApiVersion offset 0xffffffff size 0x4
static constexpr int32_t  NativeEncryptorApiVersion{static_cast<int32_t>(0x2)};

/// @brief Field NoSocket offset 0xffffffff size 0x1
static constexpr bool  NoSocket{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26453};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CommandBufferSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____CommandBufferSize_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <LimitOfUnreliableCommands>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____LimitOfUnreliableCommands_k__BackingField;

/// [Obsolete("Check QueuedOutgoingCommands and QueuedIncomingCommands on demand instead.")]
/// @brief Field WarningSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___WarningSize;

/// [Obsolete("Use the ITrafficRecorder to capture all traffic instead.")]
/// @brief Field CommandLogSize, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___CommandLogSize;

/// @brief Field TargetFramework, offset: 0x20, size: 0x4, def value: None
 ::ExitGames::Client::Photon::TargetFrameworks  ___TargetFramework;

/// @brief Field RemoveAppIdFromWebSocketPath, offset: 0x24, size: 0x1, def value: None
 bool  ___RemoveAppIdFromWebSocketPath;

/// @brief Field ClientSdkId, offset: 0x25, size: 0x1, def value: None
 uint8_t  ___ClientSdkId;

/// @brief Field UseInitV3, offset: 0x26, size: 0x1, def value: None
 bool  ___UseInitV3;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SerializationProtocolType>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::ExitGames::Client::Photon::SerializationProtocol  ____SerializationProtocolType_k__BackingField;

/// @brief Field SocketImplementationConfig, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol,::System::Type*>*  ___SocketImplementationConfig;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SocketImplementation>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____SocketImplementation_k__BackingField;

/// @brief Field DebugOut, offset: 0x40, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___DebugOut;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Listener>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::ExitGames::Client::Photon::IPhotonPeerListener*  ____Listener_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field OnDisconnectMessage, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*  ___OnDisconnectMessage;

/// @brief Field reuseEventInstance, offset: 0x58, size: 0x1, def value: None
 bool  ___reuseEventInstance;

/// @brief Field useByteArraySlicePoolForEvents, offset: 0x59, size: 0x1, def value: None
 bool  ___useByteArraySlicePoolForEvents;

/// @brief Field wrapIncomingStructs, offset: 0x5a, size: 0x1, def value: None
 bool  ___wrapIncomingStructs;

/// @brief Field SendInCreationOrder, offset: 0x5b, size: 0x1, def value: None
 bool  ___SendInCreationOrder;

/// @brief Field SendWindowSize, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___SendWindowSize;

/// @brief Field TrafficRecorder, offset: 0x60, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ITrafficRecorder*  ___TrafficRecorder;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <EnableServerTracing>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____EnableServerTracing_k__BackingField;

/// @brief Field quickResendAttempts, offset: 0x69, size: 0x1, def value: None
 uint8_t  ___quickResendAttempts;

/// @brief Field ChannelCount, offset: 0x6a, size: 0x1, def value: None
 uint8_t  ___ChannelCount;

/// @brief Field EnableEncryptedFlag, offset: 0x6b, size: 0x1, def value: None
 bool  ___EnableEncryptedFlag;

/// @brief Field crcEnabled, offset: 0x6c, size: 0x1, def value: None
 bool  ___crcEnabled;

/// @brief Field SentCountAllowance, offset: 0x70, size: 0x4, def value: None
 int32_t  ___SentCountAllowance;

/// @brief Field InitialResendTimeMax, offset: 0x74, size: 0x4, def value: None
 int32_t  ___InitialResendTimeMax;

/// @brief Field TimePingInterval, offset: 0x78, size: 0x4, def value: None
 int32_t  ___TimePingInterval;

/// @brief Field PingUsedAsInit, offset: 0x7c, size: 0x1, def value: None
 bool  ___PingUsedAsInit;

/// @brief Field disconnectTimeout, offset: 0x80, size: 0x4, def value: None
 int32_t  ___disconnectTimeout;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TransportProtocol>k__BackingField, offset: 0x84, size: 0x1, def value: None
 ::ExitGames::Client::Photon::ConnectionProtocol  ____TransportProtocol_k__BackingField;

/// @brief Field mtu, offset: 0x88, size: 0x4, def value: None
 int32_t  ___mtu;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsSendingOnlyAcks>k__BackingField, offset: 0x8c, size: 0x1, def value: None
 bool  ____IsSendingOnlyAcks_k__BackingField;

/// @brief Field RandomizeSequenceNumbers, offset: 0x8d, size: 0x1, def value: None
 bool  ___RandomizeSequenceNumbers;

/// @brief Field RandomizedSequenceNumbers, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___RandomizedSequenceNumbers;

/// @brief Field GcmDatagramEncryption, offset: 0x98, size: 0x1, def value: None
 bool  ___GcmDatagramEncryption;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TrafficStatsIncoming>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::ExitGames::Client::Photon::TrafficStats*  ____TrafficStatsIncoming_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TrafficStatsOutgoing>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::ExitGames::Client::Photon::TrafficStats*  ____TrafficStatsOutgoing_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TrafficStatsGameLevel>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::ExitGames::Client::Photon::TrafficStatsGameLevel*  ____TrafficStatsGameLevel_k__BackingField;

/// @brief Field trafficStatsStopwatch, offset: 0xb8, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___trafficStatsStopwatch;

/// @brief Field trafficStatsEnabled, offset: 0xc0, size: 0x1, def value: None
 bool  ___trafficStatsEnabled;

/// @brief Field peerBase, offset: 0xc8, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PeerBase*  ___peerBase;

/// @brief Field SendOutgoingLockObject, offset: 0xd0, size: 0x8, def value: None
 ::System::Object*  ___SendOutgoingLockObject;

/// @brief Field DispatchLockObject, offset: 0xd8, size: 0x8, def value: None
 ::System::Object*  ___DispatchLockObject;

/// @brief Field EnqueueLock, offset: 0xe0, size: 0x8, def value: None
 ::System::Object*  ___EnqueueLock;

/// @brief Field payloadEncryptorType, offset: 0xe8, size: 0x8, def value: None
 ::System::Type*  ___payloadEncryptorType;

/// @brief Field PayloadEncryptionSecret, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___PayloadEncryptionSecret;

/// @brief Field encryptorType, offset: 0xf8, size: 0x8, def value: None
 ::System::Type*  ___encryptorType;

/// @brief Field Encryptor, offset: 0x100, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*  ___Encryptor;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CountDiscarded>k__BackingField, offset: 0x108, size: 0x4, def value: None
 int32_t  ____CountDiscarded_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <DeltaUnreliableNumber>k__BackingField, offset: 0x10c, size: 0x4, def value: None
 int32_t  ____DeltaUnreliableNumber_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____CommandBufferSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____LimitOfUnreliableCommands_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___WarningSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___CommandLogSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___TargetFramework) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___RemoveAppIdFromWebSocketPath) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___ClientSdkId) == 0x25, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___UseInitV3) == 0x26, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____SerializationProtocolType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___SocketImplementationConfig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____SocketImplementation_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___DebugOut) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____Listener_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___OnDisconnectMessage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___reuseEventInstance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___useByteArraySlicePoolForEvents) == 0x59, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___wrapIncomingStructs) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___SendInCreationOrder) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___SendWindowSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___TrafficRecorder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____EnableServerTracing_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___quickResendAttempts) == 0x69, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___ChannelCount) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___EnableEncryptedFlag) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___crcEnabled) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___SentCountAllowance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___InitialResendTimeMax) == 0x74, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___TimePingInterval) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___PingUsedAsInit) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___disconnectTimeout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____TransportProtocol_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___mtu) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____IsSendingOnlyAcks_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___RandomizeSequenceNumbers) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___RandomizedSequenceNumbers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___GcmDatagramEncryption) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____TrafficStatsIncoming_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____TrafficStatsOutgoing_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____TrafficStatsGameLevel_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___trafficStatsStopwatch) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___trafficStatsEnabled) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___peerBase) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___SendOutgoingLockObject) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___DispatchLockObject) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___EnqueueLock) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___payloadEncryptorType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___PayloadEncryptionSecret) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___encryptorType) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ___Encryptor) == 0x100, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____CountDiscarded_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PhotonPeer, ____DeltaUnreliableNumber_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PhotonPeer) == 0x110, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
