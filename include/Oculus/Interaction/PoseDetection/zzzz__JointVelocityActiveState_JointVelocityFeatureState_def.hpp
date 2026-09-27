#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState_JointVelocityFeatureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointVelocityActiveState_JointVelocityFeatureState)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct JointVelocityActiveState_JointVelocityFeatureState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/JointVelocityFeatureState");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState
struct CORDL_TYPE JointVelocityActiveState_JointVelocityFeatureState {
public:
// Declarations
/// @brief Method .ctor, addr 0xa4a2a08, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  targetVector, float_t  velocity) ;

// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState_JointVelocityFeatureState() ;

// Ctor Parameters [CppParam { name: "TargetVector", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr JointVelocityActiveState_JointVelocityFeatureState(::UnityEngine::Vector3  TargetVector, float_t  Amount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16137};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field TargetVector, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  TargetVector;

/// @brief Field Amount, offset: 0xc, size: 0x4, def value: None
 float_t  Amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState, TargetVector) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState, Amount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
