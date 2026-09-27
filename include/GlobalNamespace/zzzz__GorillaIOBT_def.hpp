#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIOBT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaIOBT)
namespace GlobalNamespace {
class HandTrackingFingerCurl;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaIOBT;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaIOBT*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIOBT*, "", "GorillaIOBT");
// Dependencies OVRInput::Controller, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaIOBT
class CORDL_TYPE GorillaIOBT : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsHandTracking)) bool  IsHandTracking;

/// @brief Field TrackingSpaceChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingSpaceChanged, put=__cordl_internal_set_TrackingSpaceChanged)) ::System::Action_1<::UnityW<::UnityEngine::Transform>>*  TrackingSpaceChanged;

/// @brief Field UpdatedAnchors, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdatedAnchors, put=__cordl_internal_set_UpdatedAnchors)) ::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*  UpdatedAnchors;

/// @brief Field <centerEyeAnchor>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__centerEyeAnchor_k__BackingField, put=__cordl_internal_set__centerEyeAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _centerEyeAnchor_k__BackingField;

/// @brief Field <leftActiveController>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftActiveController_k__BackingField, put=__cordl_internal_set__leftActiveController_k__BackingField)) ::GlobalNamespace::OVRInput_Controller  _leftActiveController_k__BackingField;

/// @brief Field <leftControllerAnchor>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftControllerAnchor_k__BackingField, put=__cordl_internal_set__leftControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _leftControllerAnchor_k__BackingField;

/// @brief Field <leftHandAnchor>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandAnchor_k__BackingField, put=__cordl_internal_set__leftHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _leftHandAnchor_k__BackingField;

/// @brief Field <leftHandCurl>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandCurl_k__BackingField, put=__cordl_internal_set__leftHandCurl_k__BackingField)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  _leftHandCurl_k__BackingField;

/// @brief Field _previousTrackingSpaceTransform, offset 0xd0, size 0x40 
 __declspec(property(get=__cordl_internal_get__previousTrackingSpaceTransform, put=__cordl_internal_set__previousTrackingSpaceTransform)) ::UnityEngine::Matrix4x4  _previousTrackingSpaceTransform;

/// @brief Field <rightActiveController>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightActiveController_k__BackingField, put=__cordl_internal_set__rightActiveController_k__BackingField)) ::GlobalNamespace::OVRInput_Controller  _rightActiveController_k__BackingField;

/// @brief Field <rightControllerAnchor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightControllerAnchor_k__BackingField, put=__cordl_internal_set__rightControllerAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _rightControllerAnchor_k__BackingField;

/// @brief Field <rightHandAnchor>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandAnchor_k__BackingField, put=__cordl_internal_set__rightHandAnchor_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _rightHandAnchor_k__BackingField;

/// @brief Field <rightHandCurl>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandCurl_k__BackingField, put=__cordl_internal_set__rightHandCurl_k__BackingField)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  _rightHandCurl_k__BackingField;

/// @brief Field _skipUpdate, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__skipUpdate, put=__cordl_internal_set__skipUpdate)) bool  _skipUpdate;

/// @brief Field <trackingSpace>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingSpace_k__BackingField, put=__cordl_internal_set__trackingSpace_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _trackingSpace_k__BackingField;

 __declspec(property(get=get_centerEyeAnchor, put=set_centerEyeAnchor)) ::UnityW<::UnityEngine::Transform>  centerEyeAnchor;

/// @brief Field centerEyeAnchorName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerEyeAnchorName, put=__cordl_internal_set_centerEyeAnchorName)) ::StringW  centerEyeAnchorName;

 __declspec(property(get=get_leftActiveController, put=set_leftActiveController)) ::GlobalNamespace::OVRInput_Controller  leftActiveController;

 __declspec(property(get=get_leftControllerAnchor, put=set_leftControllerAnchor)) ::UnityW<::UnityEngine::Transform>  leftControllerAnchor;

/// @brief Field leftControllerAnchorName, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftControllerAnchorName, put=__cordl_internal_set_leftControllerAnchorName)) ::StringW  leftControllerAnchorName;

 __declspec(property(get=get_leftHandAnchor, put=set_leftHandAnchor)) ::UnityW<::UnityEngine::Transform>  leftHandAnchor;

/// @brief Field leftHandAnchorName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandAnchorName, put=__cordl_internal_set_leftHandAnchorName)) ::StringW  leftHandAnchorName;

 __declspec(property(get=get_leftHandCurl, put=set_leftHandCurl)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  leftHandCurl;

 __declspec(property(get=get_rightActiveController, put=set_rightActiveController)) ::GlobalNamespace::OVRInput_Controller  rightActiveController;

 __declspec(property(get=get_rightControllerAnchor, put=set_rightControllerAnchor)) ::UnityW<::UnityEngine::Transform>  rightControllerAnchor;

/// @brief Field rightControllerAnchorName, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightControllerAnchorName, put=__cordl_internal_set_rightControllerAnchorName)) ::StringW  rightControllerAnchorName;

 __declspec(property(get=get_rightHandAnchor, put=set_rightHandAnchor)) ::UnityW<::UnityEngine::Transform>  rightHandAnchor;

/// @brief Field rightHandAnchorName, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandAnchorName, put=__cordl_internal_set_rightHandAnchorName)) ::StringW  rightHandAnchorName;

 __declspec(property(get=get_rightHandCurl, put=set_rightHandCurl)) ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  rightHandCurl;

/// @brief Field trackingChangedAudioSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingChangedAudioSource, put=__cordl_internal_set_trackingChangedAudioSource)) ::UnityW<::UnityEngine::AudioSource>  trackingChangedAudioSource;

/// @brief Field trackingGainedClip, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingGainedClip, put=__cordl_internal_set_trackingGainedClip)) ::UnityW<::UnityEngine::AudioClip>  trackingGainedClip;

/// @brief Field trackingLostClip, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingLostClip, put=__cordl_internal_set_trackingLostClip)) ::UnityW<::UnityEngine::AudioClip>  trackingLostClip;

 __declspec(property(get=get_trackingSpace, put=set_trackingSpace)) ::UnityW<::UnityEngine::Transform>  trackingSpace;

/// @brief Field trackingSpaceName, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingSpaceName, put=__cordl_internal_set_trackingSpaceName)) ::StringW  trackingSpaceName;

/// @brief Field upperBodySkeleton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_upperBodySkeleton, put=__cordl_internal_set_upperBodySkeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton>  upperBodySkeleton;

/// @brief Method Awake, addr 0x5918018, size 0x70, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForAnchorsInParent, addr 0x591983c, size 0xe0, virtual false, abstract: false, final false
inline void CheckForAnchorsInParent() ;

/// @brief Method CheckForTrackingSpaceChangesAndRaiseEvent, addr 0x5918de8, size 0x100, virtual true, abstract: false, final false
inline void CheckForTrackingSpaceChangesAndRaiseEvent() ;

/// @brief Method ComputeTrackReferenceMatrix, addr 0x5919548, size 0x2f4, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix() ;

/// @brief Method ConfigureAnchor, addr 0x59192ec, size 0x25c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> ConfigureAnchor(::UnityEngine::Transform*  root, ::StringW  name) ;

/// @brief Method EnsureGameObjectIntegrity, addr 0x5918f08, size 0x3e4, virtual true, abstract: false, final false
inline void EnsureGameObjectIntegrity() ;

static inline ::GlobalNamespace::GorillaIOBT* New_ctor() ;

/// @brief Method OnBeforeRenderCallback, addr 0x5918d14, size 0xd4, virtual true, abstract: false, final false
inline void OnBeforeRenderCallback() ;

/// @brief Method OnDestroy, addr 0x591813c, size 0x94, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RaiseUpdatedAnchorsEvent, addr 0x5918ee8, size 0x20, virtual true, abstract: false, final false
inline void RaiseUpdatedAnchorsEvent() ;

/// @brief Method Start, addr 0x5918088, size 0xa4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x591812c, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnchors, addr 0x59181d0, size 0xb44, virtual true, abstract: false, final false
inline void UpdateAnchors() ;

/// [CompilerGenerated]
/// @brief Method <CheckForAnchorsInParent>g__Check|71_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline void _CheckForAnchorsInParent_g__Check_71_0(::UnityEngine::Transform*  node) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_TrackingSpaceChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TrackingSpaceChanged() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>* const& __cordl_internal_get_UpdatedAnchors() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*& __cordl_internal_get_UpdatedAnchors() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerEyeAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerEyeAnchor_k__BackingField() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__leftActiveController_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__leftActiveController_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftControllerAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftControllerAnchor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftHandAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftHandAnchor_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> const& __cordl_internal_get__leftHandCurl_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>& __cordl_internal_get__leftHandCurl_k__BackingField() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__previousTrackingSpaceTransform() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__previousTrackingSpaceTransform() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__rightActiveController_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__rightActiveController_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightControllerAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightControllerAnchor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightHandAnchor_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightHandAnchor_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> const& __cordl_internal_get__rightHandCurl_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>& __cordl_internal_get__rightHandCurl_k__BackingField() ;

constexpr bool const& __cordl_internal_get__skipUpdate() const;

constexpr bool& __cordl_internal_get__skipUpdate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackingSpace_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackingSpace_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_centerEyeAnchorName() const;

constexpr ::StringW& __cordl_internal_get_centerEyeAnchorName() ;

constexpr ::StringW const& __cordl_internal_get_leftControllerAnchorName() const;

constexpr ::StringW& __cordl_internal_get_leftControllerAnchorName() ;

constexpr ::StringW const& __cordl_internal_get_leftHandAnchorName() const;

constexpr ::StringW& __cordl_internal_get_leftHandAnchorName() ;

constexpr ::StringW const& __cordl_internal_get_rightControllerAnchorName() const;

constexpr ::StringW& __cordl_internal_get_rightControllerAnchorName() ;

constexpr ::StringW const& __cordl_internal_get_rightHandAnchorName() const;

constexpr ::StringW& __cordl_internal_get_rightHandAnchorName() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_trackingChangedAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_trackingChangedAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_trackingGainedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_trackingGainedClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_trackingLostClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_trackingLostClip() ;

constexpr ::StringW const& __cordl_internal_get_trackingSpaceName() const;

constexpr ::StringW& __cordl_internal_get_trackingSpaceName() ;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_upperBodySkeleton() const;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_upperBodySkeleton() ;

constexpr void __cordl_internal_set_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*  value) ;

constexpr void __cordl_internal_set__centerEyeAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__leftActiveController_k__BackingField(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__leftControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__leftHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__leftHandCurl_k__BackingField(::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  value) ;

constexpr void __cordl_internal_set__previousTrackingSpaceTransform(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__rightActiveController_k__BackingField(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__rightControllerAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rightHandAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rightHandCurl_k__BackingField(::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  value) ;

constexpr void __cordl_internal_set__skipUpdate(bool  value) ;

constexpr void __cordl_internal_set__trackingSpace_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_centerEyeAnchorName(::StringW  value) ;

constexpr void __cordl_internal_set_leftControllerAnchorName(::StringW  value) ;

constexpr void __cordl_internal_set_leftHandAnchorName(::StringW  value) ;

constexpr void __cordl_internal_set_rightControllerAnchorName(::StringW  value) ;

constexpr void __cordl_internal_set_rightHandAnchorName(::StringW  value) ;

constexpr void __cordl_internal_set_trackingChangedAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_trackingGainedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_trackingLostClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_trackingSpaceName(::StringW  value) ;

constexpr void __cordl_internal_set_upperBodySkeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value) ;

/// @brief Method .ctor, addr 0x591991c, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_TrackingSpaceChanged, addr 0x5917eb8, size 0xb0, virtual false, abstract: false, final false
inline void add_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UpdatedAnchors, addr 0x5917d58, size 0xb0, virtual false, abstract: false, final false
inline void add_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*  value) ;

/// @brief Method get_IsHandTracking, addr 0x5917cb4, size 0x24, virtual false, abstract: false, final false
inline bool get_IsHandTracking() ;

/// [CompilerGenerated]
/// @brief Method get_centerEyeAnchor, addr 0x5917d08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_centerEyeAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_leftActiveController, addr 0x5917c94, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Controller get_leftActiveController() ;

/// [CompilerGenerated]
/// @brief Method get_leftControllerAnchor, addr 0x5917d38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_leftControllerAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_leftHandAnchor, addr 0x5917d18, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_leftHandAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_leftHandCurl, addr 0x5917cd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> get_leftHandCurl() ;

/// [CompilerGenerated]
/// @brief Method get_rightActiveController, addr 0x5917ca4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Controller get_rightActiveController() ;

/// [CompilerGenerated]
/// @brief Method get_rightControllerAnchor, addr 0x5917d48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rightControllerAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_rightHandAnchor, addr 0x5917d28, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rightHandAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_rightHandCurl, addr 0x5917ce8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::HandTrackingFingerCurl> get_rightHandCurl() ;

/// [CompilerGenerated]
/// @brief Method get_trackingSpace, addr 0x5917cf8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_trackingSpace() ;

/// [CompilerGenerated]
/// @brief Method remove_TrackingSpaceChanged, addr 0x5917f68, size 0xb0, virtual false, abstract: false, final false
inline void remove_TrackingSpaceChanged(::System::Action_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UpdatedAnchors, addr 0x5917e08, size 0xb0, virtual false, abstract: false, final false
inline void remove_UpdatedAnchors(::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_centerEyeAnchor, addr 0x5917d10, size 0x8, virtual false, abstract: false, final false
inline void set_centerEyeAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftActiveController, addr 0x5917c9c, size 0x8, virtual false, abstract: false, final false
inline void set_leftActiveController(::GlobalNamespace::OVRInput_Controller  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftControllerAnchor, addr 0x5917d40, size 0x8, virtual false, abstract: false, final false
inline void set_leftControllerAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftHandAnchor, addr 0x5917d20, size 0x8, virtual false, abstract: false, final false
inline void set_leftHandAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_leftHandCurl, addr 0x5917ce0, size 0x8, virtual false, abstract: false, final false
inline void set_leftHandCurl(::GlobalNamespace::HandTrackingFingerCurl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightActiveController, addr 0x5917cac, size 0x8, virtual false, abstract: false, final false
inline void set_rightActiveController(::GlobalNamespace::OVRInput_Controller  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightControllerAnchor, addr 0x5917d50, size 0x8, virtual false, abstract: false, final false
inline void set_rightControllerAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightHandAnchor, addr 0x5917d30, size 0x8, virtual false, abstract: false, final false
inline void set_rightHandAnchor(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rightHandCurl, addr 0x5917cf0, size 0x8, virtual false, abstract: false, final false
inline void set_rightHandCurl(::GlobalNamespace::HandTrackingFingerCurl*  value) ;

/// [CompilerGenerated]
/// @brief Method set_trackingSpace, addr 0x5917d00, size 0x8, virtual false, abstract: false, final false
inline void set_trackingSpace(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaIOBT() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaIOBT", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaIOBT(GorillaIOBT && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaIOBT", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaIOBT(GorillaIOBT const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2193};

/// [CompilerGenerated]
/// @brief Field <leftActiveController>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____leftActiveController_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightActiveController>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____rightActiveController_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <leftHandCurl>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  ____leftHandCurl_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightHandCurl>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HandTrackingFingerCurl>  ____rightHandCurl_k__BackingField;

/// @brief Field upperBodySkeleton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSkeleton>  ___upperBodySkeleton;

/// [CompilerGenerated]
/// @brief Field <trackingSpace>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trackingSpace_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <centerEyeAnchor>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____centerEyeAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <leftHandAnchor>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____leftHandAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightHandAnchor>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rightHandAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <leftControllerAnchor>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____leftControllerAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rightControllerAnchor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rightControllerAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field UpdatedAnchors, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::GorillaIOBT>>*  ___UpdatedAnchors;

/// [CompilerGenerated]
/// @brief Field TrackingSpaceChanged, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Transform>>*  ___TrackingSpaceChanged;

/// @brief Field trackingChangedAudioSource, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___trackingChangedAudioSource;

/// @brief Field trackingGainedClip, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___trackingGainedClip;

/// @brief Field trackingLostClip, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___trackingLostClip;

/// @brief Field _skipUpdate, offset: 0x98, size: 0x1, def value: None
 bool  ____skipUpdate;

/// @brief Field trackingSpaceName, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___trackingSpaceName;

/// @brief Field centerEyeAnchorName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___centerEyeAnchorName;

/// @brief Field leftHandAnchorName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___leftHandAnchorName;

/// @brief Field rightHandAnchorName, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___rightHandAnchorName;

/// @brief Field leftControllerAnchorName, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___leftControllerAnchorName;

/// @brief Field rightControllerAnchorName, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___rightControllerAnchorName;

/// @brief Field _previousTrackingSpaceTransform, offset: 0xd0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____previousTrackingSpaceTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____leftActiveController_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____rightActiveController_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____leftHandCurl_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____rightHandCurl_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___upperBodySkeleton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____trackingSpace_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____centerEyeAnchor_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____leftHandAnchor_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____rightHandAnchor_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____leftControllerAnchor_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____rightControllerAnchor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___UpdatedAnchors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___TrackingSpaceChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___trackingChangedAudioSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___trackingGainedClip) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___trackingLostClip) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____skipUpdate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___trackingSpaceName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___centerEyeAnchorName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___leftHandAnchorName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___rightHandAnchorName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___leftControllerAnchorName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ___rightControllerAnchorName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaIOBT, ____previousTrackingSpaceTransform) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIOBT) == 0x110, "Size mismatch!");

} // namespace end def GlobalNamespace
