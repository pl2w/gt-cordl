#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferStack_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetDelayedPacketList_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
#include "Fusion/zzzz__Timer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeer)
namespace Fusion::Sockets {
class INetPeerGroupCallbacks;
}
namespace Fusion::Sockets {
class INetSocket;
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
struct NetCommandRefused;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace Fusion::Sockets {
struct NetPeerGroupMap;
}
namespace Fusion::Sockets {
struct NetPeerGroup;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetPeer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetPeer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetPeer, "Fusion.Sockets", "NetPeer");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetBitBufferStack, Fusion.Sockets.NetConfig, Fusion.Sockets.NetDelayedPacketList, Fusion.Sockets.NetSocket, Fusion.Timer
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetPeer
struct CORDL_TYPE NetPeer {
public:
// Declarations
 __declspec(property(get=get_Address)) ::Fusion::Sockets::NetAddress  Address;

 __declspec(property(get=get_GroupCount)) int32_t  GroupCount;

/// @brief Method Destroy, addr 0x602cd3c, size 0x64, virtual false, abstract: false, final false
static inline void Destroy(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks) ;

/// @brief Method DestroySocket, addr 0x602cda0, size 0x1ec, virtual false, abstract: false, final false
static inline void DestroySocket(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks) ;

/// @brief Method FindGroupWithLeastAssignedAddresses, addr 0x602cfb8, size 0x68, virtual false, abstract: false, final false
static inline int16_t FindGroupWithLeastAssignedAddresses(::Fusion::Sockets::NetPeer*  p) ;

/// @brief Method GetConfigPointer, addr 0x602bce8, size 0x30, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConfig* GetConfigPointer(::Fusion::Sockets::NetPeer*  p) ;

/// @brief Method GetGroup, addr 0x602bd18, size 0x60, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetPeerGroup* GetGroup(::Fusion::Sockets::NetPeer*  p, int32_t  index) ;

/// @brief Method Initialize, addr 0x602c728, size 0xac, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetPeer* Initialize(::Fusion::Sockets::NetConfig  config, ::Fusion::Sockets::INetSocket*  socket) ;

/// @brief Method Initialize, addr 0x602c7d4, size 0x488, virtual false, abstract: false, final false
static inline void Initialize(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetConfig  config, ::Fusion::Sockets::INetSocket*  socket) ;

/// @brief Method Recv, addr 0x602bd78, size 0x1c, virtual false, abstract: false, final false
static inline void Recv(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::System::Random*  rng) ;

/// @brief Method Recv, addr 0x602bd94, size 0xd8, virtual false, abstract: false, final false
static inline void Recv(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng) ;

/// @brief Method RecvBufferAvailable, addr 0x602e0ac, size 0x60, virtual false, abstract: false, final false
static inline bool RecvBufferAvailable(::Fusion::Sockets::NetPeer*  p) ;

/// @brief Method RecvBufferPushToGroup, addr 0x602d23c, size 0x384, virtual false, abstract: false, final false
static inline void RecvBufferPushToGroup(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, ::System::Random*  rng) ;

/// @brief Method RecvDelayed, addr 0x602d020, size 0x21c, virtual false, abstract: false, final false
static inline void RecvDelayed(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng) ;

/// @brief Method RecvExpired, addr 0x602e10c, size 0xe4, virtual false, abstract: false, final false
static inline bool RecvExpired(::Fusion::Sockets::NetPeer*  p) ;

/// @brief Method RecvInternal, addr 0x602be6c, size 0x638, virtual false, abstract: false, final false
static inline void RecvInternal(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work, ::System::Random*  rng) ;

/// @brief Method RemapAddress, addr 0x602c4a4, size 0xb0, virtual false, abstract: false, final false
static inline void RemapAddress(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::NetAddress  oldAddress, ::Fusion::Sockets::NetAddress  newAddress) ;

/// @brief Method Send, addr 0x602c554, size 0x54, virtual false, abstract: false, final false
static inline void Send(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket) ;

/// @brief Method Send, addr 0x602c5a8, size 0xd0, virtual false, abstract: false, final false
static inline void Send(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work) ;

/// @brief Method SendFromStack, addr 0x602d628, size 0xa3c, virtual false, abstract: false, final false
static inline void SendFromStack(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work) ;

/// @brief Method SendInternal, addr 0x602c678, size 0xb0, virtual false, abstract: false, final false
static inline void SendInternal(::Fusion::Sockets::NetPeer*  p, ::Fusion::Sockets::INetSocket*  socket, bool*  work) ;

/// @brief Method get_Address, addr 0x602bcc8, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_Address() ;

/// @brief Method get_GroupCount, addr 0x602bce0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GroupCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetPeer() ;

// Ctor Parameters [CppParam { name: "_state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_config", ty: "::Fusion::Sockets::NetConfig", modifiers: "", def_value: None, comment: None }, CppParam { name: "_recvTimer", ty: "::Fusion::Timer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fragmentBuffer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_socket", ty: "::Fusion::Sockets::NetSocket", modifiers: "", def_value: None, comment: None }, CppParam { name: "_address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sendStack", ty: "::Fusion::Sockets::NetBitBufferStack", modifiers: "", def_value: None, comment: None }, CppParam { name: "_groups", ty: "::Fusion::Sockets::NetPeerGroup*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_groupsMap", ty: "::Fusion::Sockets::NetPeerGroupMap*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_groupsAssigned", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_refusedCommand", ty: "::Fusion::Sockets::NetCommandRefused*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_recv", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_recvBlock", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_delayedClock", ty: "::Fusion::Timer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_delayedPackets", ty: "::Fusion::Sockets::NetDelayedPacketList", modifiers: "", def_value: None, comment: None }]
constexpr NetPeer(int32_t  _state, ::Fusion::Sockets::NetConfig  _config, ::Fusion::Timer  _recvTimer, uint8_t*  _fragmentBuffer, ::Fusion::Sockets::NetSocket  _socket, ::Fusion::Sockets::NetAddress  _address, ::Fusion::Sockets::NetBitBufferStack  _sendStack, ::Fusion::Sockets::NetPeerGroup*  _groups, ::Fusion::Sockets::NetPeerGroupMap*  _groupsMap, int32_t*  _groupsAssigned, ::Fusion::Sockets::NetCommandRefused*  _refusedCommand, ::Fusion::Sockets::NetBitBuffer*  _recv, ::Fusion::Sockets::NetBitBufferBlock*  _recvBlock, ::Fusion::Timer  _delayedClock, ::Fusion::Sockets::NetDelayedPacketList  _delayedPackets) noexcept;

/// @brief Field DEFAULT_HEADERS offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_HEADERS{static_cast<int32_t>(0x90)};

/// @brief Field FRAG_END_BIT offset 0xffffffff size 0x1
static constexpr uint8_t  FRAG_END_BIT{static_cast<uint8_t>(0x80u)};

/// @brief Field FRAG_MAX_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  FRAG_MAX_COUNT{static_cast<int32_t>(0x28)};

/// @brief Field MAX_MTU_BITS_PAYLOAD offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MTU_BITS_PAYLOAD{static_cast<int32_t>(0x2380)};

/// @brief Field MAX_MTU_BYTES_PAYLOAD offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MTU_BYTES_PAYLOAD{static_cast<int32_t>(0x470)};

/// @brief Field MAX_MTU_BYTES_TOTAL offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MTU_BYTES_TOTAL{static_cast<int32_t>(0x500)};

/// @brief Field MAX_PACKET_BYTES_PAYLOAD offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PACKET_BYTES_PAYLOAD{static_cast<int32_t>(0xaf50)};

/// @brief Field MAX_PACKET_BYTES_TOTAL offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PACKET_BYTES_TOTAL{static_cast<int32_t>(0xc800)};

/// @brief Field STATE_RUNNING offset 0xffffffff size 0x4
static constexpr int32_t  STATE_RUNNING{static_cast<int32_t>(0x0)};

/// @brief Field STATE_SHUTDOWN offset 0xffffffff size 0x4
static constexpr int32_t  STATE_SHUTDOWN{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1b8};

/// @brief Field _state, offset: 0x0, size: 0x4, def value: None
 int32_t  _state;

/// @brief Field _config, offset: 0x8, size: 0xf8, def value: None
 ::Fusion::Sockets::NetConfig  _config;

/// @brief Field _recvTimer, offset: 0x100, size: 0x18, def value: None
 ::Fusion::Timer  _recvTimer;

/// @brief Field _fragmentBuffer, offset: 0x118, size: 0x8, def value: None
 uint8_t*  _fragmentBuffer;

/// @brief Field _socket, offset: 0x120, size: 0x8, def value: None
 ::Fusion::Sockets::NetSocket  _socket;

/// @brief Field _address, offset: 0x128, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  _address;

/// @brief Field _sendStack, offset: 0x140, size: 0x18, def value: None
 ::Fusion::Sockets::NetBitBufferStack  _sendStack;

/// @brief Field _groups, offset: 0x158, size: 0x8, def value: None
 ::Fusion::Sockets::NetPeerGroup*  _groups;

/// @brief Field _groupsMap, offset: 0x160, size: 0x8, def value: None
 ::Fusion::Sockets::NetPeerGroupMap*  _groupsMap;

/// @brief Field _groupsAssigned, offset: 0x168, size: 0x8, def value: None
 int32_t*  _groupsAssigned;

/// @brief Field _refusedCommand, offset: 0x170, size: 0x8, def value: None
 ::Fusion::Sockets::NetCommandRefused*  _refusedCommand;

/// @brief Field _recv, offset: 0x178, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  _recv;

/// @brief Field _recvBlock, offset: 0x180, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBufferBlock*  _recvBlock;

/// @brief Field _delayedClock, offset: 0x188, size: 0x18, def value: None
 ::Fusion::Timer  _delayedClock;

/// @brief Field _delayedPackets, offset: 0x1a0, size: 0x18, def value: None
 ::Fusion::Sockets::NetDelayedPacketList  _delayedPackets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetPeer, _state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _config) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _recvTimer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _fragmentBuffer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _socket) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _address) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _sendStack) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _groups) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _groupsMap) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _groupsAssigned) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _refusedCommand) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _recv) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _recvBlock) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _delayedClock) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetPeer, _delayedPackets) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetPeer) == 0x1b8, "Size mismatch!");

} // namespace end def Fusion::Sockets
