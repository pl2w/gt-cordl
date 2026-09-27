#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Target.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Target)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Target;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::Target);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Target, "Meta.XR.MRUtilityKit.SceneDecorator", "Target");
// [Flags]
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Target
struct CORDL_TYPE Target {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Target_Unwrapped
enum struct __Target_Unwrapped : int32_t {
__E_GLOBAL_MESH = static_cast<int32_t>(0x1),
__E_RESERVED_MESH = static_cast<int32_t>(0x2),
__E_PHYSICS_LAYERS = static_cast<int32_t>(0x4),
__E_CUSTOM_COLLIDERS = static_cast<int32_t>(0x8),
__E_CUSTOM_TAGS = static_cast<int32_t>(0x10),
__E_SCENE_ANCHORS = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Target_Unwrapped () const noexcept {
return static_cast<__Target_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Target() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Target(int32_t  value__) noexcept;

/// @brief Field CUSTOM_COLLIDERS value: I32(8)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const CUSTOM_COLLIDERS;

/// @brief Field CUSTOM_TAGS value: I32(16)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const CUSTOM_TAGS;

/// @brief Field GLOBAL_MESH value: I32(1)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const GLOBAL_MESH;

/// @brief Field PHYSICS_LAYERS value: I32(4)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const PHYSICS_LAYERS;

/// @brief Field RESERVED_MESH value: I32(2)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const RESERVED_MESH;

/// @brief Field SCENE_ANCHORS value: I32(32)
static ::Meta::XR::MRUtilityKit::SceneDecorator::Target const SCENE_ANCHORS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25978};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Target, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Target) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
