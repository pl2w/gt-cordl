#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabPlaneTransformer_TwoGrabPlaneState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TwoGrabPlaneTransformer_TwoGrabPlaneState)
// Forward declare root types
namespace GlobalNamespace {
struct TwoGrabPlaneTransformer_TwoGrabPlaneState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState, "Oculus.Interaction", "TwoGrabPlaneTransformer/TwoGrabPlaneState");
// Dependencies UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneState
struct CORDL_TYPE TwoGrabPlaneTransformer_TwoGrabPlaneState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabPlaneTransformer_TwoGrabPlaneState() ;

// Ctor Parameters [CppParam { name: "Center", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlanarDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TwoGrabPlaneTransformer_TwoGrabPlaneState(::UnityEngine::Pose  Center, float_t  PlanarDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Center, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  Center;

/// @brief Field PlanarDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  PlanarDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState, Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState, PlanarDistance) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
