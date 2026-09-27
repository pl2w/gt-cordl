#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/IBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBody)
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
namespace Oculus::Interaction::Body::Input {
class IBody;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::IBody*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::IBody*, "Oculus.Interaction.Body.Input", "IBody");
// Dependencies 
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.IBody
class CORDL_TYPE IBody {
public:
// Declarations
 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Method GetJointPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPose(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// [CompilerGenerated]
/// @brief Method add_WhenBodyUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenBodyUpdated(::System::Action*  value) ;

/// @brief Method get_CurrentDataVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CurrentDataVersion() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsHighConfidence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsTrackedDataValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsTrackedDataValid() ;

/// @brief Method get_Scale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Scale() ;

/// @brief Method get_SkeletonMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenBodyUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenBodyUpdated(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBody(IBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input
