#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ITrackingToWorldTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITrackingToWorldTransformer)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ITrackingToWorldTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ITrackingToWorldTransformer*, "Oculus.Interaction.Input", "ITrackingToWorldTransformer");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ITrackingToWorldTransformer
class CORDL_TYPE ITrackingToWorldTransformer {
public:
// Declarations
 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_WorldToTrackingWristJointFixup)) ::UnityEngine::Quaternion  WorldToTrackingWristJointFixup;

/// @brief Method ToTrackingPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose) ;

/// @brief Method ToWorldPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose ToWorldPose(::UnityEngine::Pose  poseRh) ;

/// @brief Method get_Transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_WorldToTrackingWristJointFixup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Quaternion get_WorldToTrackingWristJointFixup() ;

// Ctor Parameters [CppParam { name: "", ty: "ITrackingToWorldTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITrackingToWorldTransformer(ITrackingToWorldTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
