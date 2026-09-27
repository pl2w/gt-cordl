#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/IBodyPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBodyPose)
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::IBodyPose*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::IBodyPose*, "Oculus.Interaction.Body.PoseDetection", "IBodyPose");
// Dependencies 
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.IBodyPose
class CORDL_TYPE IBodyPose {
public:
// Declarations
 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Method GetJointPoseFromRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyPoseUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenBodyPoseUpdated(::System::Action*  value) ;

/// @brief Method get_SkeletonMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyPoseUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenBodyPoseUpdated(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBodyPose", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBodyPose(IBodyPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::PoseDetection
