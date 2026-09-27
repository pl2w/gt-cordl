#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner_ScalingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnchorPrefabSpawner_ScalingMode)
// Forward declare root types
namespace GlobalNamespace {
struct AnchorPrefabSpawner_ScalingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnchorPrefabSpawner_ScalingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnchorPrefabSpawner_ScalingMode, "Meta.XR.MRUtilityKit", "AnchorPrefabSpawner/ScalingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.AnchorPrefabSpawner/ScalingMode
struct CORDL_TYPE AnchorPrefabSpawner_ScalingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnchorPrefabSpawner_ScalingMode_Unwrapped
enum struct __AnchorPrefabSpawner_ScalingMode_Unwrapped : int32_t {
__E_Stretch = static_cast<int32_t>(0x0),
__E_UniformScaling = static_cast<int32_t>(0x1),
__E_UniformXZScale = static_cast<int32_t>(0x2),
__E_NoScaling = static_cast<int32_t>(0x3),
__E_Custom = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnchorPrefabSpawner_ScalingMode_Unwrapped () const noexcept {
return static_cast<__AnchorPrefabSpawner_ScalingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnchorPrefabSpawner_ScalingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnchorPrefabSpawner_ScalingMode(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(4)
static ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode const Custom;

/// @brief Field NoScaling value: I32(3)
static ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode const NoScaling;

/// @brief Field Stretch value: I32(0)
static ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode const Stretch;

/// @brief Field UniformScaling value: I32(1)
static ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode const UniformScaling;

/// @brief Field UniformXZScale value: I32(2)
static ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode const UniformXZScale;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25761};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_ScalingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnchorPrefabSpawner_ScalingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
