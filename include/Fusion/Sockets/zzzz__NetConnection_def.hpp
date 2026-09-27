#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_EntryState_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionStatus_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateConnectingData_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateDisconnectedData_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_StateShutdownData_def.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelopeRingBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetSequencer_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableList_def.hpp"
#include "Fusion/zzzz__TimerDelta_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnection)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
struct NetConnectionId;
}
namespace Fusion::Sockets {
struct NetConnectionStatus;
}
namespace GlobalNamespace {
struct NetConnection_StateConnectingData;
}
namespace GlobalNamespace {
struct NetConnection_StateDisconnectedData;
}
namespace GlobalNamespace {
struct NetConnection_StateShutdownData;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetConnection;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConnection);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConnection, "Fusion.Sockets", "NetConnection");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetConnection::StateConnectingData, Fusion.Sockets.NetConnection::StateDisconnectedData, Fusion.Sockets.NetConnection::StateShutdownData, Fusion.Sockets.NetConnectionId, Fusion.Sockets.NetConnectionMap::EntryState, Fusion.Sockets.NetConnectionStatus, Fusion.Sockets.NetSendEnvelopeRingBuffer, Fusion.Sockets.NetSequencer, Fusion.Sockets.ReliableBuffer, Fusion.Sockets.ReliableList, Fusion.TimerDelta
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnection
struct CORDL_TYPE NetConnection {
public:
// Declarations
using StateConnectingData = ::GlobalNamespace::NetConnection_StateConnectingData;

using StateDisconnectedData = ::GlobalNamespace::NetConnection_StateDisconnectedData;

using StateShutdownData = ::GlobalNamespace::NetConnection_StateShutdownData;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_ConnectionStatus)) ::Fusion::Sockets::NetConnectionStatus  ConnectionStatus;

 __declspec(property(get=get_LocalConnectionId)) ::Fusion::Sockets::NetConnectionId  LocalConnectionId;

 __declspec(property(get=get_RemoteAddress)) ::Fusion::Sockets::NetAddress  RemoteAddress;

 __declspec(property(get=get_RoundTripTime)) double_t  RoundTripTime;

/// @brief Method Initialize, addr 0x602a1dc, size 0xa0, virtual false, abstract: false, final false
static inline void Initialize(::Fusion::Sockets::NetConnection*  c, int16_t  group, int16_t  index, ::Fusion::Sockets::NetConfig*  config) ;

/// @brief Method NextNotifySendSequence, addr 0x602a1a4, size 0x38, virtual false, abstract: false, final false
static inline uint16_t NextNotifySendSequence(::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method Reset, addr 0x602a27c, size 0x15c, virtual false, abstract: false, final false
static inline void Reset(::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method SetRtt, addr 0x602a3d8, size 0x14, virtual false, abstract: false, final false
static inline void SetRtt(::Fusion::Sockets::NetConnection*  c, double_t  rtt) ;

/// @brief Method ToString, addr 0x602a3ec, size 0x294, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Active, addr 0x602a168, size 0x10, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_ConnectionStatus, addr 0x602a194, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnectionStatus get_ConnectionStatus() ;

/// @brief Method get_LocalConnectionId, addr 0x602a19c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnectionId get_LocalConnectionId() ;

/// @brief Method get_RemoteAddress, addr 0x602a180, size 0x14, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_RemoteAddress() ;

/// @brief Method get_RoundTripTime, addr 0x602a178, size 0x8, virtual false, abstract: false, final false
inline double_t get_RoundTripTime() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConnection() ;

// Ctor Parameters [CppParam { name: "MapHash", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MapNext", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "MapState", ty: "::GlobalNamespace::NetConnectionMap_EntryState", modifiers: "", def_value: None, comment: None }, CppParam { name: "LocalId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: None, comment: None }, CppParam { name: "RemoteId", ty: "::Fusion::Sockets::NetConnectionId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "::Fusion::Sockets::NetConnectionStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rtt", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SendTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RecvTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateConnecting", ty: "::GlobalNamespace::NetConnection_StateConnectingData", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateDisconnected", ty: "::GlobalNamespace::NetConnection_StateDisconnectedData", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateShutdown", ty: "::GlobalNamespace::NetConnection_StateShutdownData", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifySendWindow", ty: "::Fusion::Sockets::NetSendEnvelopeRingBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifySendSequencer", ty: "::Fusion::Sockets::NetSequencer", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifySendTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvAckTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvAckOutdatedCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvMask", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvSequence", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvUnackedCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvFragment", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvFragmentBuffer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvFragmentBufferLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NotifyRecvFragmentSequenceDistance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionToken", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionTokenLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisconnectToken", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisconnectTokenLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UniqueIdHash", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UniqueId", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Counter", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReliableBuffer", ty: "::Fusion::Sockets::ReliableBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReliableSendList", ty: "::Fusion::Sockets::ReliableList", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReliableSendTimer", ty: "::Fusion::TimerDelta", modifiers: "", def_value: None, comment: None }]
constexpr NetConnection(uint64_t  MapHash, ::Fusion::Sockets::NetConnection*  MapNext, ::GlobalNamespace::NetConnectionMap_EntryState  MapState, ::Fusion::Sockets::NetConnectionId  LocalId, ::Fusion::Sockets::NetConnectionId  RemoteId, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetConnectionStatus  Status, double_t  Rtt, double_t  SendTime, double_t  RecvTime, ::GlobalNamespace::NetConnection_StateConnectingData  StateConnecting, ::GlobalNamespace::NetConnection_StateDisconnectedData  StateDisconnected, ::GlobalNamespace::NetConnection_StateShutdownData  StateShutdown, ::Fusion::Sockets::NetSendEnvelopeRingBuffer  NotifySendWindow, ::Fusion::Sockets::NetSequencer  NotifySendSequencer, double_t  NotifySendTime, double_t  NotifyRecvAckTime, int32_t  NotifyRecvAckOutdatedCount, double_t  NotifyRecvTime, uint64_t  NotifyRecvMask, uint16_t  NotifyRecvSequence, int32_t  NotifyRecvUnackedCount, int32_t  NotifyRecvFragment, uint8_t*  NotifyRecvFragmentBuffer, int32_t  NotifyRecvFragmentBufferLength, int32_t  NotifyRecvFragmentSequenceDistance, uint8_t*  ConnectionToken, int32_t  ConnectionTokenLength, uint8_t*  DisconnectToken, int32_t  DisconnectTokenLength, int64_t  UniqueIdHash, uint8_t*  UniqueId, uint32_t  Counter, ::Fusion::Sockets::ReliableBuffer  ReliableBuffer, ::Fusion::Sockets::ReliableList  ReliableSendList, ::Fusion::TimerDelta  ReliableSendTimer) noexcept;

/// @brief Field UNIQUE_ID_SIZE offset 0xffffffff size 0x1
static constexpr uint8_t  UNIQUE_ID_SIZE{static_cast<uint8_t>(0x8u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1b0};

/// @brief Field MapHash, offset: 0x0, size: 0x8, def value: None
 uint64_t  MapHash;

/// @brief Field MapNext, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnection*  MapNext;

/// @brief Field MapState, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::NetConnectionMap_EntryState  MapState;

/// @brief Field LocalId, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  LocalId;

/// @brief Field RemoteId, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionId  RemoteId;

/// @brief Field Address, offset: 0x28, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Status, offset: 0x40, size: 0x4, def value: None
 ::Fusion::Sockets::NetConnectionStatus  Status;

/// @brief Field Rtt, offset: 0x48, size: 0x8, def value: None
 double_t  Rtt;

/// @brief Field SendTime, offset: 0x50, size: 0x8, def value: None
 double_t  SendTime;

/// @brief Field RecvTime, offset: 0x58, size: 0x8, def value: None
 double_t  RecvTime;

/// @brief Field StateConnecting, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::NetConnection_StateConnectingData  StateConnecting;

/// @brief Field StateDisconnected, offset: 0x70, size: 0xc, def value: None
 ::GlobalNamespace::NetConnection_StateDisconnectedData  StateDisconnected;

/// @brief Field StateShutdown, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::NetConnection_StateShutdownData  StateShutdown;

/// @brief Field NotifySendWindow, offset: 0x90, size: 0x18, def value: None
 ::Fusion::Sockets::NetSendEnvelopeRingBuffer  NotifySendWindow;

/// @brief Field NotifySendSequencer, offset: 0xa8, size: 0x18, def value: None
 ::Fusion::Sockets::NetSequencer  NotifySendSequencer;

/// @brief Field NotifySendTime, offset: 0xc0, size: 0x8, def value: None
 double_t  NotifySendTime;

/// @brief Field NotifyRecvAckTime, offset: 0xc8, size: 0x8, def value: None
 double_t  NotifyRecvAckTime;

/// @brief Field NotifyRecvAckOutdatedCount, offset: 0xd0, size: 0x4, def value: None
 int32_t  NotifyRecvAckOutdatedCount;

/// @brief Field NotifyRecvTime, offset: 0xd8, size: 0x8, def value: None
 double_t  NotifyRecvTime;

/// @brief Field NotifyRecvMask, offset: 0xe0, size: 0x8, def value: None
 uint64_t  NotifyRecvMask;

/// @brief Field NotifyRecvSequence, offset: 0xe8, size: 0x2, def value: None
 uint16_t  NotifyRecvSequence;

/// @brief Field NotifyRecvUnackedCount, offset: 0xec, size: 0x4, def value: None
 int32_t  NotifyRecvUnackedCount;

/// @brief Field NotifyRecvFragment, offset: 0xf0, size: 0x4, def value: None
 int32_t  NotifyRecvFragment;

/// @brief Field NotifyRecvFragmentBuffer, offset: 0xf8, size: 0x8, def value: None
 uint8_t*  NotifyRecvFragmentBuffer;

/// @brief Field NotifyRecvFragmentBufferLength, offset: 0x100, size: 0x4, def value: None
 int32_t  NotifyRecvFragmentBufferLength;

/// @brief Field NotifyRecvFragmentSequenceDistance, offset: 0x104, size: 0x4, def value: None
 int32_t  NotifyRecvFragmentSequenceDistance;

/// @brief Field ConnectionToken, offset: 0x108, size: 0x8, def value: None
 uint8_t*  ConnectionToken;

/// @brief Field ConnectionTokenLength, offset: 0x110, size: 0x4, def value: None
 int32_t  ConnectionTokenLength;

/// @brief Field DisconnectToken, offset: 0x118, size: 0x8, def value: None
 uint8_t*  DisconnectToken;

/// @brief Field DisconnectTokenLength, offset: 0x120, size: 0x4, def value: None
 int32_t  DisconnectTokenLength;

/// @brief Field UniqueIdHash, offset: 0x128, size: 0x8, def value: None
 int64_t  UniqueIdHash;

/// @brief Field UniqueId, offset: 0x130, size: 0x8, def value: None
 uint8_t*  UniqueId;

/// @brief Field Counter, offset: 0x138, size: 0x4, def value: None
 uint32_t  Counter;

/// @brief Field ReliableBuffer, offset: 0x140, size: 0x38, def value: None
 ::Fusion::Sockets::ReliableBuffer  ReliableBuffer;

/// @brief Field ReliableSendList, offset: 0x178, size: 0x18, def value: None
 ::Fusion::Sockets::ReliableList  ReliableSendList;

/// @brief Field ReliableSendTimer, offset: 0x190, size: 0x20, def value: None
 ::Fusion::TimerDelta  ReliableSendTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConnection, MapHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, MapNext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, MapState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, LocalId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, RemoteId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, Address) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, Status) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, Rtt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, SendTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, RecvTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, StateConnecting) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, StateDisconnected) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, StateShutdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifySendWindow) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifySendSequencer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifySendTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvAckTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvAckOutdatedCount) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvMask) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvSequence) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvUnackedCount) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvFragment) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvFragmentBuffer) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvFragmentBufferLength) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, NotifyRecvFragmentSequenceDistance) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, ConnectionToken) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, ConnectionTokenLength) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, DisconnectToken) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, DisconnectTokenLength) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, UniqueIdHash) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, UniqueId) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, Counter) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, ReliableBuffer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, ReliableSendList) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConnection, ReliableSendTimer) == 0x190, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConnection) == 0x1b0, "Size mismatch!");

} // namespace end def Fusion::Sockets
