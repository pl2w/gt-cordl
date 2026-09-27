#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfigNotify_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfigSimulation_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConfig)
// Forward declare root types
namespace Fusion::Sockets {
struct NetConfig;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConfig);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConfig, "Fusion.Sockets", "NetConfig");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetConfigNotify, Fusion.Sockets.NetConfigSimulation
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConfig
struct CORDL_TYPE NetConfig {
public:
// Declarations
 __declspec(property(get=get_ConnectionsPerGroup)) int32_t  ConnectionsPerGroup;

/// @brief Method get_ConnectionsPerGroup, addr 0x6029e38, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ConnectionsPerGroup() ;

/// @brief Method get_Defaults, addr 0x6029e50, size 0x78, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConfig get_Defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConfig() ;

// Ctor Parameters [CppParam { name: "ConnectionSendBuffers", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionGroups", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxConnections", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SocketSendBuffer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SocketRecvBuffer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PacketSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectAttempts", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectInterval", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OperationExpireTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionDefaultRtt", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionTimeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionPingInterval", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ConnectionShutdownTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Notify", ty: "::Fusion::Sockets::NetConfigNotify", modifiers: "", def_value: None, comment: None }, CppParam { name: "Simulation", ty: "::Fusion::Sockets::NetConfigSimulation", modifiers: "", def_value: None, comment: None }]
constexpr NetConfig(int32_t  ConnectionSendBuffers, int32_t  ConnectionGroups, int32_t  MaxConnections, int32_t  SocketSendBuffer, int32_t  SocketRecvBuffer, int32_t  PacketSize, int32_t  ConnectAttempts, double_t  ConnectInterval, double_t  OperationExpireTime, double_t  ConnectionDefaultRtt, double_t  ConnectionTimeout, double_t  ConnectionPingInterval, double_t  ConnectionShutdownTime, ::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetConfigNotify  Notify, ::Fusion::Sockets::NetConfigSimulation  Simulation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf8};

/// @brief Field ConnectionSendBuffers, offset: 0x0, size: 0x4, def value: None
 int32_t  ConnectionSendBuffers;

/// @brief Field ConnectionGroups, offset: 0x4, size: 0x4, def value: None
 int32_t  ConnectionGroups;

/// @brief Field MaxConnections, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxConnections;

/// @brief Field SocketSendBuffer, offset: 0xc, size: 0x4, def value: None
 int32_t  SocketSendBuffer;

/// @brief Field SocketRecvBuffer, offset: 0x10, size: 0x4, def value: None
 int32_t  SocketRecvBuffer;

/// @brief Field PacketSize, offset: 0x14, size: 0x4, def value: None
 int32_t  PacketSize;

/// @brief Field ConnectAttempts, offset: 0x18, size: 0x4, def value: None
 int32_t  ConnectAttempts;

/// @brief Field ConnectInterval, offset: 0x20, size: 0x8, def value: None
 double_t  ConnectInterval;

/// @brief Field OperationExpireTime, offset: 0x28, size: 0x8, def value: None
 double_t  OperationExpireTime;

/// @brief Field ConnectionDefaultRtt, offset: 0x30, size: 0x8, def value: None
 double_t  ConnectionDefaultRtt;

/// @brief Field ConnectionTimeout, offset: 0x38, size: 0x8, def value: None
 double_t  ConnectionTimeout;

/// @brief Field ConnectionPingInterval, offset: 0x40, size: 0x8, def value: None
 double_t  ConnectionPingInterval;

/// @brief Field ConnectionShutdownTime, offset: 0x48, size: 0x8, def value: None
 double_t  ConnectionShutdownTime;

/// @brief Field Address, offset: 0x50, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Notify, offset: 0x68, size: 0x18, def value: None
 ::Fusion::Sockets::NetConfigNotify  Notify;

/// @brief Field Simulation, offset: 0x80, size: 0x78, def value: None
 ::Fusion::Sockets::NetConfigSimulation  Simulation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionSendBuffers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionGroups) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, MaxConnections) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, SocketSendBuffer) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, SocketRecvBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, PacketSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectAttempts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectInterval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, OperationExpireTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionDefaultRtt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionTimeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionPingInterval) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, ConnectionShutdownTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, Address) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, Notify) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfig, Simulation) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConfig) == 0xf8, "Size mismatch!");

} // namespace end def Fusion::Sockets
