#pragma once
// IWYU pragma private; include "TMPro/ColorTween_ColorTweenMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorTween_ColorTweenMode)
// Forward declare root types
namespace GlobalNamespace {
struct ColorTween_ColorTweenMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorTween_ColorTweenMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorTween_ColorTweenMode, "TMPro", "ColorTween/ColorTweenMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.ColorTween/ColorTweenMode
struct CORDL_TYPE ColorTween_ColorTweenMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorTween_ColorTweenMode_Unwrapped
enum struct __ColorTween_ColorTweenMode_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_RGB = static_cast<int32_t>(0x1),
__E_Alpha = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorTween_ColorTweenMode_Unwrapped () const noexcept {
return static_cast<__ColorTween_ColorTweenMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorTween_ColorTweenMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ColorTween_ColorTweenMode(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::ColorTween_ColorTweenMode const All;

/// @brief Field Alpha value: I32(2)
static ::GlobalNamespace::ColorTween_ColorTweenMode const Alpha;

/// @brief Field RGB value: I32(1)
static ::GlobalNamespace::ColorTween_ColorTweenMode const RGB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22922};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorTween_ColorTweenMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorTween_ColorTweenMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
