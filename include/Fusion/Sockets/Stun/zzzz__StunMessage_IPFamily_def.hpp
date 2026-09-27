#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_IPFamily.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StunMessage_IPFamily)
// Forward declare root types
namespace GlobalNamespace {
struct StunMessage_IPFamily;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StunMessage_IPFamily);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StunMessage_IPFamily, "Fusion.Sockets.Stun", "StunMessage/IPFamily");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.Stun.StunMessage/IPFamily
struct CORDL_TYPE StunMessage_IPFamily {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StunMessage_IPFamily_Unwrapped
enum struct __StunMessage_IPFamily_Unwrapped : int32_t {
__E_IPv4 = static_cast<int32_t>(0x1),
__E_IPv6 = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StunMessage_IPFamily_Unwrapped () const noexcept {
return static_cast<__StunMessage_IPFamily_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StunMessage_IPFamily() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StunMessage_IPFamily(int32_t  value__) noexcept;

/// @brief Field IPv4 value: I32(1)
static ::GlobalNamespace::StunMessage_IPFamily const IPv4;

/// @brief Field IPv6 value: I32(2)
static ::GlobalNamespace::StunMessage_IPFamily const IPv6;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StunMessage_IPFamily, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StunMessage_IPFamily) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
