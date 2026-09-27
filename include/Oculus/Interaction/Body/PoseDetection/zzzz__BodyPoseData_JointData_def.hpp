#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseData_JointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BodyPoseData_JointData)
// Forward declare root types
namespace GlobalNamespace {
struct BodyPoseData_JointData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BodyPoseData_JointData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyPoseData_JointData, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData/JointData");
// Dependencies Oculus.Interaction.Body.Input.BodyJointId, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
struct CORDL_TYPE BodyPoseData_JointData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseData_JointData() ;

// Ctor Parameters [CppParam { name: "JointId", ty: "::Oculus::Interaction::Body::Input::BodyJointId", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParentId", ty: "::Oculus::Interaction::Body::Input::BodyJointId", modifiers: "", def_value: None, comment: None }, CppParam { name: "PoseFromRoot", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "LocalPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }]
constexpr BodyPoseData_JointData(::Oculus::Interaction::Body::Input::BodyJointId  JointId, ::Oculus::Interaction::Body::Input::BodyJointId  ParentId, ::UnityEngine::Pose  PoseFromRoot, ::UnityEngine::Pose  LocalPose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field JointId, offset: 0x0, size: 0x4, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointId  JointId;

/// @brief Field ParentId, offset: 0x4, size: 0x4, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointId  ParentId;

/// @brief Field PoseFromRoot, offset: 0x8, size: 0x1c, def value: None
 ::UnityEngine::Pose  PoseFromRoot;

/// @brief Field LocalPose, offset: 0x24, size: 0x1c, def value: None
 ::UnityEngine::Pose  LocalPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyPoseData_JointData, JointId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyPoseData_JointData, ParentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyPoseData_JointData, PoseFromRoot) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BodyPoseData_JointData, LocalPose) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyPoseData_JointData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
