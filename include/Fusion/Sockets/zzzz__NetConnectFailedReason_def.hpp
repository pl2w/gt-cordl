#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectFailedReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectFailedReason)
// Forward declare root types
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConnectFailedReason);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConnectFailedReason, "Fusion.Sockets", "NetConnectFailedReason");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectFailedReason
struct CORDL_TYPE NetConnectFailedReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __NetConnectFailedReason_Unwrapped
enum struct __NetConnectFailedReason_Unwrapped : uint8_t {
__E_Timeout = static_cast<uint8_t>(0x1u),
__E_ServerFull = static_cast<uint8_t>(0x2u),
__E_ServerRefused = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetConnectFailedReason_Unwrapped () const noexcept {
return static_cast<__NetConnectFailedReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetConnectFailedReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectFailedReason(uint8_t  value__) noexcept;

/// @brief Field ServerFull value: U8(2)
static ::Fusion::Sockets::NetConnectFailedReason const ServerFull;

/// @brief Field ServerRefused value: U8(3)
static ::Fusion::Sockets::NetConnectFailedReason const ServerRefused;

/// @brief Field Timeout value: U8(1)
static ::Fusion::Sockets::NetConnectFailedReason const Timeout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConnectFailedReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConnectFailedReason) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Sockets
