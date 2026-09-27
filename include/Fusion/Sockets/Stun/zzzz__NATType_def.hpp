#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/NATType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NATType)
// Forward declare root types
namespace Fusion::Sockets::Stun {
struct NATType;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::Stun::NATType);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::NATType, "Fusion.Sockets.Stun", "NATType");
// Dependencies 
namespace Fusion::Sockets::Stun {
// Is value type: true
// CS Name: Fusion.Sockets.Stun.NATType
struct CORDL_TYPE NATType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __NATType_Unwrapped
enum struct __NATType_Unwrapped : uint8_t {
__E_Invalid = static_cast<uint8_t>(0x0u),
__E_UdpBlocked = static_cast<uint8_t>(0x1u),
__E_OpenInternet = static_cast<uint8_t>(0x2u),
__E_FullCone = static_cast<uint8_t>(0x4u),
__E_Symmetric = static_cast<uint8_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NATType_Unwrapped () const noexcept {
return static_cast<__NATType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NATType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NATType(uint8_t  value__) noexcept;

/// @brief Field FullCone value: U8(4)
static ::Fusion::Sockets::Stun::NATType const FullCone;

/// @brief Field Invalid value: U8(0)
static ::Fusion::Sockets::Stun::NATType const Invalid;

/// @brief Field OpenInternet value: U8(2)
static ::Fusion::Sockets::Stun::NATType const OpenInternet;

/// @brief Field Symmetric value: U8(8)
static ::Fusion::Sockets::Stun::NATType const Symmetric;

/// @brief Field UdpBlocked value: U8(1)
static ::Fusion::Sockets::Stun::NATType const UdpBlocked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29397};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::NATType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::NATType) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
