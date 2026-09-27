#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_RotatingRingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScienceExperimentManager_RotatingRingState)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_RotatingRingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_RotatingRingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_RotatingRingState, "GorillaTag", "ScienceExperimentManager/RotatingRingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/RotatingRingState
struct CORDL_TYPE ScienceExperimentManager_RotatingRingState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_RotatingRingState() ;

// Ctor Parameters [CppParam { name: "ringTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "resultingAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_RotatingRingState(::UnityW<::UnityEngine::Transform>  ringTransform, float_t  initialAngle, float_t  resultingAngle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4639};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ringTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ringTransform;

/// @brief Field initialAngle, offset: 0x8, size: 0x4, def value: None
 float_t  initialAngle;

/// @brief Field resultingAngle, offset: 0xc, size: 0x4, def value: None
 float_t  resultingAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_RotatingRingState, ringTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_RotatingRingState, initialAngle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_RotatingRingState, resultingAngle) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_RotatingRingState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
