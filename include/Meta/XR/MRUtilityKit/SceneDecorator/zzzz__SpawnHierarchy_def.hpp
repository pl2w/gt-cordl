#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SpawnHierarchy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnHierarchy)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct SpawnHierarchy;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy, "Meta.XR.MRUtilityKit.SceneDecorator", "SpawnHierarchy");
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SpawnHierarchy
struct CORDL_TYPE SpawnHierarchy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpawnHierarchy_Unwrapped
enum struct __SpawnHierarchy_Unwrapped : int32_t {
__E_ROOT = static_cast<int32_t>(0x0),
__E_SCENE_DECORATOR_CHILD = static_cast<int32_t>(0x1),
__E_ANCHOR_CHILD = static_cast<int32_t>(0x2),
__E_TARGET_CHILD = static_cast<int32_t>(0x3),
__E_TARGET_COLLIDER_CHILD = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpawnHierarchy_Unwrapped () const noexcept {
return static_cast<__SpawnHierarchy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpawnHierarchy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpawnHierarchy(int32_t  value__) noexcept;

/// @brief Field ANCHOR_CHILD value: I32(2)
static ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const ANCHOR_CHILD;

/// @brief Field ROOT value: I32(0)
static ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const ROOT;

/// @brief Field SCENE_DECORATOR_CHILD value: I32(1)
static ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const SCENE_DECORATOR_CHILD;

/// @brief Field TARGET_CHILD value: I32(3)
static ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const TARGET_CHILD;

/// @brief Field TARGET_COLLIDER_CHILD value: I32(4)
static ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const TARGET_COLLIDER_CHILD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
