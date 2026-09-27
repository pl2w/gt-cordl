#pragma once
// IWYU pragma private; include "Fusion/NetworkConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkConfiguration_ReliableDataTransfers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConfiguration)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConfig;
}
namespace GlobalNamespace {
struct NetworkConfiguration_ReliableDataTransfers;
}
// Forward declare root types
namespace Fusion {
class NetworkConfiguration;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkConfiguration*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkConfiguration*, "Fusion", "NetworkConfiguration");
// Dependencies Fusion.NetworkConfiguration::ReliableDataTransfers, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkConfiguration
class CORDL_TYPE NetworkConfiguration : public ::System::Object {
public:
// Declarations
using ReliableDataTransfers = ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers;

 __declspec(property(get=get_ConnectAttempts)) int32_t  ConnectAttempts;

 __declspec(property(get=get_ConnectInterval)) double_t  ConnectInterval;

 __declspec(property(get=get_ConnectionDefaultRtt)) double_t  ConnectionDefaultRtt;

 __declspec(property(get=get_ConnectionPingInterval)) double_t  ConnectionPingInterval;

/// @brief Field ConnectionShutdownTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionShutdownTime, put=__cordl_internal_set_ConnectionShutdownTime)) double_t  ConnectionShutdownTime;

/// @brief Field ConnectionTimeout, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionTimeout, put=__cordl_internal_set_ConnectionTimeout)) double_t  ConnectionTimeout;

/// @brief Field ReliableDataTransferModes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReliableDataTransferModes, put=__cordl_internal_set_ReliableDataTransferModes)) ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  ReliableDataTransferModes;

 __declspec(property(get=get_SocketRecvBufferSize)) int32_t  SocketRecvBufferSize;

 __declspec(property(get=get_SocketSendBufferSize)) int32_t  SocketSendBufferSize;

/// @brief Method Init, addr 0x6001e30, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::NetworkConfiguration* Init() ;

static inline ::Fusion::NetworkConfiguration* New_ctor() ;

/// @brief Method ToNetConfig, addr 0x6001eb0, size 0x118, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConfig ToNetConfig(::Fusion::Sockets::NetAddress  address) ;

constexpr double_t const& __cordl_internal_get_ConnectionShutdownTime() const;

constexpr double_t& __cordl_internal_get_ConnectionShutdownTime() ;

constexpr double_t const& __cordl_internal_get_ConnectionTimeout() const;

constexpr double_t& __cordl_internal_get_ConnectionTimeout() ;

constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers const& __cordl_internal_get_ReliableDataTransferModes() const;

constexpr ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers& __cordl_internal_get_ReliableDataTransferModes() ;

constexpr void __cordl_internal_set_ConnectionShutdownTime(double_t  value) ;

constexpr void __cordl_internal_set_ConnectionTimeout(double_t  value) ;

constexpr void __cordl_internal_set_ReliableDataTransferModes(::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  value) ;

/// @brief Method .ctor, addr 0x6001fc8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConnectAttempts, addr 0x6001e0c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ConnectAttempts() ;

/// @brief Method get_ConnectInterval, addr 0x6001e14, size 0x8, virtual false, abstract: false, final false
inline double_t get_ConnectInterval() ;

/// @brief Method get_ConnectionDefaultRtt, addr 0x6001e1c, size 0xc, virtual false, abstract: false, final false
inline double_t get_ConnectionDefaultRtt() ;

/// @brief Method get_ConnectionPingInterval, addr 0x6001e28, size 0x8, virtual false, abstract: false, final false
inline double_t get_ConnectionPingInterval() ;

/// @brief Method get_SocketRecvBufferSize, addr 0x6001e04, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SocketRecvBufferSize() ;

/// @brief Method get_SocketSendBufferSize, addr 0x6001dfc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SocketSendBufferSize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConfiguration(NetworkConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConfiguration(NetworkConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19336};

/// [InlineHelp]
/// [Unit((Fusion.Units)2)]
/// @brief Field ConnectionTimeout, offset: 0x10, size: 0x8, def value: None
 double_t  ___ConnectionTimeout;

/// [InlineHelp]
/// [Unit((Fusion.Units)2)]
/// @brief Field ConnectionShutdownTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___ConnectionShutdownTime;

/// [InlineHelp]
/// @brief Field ReliableDataTransferModes, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::NetworkConfiguration_ReliableDataTransfers  ___ReliableDataTransferModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkConfiguration, ___ConnectionTimeout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkConfiguration, ___ConnectionShutdownTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkConfiguration, ___ReliableDataTransferModes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkConfiguration) == 0x28, "Size mismatch!");

} // namespace end def Fusion
