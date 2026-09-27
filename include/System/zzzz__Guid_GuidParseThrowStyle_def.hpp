#pragma once
// IWYU pragma private; include "System/Guid_GuidParseThrowStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid_GuidParseThrowStyle)
// Forward declare root types
namespace GlobalNamespace {
struct Guid_GuidParseThrowStyle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Guid_GuidParseThrowStyle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Guid_GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Guid/GuidParseThrowStyle
struct CORDL_TYPE Guid_GuidParseThrowStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Guid_GuidParseThrowStyle_Unwrapped
enum struct __Guid_GuidParseThrowStyle_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_All = static_cast<int32_t>(0x1),
__E_AllButOverflow = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Guid_GuidParseThrowStyle_Unwrapped () const noexcept {
return static_cast<__Guid_GuidParseThrowStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Guid_GuidParseThrowStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Guid_GuidParseThrowStyle(int32_t  value__) noexcept;

/// @brief Field All value: I32(1)
static ::GlobalNamespace::Guid_GuidParseThrowStyle const All;

/// @brief Field AllButOverflow value: I32(2)
static ::GlobalNamespace::Guid_GuidParseThrowStyle const AllButOverflow;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Guid_GuidParseThrowStyle const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Guid_GuidParseThrowStyle, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Guid_GuidParseThrowStyle) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
