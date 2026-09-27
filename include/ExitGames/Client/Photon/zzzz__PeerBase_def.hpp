#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/PeerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionStateValue_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeerBase)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
struct EgMessageType;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class IPhotonSocket;
}
namespace ExitGames::Client::Photon {
class IProtocol;
}
namespace ExitGames::Client::Photon {
class NCommand;
}
namespace ExitGames::Client::Photon {
class NetworkSimulationSet;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
class PeerBase_GpBinaryV3Parameters;
}
namespace ExitGames::Client::Photon {
class PeerBase_MyAction;
}
namespace ExitGames::Client::Photon {
class PeerBase___c__DisplayClass108_0;
}
namespace ExitGames::Client::Photon {
class PeerBase___c__DisplayClass109_0;
}
namespace ExitGames::Client::Photon {
class PhotonPeer;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
class SimulationItem;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace ExitGames::Client::Photon {
class TrafficStatsGameLevel;
}
namespace ExitGames::Client::Photon {
class TrafficStats;
}
namespace Photon::SocketServer::Security {
class ICryptoProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class PeerBase;
}
namespace ExitGames::Client::Photon {
class PeerBase_GpBinaryV3Parameters;
}
namespace ExitGames::Client::Photon {
class PeerBase_MyAction;
}
namespace ExitGames::Client::Photon {
class PeerBase___c__DisplayClass108_0;
}
namespace ExitGames::Client::Photon {
class PeerBase___c__DisplayClass109_0;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::PeerBase*);
MARK_REF_T(::ExitGames::Client::Photon::PeerBase_GpBinaryV3Parameters*);
MARK_REF_T(::ExitGames::Client::Photon::PeerBase_MyAction*);
MARK_REF_T(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*);
MARK_REF_T(::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerBase*, "ExitGames.Client.Photon", "PeerBase");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerBase_GpBinaryV3Parameters*, "ExitGames.Client.Photon", "PeerBase/GpBinaryV3Parameters");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerBase_MyAction*, "ExitGames.Client.Photon", "PeerBase/MyAction");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0*, "ExitGames.Client.Photon", "PeerBase/<>c__DisplayClass108_0");
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0*, "ExitGames.Client.Photon", "PeerBase/<>c__DisplayClass109_0");
// Dependencies ExitGames.Client.Photon.ConnectionProtocol, ExitGames.Client.Photon.ConnectionStateValue, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PeerBase
class CORDL_TYPE PeerBase : public ::System::Object {
public:
// Declarations
using GpBinaryV3Parameters = ::ExitGames::Client::Photon::PeerBase_GpBinaryV3Parameters;

using MyAction = ::ExitGames::Client::Photon::PeerBase_MyAction;

using __c__DisplayClass108_0 = ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0;

using __c__DisplayClass109_0 = ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0;

/// @brief Field ActionQueue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActionQueue, put=__cordl_internal_set_ActionQueue)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*  ActionQueue;

/// @brief Field AppId, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppId, put=__cordl_internal_set_AppId)) ::StringW  AppId;

/// @brief Field ApplicationIsInitialized, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_ApplicationIsInitialized, put=__cordl_internal_set_ApplicationIsInitialized)) bool  ApplicationIsInitialized;

/// @brief Field ByteCountCurrentDispatch, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ByteCountCurrentDispatch, put=__cordl_internal_set_ByteCountCurrentDispatch)) int32_t  ByteCountCurrentDispatch;

/// @brief Field ByteCountLastOperation, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_ByteCountLastOperation, put=__cordl_internal_set_ByteCountLastOperation)) int32_t  ByteCountLastOperation;

 __declspec(property(get=get_BytesIn)) int64_t  BytesIn;

 __declspec(property(get=get_BytesOut)) int64_t  BytesOut;

 __declspec(property(get=get_ChannelCount)) uint8_t  ChannelCount;

/// @brief Field CommandInCurrentDispatch, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_CommandInCurrentDispatch, put=__cordl_internal_set_CommandInCurrentDispatch)) ::ExitGames::Client::Photon::NCommand*  CommandInCurrentDispatch;

/// @brief Field CryptoProvider, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_CryptoProvider, put=__cordl_internal_set_CryptoProvider)) ::Photon::SocketServer::Security::ICryptoProvider*  CryptoProvider;

/// @brief Field CustomInitData, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomInitData, put=__cordl_internal_set_CustomInitData)) ::System::Object*  CustomInitData;

 __declspec(property(get=get_DisconnectTimeout)) int32_t  DisconnectTimeout;

 __declspec(property(get=get_IsIpv6)) bool  IsIpv6;

 __declspec(property(get=get_Listener)) ::ExitGames::Client::Photon::IPhotonPeerListener*  Listener;

/// @brief Field MessageBufferPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MessageBufferPool, put=setStaticF_MessageBufferPool)) ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  MessageBufferPool;

/// @brief Field NetSimListIncoming, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetSimListIncoming, put=__cordl_internal_set_NetSimListIncoming)) ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  NetSimListIncoming;

/// @brief Field NetSimListOutgoing, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetSimListOutgoing, put=__cordl_internal_set_NetSimListOutgoing)) ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  NetSimListOutgoing;

 __declspec(property(get=get_NetworkSimulationSettings)) ::ExitGames::Client::Photon::NetworkSimulationSet*  NetworkSimulationSettings;

 __declspec(property(get=get_PeerID)) ::StringW  PeerID;

/// @brief Field PhotonSocket, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PhotonSocket, put=__cordl_internal_set_PhotonSocket)) ::ExitGames::Client::Photon::IPhotonSocket*  PhotonSocket;

/// @brief Field PhotonToken, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PhotonToken, put=__cordl_internal_set_PhotonToken)) ::System::Object*  PhotonToken;

 __declspec(property(get=get_ProxyServerAddress, put=set_ProxyServerAddress)) ::StringW  ProxyServerAddress;

 __declspec(property(get=get_QueuedIncomingCommandsCount)) int32_t  QueuedIncomingCommandsCount;

 __declspec(property(get=get_QueuedOutgoingCommandsCount)) int32_t  QueuedOutgoingCommandsCount;

 __declspec(property(get=get_SentReliableCommandsCount)) int32_t  SentReliableCommandsCount;

/// @brief Field SerializationProtocol, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SerializationProtocol, put=__cordl_internal_set_SerializationProtocol)) ::ExitGames::Client::Photon::IProtocol*  SerializationProtocol;

 __declspec(property(get=get_ServerAddress, put=set_ServerAddress)) ::StringW  ServerAddress;

/// @brief Field TrafficPackageHeaderSize, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_TrafficPackageHeaderSize, put=__cordl_internal_set_TrafficPackageHeaderSize)) int32_t  TrafficPackageHeaderSize;

 __declspec(property(get=get_TrafficStatsEnabled)) bool  TrafficStatsEnabled;

 __declspec(property(get=get_TrafficStatsGameLevel)) ::ExitGames::Client::Photon::TrafficStatsGameLevel*  TrafficStatsGameLevel;

 __declspec(property(get=get_TrafficStatsIncoming)) ::ExitGames::Client::Photon::TrafficStats*  TrafficStatsIncoming;

 __declspec(property(get=get_TrafficStatsOutgoing)) ::ExitGames::Client::Photon::TrafficStats*  TrafficStatsOutgoing;

/// @brief Field <ProxyServerAddress>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProxyServerAddress_k__BackingField, put=__cordl_internal_set__ProxyServerAddress_k__BackingField)) ::StringW  _ProxyServerAddress_k__BackingField;

/// @brief Field <ServerAddress>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServerAddress_k__BackingField, put=__cordl_internal_set__ServerAddress_k__BackingField)) ::StringW  _ServerAddress_k__BackingField;

/// @brief Field bytesIn, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytesIn, put=__cordl_internal_set_bytesIn)) int64_t  bytesIn;

/// @brief Field bytesOut, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytesOut, put=__cordl_internal_set_bytesOut)) int64_t  bytesOut;

 __declspec(property(get=get_debugOut)) ::ExitGames::Client::Photon::DebugLevel  debugOut;

/// @brief Field highestRoundTripTimeVariance, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_highestRoundTripTimeVariance, put=__cordl_internal_set_highestRoundTripTimeVariance)) int32_t  highestRoundTripTimeVariance;

/// @brief Field isEncryptionAvailable, offset 0xdd, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEncryptionAvailable, put=__cordl_internal_set_isEncryptionAvailable)) bool  isEncryptionAvailable;

/// @brief Field lagRandomizer, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lagRandomizer, put=__cordl_internal_set_lagRandomizer)) ::System::Random*  lagRandomizer;

/// @brief Field lastRoundTripTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRoundTripTime, put=__cordl_internal_set_lastRoundTripTime)) int32_t  lastRoundTripTime;

/// @brief Field longestSentCall, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_longestSentCall, put=__cordl_internal_set_longestSentCall)) int32_t  longestSentCall;

/// @brief Field lowestRoundTripTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowestRoundTripTime, put=__cordl_internal_set_lowestRoundTripTime)) int32_t  lowestRoundTripTime;

/// @brief Field messageHeader, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_messageHeader, put=__cordl_internal_set_messageHeader)) ::ArrayW<uint8_t>  messageHeader;

 __declspec(property(get=get_mtu)) int32_t  mtu;

/// @brief Field networkSimulationSettings, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkSimulationSettings, put=__cordl_internal_set_networkSimulationSettings)) ::ExitGames::Client::Photon::NetworkSimulationSet*  networkSimulationSettings;

/// @brief Field outgoingCommandsInStream, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_outgoingCommandsInStream, put=__cordl_internal_set_outgoingCommandsInStream)) int32_t  outgoingCommandsInStream;

/// @brief Field packetLossByChallenge, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_packetLossByChallenge, put=__cordl_internal_set_packetLossByChallenge)) int32_t  packetLossByChallenge;

/// @brief Field packetLossByCrc, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_packetLossByCrc, put=__cordl_internal_set_packetLossByCrc)) int32_t  packetLossByCrc;

/// @brief Field peerConnectionState, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_peerConnectionState, put=__cordl_internal_set_peerConnectionState)) ::ExitGames::Client::Photon::ConnectionStateValue  peerConnectionState;

/// @brief Field peerCount, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_peerCount, put=setStaticF_peerCount)) int16_t  peerCount;

/// @brief Field peerID, offset 0x68, size 0x2 
 __declspec(property(get=__cordl_internal_get_peerID, put=__cordl_internal_set_peerID)) int16_t  peerID;

/// @brief Field photonPeer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonPeer, put=__cordl_internal_set_photonPeer)) ::ExitGames::Client::Photon::PhotonPeer*  photonPeer;

/// @brief Field reusableEventData, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableEventData, put=__cordl_internal_set_reusableEventData)) ::ExitGames::Client::Photon::EventData*  reusableEventData;

/// @brief Field roundTripTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundTripTime, put=__cordl_internal_set_roundTripTime)) int32_t  roundTripTime;

/// @brief Field roundTripTimeVariance, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_roundTripTimeVariance, put=__cordl_internal_set_roundTripTimeVariance)) int32_t  roundTripTimeVariance;

/// @brief Field serverTimeOffset, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverTimeOffset, put=__cordl_internal_set_serverTimeOffset)) int32_t  serverTimeOffset;

/// @brief Field serverTimeOffsetIsAvailable, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_serverTimeOffsetIsAvailable, put=__cordl_internal_set_serverTimeOffsetIsAvailable)) bool  serverTimeOffsetIsAvailable;

 __declspec(property(get=get_timeInt)) int32_t  timeInt;

/// @brief Field timeLastAckReceive, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastAckReceive, put=__cordl_internal_set_timeLastAckReceive)) int32_t  timeLastAckReceive;

/// @brief Field timeLastSendAck, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastSendAck, put=__cordl_internal_set_timeLastSendAck)) int32_t  timeLastSendAck;

/// @brief Field timeLastSendOutgoing, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastSendOutgoing, put=__cordl_internal_set_timeLastSendOutgoing)) int32_t  timeLastSendOutgoing;

 __declspec(property(get=get_timePingInterval)) int32_t  timePingInterval;

/// @brief Field timeoutInt, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeoutInt, put=__cordl_internal_set_timeoutInt)) int32_t  timeoutInt;

/// @brief Field timestampOfLastReceive, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_timestampOfLastReceive, put=__cordl_internal_set_timestampOfLastReceive)) int32_t  timestampOfLastReceive;

/// @brief Field usedTransportProtocol, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_usedTransportProtocol, put=__cordl_internal_set_usedTransportProtocol)) ::ExitGames::Client::Photon::ConnectionProtocol  usedTransportProtocol;

/// @brief Field watch, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_watch, put=__cordl_internal_set_watch)) ::System::Diagnostics::Stopwatch*  watch;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Connect(::StringW  serverAddress, ::StringW  proxyServerAddress, ::StringW  appID, ::System::Object*  photonToken) ;

/// @brief Method DeriveSharedKey, addr 0xa6c8db0, size 0x1cc, virtual false, abstract: false, final false
inline void DeriveSharedKey(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method DeserializeMessageAndCallback, addr 0xa6c813c, size 0xc74, virtual true, abstract: false, final false
inline bool DeserializeMessageAndCallback(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disconnect() ;

/// @brief Method DispatchIncomingCommands, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DispatchIncomingCommands() ;

/// @brief Method EnqueueActionForDispatch, addr 0xa6c1d90, size 0x100, virtual false, abstract: false, final false
inline void EnqueueActionForDispatch(::ExitGames::Client::Photon::PeerBase_MyAction*  action) ;

/// @brief Method EnqueueDebugReturn, addr 0xa6bb550, size 0x1ac, virtual false, abstract: false, final false
inline void EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  debugReturn) ;

/// @brief Method EnqueuePhotonMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnqueuePhotonMessage(::ExitGames::Client::Photon::StreamBuffer*  opBytes, ::ExitGames::Client::Photon::SendOptions  sendParams) ;

/// @brief Method EnqueueStatusCallback, addr 0xa6bb1c8, size 0x19c, virtual false, abstract: false, final false
inline void EnqueueStatusCallback(::ExitGames::Client::Photon::StatusCode  statusValue) ;

/// @brief Method ExchangeKeysForEncryption, addr 0xa6c8f7c, size 0x624, virtual false, abstract: false, final false
inline bool ExchangeKeysForEncryption(::System::Object*  lockObject) ;

/// @brief Method FetchServerTimestamp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void FetchServerTimestamp() ;

/// @brief Method GetHttpKeyValueString, addr 0xa6c703c, size 0x22c, virtual false, abstract: false, final false
inline ::StringW GetHttpKeyValueString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dic) ;

/// @brief Method InitCallback, addr 0xa6c782c, size 0xe0, virtual false, abstract: false, final false
inline void InitCallback() ;

/// @brief Method InitEncryption, addr 0xa6c95a0, size 0x3d0, virtual true, abstract: false, final false
inline void InitEncryption(::ArrayW<uint8_t>  secret) ;

/// @brief Method IsTransportEncrypted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsTransportEncrypted() ;

/// @brief Method MessageBufferPoolGet, addr 0xa6bfc10, size 0x1c4, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::StreamBuffer* MessageBufferPoolGet() ;

/// @brief Method MessageBufferPoolPut, addr 0xa6bfdd4, size 0x16c, virtual false, abstract: false, final false
static inline void MessageBufferPoolPut(::ExitGames::Client::Photon::StreamBuffer*  buff) ;

/// @brief Method NetworkSimRun, addr 0xa6c9970, size 0x3c4, virtual false, abstract: false, final false
inline void NetworkSimRun() ;

static inline ::ExitGames::Client::Photon::PeerBase* New_ctor() ;

/// @brief Method OnConnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnConnect() ;

/// @brief Method PrepareWebSocketUrl, addr 0xa6c768c, size 0x1a0, virtual false, abstract: false, final false
inline ::StringW PrepareWebSocketUrl(::StringW  serverAddress, ::StringW  appId, ::System::Object*  photonToken) ;

/// @brief Method ReceiveIncomingCommands, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReceiveIncomingCommands(::ArrayW<uint8_t>  inBuff, int32_t  dataLength) ;

/// @brief Method ReceiveNetworkSimulated, addr 0xa6c38fc, size 0x350, virtual false, abstract: false, final false
inline void ReceiveNetworkSimulated(::ArrayW<uint8_t>  dataReceived) ;

/// @brief Method Reset, addr 0xa6b9dd4, size 0x30c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SendAcksOnly, addr 0xa6c8134, size 0x8, virtual true, abstract: false, final false
inline bool SendAcksOnly() ;

/// @brief Method SendNetworkSimulated, addr 0xa6c0864, size 0x350, virtual false, abstract: false, final false
inline void SendNetworkSimulated(::ArrayW<uint8_t>  dataToSend) ;

/// @brief Method SendOutgoingCommands, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SendOutgoingCommands() ;

/// @brief Method SerializeMessageToMessage, addr 0xa6c7e64, size 0x2d0, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StreamBuffer* SerializeMessageToMessage(::System::Object*  message, bool  encrypt) ;

/// @brief Method SerializeOperationToMessage, addr 0xa6c7bb8, size 0x2ac, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StreamBuffer* SerializeOperationToMessage(uint8_t  opCode, ::ExitGames::Client::Photon::ParameterDictionary*  parameters, ::ExitGames::Client::Photon::EgMessageType  messageType, bool  encrypt) ;

/// @brief Method SerializeOperationToMessage, addr 0xa6c790c, size 0x2ac, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::StreamBuffer* SerializeOperationToMessage(uint8_t  opCode, ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  parameters, ::ExitGames::Client::Photon::EgMessageType  messageType, bool  encrypt) ;

/// @brief Method StopConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopConnection() ;

/// @brief Method UpdateRoundTripTimeAndVariance, addr 0xa6c1d28, size 0x68, virtual false, abstract: false, final false
inline void UpdateRoundTripTimeAndVariance(int32_t  lastRoundtripTime) ;

/// @brief Method WriteInitRequest, addr 0xa6c2508, size 0x578, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> WriteInitRequest() ;

/// @brief Method WriteInitV3, addr 0xa6c7268, size 0x424, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> WriteInitV3() ;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>* const& __cordl_internal_get_ActionQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*& __cordl_internal_get_ActionQueue() ;

constexpr ::StringW const& __cordl_internal_get_AppId() const;

constexpr ::StringW& __cordl_internal_get_AppId() ;

constexpr bool const& __cordl_internal_get_ApplicationIsInitialized() const;

constexpr bool& __cordl_internal_get_ApplicationIsInitialized() ;

constexpr int32_t const& __cordl_internal_get_ByteCountCurrentDispatch() const;

constexpr int32_t& __cordl_internal_get_ByteCountCurrentDispatch() ;

constexpr int32_t const& __cordl_internal_get_ByteCountLastOperation() const;

constexpr int32_t& __cordl_internal_get_ByteCountLastOperation() ;

constexpr ::ExitGames::Client::Photon::NCommand* const& __cordl_internal_get_CommandInCurrentDispatch() const;

constexpr ::ExitGames::Client::Photon::NCommand*& __cordl_internal_get_CommandInCurrentDispatch() ;

constexpr ::Photon::SocketServer::Security::ICryptoProvider* const& __cordl_internal_get_CryptoProvider() const;

constexpr ::Photon::SocketServer::Security::ICryptoProvider*& __cordl_internal_get_CryptoProvider() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomInitData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomInitData() ;

constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>* const& __cordl_internal_get_NetSimListIncoming() const;

constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*& __cordl_internal_get_NetSimListIncoming() ;

constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>* const& __cordl_internal_get_NetSimListOutgoing() const;

constexpr ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*& __cordl_internal_get_NetSimListOutgoing() ;

constexpr ::ExitGames::Client::Photon::IPhotonSocket* const& __cordl_internal_get_PhotonSocket() const;

constexpr ::ExitGames::Client::Photon::IPhotonSocket*& __cordl_internal_get_PhotonSocket() ;

constexpr ::System::Object* const& __cordl_internal_get_PhotonToken() const;

constexpr ::System::Object*& __cordl_internal_get_PhotonToken() ;

constexpr ::ExitGames::Client::Photon::IProtocol* const& __cordl_internal_get_SerializationProtocol() const;

constexpr ::ExitGames::Client::Photon::IProtocol*& __cordl_internal_get_SerializationProtocol() ;

constexpr int32_t const& __cordl_internal_get_TrafficPackageHeaderSize() const;

constexpr int32_t& __cordl_internal_get_TrafficPackageHeaderSize() ;

constexpr ::StringW const& __cordl_internal_get__ProxyServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ProxyServerAddress_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ServerAddress_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ServerAddress_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get_bytesIn() const;

constexpr int64_t& __cordl_internal_get_bytesIn() ;

constexpr int64_t const& __cordl_internal_get_bytesOut() const;

constexpr int64_t& __cordl_internal_get_bytesOut() ;

constexpr int32_t const& __cordl_internal_get_highestRoundTripTimeVariance() const;

constexpr int32_t& __cordl_internal_get_highestRoundTripTimeVariance() ;

constexpr bool const& __cordl_internal_get_isEncryptionAvailable() const;

constexpr bool& __cordl_internal_get_isEncryptionAvailable() ;

constexpr ::System::Random* const& __cordl_internal_get_lagRandomizer() const;

constexpr ::System::Random*& __cordl_internal_get_lagRandomizer() ;

constexpr int32_t const& __cordl_internal_get_lastRoundTripTime() const;

constexpr int32_t& __cordl_internal_get_lastRoundTripTime() ;

constexpr int32_t const& __cordl_internal_get_longestSentCall() const;

constexpr int32_t& __cordl_internal_get_longestSentCall() ;

constexpr int32_t const& __cordl_internal_get_lowestRoundTripTime() const;

constexpr int32_t& __cordl_internal_get_lowestRoundTripTime() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_messageHeader() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_messageHeader() ;

constexpr ::ExitGames::Client::Photon::NetworkSimulationSet* const& __cordl_internal_get_networkSimulationSettings() const;

constexpr ::ExitGames::Client::Photon::NetworkSimulationSet*& __cordl_internal_get_networkSimulationSettings() ;

constexpr int32_t const& __cordl_internal_get_outgoingCommandsInStream() const;

constexpr int32_t& __cordl_internal_get_outgoingCommandsInStream() ;

constexpr int32_t const& __cordl_internal_get_packetLossByChallenge() const;

constexpr int32_t& __cordl_internal_get_packetLossByChallenge() ;

constexpr int32_t const& __cordl_internal_get_packetLossByCrc() const;

constexpr int32_t& __cordl_internal_get_packetLossByCrc() ;

constexpr ::ExitGames::Client::Photon::ConnectionStateValue const& __cordl_internal_get_peerConnectionState() const;

constexpr ::ExitGames::Client::Photon::ConnectionStateValue& __cordl_internal_get_peerConnectionState() ;

constexpr int16_t const& __cordl_internal_get_peerID() const;

constexpr int16_t& __cordl_internal_get_peerID() ;

constexpr ::ExitGames::Client::Photon::PhotonPeer* const& __cordl_internal_get_photonPeer() const;

constexpr ::ExitGames::Client::Photon::PhotonPeer*& __cordl_internal_get_photonPeer() ;

constexpr ::ExitGames::Client::Photon::EventData* const& __cordl_internal_get_reusableEventData() const;

constexpr ::ExitGames::Client::Photon::EventData*& __cordl_internal_get_reusableEventData() ;

constexpr int32_t const& __cordl_internal_get_roundTripTime() const;

constexpr int32_t& __cordl_internal_get_roundTripTime() ;

constexpr int32_t const& __cordl_internal_get_roundTripTimeVariance() const;

constexpr int32_t& __cordl_internal_get_roundTripTimeVariance() ;

constexpr int32_t const& __cordl_internal_get_serverTimeOffset() const;

constexpr int32_t& __cordl_internal_get_serverTimeOffset() ;

constexpr bool const& __cordl_internal_get_serverTimeOffsetIsAvailable() const;

constexpr bool& __cordl_internal_get_serverTimeOffsetIsAvailable() ;

constexpr int32_t const& __cordl_internal_get_timeLastAckReceive() const;

constexpr int32_t& __cordl_internal_get_timeLastAckReceive() ;

constexpr int32_t const& __cordl_internal_get_timeLastSendAck() const;

constexpr int32_t& __cordl_internal_get_timeLastSendAck() ;

constexpr int32_t const& __cordl_internal_get_timeLastSendOutgoing() const;

constexpr int32_t& __cordl_internal_get_timeLastSendOutgoing() ;

constexpr int32_t const& __cordl_internal_get_timeoutInt() const;

constexpr int32_t& __cordl_internal_get_timeoutInt() ;

constexpr int32_t const& __cordl_internal_get_timestampOfLastReceive() const;

constexpr int32_t& __cordl_internal_get_timestampOfLastReceive() ;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& __cordl_internal_get_usedTransportProtocol() const;

constexpr ::ExitGames::Client::Photon::ConnectionProtocol& __cordl_internal_get_usedTransportProtocol() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_watch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_watch() ;

constexpr void __cordl_internal_set_ActionQueue(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*  value) ;

constexpr void __cordl_internal_set_AppId(::StringW  value) ;

constexpr void __cordl_internal_set_ApplicationIsInitialized(bool  value) ;

constexpr void __cordl_internal_set_ByteCountCurrentDispatch(int32_t  value) ;

constexpr void __cordl_internal_set_ByteCountLastOperation(int32_t  value) ;

constexpr void __cordl_internal_set_CommandInCurrentDispatch(::ExitGames::Client::Photon::NCommand*  value) ;

constexpr void __cordl_internal_set_CryptoProvider(::Photon::SocketServer::Security::ICryptoProvider*  value) ;

constexpr void __cordl_internal_set_CustomInitData(::System::Object*  value) ;

constexpr void __cordl_internal_set_NetSimListIncoming(::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  value) ;

constexpr void __cordl_internal_set_NetSimListOutgoing(::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  value) ;

constexpr void __cordl_internal_set_PhotonSocket(::ExitGames::Client::Photon::IPhotonSocket*  value) ;

constexpr void __cordl_internal_set_PhotonToken(::System::Object*  value) ;

constexpr void __cordl_internal_set_SerializationProtocol(::ExitGames::Client::Photon::IProtocol*  value) ;

constexpr void __cordl_internal_set_TrafficPackageHeaderSize(int32_t  value) ;

constexpr void __cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ServerAddress_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_bytesIn(int64_t  value) ;

constexpr void __cordl_internal_set_bytesOut(int64_t  value) ;

constexpr void __cordl_internal_set_highestRoundTripTimeVariance(int32_t  value) ;

constexpr void __cordl_internal_set_isEncryptionAvailable(bool  value) ;

constexpr void __cordl_internal_set_lagRandomizer(::System::Random*  value) ;

constexpr void __cordl_internal_set_lastRoundTripTime(int32_t  value) ;

constexpr void __cordl_internal_set_longestSentCall(int32_t  value) ;

constexpr void __cordl_internal_set_lowestRoundTripTime(int32_t  value) ;

constexpr void __cordl_internal_set_messageHeader(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_networkSimulationSettings(::ExitGames::Client::Photon::NetworkSimulationSet*  value) ;

constexpr void __cordl_internal_set_outgoingCommandsInStream(int32_t  value) ;

constexpr void __cordl_internal_set_packetLossByChallenge(int32_t  value) ;

constexpr void __cordl_internal_set_packetLossByCrc(int32_t  value) ;

constexpr void __cordl_internal_set_peerConnectionState(::ExitGames::Client::Photon::ConnectionStateValue  value) ;

constexpr void __cordl_internal_set_peerID(int16_t  value) ;

constexpr void __cordl_internal_set_photonPeer(::ExitGames::Client::Photon::PhotonPeer*  value) ;

constexpr void __cordl_internal_set_reusableEventData(::ExitGames::Client::Photon::EventData*  value) ;

constexpr void __cordl_internal_set_roundTripTime(int32_t  value) ;

constexpr void __cordl_internal_set_roundTripTimeVariance(int32_t  value) ;

constexpr void __cordl_internal_set_serverTimeOffset(int32_t  value) ;

constexpr void __cordl_internal_set_serverTimeOffsetIsAvailable(bool  value) ;

constexpr void __cordl_internal_set_timeLastAckReceive(int32_t  value) ;

constexpr void __cordl_internal_set_timeLastSendAck(int32_t  value) ;

constexpr void __cordl_internal_set_timeLastSendOutgoing(int32_t  value) ;

constexpr void __cordl_internal_set_timeoutInt(int32_t  value) ;

constexpr void __cordl_internal_set_timestampOfLastReceive(int32_t  value) ;

constexpr void __cordl_internal_set_usedTransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol  value) ;

constexpr void __cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0xa6b96e0, size 0x214, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>* getStaticF_MessageBufferPool() ;

static inline int16_t getStaticF_peerCount() ;

/// @brief Method get_BytesIn, addr 0xa6c6f94, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesIn() ;

/// @brief Method get_BytesOut, addr 0xa6c6f8c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesOut() ;

/// @brief Method get_ChannelCount, addr 0xa6ba0f8, size 0x18, virtual false, abstract: false, final false
inline uint8_t get_ChannelCount() ;

/// @brief Method get_DisconnectTimeout, addr 0xa6c0bb4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_DisconnectTimeout() ;

/// @brief Method get_IsIpv6, addr 0xa6c701c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsIpv6() ;

/// @brief Method get_Listener, addr 0xa6bb438, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::IPhotonPeerListener* get_Listener() ;

/// @brief Method get_NetworkSimulationSettings, addr 0xa6baad4, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NetworkSimulationSet* get_NetworkSimulationSettings() ;

/// @brief Method get_PeerID, addr 0xa6c6fa4, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_PeerID() ;

/// [CompilerGenerated]
/// @brief Method get_ProxyServerAddress, addr 0xa6c6f7c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ProxyServerAddress() ;

/// @brief Method get_QueuedIncomingCommandsCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_QueuedIncomingCommandsCount() ;

/// @brief Method get_QueuedOutgoingCommandsCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_QueuedOutgoingCommandsCount() ;

/// @brief Method get_SentReliableCommandsCount, addr 0xa6c6f9c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_SentReliableCommandsCount() ;

/// [CompilerGenerated]
/// @brief Method get_ServerAddress, addr 0xa6c6f6c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ServerAddress() ;

/// @brief Method get_TrafficStatsEnabled, addr 0xa6ba3a0, size 0x18, virtual false, abstract: false, final false
inline bool get_TrafficStatsEnabled() ;

/// @brief Method get_TrafficStatsGameLevel, addr 0xa6bfa54, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* get_TrafficStatsGameLevel() ;

/// @brief Method get_TrafficStatsIncoming, addr 0xa6c1814, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStats* get_TrafficStatsIncoming() ;

/// @brief Method get_TrafficStatsOutgoing, addr 0xa6ba3b8, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::TrafficStats* get_TrafficStatsOutgoing() ;

/// @brief Method get_debugOut, addr 0xa6bb538, size 0x18, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::DebugLevel get_debugOut() ;

/// @brief Method get_mtu, addr 0xa6ba0e0, size 0x18, virtual false, abstract: false, final false
inline int32_t get_mtu() ;

/// @brief Method get_outgoingStreamBufferSize, addr 0xa6c6fc4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_outgoingStreamBufferSize() ;

/// @brief Method get_timeInt, addr 0xa6bdea0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_timeInt() ;

/// @brief Method get_timePingInterval, addr 0xa6bf10c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_timePingInterval() ;

static inline void setStaticF_MessageBufferPool(::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::StreamBuffer*>*  value) ;

static inline void setStaticF_peerCount(int16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ProxyServerAddress, addr 0xa6c6f84, size 0x8, virtual false, abstract: false, final false
inline void set_ProxyServerAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServerAddress, addr 0xa6c6f74, size 0x8, virtual false, abstract: false, final false
inline void set_ServerAddress(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerBase(PeerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerBase(PeerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26447};

/// @brief Field photonPeer, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PhotonPeer*  ___photonPeer;

/// @brief Field SerializationProtocol, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::IProtocol*  ___SerializationProtocol;

/// @brief Field usedTransportProtocol, offset: 0x20, size: 0x1, def value: None
 ::ExitGames::Client::Photon::ConnectionProtocol  ___usedTransportProtocol;

/// @brief Field PhotonSocket, offset: 0x28, size: 0x8, def value: None
 ::ExitGames::Client::Photon::IPhotonSocket*  ___PhotonSocket;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ServerAddress>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____ServerAddress_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ProxyServerAddress>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____ProxyServerAddress_k__BackingField;

/// @brief Field peerConnectionState, offset: 0x40, size: 0x1, def value: None
 ::ExitGames::Client::Photon::ConnectionStateValue  ___peerConnectionState;

/// @brief Field ByteCountLastOperation, offset: 0x44, size: 0x4, def value: None
 int32_t  ___ByteCountLastOperation;

/// @brief Field ByteCountCurrentDispatch, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ByteCountCurrentDispatch;

/// @brief Field CommandInCurrentDispatch, offset: 0x50, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NCommand*  ___CommandInCurrentDispatch;

/// @brief Field packetLossByCrc, offset: 0x58, size: 0x4, def value: None
 int32_t  ___packetLossByCrc;

/// @brief Field packetLossByChallenge, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___packetLossByChallenge;

/// @brief Field ActionQueue, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ExitGames::Client::Photon::PeerBase_MyAction*>*  ___ActionQueue;

/// @brief Field peerID, offset: 0x68, size: 0x2, def value: None
 int16_t  ___peerID;

/// @brief Field serverTimeOffset, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___serverTimeOffset;

/// @brief Field serverTimeOffsetIsAvailable, offset: 0x70, size: 0x1, def value: None
 bool  ___serverTimeOffsetIsAvailable;

/// @brief Field roundTripTime, offset: 0x74, size: 0x4, def value: None
 int32_t  ___roundTripTime;

/// @brief Field roundTripTimeVariance, offset: 0x78, size: 0x4, def value: None
 int32_t  ___roundTripTimeVariance;

/// @brief Field lastRoundTripTime, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___lastRoundTripTime;

/// @brief Field lowestRoundTripTime, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lowestRoundTripTime;

/// @brief Field highestRoundTripTimeVariance, offset: 0x84, size: 0x4, def value: None
 int32_t  ___highestRoundTripTimeVariance;

/// @brief Field timestampOfLastReceive, offset: 0x88, size: 0x4, def value: None
 int32_t  ___timestampOfLastReceive;

/// @brief Field bytesOut, offset: 0x90, size: 0x8, def value: None
 int64_t  ___bytesOut;

/// @brief Field bytesIn, offset: 0x98, size: 0x8, def value: None
 int64_t  ___bytesIn;

/// @brief Field PhotonToken, offset: 0xa0, size: 0x8, def value: None
 ::System::Object*  ___PhotonToken;

/// @brief Field CustomInitData, offset: 0xa8, size: 0x8, def value: None
 ::System::Object*  ___CustomInitData;

/// @brief Field AppId, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___AppId;

/// @brief Field reusableEventData, offset: 0xb8, size: 0x8, def value: None
 ::ExitGames::Client::Photon::EventData*  ___reusableEventData;

/// @brief Field watch, offset: 0xc0, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___watch;

/// @brief Field timeoutInt, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___timeoutInt;

/// @brief Field timeLastAckReceive, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___timeLastAckReceive;

/// @brief Field longestSentCall, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___longestSentCall;

/// @brief Field timeLastSendAck, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___timeLastSendAck;

/// @brief Field timeLastSendOutgoing, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___timeLastSendOutgoing;

/// @brief Field ApplicationIsInitialized, offset: 0xdc, size: 0x1, def value: None
 bool  ___ApplicationIsInitialized;

/// @brief Field isEncryptionAvailable, offset: 0xdd, size: 0x1, def value: None
 bool  ___isEncryptionAvailable;

/// @brief Field outgoingCommandsInStream, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___outgoingCommandsInStream;

/// @brief Field messageHeader, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___messageHeader;

/// @brief Field CryptoProvider, offset: 0xf0, size: 0x8, def value: None
 ::Photon::SocketServer::Security::ICryptoProvider*  ___CryptoProvider;

/// @brief Field lagRandomizer, offset: 0xf8, size: 0x8, def value: None
 ::System::Random*  ___lagRandomizer;

/// @brief Field NetSimListOutgoing, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  ___NetSimListOutgoing;

/// @brief Field NetSimListIncoming, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::ExitGames::Client::Photon::SimulationItem*>*  ___NetSimListIncoming;

/// @brief Field networkSimulationSettings, offset: 0x110, size: 0x8, def value: None
 ::ExitGames::Client::Photon::NetworkSimulationSet*  ___networkSimulationSettings;

/// @brief Field TrafficPackageHeaderSize, offset: 0x118, size: 0x4, def value: None
 int32_t  ___TrafficPackageHeaderSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___photonPeer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___SerializationProtocol) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___usedTransportProtocol) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___PhotonSocket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ____ServerAddress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ____ProxyServerAddress_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___peerConnectionState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___ByteCountLastOperation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___ByteCountCurrentDispatch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___CommandInCurrentDispatch) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___packetLossByCrc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___packetLossByChallenge) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___ActionQueue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___peerID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___serverTimeOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___serverTimeOffsetIsAvailable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___roundTripTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___roundTripTimeVariance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___lastRoundTripTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___lowestRoundTripTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___highestRoundTripTimeVariance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___timestampOfLastReceive) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___bytesOut) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___bytesIn) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___PhotonToken) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___CustomInitData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___AppId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___reusableEventData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___watch) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___timeoutInt) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___timeLastAckReceive) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___longestSentCall) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___timeLastSendAck) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___timeLastSendOutgoing) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___ApplicationIsInitialized) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___isEncryptionAvailable) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___outgoingCommandsInStream) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___messageHeader) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___CryptoProvider) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___lagRandomizer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___NetSimListOutgoing) == 0x100, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___NetSimListIncoming) == 0x108, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___networkSimulationSettings) == 0x110, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase, ___TrafficPackageHeaderSize) == 0x118, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PeerBase) == 0x120, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [CompilerGenerated]
// Dependencies ExitGames.Client.Photon.StatusCode, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
class CORDL_TYPE PeerBase___c__DisplayClass109_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::ExitGames::Client::Photon::PeerBase*  __4__this;

/// @brief Field statusValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_statusValue, put=__cordl_internal_set_statusValue)) ::ExitGames::Client::Photon::StatusCode  statusValue;

static inline ::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0* New_ctor() ;

/// @brief Method <EnqueueStatusCallback>b__0, addr 0xa6c9f70, size 0xbc, virtual false, abstract: false, final false
inline void _EnqueueStatusCallback_b__0() ;

constexpr ::ExitGames::Client::Photon::PeerBase* const& __cordl_internal_get___4__this() const;

constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get___4__this() ;

constexpr ::ExitGames::Client::Photon::StatusCode const& __cordl_internal_get_statusValue() const;

constexpr ::ExitGames::Client::Photon::StatusCode& __cordl_internal_get_statusValue() ;

constexpr void __cordl_internal_set___4__this(::ExitGames::Client::Photon::PeerBase*  value) ;

constexpr void __cordl_internal_set_statusValue(::ExitGames::Client::Photon::StatusCode  value) ;

/// @brief Method .ctor, addr 0xa6c9f68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerBase___c__DisplayClass109_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerBase___c__DisplayClass109_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerBase___c__DisplayClass109_0(PeerBase___c__DisplayClass109_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerBase___c__DisplayClass109_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerBase___c__DisplayClass109_0(PeerBase___c__DisplayClass109_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26446};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PeerBase*  _____4__this;

/// @brief Field statusValue, offset: 0x18, size: 0x4, def value: None
 ::ExitGames::Client::Photon::StatusCode  ___statusValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0, ___statusValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass109_0) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// [CompilerGenerated]
// Dependencies ExitGames.Client.Photon.DebugLevel, System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PeerBase/<>c__DisplayClass108_0
class CORDL_TYPE PeerBase___c__DisplayClass108_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::ExitGames::Client::Photon::PeerBase*  __4__this;

/// @brief Field debugReturn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugReturn, put=__cordl_internal_set_debugReturn)) ::StringW  debugReturn;

/// @brief Field level, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_level, put=__cordl_internal_set_level)) ::ExitGames::Client::Photon::DebugLevel  level;

static inline ::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0* New_ctor() ;

/// @brief Method <EnqueueDebugReturn>b__0, addr 0xa6c9ea8, size 0xc0, virtual false, abstract: false, final false
inline void _EnqueueDebugReturn_b__0() ;

constexpr ::ExitGames::Client::Photon::PeerBase* const& __cordl_internal_get___4__this() const;

constexpr ::ExitGames::Client::Photon::PeerBase*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_debugReturn() const;

constexpr ::StringW& __cordl_internal_get_debugReturn() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_level() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_level() ;

constexpr void __cordl_internal_set___4__this(::ExitGames::Client::Photon::PeerBase*  value) ;

constexpr void __cordl_internal_set_debugReturn(::StringW  value) ;

constexpr void __cordl_internal_set_level(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method .ctor, addr 0xa6c9ea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerBase___c__DisplayClass108_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerBase___c__DisplayClass108_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerBase___c__DisplayClass108_0(PeerBase___c__DisplayClass108_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerBase___c__DisplayClass108_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerBase___c__DisplayClass108_0(PeerBase___c__DisplayClass108_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26445};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::PeerBase*  _____4__this;

/// @brief Field level, offset: 0x18, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___level;

/// @brief Field debugReturn, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___debugReturn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0, ___level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0, ___debugReturn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::PeerBase___c__DisplayClass108_0) == 0x28, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PeerBase/GpBinaryV3Parameters
class CORDL_TYPE PeerBase_GpBinaryV3Parameters : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerBase_GpBinaryV3Parameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerBase_GpBinaryV3Parameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerBase_GpBinaryV3Parameters(PeerBase_GpBinaryV3Parameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerBase_GpBinaryV3Parameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerBase_GpBinaryV3Parameters(PeerBase_GpBinaryV3Parameters const& ) = delete;

/// @brief Field CustomObject offset 0xffffffff size 0x1
static constexpr uint8_t  CustomObject{static_cast<uint8_t>(0x0u)};

/// @brief Field ExtraPlatformParams offset 0xffffffff size 0x1
static constexpr uint8_t  ExtraPlatformParams{static_cast<uint8_t>(0x1u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::PeerBase_GpBinaryV3Parameters) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.PeerBase/MyAction
class CORDL_TYPE PeerBase_MyAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6c9e78, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6c9e94, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6c9e64, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::ExitGames::Client::Photon::PeerBase_MyAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6c9dc8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerBase_MyAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerBase_MyAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerBase_MyAction(PeerBase_MyAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerBase_MyAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerBase_MyAction(PeerBase_MyAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::PeerBase_MyAction) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
