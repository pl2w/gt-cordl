#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Axes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axes)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Axes;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::Axes);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Axes, "Meta.XR.MRUtilityKit.SceneDecorator", "Axes");
// [Flags]
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Axes
struct CORDL_TYPE Axes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axes_Unwrapped
enum struct __Axes_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_Z = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axes_Unwrapped () const noexcept {
return static_cast<__Axes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Axes(int32_t  value__) noexcept;

/// @brief Field X value: I32(1)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Axes const X;

/// @brief Field Y value: I32(2)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Axes const Y;

/// @brief Field Z value: I32(4)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Axes const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Axes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Axes) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
