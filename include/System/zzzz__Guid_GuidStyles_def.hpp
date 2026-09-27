#pragma once
// IWYU pragma private; include "System/Guid_GuidStyles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid_GuidStyles)
// Forward declare root types
namespace GlobalNamespace {
struct Guid_GuidStyles;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Guid_GuidStyles);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Guid_GuidStyles, "System", "Guid/GuidStyles");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Guid/GuidStyles
struct CORDL_TYPE Guid_GuidStyles {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Guid_GuidStyles_Unwrapped
enum struct __Guid_GuidStyles_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllowParenthesis = static_cast<int32_t>(0x1),
__E_AllowBraces = static_cast<int32_t>(0x2),
__E_AllowDashes = static_cast<int32_t>(0x4),
__E_AllowHexPrefix = static_cast<int32_t>(0x8),
__E_RequireParenthesis = static_cast<int32_t>(0x10),
__E_RequireBraces = static_cast<int32_t>(0x20),
__E_RequireDashes = static_cast<int32_t>(0x40),
__E_RequireHexPrefix = static_cast<int32_t>(0x80),
__E_HexFormat = static_cast<int32_t>(0xa0),
__E_NumberFormat = static_cast<int32_t>(0x0),
__E_DigitFormat = static_cast<int32_t>(0x40),
__E_BraceFormat = static_cast<int32_t>(0x60),
__E_ParenthesisFormat = static_cast<int32_t>(0x50),
__E_Any = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Guid_GuidStyles_Unwrapped () const noexcept {
return static_cast<__Guid_GuidStyles_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Guid_GuidStyles() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Guid_GuidStyles(int32_t  value__) noexcept;

/// @brief Field AllowBraces value: I32(2)
static ::GlobalNamespace::Guid_GuidStyles const AllowBraces;

/// @brief Field AllowDashes value: I32(4)
static ::GlobalNamespace::Guid_GuidStyles const AllowDashes;

/// @brief Field AllowHexPrefix value: I32(8)
static ::GlobalNamespace::Guid_GuidStyles const AllowHexPrefix;

/// @brief Field AllowParenthesis value: I32(1)
static ::GlobalNamespace::Guid_GuidStyles const AllowParenthesis;

/// @brief Field Any value: I32(15)
static ::GlobalNamespace::Guid_GuidStyles const Any;

/// @brief Field BraceFormat value: I32(96)
static ::GlobalNamespace::Guid_GuidStyles const BraceFormat;

/// @brief Field DigitFormat value: I32(64)
static ::GlobalNamespace::Guid_GuidStyles const DigitFormat;

/// @brief Field HexFormat value: I32(160)
static ::GlobalNamespace::Guid_GuidStyles const HexFormat;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Guid_GuidStyles const None;

/// @brief Field NumberFormat value: I32(0)
static ::GlobalNamespace::Guid_GuidStyles const NumberFormat;

/// @brief Field ParenthesisFormat value: I32(80)
static ::GlobalNamespace::Guid_GuidStyles const ParenthesisFormat;

/// @brief Field RequireBraces value: I32(32)
static ::GlobalNamespace::Guid_GuidStyles const RequireBraces;

/// @brief Field RequireDashes value: I32(64)
static ::GlobalNamespace::Guid_GuidStyles const RequireDashes;

/// @brief Field RequireHexPrefix value: I32(128)
static ::GlobalNamespace::Guid_GuidStyles const RequireHexPrefix;

/// @brief Field RequireParenthesis value: I32(16)
static ::GlobalNamespace::Guid_GuidStyles const RequireParenthesis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Guid_GuidStyles, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Guid_GuidStyles) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
