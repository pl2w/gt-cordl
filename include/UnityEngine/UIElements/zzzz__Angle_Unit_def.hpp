#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Angle_Unit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Angle_Unit)
// Forward declare root types
namespace GlobalNamespace {
struct Angle_Unit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Angle_Unit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Angle_Unit, "UnityEngine.UIElements", "Angle/Unit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Angle/Unit
struct CORDL_TYPE Angle_Unit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Angle_Unit_Unwrapped
enum struct __Angle_Unit_Unwrapped : int32_t {
__E_Degree = static_cast<int32_t>(0x0),
__E_Gradian = static_cast<int32_t>(0x1),
__E_Radian = static_cast<int32_t>(0x2),
__E_Turn = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Angle_Unit_Unwrapped () const noexcept {
return static_cast<__Angle_Unit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Angle_Unit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Angle_Unit(int32_t  value__) noexcept;

/// @brief Field Degree value: I32(0)
static ::GlobalNamespace::Angle_Unit const Degree;

/// @brief Field Gradian value: I32(1)
static ::GlobalNamespace::Angle_Unit const Gradian;

/// @brief Field None value: I32(4)
static ::GlobalNamespace::Angle_Unit const None;

/// @brief Field Radian value: I32(2)
static ::GlobalNamespace::Angle_Unit const Radian;

/// @brief Field Turn value: I32(3)
static ::GlobalNamespace::Angle_Unit const Turn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Angle_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Angle_Unit) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
