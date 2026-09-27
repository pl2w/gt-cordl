#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabFreeTransformer_TwoGrabFreeState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TwoGrabFreeTransformer_TwoGrabFreeState)
// Forward declare root types
namespace GlobalNamespace {
struct TwoGrabFreeTransformer_TwoGrabFreeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState, "Oculus.Interaction", "TwoGrabFreeTransformer/TwoGrabFreeState");
// Dependencies UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeState
struct CORDL_TYPE TwoGrabFreeTransformer_TwoGrabFreeState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabFreeTransformer_TwoGrabFreeState() ;

// Ctor Parameters [CppParam { name: "Center", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TwoGrabFreeTransformer_TwoGrabFreeState(::UnityEngine::Pose  Center, float_t  Distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15828};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Center, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  Center;

/// @brief Field Distance, offset: 0x1c, size: 0x4, def value: None
 float_t  Distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState, Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState, Distance) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
