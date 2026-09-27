#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/StandardVelocityCalculator_SamplePoseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StandardVelocityCalculator_SamplePoseData)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct StandardVelocityCalculator_SamplePoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData, "Oculus.Interaction.Throw", "StandardVelocityCalculator/SamplePoseData");
// Dependencies UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData
struct CORDL_TYPE StandardVelocityCalculator_SamplePoseData {
public:
// Declarations
/// @brief Method .ctor, addr 0xa498098, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Pose  transformPose, ::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity, float_t  time) ;

// Ctor Parameters []
// @brief default ctor
constexpr StandardVelocityCalculator_SamplePoseData() ;

// Ctor Parameters [CppParam { name: "TransformPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "LinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr StandardVelocityCalculator_SamplePoseData(::UnityEngine::Pose  TransformPose, ::UnityEngine::Vector3  LinearVelocity, ::UnityEngine::Vector3  AngularVelocity, float_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field TransformPose, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  TransformPose;

/// @brief Field LinearVelocity, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  LinearVelocity;

/// @brief Field AngularVelocity, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  AngularVelocity;

/// @brief Field Time, offset: 0x34, size: 0x4, def value: None
 float_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData, TransformPose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData, LinearVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData, AngularVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData, Time) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StandardVelocityCalculator_SamplePoseData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
