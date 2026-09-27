#pragma once
// IWYU pragma private; include "Fusion/ScriptHeaderBackColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptHeaderBackColor)
// Forward declare root types
namespace Fusion {
struct ScriptHeaderBackColor;
}
// Write type traits
MARK_VAL_T(::Fusion::ScriptHeaderBackColor);
DEFINE_IL2CPP_CLASS(::Fusion::ScriptHeaderBackColor, "Fusion", "ScriptHeaderBackColor");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ScriptHeaderBackColor
struct CORDL_TYPE ScriptHeaderBackColor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScriptHeaderBackColor_Unwrapped
enum struct __ScriptHeaderBackColor_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Gray = static_cast<int32_t>(0x1),
__E_Blue = static_cast<int32_t>(0x2),
__E_Red = static_cast<int32_t>(0x3),
__E_Green = static_cast<int32_t>(0x4),
__E_Orange = static_cast<int32_t>(0x5),
__E_Black = static_cast<int32_t>(0x6),
__E_Steel = static_cast<int32_t>(0x7),
__E_Sand = static_cast<int32_t>(0x8),
__E_Olive = static_cast<int32_t>(0x9),
__E_Cyan = static_cast<int32_t>(0xa),
__E_Violet = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScriptHeaderBackColor_Unwrapped () const noexcept {
return static_cast<__ScriptHeaderBackColor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScriptHeaderBackColor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScriptHeaderBackColor(int32_t  value__) noexcept;

/// @brief Field Black value: I32(6)
static ::Fusion::ScriptHeaderBackColor const Black;

/// @brief Field Blue value: I32(2)
static ::Fusion::ScriptHeaderBackColor const Blue;

/// @brief Field Cyan value: I32(10)
static ::Fusion::ScriptHeaderBackColor const Cyan;

/// @brief Field Gray value: I32(1)
static ::Fusion::ScriptHeaderBackColor const Gray;

/// @brief Field Green value: I32(4)
static ::Fusion::ScriptHeaderBackColor const Green;

/// @brief Field None value: I32(0)
static ::Fusion::ScriptHeaderBackColor const None;

/// @brief Field Olive value: I32(9)
static ::Fusion::ScriptHeaderBackColor const Olive;

/// @brief Field Orange value: I32(5)
static ::Fusion::ScriptHeaderBackColor const Orange;

/// @brief Field Red value: I32(3)
static ::Fusion::ScriptHeaderBackColor const Red;

/// @brief Field Sand value: I32(8)
static ::Fusion::ScriptHeaderBackColor const Sand;

/// @brief Field Steel value: I32(7)
static ::Fusion::ScriptHeaderBackColor const Steel;

/// @brief Field Violet value: I32(11)
static ::Fusion::ScriptHeaderBackColor const Violet;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ScriptHeaderBackColor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::ScriptHeaderBackColor) == 0x4, "Size mismatch!");

} // namespace end def Fusion
