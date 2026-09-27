#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IHand)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class IHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IHand*, "Oculus.Interaction.Input", "IHand");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IHand
class CORDL_TYPE IHand {
public:
// Declarations
 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsDominantHand)) bool  IsDominantHand;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Method GetFingerIsHighConfidence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsPinching, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetIndexFingerIsPinching, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetIndexFingerIsPinching() ;

/// @brief Method GetJointPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromWrist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPosesFromWrist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist) ;

/// @brief Method GetJointPosesLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  localJointPoses) ;

/// @brief Method GetPalmPoseLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetPointerPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// [CompilerGenerated]
/// @brief Method add_WhenHandUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenHandUpdated(::System::Action*  value) ;

/// @brief Method get_CurrentDataVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CurrentDataVersion() ;

/// @brief Method get_Handedness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsDominantHand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsDominantHand() ;

/// @brief Method get_IsHighConfidence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsPointerPoseValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPointerPoseValid() ;

/// @brief Method get_IsTrackedDataValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsTrackedDataValid() ;

/// @brief Method get_Scale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Scale() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenHandUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenHandUpdated(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHand(IHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
