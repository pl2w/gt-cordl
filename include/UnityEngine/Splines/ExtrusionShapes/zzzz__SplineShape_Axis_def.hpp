#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/SplineShape_Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineShape_Axis)
// Forward declare root types
namespace GlobalNamespace {
struct SplineShape_Axis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineShape_Axis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineShape_Axis, "UnityEngine.Splines.ExtrusionShapes", "SplineShape/Axis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.ExtrusionShapes.SplineShape/Axis
struct CORDL_TYPE SplineShape_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineShape_Axis_Unwrapped
enum struct __SplineShape_Axis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineShape_Axis_Unwrapped () const noexcept {
return static_cast<__SplineShape_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineShape_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineShape_Axis(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::SplineShape_Axis const X;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::SplineShape_Axis const Y;

/// @brief Field Z value: I32(2)
static ::GlobalNamespace::SplineShape_Axis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineShape_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineShape_Axis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
