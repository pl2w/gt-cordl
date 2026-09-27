#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_JointRotationFeatureState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointRotationActiveState_JointRotationFeatureState)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct JointRotationActiveState_JointRotationFeatureState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/JointRotationFeatureState");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState
struct CORDL_TYPE JointRotationActiveState_JointRotationFeatureState {
public:
// Declarations
/// @brief Method .ctor, addr 0xa4a0fbc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  targetAxis, float_t  amount) ;

// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_JointRotationFeatureState() ;

// Ctor Parameters [CppParam { name: "TargetAxis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr JointRotationActiveState_JointRotationFeatureState(::UnityEngine::Vector3  TargetAxis, float_t  Amount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field TargetAxis, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  TargetAxis;

/// @brief Field Amount, offset: 0xc, size: 0x4, def value: None
 float_t  Amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState, TargetAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState, Amount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
