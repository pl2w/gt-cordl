#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseComparerActiveState_BodyPoseComparerFeatureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BodyPoseComparerActiveState_BodyPoseComparerFeatureState)
// Forward declare root types
namespace GlobalNamespace {
struct BodyPoseComparerActiveState_BodyPoseComparerFeatureState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState/BodyPoseComparerFeatureState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState
struct CORDL_TYPE BodyPoseComparerActiveState_BodyPoseComparerFeatureState {
public:
// Declarations
/// @brief Method .ctor, addr 0xa4f4920, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  delta, float_t  maxDelta) ;

// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseComparerActiveState_BodyPoseComparerFeatureState() ;

// Ctor Parameters [CppParam { name: "Delta", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxDelta", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BodyPoseComparerActiveState_BodyPoseComparerFeatureState(float_t  Delta, float_t  MaxDelta) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16385};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Delta, offset: 0x0, size: 0x4, def value: None
 float_t  Delta;

/// @brief Field MaxDelta, offset: 0x4, size: 0x4, def value: None
 float_t  MaxDelta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState, Delta) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState, MaxDelta) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
