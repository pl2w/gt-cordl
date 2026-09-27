#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume_Shape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume_Shape)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Shape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeAdjustmentVolume_Shape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeAdjustmentVolume_Shape, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Shape");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Shape
struct CORDL_TYPE ProbeAdjustmentVolume_Shape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeAdjustmentVolume_Shape_Unwrapped
enum struct __ProbeAdjustmentVolume_Shape_Unwrapped : int32_t {
__E_Box = static_cast<int32_t>(0x0),
__E_Sphere = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeAdjustmentVolume_Shape_Unwrapped () const noexcept {
return static_cast<__ProbeAdjustmentVolume_Shape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeAdjustmentVolume_Shape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeAdjustmentVolume_Shape(int32_t  value__) noexcept;

/// @brief Field Box value: I32(0)
static ::GlobalNamespace::ProbeAdjustmentVolume_Shape const Box;

/// @brief Field Sphere value: I32(1)
static ::GlobalNamespace::ProbeAdjustmentVolume_Shape const Sphere;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeAdjustmentVolume_Shape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeAdjustmentVolume_Shape) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
