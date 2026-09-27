#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Dimension_Unit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dimension_Unit)
// Forward declare root types
namespace GlobalNamespace {
struct Dimension_Unit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Dimension_Unit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Dimension_Unit, "UnityEngine.UIElements.StyleSheets", "Dimension/Unit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension/Unit
struct CORDL_TYPE Dimension_Unit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Dimension_Unit_Unwrapped
enum struct __Dimension_Unit_Unwrapped : int32_t {
__E_Unitless = static_cast<int32_t>(0x0),
__E_Pixel = static_cast<int32_t>(0x1),
__E_Percent = static_cast<int32_t>(0x2),
__E_Second = static_cast<int32_t>(0x3),
__E_Millisecond = static_cast<int32_t>(0x4),
__E_Degree = static_cast<int32_t>(0x5),
__E_Gradian = static_cast<int32_t>(0x6),
__E_Radian = static_cast<int32_t>(0x7),
__E_Turn = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Dimension_Unit_Unwrapped () const noexcept {
return static_cast<__Dimension_Unit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Dimension_Unit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Dimension_Unit(int32_t  value__) noexcept;

/// @brief Field Degree value: I32(5)
static ::GlobalNamespace::Dimension_Unit const Degree;

/// @brief Field Gradian value: I32(6)
static ::GlobalNamespace::Dimension_Unit const Gradian;

/// @brief Field Millisecond value: I32(4)
static ::GlobalNamespace::Dimension_Unit const Millisecond;

/// @brief Field Percent value: I32(2)
static ::GlobalNamespace::Dimension_Unit const Percent;

/// @brief Field Pixel value: I32(1)
static ::GlobalNamespace::Dimension_Unit const Pixel;

/// @brief Field Radian value: I32(7)
static ::GlobalNamespace::Dimension_Unit const Radian;

/// @brief Field Second value: I32(3)
static ::GlobalNamespace::Dimension_Unit const Second;

/// @brief Field Turn value: I32(8)
static ::GlobalNamespace::Dimension_Unit const Turn;

/// @brief Field Unitless value: I32(0)
static ::GlobalNamespace::Dimension_Unit const Unitless;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Dimension_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Dimension_Unit) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
