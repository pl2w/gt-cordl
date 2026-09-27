#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocity_TimedPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RANSACVelocity_TimedPose)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct RANSACVelocity_TimedPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RANSACVelocity_TimedPose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RANSACVelocity_TimedPose, "Oculus.Interaction.Throw", "RANSACVelocity/TimedPose");
// Dependencies UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Throw.RANSACVelocity/TimedPose
struct CORDL_TYPE RANSACVelocity_TimedPose {
public:
// Declarations
/// @brief Method .ctor, addr 0xa494474, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  time, ::UnityEngine::Pose  pose) ;

// Ctor Parameters []
// @brief default ctor
constexpr RANSACVelocity_TimedPose() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr RANSACVelocity_TimedPose(float_t  time, ::UnityEngine::Pose  pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field time, offset: 0x0, size: 0x4, def value: None
 float_t  time;

/// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
 ::UnityEngine::Pose  pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RANSACVelocity_TimedPose, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RANSACVelocity_TimedPose, pose) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RANSACVelocity_TimedPose) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
