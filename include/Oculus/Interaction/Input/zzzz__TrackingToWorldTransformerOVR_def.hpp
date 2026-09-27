#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/TrackingToWorldTransformerOVR.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TrackingToWorldTransformerOVR)
namespace Oculus::Interaction::Input {
class IOVRCameraRigRef;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace UnityEngine {
class Object;
}
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
class TrackingToWorldTransformerOVR;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::TrackingToWorldTransformerOVR*, "Oculus.Interaction.Input", "TrackingToWorldTransformerOVR");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.TrackingToWorldTransformerOVR
class CORDL_TYPE TrackingToWorldTransformerOVR : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CameraRigRef, put=set_CameraRigRef)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  CameraRigRef;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_WorldToTrackingWristJointFixup)) ::UnityEngine::Quaternion  WorldToTrackingWristJointFixup;

/// @brief Field <CameraRigRef>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraRigRef_k__BackingField, put=__cordl_internal_set__CameraRigRef_k__BackingField)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  _CameraRigRef_k__BackingField;

/// @brief Field _cameraRigRef, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRigRef, put=__cordl_internal_set__cameraRigRef)) ::UnityW<::UnityEngine::Object>  _cameraRigRef;

/// @brief Convert operator to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr operator  ::Oculus::Interaction::Input::ITrackingToWorldTransformer*() noexcept;

/// @brief Method Awake, addr 0xa4217b8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllTrackingToWorldTransformerOVR, addr 0xa421814, size 0x4, virtual false, abstract: false, final false
inline void InjectAllTrackingToWorldTransformerOVR(::Oculus::Interaction::Input::IOVRCameraRigRef*  cameraRigRef) ;

/// @brief Method InjectCameraRigRef, addr 0xa421818, size 0xd0, virtual false, abstract: false, final false
inline void InjectCameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  cameraRigRef) ;

static inline ::Oculus::Interaction::Input::TrackingToWorldTransformerOVR* New_ctor() ;

/// @brief Method Oculus.Interaction.Input.ITrackingToWorldTransformer.ToTrackingPose, addr 0xa4218f0, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Pose Oculus_Interaction_Input_ITrackingToWorldTransformer_ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose) ;

/// @brief Method Start, addr 0xa421810, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ToTrackingPose, addr 0xa42161c, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose) ;

/// @brief Method ToWorldPose, addr 0xa421544, size 0xd8, virtual true, abstract: false, final true
inline ::UnityEngine::Pose ToWorldPose(::UnityEngine::Pose  pose) ;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& __cordl_internal_get__CameraRigRef_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& __cordl_internal_get__CameraRigRef_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__cameraRigRef() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__cameraRigRef() ;

constexpr void __cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

constexpr void __cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4218e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CameraRigRef, addr 0xa421488, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* get_CameraRigRef() ;

/// @brief Method get_Transform, addr 0xa421498, size 0xac, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_WorldToTrackingWristJointFixup, addr 0xa42172c, size 0x8c, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_WorldToTrackingWristJointFixup() ;

/// @brief Convert to "::Oculus::Interaction::Input::ITrackingToWorldTransformer"
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* i___Oculus__Interaction__Input__ITrackingToWorldTransformer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CameraRigRef, addr 0xa421490, size 0x8, virtual false, abstract: false, final false
inline void set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackingToWorldTransformerOVR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackingToWorldTransformerOVR", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackingToWorldTransformerOVR(TrackingToWorldTransformerOVR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackingToWorldTransformerOVR", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackingToWorldTransformerOVR(TrackingToWorldTransformerOVR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31156};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IOVRCameraRigRef), new[] {  })]
/// @brief Field _cameraRigRef, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____cameraRigRef;

/// [CompilerGenerated]
/// @brief Field <CameraRigRef>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOVRCameraRigRef*  ____CameraRigRef_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::TrackingToWorldTransformerOVR, ____cameraRigRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::TrackingToWorldTransformerOVR, ____CameraRigRef_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::TrackingToWorldTransformerOVR) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
