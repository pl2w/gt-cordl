#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetBitBufferStack_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/zzzz__Timer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeerGroup)
namespace Fusion::Sockets {
class INetPeerGroupCallbacks;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetBitBufferBlock;
}
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion::Sockets {
struct NetCommandAccepted;
}
namespace Fusion::Sockets {
struct NetCommandConnect;
}
namespace Fusion::Sockets {
struct NetCommandDisconnect;
}
namespace Fusion::Sockets {
struct NetCommandRefused;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
struct NetConnectionMap;
}
namespace Fusion::Sockets {
struct NetConnectionStatus;
}
namespace Fusion::Sockets {
struct NetConnection;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct NetNotifyHeader;
}
namespace Fusion::Sockets {
struct NetPeer;
}
namespace Fusion::Sockets {
struct ReliableId;
}
namespace GlobalNamespace {
struct NetConnectionMap_Iterator;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetPeerGroup;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetPeerGroup);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetPeerGroup, "Fusion.Sockets", "NetPeerGroup");
// Dependencies Fusion.Sockets.NetBitBufferStack, Fusion.Sockets.NetConfig, Fusion.Timer, System.IntPtr
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetPeerGroup
struct CORDL_TYPE NetPeerGroup {
public:
// Declarations
 __declspec(property(get=get_ConnectionCount)) int32_t  ConnectionCount;

 __declspec(property(get=get_Group)) int32_t  Group;

 __declspec(property(get=get_Time)) double_t  Time;

/// @brief Method AllocateConnection, addr 0x602e4a0, size 0x3d0, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConnection* AllocateConnection(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method ChangeConnectionAddressDuringConnecting, addr 0x602ff9c, size 0x3a4, virtual false, abstract: false, final false
static inline void ChangeConnectionAddressDuringConnecting(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetAddress  newAddress) ;

/// @brief Method ChangeConnectionStatus, addr 0x602e870, size 0x348, virtual false, abstract: false, final false
static inline void ChangeConnectionStatus(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetConnectionStatus  status) ;

/// @brief Method Connect, addr 0x602e350, size 0x150, virtual false, abstract: false, final false
static inline void Connect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method Connect, addr 0x602ef80, size 0xc4, virtual false, abstract: false, final false
static inline void Connect(::Fusion::Sockets::NetPeerGroup*  g, ::StringW  ip, uint16_t  port, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId) ;

/// @brief Method ConnectionIterator, addr 0x602e328, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetConnectionMap_Iterator ConnectionIterator(::Fusion::Sockets::NetPeerGroup*  g) ;

/// @brief Method Disconnect, addr 0x602f044, size 0xdc, virtual false, abstract: false, final false
static inline void Disconnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::ArrayW<uint8_t>  token) ;

/// @brief Method DisconnectInternal, addr 0x602f120, size 0x130, virtual false, abstract: false, final false
static inline void DisconnectInternal(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetDisconnectReason  reason, ::ArrayW<uint8_t>  token) ;

/// @brief Method Dispose, addr 0x602cf8c, size 0x2c, virtual false, abstract: false, final false
static inline void Dispose(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks) ;

/// @brief Method GetConnectionByIndex, addr 0x602e2d0, size 0x14, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConnection* GetConnectionByIndex(::Fusion::Sockets::NetPeerGroup*  g, int32_t  index) ;

/// @brief Method GetConnectionIdleTime, addr 0x6031528, size 0x24, virtual false, abstract: false, final false
static inline double_t GetConnectionIdleTime(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method GetConnectionSendBuffer, addr 0x6030714, size 0x5c, virtual false, abstract: false, final false
static inline bool GetConnectionSendBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  b) ;

/// @brief Method GetNotifyDataBuffer, addr 0x6030340, size 0x9c, virtual false, abstract: false, final false
static inline bool GetNotifyDataBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::by_ref<::Fusion::Sockets::NetBitBuffer*>  b) ;

/// @brief Method HandleCommandAccepted, addr 0x6032854, size 0x1c0, virtual false, abstract: false, final false
static inline void HandleCommandAccepted(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandAccepted  cmd) ;

/// @brief Method HandleCommandConnect, addr 0x60323b0, size 0x268, virtual false, abstract: false, final false
static inline void HandleCommandConnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandConnect  cmd) ;

/// @brief Method HandleCommandDisconnect, addr 0x6032a14, size 0x2d4, virtual false, abstract: false, final false
static inline void HandleCommandDisconnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandDisconnect  cmd) ;

/// @brief Method HandleCommandRefused, addr 0x6032618, size 0x23c, virtual false, abstract: false, final false
static inline void HandleCommandRefused(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetCommandRefused  cmd) ;

/// @brief Method HandlePacket, addr 0x6030ff4, size 0x29c, virtual false, abstract: false, final false
static inline void HandlePacket(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketAcks, addr 0x6031dac, size 0x438, virtual false, abstract: false, final false
static inline void HandlePacketAcks(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetNotifyHeader  h) ;

/// @brief Method HandlePacketCommand, addr 0x6031290, size 0x298, virtual false, abstract: false, final false
static inline void HandlePacketCommand(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketNotifyAcks, addr 0x6031bbc, size 0x11c, virtual false, abstract: false, final false
static inline void HandlePacketNotifyAcks(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketNotifyData, addr 0x603154c, size 0x670, virtual false, abstract: false, final false
static inline void HandlePacketNotifyData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketNotifyData_Part2, addr 0x60321e4, size 0x1cc, virtual false, abstract: false, final false
static inline void HandlePacketNotifyData_Part2(::Fusion::Sockets::NetNotifyHeader  header, int32_t  sequenceDistance, ::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketUnconnected, addr 0x6030c50, size 0x3a4, virtual false, abstract: false, final false
static inline void HandlePacketUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method HandlePacketUnreliableData, addr 0x6031cd8, size 0xd4, virtual false, abstract: false, final false
static inline void HandlePacketUnreliableData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method Initialize, addr 0x602cc5c, size 0xe0, virtual false, abstract: false, final false
static inline void Initialize(int16_t  groupIndex, ::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetConfig  config) ;

/// @brief Method PopSendHead, addr 0x602e064, size 0x48, virtual false, abstract: false, final false
static inline ::System::IntPtr PopSendHead(::Fusion::Sockets::NetPeerGroup*  g) ;

/// @brief Method PushOnRecvHead, addr 0x602d5c0, size 0x68, virtual false, abstract: false, final false
static inline void PushOnRecvHead(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method QueueAddressUnmap, addr 0x60309b0, size 0x18c, virtual false, abstract: false, final false
static inline void QueueAddressUnmap(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method Receive, addr 0x602f2e8, size 0x22c, virtual false, abstract: false, final false
static inline void Receive(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb) ;

/// @brief Method ReleaseConnection, addr 0x6030908, size 0xa8, virtual false, abstract: false, final false
static inline void ReleaseConnection(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method Send, addr 0x6030770, size 0x198, virtual false, abstract: false, final false
static inline void Send(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method SendCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool SendCommand(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, T  cmd) ;

/// @brief Method SendCommandConnect, addr 0x602ebb8, size 0x3c8, virtual false, abstract: false, final false
static inline void SendCommandConnect(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method SendCommandUnconnected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool SendCommandUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, T  cmd) ;

/// @brief Method SendNotifyDataBuffer, addr 0x60303dc, size 0x338, virtual false, abstract: false, final false
static inline bool SendNotifyDataBuffer(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::NetBitBuffer*  b, void*  userData) ;

/// @brief Method SendReliable, addr 0x602fe40, size 0x15c, virtual false, abstract: false, final false
static inline void SendReliable(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetConnection*  c, ::Fusion::Sockets::ReliableId  rid, uint8_t*  data, int32_t  dataLength) ;

/// @brief Method SendUnconnected, addr 0x6030b3c, size 0x64, virtual false, abstract: false, final false
static inline void SendUnconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetBitBuffer*  b) ;

/// @brief Method SendUnconnectedData, addr 0x6030ba0, size 0xb0, virtual false, abstract: false, final false
static inline bool SendUnconnectedData(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::NetAddress  address, void*  data, int32_t  dataLength) ;

/// @brief Method TryGetConnectionByIndex, addr 0x602e2e4, size 0x44, virtual false, abstract: false, final false
static inline bool TryGetConnectionByIndex(::Fusion::Sockets::NetPeerGroup*  g, int32_t  index, ::by_ref<::Fusion::Sockets::NetConnection*>  connection) ;

/// @brief Method Update, addr 0x602f250, size 0x98, virtual false, abstract: false, final false
static inline void Update(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb) ;

/// @brief Method UpdateConnected, addr 0x602f700, size 0x48c, virtual false, abstract: false, final false
static inline void UpdateConnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method UpdateConnecting, addr 0x602f5e8, size 0x118, virtual false, abstract: false, final false
static inline void UpdateConnecting(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method UpdateConnections, addr 0x602f514, size 0xd4, virtual false, abstract: false, final false
static inline void UpdateConnections(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb) ;

/// @brief Method UpdateDisconnected, addr 0x602fb8c, size 0x184, virtual false, abstract: false, final false
static inline void UpdateDisconnected(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method UpdateShutdown, addr 0x602fd10, size 0x130, virtual false, abstract: false, final false
static inline void UpdateShutdown(::Fusion::Sockets::NetPeerGroup*  g, ::Fusion::Sockets::INetPeerGroupCallbacks*  cb, ::Fusion::Sockets::NetConnection*  c) ;

/// @brief Method get_ConnectionCount, addr 0x602e2bc, size 0x14, virtual false, abstract: false, final false
inline int32_t get_ConnectionCount() ;

/// @brief Method get_Group, addr 0x602e2b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Group() ;

/// @brief Method get_Time, addr 0x602e1f0, size 0xc4, virtual false, abstract: false, final false
inline double_t get_Time() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetPeerGroup() ;

// Ctor Parameters [CppParam { name: "_peer", ty: "::Fusion::Sockets::NetPeer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_group", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_clock", ty: "::Fusion::Timer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_config", ty: "::Fusion::Sockets::NetConfig", modifiers: "", def_value: None, comment: None }, CppParam { name: "_counter", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sendHead", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_recvHead", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_recvStack", ty: "::Fusion::Sockets::NetBitBufferStack", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sendBlock", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_connectionsMap", ty: "::Fusion::Sockets::NetConnectionMap*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReliableSendInterval", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPeerGroup(::Fusion::Sockets::NetPeer*  _peer, int16_t  _group, ::Fusion::Timer  _clock, ::Fusion::Sockets::NetConfig  _config, uint32_t  _counter, ::System::IntPtr  _sendHead, ::System::IntPtr  _recvHead, ::Fusion::Sockets::NetBitBufferStack  _recvStack, ::Fusion::Sockets::NetBitBufferBlock*  _sendBlock, ::Fusion::Sockets::NetConnectionMap*  _connectionsMap, double_t  ReliableSendInterval) noexcept;

/// @brief Field RELIABLE_SEND_INTERVAL offset 0xffffffff size 0x8
static constexpr double_t  RELIABLE_SEND_INTERVAL{static_cast<double_t>(0.05)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x168};

/// @brief Field _peer, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::NetPeer*  _peer;

/// @brief Field _group, offset: 0x8, size: 0x2, def value: None
 int16_t  _group;

/// @brief Field _clock, offset: 0x10, size: 0x18, def value: None
 ::Fusion::Timer  _clock;

/// @brief Field _config, offset: 0x28, size: 0xf8, def value: None
 ::Fusion::Sockets::NetConfig  _config;

/// @brief Field _counter, offset: 0x120, size: 0x4, def value: None
 uint32_t  _counter;

/// @brief Field _sendHead, offset: 0x128, size: 0x8, def value: None
 ::System::IntPtr  _sendHead;

/// @brief Field _recvHead, offset: 0x130, size: 0x8, def value: None
 ::System::IntPtr  _recvHead;

/// @brief Field _recvStack, offset: 0x138, size: 0x18, def value: None
 ::Fusion::Sockets::NetBitBufferStack  _recvStack;

/// @brief Field _sendBlock, offset: 0x150, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBufferBlock*  _sendBlock;

/// @brief Field _connectionsMap, offset: 0x158, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionMap*  _connectionsMap;

/// @brief Field ReliableSendInterval, offset: 0x160, size: 0x8, def value: None
 double_t  ReliableSendInterval;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _peer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _group) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _clock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _config) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _counter) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _sendHead) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _recvHead) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _recvStack) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _sendBlock) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, _connectionsMap) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeerGroup, ReliableSendInterval) == 0x160, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetPeerGroup) == 0x168, "Size mismatch!");

} // namespace end def Fusion::Sockets
