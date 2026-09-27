#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork_OVRNetworkTcpClient_ConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNetwork_OVRNetworkTcpClient_ConnectionState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRNetworkTcpClient_OVRNetwork_ConnectionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, "", "OVRNetwork/OVRNetworkTcpClient/ConnectionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNetwork/OVRNetworkTcpClient/ConnectionState
struct CORDL_TYPE OVRNetworkTcpClient_OVRNetwork_ConnectionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped
enum struct __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped : int32_t {
__E_Disconnected = static_cast<int32_t>(0x0),
__E_Connected = static_cast<int32_t>(0x1),
__E_Connecting = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped () const noexcept {
return static_cast<__OVRNetworkTcpClient_OVRNetwork_ConnectionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRNetworkTcpClient_OVRNetwork_ConnectionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRNetworkTcpClient_OVRNetwork_ConnectionState(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(1)
static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Connected;

/// @brief Field Connecting value: I32(2)
static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Connecting;

/// @brief Field Disconnected value: I32(0)
static ::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState const Disconnected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12678};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRNetworkTcpClient_OVRNetwork_ConnectionState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
