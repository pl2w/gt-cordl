#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Placement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Placement)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Placement;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::Placement);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Placement, "Meta.XR.MRUtilityKit.SceneDecorator", "Placement");
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Placement
struct CORDL_TYPE Placement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Placement_Unwrapped
enum struct __Placement_Unwrapped : int32_t {
__E_LOCAL_PLANAR = static_cast<int32_t>(0x0),
__E_WORLD_PLANAR = static_cast<int32_t>(0x1),
__E_SPHERICAL = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Placement_Unwrapped () const noexcept {
return static_cast<__Placement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Placement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Placement(int32_t  value__) noexcept;

/// @brief Field LOCAL_PLANAR value: I32(0)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Placement const LOCAL_PLANAR;

/// @brief Field SPHERICAL value: I32(2)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Placement const SPHERICAL;

/// @brief Field WORLD_PLANAR value: I32(1)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Placement const WORLD_PLANAR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Placement, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Placement) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
