#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectionStatus)
// Forward declare root types
namespace Fusion::Sockets {
struct NetConnectionStatus;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConnectionStatus);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConnectionStatus, "Fusion.Sockets", "NetConnectionStatus");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectionStatus
struct CORDL_TYPE NetConnectionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetConnectionStatus_Unwrapped
enum struct __NetConnectionStatus_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x1),
__E_Connecting = static_cast<int32_t>(0x2),
__E_Connected = static_cast<int32_t>(0x3),
__E_Disconnected = static_cast<int32_t>(0x4),
__E_Shutdown = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetConnectionStatus_Unwrapped () const noexcept {
return static_cast<__NetConnectionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetConnectionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectionStatus(int32_t  value__) noexcept;

/// @brief Field Connected value: I32(3)
static ::Fusion::Sockets::NetConnectionStatus const Connected;

/// @brief Field Connecting value: I32(2)
static ::Fusion::Sockets::NetConnectionStatus const Connecting;

/// @brief Field Created value: I32(1)
static ::Fusion::Sockets::NetConnectionStatus const Created;

/// @brief Field Disconnected value: I32(4)
static ::Fusion::Sockets::NetConnectionStatus const Disconnected;

/// @brief Field Shutdown value: I32(5)
static ::Fusion::Sockets::NetConnectionStatus const Shutdown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConnectionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConnectionStatus) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Sockets
