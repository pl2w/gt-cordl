#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils_HandGrabPoseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HandGrabUtils_HandGrabPoseData)
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabPoseData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabUtils_HandGrabPoseData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabUtils_HandGrabPoseData, "Oculus.Interaction.HandGrab", "HandGrabUtils/HandGrabPoseData");
// Dependencies UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabPoseData
struct CORDL_TYPE HandGrabUtils_HandGrabPoseData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabUtils_HandGrabPoseData() ;

// Ctor Parameters [CppParam { name: "gripPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "handPose", ty: "::Oculus::Interaction::HandGrab::HandPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabUtils_HandGrabPoseData(::UnityEngine::Pose  gripPose, ::Oculus::Interaction::HandGrab::HandPose*  handPose, float_t  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field gripPose, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  gripPose;

/// @brief Field handPose, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandPose*  handPose;

/// @brief Field scale, offset: 0x28, size: 0x4, def value: None
 float_t  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabPoseData, gripPose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabPoseData, handPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandGrabUtils_HandGrabPoseData, scale) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabUtils_HandGrabPoseData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
