#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRGrabInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractableFarAttachMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGrabInteractable)
namespace GlobalNamespace {
struct XRBaseInteractable_MovementType;
}
namespace GlobalNamespace {
struct XRGrabInteractable_AttachPointCompatibilityMode;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IFarAttachProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct InteractableFarAttachMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class IXRAimAssist;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class DropEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRBaseGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class BaseRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class SmallRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/EaseAttachBurst_00000F9A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/EaseAttachBurst_00000F9A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/StepSmoothingBurst_00000F9B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/StepSmoothingBurst_00000F9B$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRGrabInteractable/<>c");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [SelectionBase]
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [AddComponentMenu("XR/XR Grab Interactable", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable.html")]
// [BurstCompile]
// Dependencies System.ValueTuple`2<T1, T2>, Unity.Profiling.ProfilerMarker, UnityEngine.Component, UnityEngine.Pose, UnityEngine.RigidbodyInterpolation, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Attachment.InteractableFarAttachMode, UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable, UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::MovementType
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable
class CORDL_TYPE XRGrabInteractable : public ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable {
public:
// Declarations
using AttachPointCompatibilityMode = ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode;

using EaseAttachBurst_00000F9A$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall;

using EaseAttachBurst_00000F9A$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate;

using StepSmoothingBurst_00000F9B$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall;

using StepSmoothingBurst_00000F9B$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate;

using __c = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c;

/// @brief Field <allowVisualAttachTransform>k__BackingField, offset 0x244, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowVisualAttachTransform_k__BackingField, put=__cordl_internal_set__allowVisualAttachTransform_k__BackingField)) bool  _allowVisualAttachTransform_k__BackingField;

 __declspec(property(get=get_addDefaultGrabTransformers, put=set_addDefaultGrabTransformers)) bool  addDefaultGrabTransformers;

 __declspec(property(get=get_allowVisualAttachTransform, put=set_allowVisualAttachTransform)) bool  allowVisualAttachTransform;

 __declspec(property(get=get_angularVelocityDamping, put=set_angularVelocityDamping)) float_t  angularVelocityDamping;

 __declspec(property(get=get_angularVelocityScale, put=set_angularVelocityScale)) float_t  angularVelocityScale;

 __declspec(property(get=get_attachEaseInTime, put=set_attachEaseInTime)) float_t  attachEaseInTime;

/// @brief [Obsolete("attachPointCompatibilityMode has been deprecated and will be removed in a future version of XRI.", true)]
 __declspec(property(get=get_attachPointCompatibilityMode, put=set_attachPointCompatibilityMode)) ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode  attachPointCompatibilityMode;

 __declspec(property(get=get_attachTransform, put=set_attachTransform)) ::UnityW<::UnityEngine::Transform>  attachTransform;

 __declspec(property(get=get_farAttachMode, put=set_farAttachMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  farAttachMode;

 __declspec(property(get=get_forceGravityOnDetach, put=set_forceGravityOnDetach)) bool  forceGravityOnDetach;

/// @brief [Obsolete("gravityOnDetach has been deprecated. Use forceGravityOnDetach instead. (UnityUpgradable) -> forceGravityOnDetach", true)]
 __declspec(property(get=get_gravityOnDetach, put=set_gravityOnDetach)) bool  gravityOnDetach;

 __declspec(property(get=get_isRigidbodyMovement)) bool  isRigidbodyMovement;

 __declspec(property(get=get_isTransformDirty, put=set_isTransformDirty)) bool  isTransformDirty;

 __declspec(property(get=get_limitAngularVelocity, put=set_limitAngularVelocity)) bool  limitAngularVelocity;

 __declspec(property(get=get_limitLinearVelocity, put=set_limitLinearVelocity)) bool  limitLinearVelocity;

/// @brief Field m_AddDefaultGrabTransformers, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AddDefaultGrabTransformers, put=__cordl_internal_set_m_AddDefaultGrabTransformers)) bool  m_AddDefaultGrabTransformers;

/// @brief Field m_AngularDampingOnGrab, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngularDampingOnGrab, put=__cordl_internal_set_m_AngularDampingOnGrab)) float_t  m_AngularDampingOnGrab;

/// @brief Field m_AngularVelocityDamping, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngularVelocityDamping, put=__cordl_internal_set_m_AngularVelocityDamping)) float_t  m_AngularVelocityDamping;

/// @brief Field m_AngularVelocityScale, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngularVelocityScale, put=__cordl_internal_set_m_AngularVelocityScale)) float_t  m_AngularVelocityScale;

/// @brief Field m_AttachEaseInTime, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AttachEaseInTime, put=__cordl_internal_set_m_AttachEaseInTime)) float_t  m_AttachEaseInTime;

/// @brief Field m_AttachTransform, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttachTransform, put=__cordl_internal_set_m_AttachTransform)) ::UnityW<::UnityEngine::Transform>  m_AttachTransform;

/// @brief Field m_CollidersThatAllowedCharacterCollision, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CollidersThatAllowedCharacterCollision, put=__cordl_internal_set_m_CollidersThatAllowedCharacterCollision)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  m_CollidersThatAllowedCharacterCollision;

/// @brief Field m_CurrentAttachEaseTime, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentAttachEaseTime, put=__cordl_internal_set_m_CurrentAttachEaseTime)) float_t  m_CurrentAttachEaseTime;

/// @brief Field m_CurrentMovementType, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentMovementType, put=__cordl_internal_set_m_CurrentMovementType)) ::GlobalNamespace::XRBaseInteractable_MovementType  m_CurrentMovementType;

/// @brief Field m_DetachAngularVelocity, offset 0x2d0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_DetachAngularVelocity, put=__cordl_internal_set_m_DetachAngularVelocity)) ::UnityEngine::Vector3  m_DetachAngularVelocity;

/// @brief Field m_DetachInLateUpdate, offset 0x2c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DetachInLateUpdate, put=__cordl_internal_set_m_DetachInLateUpdate)) bool  m_DetachInLateUpdate;

/// @brief Field m_DetachLinearVelocity, offset 0x2c4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_DetachLinearVelocity, put=__cordl_internal_set_m_DetachLinearVelocity)) ::UnityEngine::Vector3  m_DetachLinearVelocity;

/// @brief Field m_DropTransformersCount, offset 0x27c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DropTransformersCount, put=__cordl_internal_set_m_DropTransformersCount)) int32_t  m_DropTransformersCount;

/// @brief Field m_DynamicAttachTransforms, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DynamicAttachTransforms, put=__cordl_internal_set_m_DynamicAttachTransforms)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  m_DynamicAttachTransforms;

/// @brief Field m_FarAttachMode, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FarAttachMode, put=__cordl_internal_set_m_FarAttachMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  m_FarAttachMode;

/// @brief Field m_ForceGravityOnDetach, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ForceGravityOnDetach, put=__cordl_internal_set_m_ForceGravityOnDetach)) bool  m_ForceGravityOnDetach;

/// @brief Field m_GrabCountBeforeAndAfterChange, offset 0x268, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_GrabCountBeforeAndAfterChange, put=__cordl_internal_set_m_GrabCountBeforeAndAfterChange)) ::System::ValueTuple_2<int32_t,int32_t>  m_GrabCountBeforeAndAfterChange;

/// @brief Field m_GrabCountChanged, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GrabCountChanged, put=__cordl_internal_set_m_GrabCountChanged)) bool  m_GrabCountChanged;

/// @brief Field m_GrabTransformersAddedWhenGrabbed, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrabTransformersAddedWhenGrabbed, put=__cordl_internal_set_m_GrabTransformersAddedWhenGrabbed)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  m_GrabTransformersAddedWhenGrabbed;

/// @brief Field m_IgnoringCharacterCollision, offset 0x36c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoringCharacterCollision, put=__cordl_internal_set_m_IgnoringCharacterCollision)) bool  m_IgnoringCharacterCollision;

/// @brief Field m_InitialVisualsTransformLocalPose, offset 0x340, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_InitialVisualsTransformLocalPose, put=__cordl_internal_set_m_InitialVisualsTransformLocalPose)) ::UnityEngine::Pose  m_InitialVisualsTransformLocalPose;

/// @brief Field m_InitialVisualsTransformLocalPoseIsIdentity, offset 0x35c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InitialVisualsTransformLocalPoseIsIdentity, put=__cordl_internal_set_m_InitialVisualsTransformLocalPoseIsIdentity)) bool  m_InitialVisualsTransformLocalPoseIsIdentity;

/// @brief Field m_InitialVisualsTransformLocalScale, offset 0x360, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialVisualsTransformLocalScale, put=__cordl_internal_set_m_InitialVisualsTransformLocalScale)) ::UnityEngine::Vector3  m_InitialVisualsTransformLocalScale;

/// @brief Field m_InterpolationOnGrab, offset 0x32c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InterpolationOnGrab, put=__cordl_internal_set_m_InterpolationOnGrab)) ::UnityEngine::RigidbodyInterpolation  m_InterpolationOnGrab;

/// @brief Field m_IsProcessingGrabTransformers, offset 0x278, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsProcessingGrabTransformers, put=__cordl_internal_set_m_IsProcessingGrabTransformers)) bool  m_IsProcessingGrabTransformers;

/// @brief Field m_IsTargetLocalScaleDirty, offset 0x2a9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsTargetLocalScaleDirty, put=__cordl_internal_set_m_IsTargetLocalScaleDirty)) bool  m_IsTargetLocalScaleDirty;

/// @brief Field m_IsTargetPoseDirty, offset 0x2a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsTargetPoseDirty, put=__cordl_internal_set_m_IsTargetPoseDirty)) bool  m_IsTargetPoseDirty;

/// @brief Field m_LastFixedDynamicTime, offset 0x33c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFixedDynamicTime, put=__cordl_internal_set_m_LastFixedDynamicTime)) float_t  m_LastFixedDynamicTime;

/// @brief Field m_LastFixedFrame, offset 0x338, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFixedFrame, put=__cordl_internal_set_m_LastFixedFrame)) int32_t  m_LastFixedFrame;

/// @brief Field m_LastThrowReferencePose, offset 0x2fc, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_LastThrowReferencePose, put=__cordl_internal_set_m_LastThrowReferencePose)) ::UnityEngine::Pose  m_LastThrowReferencePose;

/// @brief Field m_LimitAngularVelocity, offset 0x239, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LimitAngularVelocity, put=__cordl_internal_set_m_LimitAngularVelocity)) bool  m_LimitAngularVelocity;

/// @brief Field m_LimitLinearVelocity, offset 0x238, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LimitLinearVelocity, put=__cordl_internal_set_m_LimitLinearVelocity)) bool  m_LimitLinearVelocity;

/// @brief Field m_LinearDampingOnGrab, offset 0x330, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LinearDampingOnGrab, put=__cordl_internal_set_m_LinearDampingOnGrab)) float_t  m_LinearDampingOnGrab;

/// @brief Field m_MatchAttachPosition, offset 0x1b1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MatchAttachPosition, put=__cordl_internal_set_m_MatchAttachPosition)) bool  m_MatchAttachPosition;

/// @brief Field m_MatchAttachRotation, offset 0x1b2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MatchAttachRotation, put=__cordl_internal_set_m_MatchAttachRotation)) bool  m_MatchAttachRotation;

/// @brief Field m_MaxAngularVelocityDelta, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxAngularVelocityDelta, put=__cordl_internal_set_m_MaxAngularVelocityDelta)) float_t  m_MaxAngularVelocityDelta;

/// @brief Field m_MaxLinearVelocityDelta, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxLinearVelocityDelta, put=__cordl_internal_set_m_MaxLinearVelocityDelta)) float_t  m_MaxLinearVelocityDelta;

/// @brief Field m_MovementType, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MovementType, put=__cordl_internal_set_m_MovementType)) ::GlobalNamespace::XRBaseInteractable_MovementType  m_MovementType;

/// @brief Field m_MultipleGrabTransformers, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MultipleGrabTransformers, put=__cordl_internal_set_m_MultipleGrabTransformers)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  m_MultipleGrabTransformers;

/// @brief Field m_OriginalSceneParent, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalSceneParent, put=__cordl_internal_set_m_OriginalSceneParent)) ::UnityW<::UnityEngine::Transform>  m_OriginalSceneParent;

/// @brief Field m_PredictedVisualsTransform, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PredictedVisualsTransform, put=__cordl_internal_set_m_PredictedVisualsTransform)) ::UnityW<::UnityEngine::Transform>  m_PredictedVisualsTransform;

/// @brief Field m_ReinitializeDynamicAttachEverySingleGrab, offset 0x1b4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab, put=__cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab)) bool  m_ReinitializeDynamicAttachEverySingleGrab;

/// @brief Field m_RetainTransformParent, offset 0x219, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RetainTransformParent, put=__cordl_internal_set_m_RetainTransformParent)) bool  m_RetainTransformParent;

/// @brief Field m_Rigidbody, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rigidbody, put=__cordl_internal_set_m_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  m_Rigidbody;

/// @brief Field m_RigidbodyColliders, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RigidbodyColliders, put=__cordl_internal_set_m_RigidbodyColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  m_RigidbodyColliders;

/// @brief Field m_RigidbodyColliding, offset 0x328, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RigidbodyColliding, put=__cordl_internal_set_m_RigidbodyColliding)) bool  m_RigidbodyColliding;

/// @brief Field m_SecondaryAttachTransform, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryAttachTransform, put=__cordl_internal_set_m_SecondaryAttachTransform)) ::UnityW<::UnityEngine::Transform>  m_SecondaryAttachTransform;

/// @brief Field m_SelectingCharacterController, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectingCharacterController, put=__cordl_internal_set_m_SelectingCharacterController)) ::UnityW<::UnityEngine::CharacterController>  m_SelectingCharacterController;

/// @brief Field m_SelectingCharacterInteractors, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectingCharacterInteractors, put=__cordl_internal_set_m_SelectingCharacterInteractors)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  m_SelectingCharacterInteractors;

/// @brief Field m_SingleGrabTransformers, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SingleGrabTransformers, put=__cordl_internal_set_m_SingleGrabTransformers)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  m_SingleGrabTransformers;

/// @brief Field m_SmoothPosition, offset 0x1d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothPosition, put=__cordl_internal_set_m_SmoothPosition)) bool  m_SmoothPosition;

/// @brief Field m_SmoothPositionAmount, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothPositionAmount, put=__cordl_internal_set_m_SmoothPositionAmount)) float_t  m_SmoothPositionAmount;

/// @brief Field m_SmoothRotation, offset 0x1e5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothRotation, put=__cordl_internal_set_m_SmoothRotation)) bool  m_SmoothRotation;

/// @brief Field m_SmoothRotationAmount, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothRotationAmount, put=__cordl_internal_set_m_SmoothRotationAmount)) float_t  m_SmoothRotationAmount;

/// @brief Field m_SmoothScale, offset 0x1f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothScale, put=__cordl_internal_set_m_SmoothScale)) bool  m_SmoothScale;

/// @brief Field m_SmoothScaleAmount, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothScaleAmount, put=__cordl_internal_set_m_SmoothScaleAmount)) float_t  m_SmoothScaleAmount;

/// @brief Field m_SnapToColliderVolume, offset 0x1b3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapToColliderVolume, put=__cordl_internal_set_m_SnapToColliderVolume)) bool  m_SnapToColliderVolume;

/// @brief Field m_StartingMultipleGrabTransformers, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingMultipleGrabTransformers, put=__cordl_internal_set_m_StartingMultipleGrabTransformers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  m_StartingMultipleGrabTransformers;

/// @brief Field m_StartingSingleGrabTransformers, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingSingleGrabTransformers, put=__cordl_internal_set_m_StartingSingleGrabTransformers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  m_StartingSingleGrabTransformers;

/// @brief Field m_StopIgnoringCollisionInLateUpdate, offset 0x36d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StopIgnoringCollisionInLateUpdate, put=__cordl_internal_set_m_StopIgnoringCollisionInLateUpdate)) bool  m_StopIgnoringCollisionInLateUpdate;

/// @brief Field m_TargetLocalScale, offset 0x29c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetLocalScale, put=__cordl_internal_set_m_TargetLocalScale)) ::UnityEngine::Vector3  m_TargetLocalScale;

/// @brief Field m_TargetPose, offset 0x280, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_TargetPose, put=__cordl_internal_set_m_TargetPose)) ::UnityEngine::Pose  m_TargetPose;

/// @brief Field m_TeleportationMonitor, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TeleportationMonitor, put=__cordl_internal_set_m_TeleportationMonitor)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*  m_TeleportationMonitor;

/// @brief Field m_ThrowAngularVelocityScale, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThrowAngularVelocityScale, put=__cordl_internal_set_m_ThrowAngularVelocityScale)) float_t  m_ThrowAngularVelocityScale;

/// @brief Field m_ThrowAssist, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThrowAssist, put=__cordl_internal_set_m_ThrowAssist)) ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*  m_ThrowAssist;

/// @brief Field m_ThrowOnDetach, offset 0x1fc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ThrowOnDetach, put=__cordl_internal_set_m_ThrowOnDetach)) bool  m_ThrowOnDetach;

/// @brief Field m_ThrowSmoothingAngularVelocityFrames, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames, put=__cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames)) ::ArrayW<::UnityEngine::Vector3>  m_ThrowSmoothingAngularVelocityFrames;

/// @brief Field m_ThrowSmoothingCurrentFrame, offset 0x2dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingCurrentFrame, put=__cordl_internal_set_m_ThrowSmoothingCurrentFrame)) int32_t  m_ThrowSmoothingCurrentFrame;

/// @brief Field m_ThrowSmoothingCurve, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingCurve, put=__cordl_internal_set_m_ThrowSmoothingCurve)) ::UnityEngine::AnimationCurve*  m_ThrowSmoothingCurve;

/// @brief Field m_ThrowSmoothingDuration, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingDuration, put=__cordl_internal_set_m_ThrowSmoothingDuration)) float_t  m_ThrowSmoothingDuration;

/// @brief Field m_ThrowSmoothingFirstUpdate, offset 0x2f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingFirstUpdate, put=__cordl_internal_set_m_ThrowSmoothingFirstUpdate)) bool  m_ThrowSmoothingFirstUpdate;

/// @brief Field m_ThrowSmoothingFrameTimes, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingFrameTimes, put=__cordl_internal_set_m_ThrowSmoothingFrameTimes)) ::ArrayW<float_t>  m_ThrowSmoothingFrameTimes;

/// @brief Field m_ThrowSmoothingLinearVelocityFrames, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ThrowSmoothingLinearVelocityFrames, put=__cordl_internal_set_m_ThrowSmoothingLinearVelocityFrames)) ::ArrayW<::UnityEngine::Vector3>  m_ThrowSmoothingLinearVelocityFrames;

/// @brief Field m_ThrowVelocityScale, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThrowVelocityScale, put=__cordl_internal_set_m_ThrowVelocityScale)) float_t  m_ThrowVelocityScale;

/// @brief Field m_TightenPosition, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TightenPosition, put=__cordl_internal_set_m_TightenPosition)) float_t  m_TightenPosition;

/// @brief Field m_TightenRotation, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TightenRotation, put=__cordl_internal_set_m_TightenRotation)) float_t  m_TightenRotation;

/// @brief Field m_TightenScale, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TightenScale, put=__cordl_internal_set_m_TightenScale)) float_t  m_TightenScale;

/// @brief Field m_TrackPosition, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TrackPosition, put=__cordl_internal_set_m_TrackPosition)) bool  m_TrackPosition;

/// @brief Field m_TrackRotation, offset 0x1e4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TrackRotation, put=__cordl_internal_set_m_TrackRotation)) bool  m_TrackRotation;

/// @brief Field m_TrackScale, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TrackScale, put=__cordl_internal_set_m_TrackScale)) bool  m_TrackScale;

/// @brief Field m_Transform, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Transform, put=__cordl_internal_set_m_Transform)) ::UnityW<::UnityEngine::Transform>  m_Transform;

/// @brief Field m_UseDynamicAttach, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseDynamicAttach, put=__cordl_internal_set_m_UseDynamicAttach)) bool  m_UseDynamicAttach;

/// @brief Field m_UsedGravity, offset 0x32a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UsedGravity, put=__cordl_internal_set_m_UsedGravity)) bool  m_UsedGravity;

/// @brief Field m_VelocityDamping, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VelocityDamping, put=__cordl_internal_set_m_VelocityDamping)) float_t  m_VelocityDamping;

/// @brief Field m_VelocityScale, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VelocityScale, put=__cordl_internal_set_m_VelocityScale)) float_t  m_VelocityScale;

/// @brief Field m_VisualAttachTransforms, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisualAttachTransforms, put=__cordl_internal_set_m_VisualAttachTransforms)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  m_VisualAttachTransforms;

/// @brief Field m_WasKinematic, offset 0x329, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasKinematic, put=__cordl_internal_set_m_WasKinematic)) bool  m_WasKinematic;

 __declspec(property(get=get_matchAttachPosition, put=set_matchAttachPosition)) bool  matchAttachPosition;

 __declspec(property(get=get_matchAttachRotation, put=set_matchAttachRotation)) bool  matchAttachRotation;

 __declspec(property(get=get_maxAngularVelocityDelta, put=set_maxAngularVelocityDelta)) float_t  maxAngularVelocityDelta;

 __declspec(property(get=get_maxLinearVelocityDelta, put=set_maxLinearVelocityDelta)) float_t  maxLinearVelocityDelta;

 __declspec(property(get=get_movementType, put=set_movementType)) ::GlobalNamespace::XRBaseInteractable_MovementType  movementType;

 __declspec(property(get=get_multipleGrabTransformersCount)) int32_t  multipleGrabTransformersCount;

 __declspec(property(get=get_predictedVisualsTransform, put=set_predictedVisualsTransform)) ::UnityW<::UnityEngine::Transform>  predictedVisualsTransform;

 __declspec(property(get=get_reinitializeDynamicAttachEverySingleGrab, put=set_reinitializeDynamicAttachEverySingleGrab)) bool  reinitializeDynamicAttachEverySingleGrab;

 __declspec(property(get=get_retainTransformParent, put=set_retainTransformParent)) bool  retainTransformParent;

/// @brief Field s_DropEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DropEventArgs, put=setStaticF_s_DropEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*  s_DropEventArgs;

/// @brief Field s_DynamicAttachTransformPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DynamicAttachTransformPool, put=setStaticF_s_DynamicAttachTransformPool)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*  s_DynamicAttachTransformPool;

/// @brief Field s_ProcessGrabTransformersMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessGrabTransformersMarker, put=setStaticF_s_ProcessGrabTransformersMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessGrabTransformersMarker;

 __declspec(property(get=get_secondaryAttachTransform, put=set_secondaryAttachTransform)) ::UnityW<::UnityEngine::Transform>  secondaryAttachTransform;

 __declspec(property(get=get_singleGrabTransformersCount)) int32_t  singleGrabTransformersCount;

 __declspec(property(get=get_smoothPosition, put=set_smoothPosition)) bool  smoothPosition;

 __declspec(property(get=get_smoothPositionAmount, put=set_smoothPositionAmount)) float_t  smoothPositionAmount;

 __declspec(property(get=get_smoothRotation, put=set_smoothRotation)) bool  smoothRotation;

 __declspec(property(get=get_smoothRotationAmount, put=set_smoothRotationAmount)) float_t  smoothRotationAmount;

 __declspec(property(get=get_smoothScale, put=set_smoothScale)) bool  smoothScale;

 __declspec(property(get=get_smoothScaleAmount, put=set_smoothScaleAmount)) float_t  smoothScaleAmount;

 __declspec(property(get=get_snapToColliderVolume, put=set_snapToColliderVolume)) bool  snapToColliderVolume;

 __declspec(property(get=get_startingMultipleGrabTransformers, put=set_startingMultipleGrabTransformers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  startingMultipleGrabTransformers;

 __declspec(property(get=get_startingSingleGrabTransformers, put=set_startingSingleGrabTransformers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  startingSingleGrabTransformers;

 __declspec(property(get=get_throwAngularVelocityScale, put=set_throwAngularVelocityScale)) float_t  throwAngularVelocityScale;

 __declspec(property(get=get_throwOnDetach, put=set_throwOnDetach)) bool  throwOnDetach;

 __declspec(property(get=get_throwSmoothingCurve, put=set_throwSmoothingCurve)) ::UnityEngine::AnimationCurve*  throwSmoothingCurve;

 __declspec(property(get=get_throwSmoothingDuration, put=set_throwSmoothingDuration)) float_t  throwSmoothingDuration;

 __declspec(property(get=get_throwVelocityScale, put=set_throwVelocityScale)) float_t  throwVelocityScale;

 __declspec(property(get=get_tightenPosition, put=set_tightenPosition)) float_t  tightenPosition;

 __declspec(property(get=get_tightenRotation, put=set_tightenRotation)) float_t  tightenRotation;

 __declspec(property(get=get_tightenScale, put=set_tightenScale)) float_t  tightenScale;

 __declspec(property(get=get_trackPosition, put=set_trackPosition)) bool  trackPosition;

 __declspec(property(get=get_trackRotation, put=set_trackRotation)) bool  trackRotation;

 __declspec(property(get=get_trackScale, put=set_trackScale)) bool  trackScale;

 __declspec(property(get=get_useDynamicAttach, put=set_useDynamicAttach)) bool  useDynamicAttach;

 __declspec(property(get=get_velocityDamping, put=set_velocityDamping)) float_t  velocityDamping;

 __declspec(property(get=get_velocityScale, put=set_velocityScale)) float_t  velocityScale;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*() noexcept;

/// @brief Method AddDefaultGrabTransformers, addr 0xb49762c, size 0xe4, virtual false, abstract: false, final false
inline bool AddDefaultGrabTransformers() ;

/// @brief Method AddDefaultMultipleGrabTransformer, addr 0xb49b5dc, size 0x78, virtual true, abstract: false, final false
inline void AddDefaultMultipleGrabTransformer() ;

/// @brief Method AddDefaultSingleGrabTransformer, addr 0xb49b51c, size 0x78, virtual true, abstract: false, final false
inline void AddDefaultSingleGrabTransformer() ;

/// @brief Method AddGrabTransformer, addr 0xb499198, size 0x13c, virtual false, abstract: false, final false
inline void AddGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers) ;

/// @brief Method AddMultipleGrabTransformer, addr 0xb4992d4, size 0x8, virtual false, abstract: false, final false
inline void AddMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method AddSingleGrabTransformer, addr 0xb499190, size 0x8, virtual false, abstract: false, final false
inline void AddSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method ApplyTargetScale, addr 0xb497710, size 0x3c, virtual false, abstract: false, final false
inline void ApplyTargetScale() ;

/// @brief Method ApplyVisuals, addr 0xb49bd64, size 0x1f8, virtual false, abstract: false, final false
inline void ApplyVisuals(::UnityEngine::Pose  visualsPose) ;

/// @brief Method Awake, addr 0xb496584, size 0x294, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanProcessAnySingleGrabTransformer, addr 0xb49b304, size 0x218, virtual false, abstract: false, final false
inline bool CanProcessAnySingleGrabTransformer() ;

/// @brief Method ClearGrabTransformers, addr 0xb49933c, size 0x90, virtual false, abstract: false, final false
inline void ClearGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers) ;

/// @brief Method ClearMultipleGrabTransformers, addr 0xb49731c, size 0x8, virtual false, abstract: false, final false
inline void ClearMultipleGrabTransformers() ;

/// @brief Method ClearSingleGrabTransformers, addr 0xb497314, size 0x8, virtual false, abstract: false, final false
inline void ClearSingleGrabTransformers() ;

/// @brief Method CreateDynamicAttachTransform, addr 0xb49c428, size 0xe4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> CreateDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method CreateVisualAttachTransform, addr 0xb49c50c, size 0xe4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> CreateVisualAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method Detach, addr 0xb49d704, size 0x338, virtual true, abstract: false, final false
inline void Detach() ;

/// @brief Method Drop, addr 0xb49d4d4, size 0x1b0, virtual true, abstract: false, final false
inline void Drop() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::EaseAttachBurst_00000F9A$PostfixBurstDelegate))]
/// @brief Method EaseAttachBurst, addr 0xb495c10, size 0x4, virtual false, abstract: false, final false
static inline void EaseAttachBurst(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime) ;

/// [BurstCompile]
/// @brief Method EaseAttachBurst$BurstManaged, addr 0xb49ebb4, size 0x1a4, virtual false, abstract: false, final false
static inline void EaseAttachBurst$BurstManaged(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime) ;

/// @brief Method EndThrowSmoothing, addr 0xb49d684, size 0x80, virtual false, abstract: false, final false
inline void EndThrowSmoothing() ;

/// @brief Method FindStartingGrabTransformers, addr 0xb496890, size 0x5d0, virtual false, abstract: false, final false
inline void FindStartingGrabTransformers() ;

/// @brief Method FlushRegistration, addr 0xb4972bc, size 0x38, virtual false, abstract: false, final false
inline void FlushRegistration() ;

/// @brief Method GetAttachTransform, addr 0xb498e6c, size 0x324, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GetGrabTransformers, addr 0xb499434, size 0x68, virtual false, abstract: false, final false
static inline void GetGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results) ;

/// @brief Method GetMultipleGrabTransformerAt, addr 0xb499520, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetMultipleGrabTransformerAt(int32_t  index) ;

/// @brief Method GetMultipleGrabTransformers, addr 0xb49949c, size 0x68, virtual false, abstract: false, final false
inline void GetMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results) ;

/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GetOrAddComponent() ;

/// @brief Method GetOrAddDefaultGrabTransformer, addr 0xb49b594, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetOrAddDefaultGrabTransformer() ;

/// @brief Method GetSingleGrabTransformerAt, addr 0xb499504, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* GetSingleGrabTransformerAt(int32_t  index) ;

/// @brief Method GetSingleGrabTransformers, addr 0xb4993cc, size 0x68, virtual false, abstract: false, final false
inline void GetSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results) ;

/// @brief Method GetSmoothedVelocityValue, addr 0xb49dc6c, size 0x21c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSmoothedVelocityValue(::ArrayW<::UnityEngine::Vector3>  velocityFrames) ;

/// @brief Method GetTargetLocalScale, addr 0xb49974c, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetTargetLocalScale() ;

/// @brief Method GetTargetPose, addr 0xb4996bc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetTargetPose() ;

/// @brief Method Grab, addr 0xb49d274, size 0x260, virtual true, abstract: false, final false
inline void Grab() ;

/// @brief Method InitializeDynamicAttachPose, addr 0xb49d080, size 0x1f4, virtual true, abstract: false, final false
inline void InitializeDynamicAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform) ;

/// @brief Method InitializeDynamicAttachPoseInternal, addr 0xb49b654, size 0x3c, virtual false, abstract: false, final false
inline void InitializeDynamicAttachPoseInternal(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform) ;

/// @brief Method InitializeDynamicAttachPoseWithStatic, addr 0xb49cbf8, size 0x1e0, virtual false, abstract: false, final false
inline void InitializeDynamicAttachPoseWithStatic(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform) ;

/// @brief Method InitializeTargetPoseAndScale, addr 0xb496818, size 0x78, virtual false, abstract: false, final false
inline void InitializeTargetPoseAndScale(::UnityEngine::Transform*  thisTransform) ;

/// @brief Method InvokeGrabTransformersOnDrop, addr 0xb499e98, size 0x38c, virtual false, abstract: false, final false
inline void InvokeGrabTransformersOnDrop(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*  args) ;

/// @brief Method InvokeGrabTransformersOnGrab, addr 0xb499b3c, size 0x35c, virtual false, abstract: false, final false
inline void InvokeGrabTransformersOnGrab() ;

/// @brief Method InvokeGrabTransformersProcess, addr 0xb49a224, size 0x10e0, virtual false, abstract: false, final false
inline void InvokeGrabTransformersProcess(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method IsOutsideCharacterCollider, addr 0xb497c7c, size 0x250, virtual false, abstract: false, final false
inline bool IsOutsideCharacterCollider(::UnityEngine::Collider*  characterCollider) ;

/// @brief Method MoveGrabTransformerTo, addr 0xb499544, size 0x170, virtual false, abstract: false, final false
inline void MoveGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers) ;

/// @brief Method MoveMultipleGrabTransformerTo, addr 0xb4996b4, size 0x8, virtual false, abstract: false, final false
inline void MoveMultipleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex) ;

/// @brief Method MoveSingleGrabTransformerTo, addr 0xb49953c, size 0x8, virtual false, abstract: false, final false
inline void MoveSingleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable* New_ctor() ;

/// @brief Method OnAddedGrabTransformer, addr 0xb4997dc, size 0x248, virtual false, abstract: false, final false
inline void OnAddedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method OnCollisionStay, addr 0xb497324, size 0xc, virtual true, abstract: false, final false
inline void OnCollisionStay() ;

/// @brief Method OnCreatePooledItem, addr 0xb49e044, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> OnCreatePooledItem() ;

/// @brief Method OnDestroy, addr 0xb4972f4, size 0x20, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDestroyPooledItem, addr 0xb49e27c, size 0xa4, virtual false, abstract: false, final false
static inline void OnDestroyPooledItem(::UnityEngine::Transform*  item) ;

/// @brief Method OnGetPooledItem, addr 0xb49e154, size 0x94, virtual false, abstract: false, final false
static inline void OnGetPooledItem(::UnityEngine::Transform*  item) ;

/// @brief Method OnHoverEntering, addr 0xb49bf5c, size 0x18, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnReleasePooledItem, addr 0xb49e1e8, size 0x94, virtual false, abstract: false, final false
static inline void OnReleasePooledItem(::UnityEngine::Transform*  item) ;

/// @brief Method OnRemovedGrabTransformer, addr 0xb499a24, size 0x118, virtual false, abstract: false, final false
inline void OnRemovedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method OnSelectEntering, addr 0xb49bf74, size 0x4b4, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb49cb48, size 0x3c, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb49c810, size 0x320, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnTeleported, addr 0xb49de88, size 0x1bc, virtual false, abstract: false, final false
inline void OnTeleported(::UnityEngine::Pose  beforePose, ::UnityEngine::Pose  afterPose, ::UnityEngine::Pose  deltaPose) ;

/// @brief Method PerformInstantaneousUpdate, addr 0xb497ecc, size 0xa0, virtual false, abstract: false, final false
inline void PerformInstantaneousUpdate() ;

/// @brief Method PerformKinematicUpdate, addr 0xb49774c, size 0x6c, virtual false, abstract: false, final false
inline void PerformKinematicUpdate() ;

/// @brief Method PerformKinematicVisualsUpdate, addr 0xb498194, size 0x90, virtual false, abstract: false, final false
inline void PerformKinematicVisualsUpdate() ;

/// @brief Method PerformVelocityTrackingUpdate, addr 0xb4977b8, size 0x4c4, virtual false, abstract: false, final false
inline void PerformVelocityTrackingUpdate(float_t  fixedDeltaTime) ;

/// @brief Method PerformVelocityVisualsUpdate, addr 0xb498224, size 0x578, virtual false, abstract: false, final false
inline void PerformVelocityVisualsUpdate() ;

/// @brief Method PerformVisualAttachUpdate, addr 0xb49879c, size 0x524, virtual false, abstract: false, final false
inline void PerformVisualAttachUpdate() ;

/// @brief Method ProcessInteractable, addr 0xb497330, size 0x2fc, virtual true, abstract: false, final false
inline void ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method RegisterStartingGrabTransformers, addr 0xb496e60, size 0x45c, virtual false, abstract: false, final false
inline void RegisterStartingGrabTransformers() ;

/// @brief Method ReleaseDynamicAttachTransform, addr 0xb49cb84, size 0x74, virtual false, abstract: false, final false
inline void ReleaseDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method RemoveGrabTransformer, addr 0xb4992e4, size 0x50, virtual false, abstract: false, final false
inline bool RemoveGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers) ;

/// @brief Method RemoveMultipleGrabTransformer, addr 0xb499334, size 0x8, virtual false, abstract: false, final false
inline bool RemoveMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method RemoveSingleGrabTransformer, addr 0xb4992dc, size 0x8, virtual false, abstract: false, final false
inline bool RemoveSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer) ;

/// @brief Method Reset, addr 0xb4963dc, size 0x1a8, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetThrowSmoothing, addr 0xb49c5f0, size 0x68, virtual false, abstract: false, final false
inline void ResetThrowSmoothing() ;

/// @brief Method SetTargetLocalScale, addr 0xb49975c, size 0x80, virtual false, abstract: false, final false
inline void SetTargetLocalScale(::UnityEngine::Vector3  localScale) ;

/// @brief Method SetTargetPose, addr 0xb4996d4, size 0x78, virtual false, abstract: false, final false
inline void SetTargetPose(::UnityEngine::Pose  pose) ;

/// @brief Method SetupRigidbodyDrop, addr 0xb49db6c, size 0x100, virtual true, abstract: false, final false
inline void SetupRigidbodyDrop(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method SetupRigidbodyGrab, addr 0xb49da3c, size 0x130, virtual true, abstract: false, final false
inline void SetupRigidbodyGrab(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method ShouldMatchAttachPosition, addr 0xb49cf24, size 0xc8, virtual true, abstract: false, final false
inline bool ShouldMatchAttachPosition(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method ShouldMatchAttachRotation, addr 0xb49cfec, size 0x8c, virtual true, abstract: false, final false
inline bool ShouldMatchAttachRotation(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method ShouldSnapToColliderVolume, addr 0xb49d078, size 0x8, virtual true, abstract: false, final false
inline bool ShouldSnapToColliderVolume(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method StartIgnoringCharacterCollision, addr 0xb49c658, size 0x1a0, virtual false, abstract: false, final false
inline void StartIgnoringCharacterCollision(::UnityEngine::Collider*  characterCollider) ;

/// @brief Method StepSmoothing, addr 0xb49b948, size 0x15c, virtual false, abstract: false, final false
inline void StepSmoothing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable::StepSmoothingBurst_00000F9B$PostfixBurstDelegate))]
/// @brief Method StepSmoothingBurst, addr 0xb495c14, size 0x4, virtual false, abstract: false, final false
static inline void StepSmoothingBurst(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale) ;

/// [BurstCompile]
/// @brief Method StepSmoothingBurst$BurstManaged, addr 0xb49ed58, size 0x34c, virtual false, abstract: false, final false
static inline void StepSmoothingBurst$BurstManaged(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale) ;

/// @brief Method StepThrowSmoothing, addr 0xb49b690, size 0x2b8, virtual false, abstract: false, final false
inline void StepThrowSmoothing(::UnityEngine::Pose  targetPose, float_t  deltaTime) ;

/// @brief Method StopIgnoringCharacterCollision, addr 0xb498cc0, size 0x1ac, virtual false, abstract: false, final false
inline void StopIgnoringCharacterCollision(::UnityEngine::Collider*  characterCollider) ;

/// @brief Method SubscribeTeleportationProvider, addr 0xb49c7f8, size 0x18, virtual false, abstract: false, final false
inline void SubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method UnsubscribeTeleportationProvider, addr 0xb49cb30, size 0x18, virtual false, abstract: false, final false
inline void UnsubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method UpdateCurrentMovementType, addr 0xb495cb8, size 0x400, virtual false, abstract: false, final false
inline void UpdateCurrentMovementType() ;

/// @brief Method UpdateTarget, addr 0xb497f6c, size 0x228, virtual false, abstract: false, final false
inline void UpdateTarget(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, float_t  deltaTime) ;

/// [CompilerGenerated]
/// @brief Method <ReleaseDynamicAttachTransform>g__Release|303_0, addr 0xb49cdd8, size 0x14c, virtual false, abstract: false, final false
static inline void _ReleaseDynamicAttachTransform_g__Release_303_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  transforms, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

constexpr bool const& __cordl_internal_get__allowVisualAttachTransform_k__BackingField() const;

constexpr bool& __cordl_internal_get__allowVisualAttachTransform_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AddDefaultGrabTransformers() const;

constexpr bool& __cordl_internal_get_m_AddDefaultGrabTransformers() ;

constexpr float_t const& __cordl_internal_get_m_AngularDampingOnGrab() const;

constexpr float_t& __cordl_internal_get_m_AngularDampingOnGrab() ;

constexpr float_t const& __cordl_internal_get_m_AngularVelocityDamping() const;

constexpr float_t& __cordl_internal_get_m_AngularVelocityDamping() ;

constexpr float_t const& __cordl_internal_get_m_AngularVelocityScale() const;

constexpr float_t& __cordl_internal_get_m_AngularVelocityScale() ;

constexpr float_t const& __cordl_internal_get_m_AttachEaseInTime() const;

constexpr float_t& __cordl_internal_get_m_AttachEaseInTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AttachTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AttachTransform() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_CollidersThatAllowedCharacterCollision() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_CollidersThatAllowedCharacterCollision() ;

constexpr float_t const& __cordl_internal_get_m_CurrentAttachEaseTime() const;

constexpr float_t& __cordl_internal_get_m_CurrentAttachEaseTime() ;

constexpr ::GlobalNamespace::XRBaseInteractable_MovementType const& __cordl_internal_get_m_CurrentMovementType() const;

constexpr ::GlobalNamespace::XRBaseInteractable_MovementType& __cordl_internal_get_m_CurrentMovementType() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DetachAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DetachAngularVelocity() ;

constexpr bool const& __cordl_internal_get_m_DetachInLateUpdate() const;

constexpr bool& __cordl_internal_get_m_DetachInLateUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_DetachLinearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_DetachLinearVelocity() ;

constexpr int32_t const& __cordl_internal_get_m_DropTransformersCount() const;

constexpr int32_t& __cordl_internal_get_m_DropTransformersCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_DynamicAttachTransforms() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_DynamicAttachTransforms() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode const& __cordl_internal_get_m_FarAttachMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode& __cordl_internal_get_m_FarAttachMode() ;

constexpr bool const& __cordl_internal_get_m_ForceGravityOnDetach() const;

constexpr bool& __cordl_internal_get_m_ForceGravityOnDetach() ;

constexpr ::System::ValueTuple_2<int32_t,int32_t> const& __cordl_internal_get_m_GrabCountBeforeAndAfterChange() const;

constexpr ::System::ValueTuple_2<int32_t,int32_t>& __cordl_internal_get_m_GrabCountBeforeAndAfterChange() ;

constexpr bool const& __cordl_internal_get_m_GrabCountChanged() const;

constexpr bool& __cordl_internal_get_m_GrabCountChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& __cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& __cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() ;

constexpr bool const& __cordl_internal_get_m_IgnoringCharacterCollision() const;

constexpr bool& __cordl_internal_get_m_IgnoringCharacterCollision() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_InitialVisualsTransformLocalPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_InitialVisualsTransformLocalPose() ;

constexpr bool const& __cordl_internal_get_m_InitialVisualsTransformLocalPoseIsIdentity() const;

constexpr bool& __cordl_internal_get_m_InitialVisualsTransformLocalPoseIsIdentity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialVisualsTransformLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialVisualsTransformLocalScale() ;

constexpr ::UnityEngine::RigidbodyInterpolation const& __cordl_internal_get_m_InterpolationOnGrab() const;

constexpr ::UnityEngine::RigidbodyInterpolation& __cordl_internal_get_m_InterpolationOnGrab() ;

constexpr bool const& __cordl_internal_get_m_IsProcessingGrabTransformers() const;

constexpr bool& __cordl_internal_get_m_IsProcessingGrabTransformers() ;

constexpr bool const& __cordl_internal_get_m_IsTargetLocalScaleDirty() const;

constexpr bool& __cordl_internal_get_m_IsTargetLocalScaleDirty() ;

constexpr bool const& __cordl_internal_get_m_IsTargetPoseDirty() const;

constexpr bool& __cordl_internal_get_m_IsTargetPoseDirty() ;

constexpr float_t const& __cordl_internal_get_m_LastFixedDynamicTime() const;

constexpr float_t& __cordl_internal_get_m_LastFixedDynamicTime() ;

constexpr int32_t const& __cordl_internal_get_m_LastFixedFrame() const;

constexpr int32_t& __cordl_internal_get_m_LastFixedFrame() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_LastThrowReferencePose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_LastThrowReferencePose() ;

constexpr bool const& __cordl_internal_get_m_LimitAngularVelocity() const;

constexpr bool& __cordl_internal_get_m_LimitAngularVelocity() ;

constexpr bool const& __cordl_internal_get_m_LimitLinearVelocity() const;

constexpr bool& __cordl_internal_get_m_LimitLinearVelocity() ;

constexpr float_t const& __cordl_internal_get_m_LinearDampingOnGrab() const;

constexpr float_t& __cordl_internal_get_m_LinearDampingOnGrab() ;

constexpr bool const& __cordl_internal_get_m_MatchAttachPosition() const;

constexpr bool& __cordl_internal_get_m_MatchAttachPosition() ;

constexpr bool const& __cordl_internal_get_m_MatchAttachRotation() const;

constexpr bool& __cordl_internal_get_m_MatchAttachRotation() ;

constexpr float_t const& __cordl_internal_get_m_MaxAngularVelocityDelta() const;

constexpr float_t& __cordl_internal_get_m_MaxAngularVelocityDelta() ;

constexpr float_t const& __cordl_internal_get_m_MaxLinearVelocityDelta() const;

constexpr float_t& __cordl_internal_get_m_MaxLinearVelocityDelta() ;

constexpr ::GlobalNamespace::XRBaseInteractable_MovementType const& __cordl_internal_get_m_MovementType() const;

constexpr ::GlobalNamespace::XRBaseInteractable_MovementType& __cordl_internal_get_m_MovementType() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& __cordl_internal_get_m_MultipleGrabTransformers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& __cordl_internal_get_m_MultipleGrabTransformers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_OriginalSceneParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_OriginalSceneParent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_PredictedVisualsTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_PredictedVisualsTransform() ;

constexpr bool const& __cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() const;

constexpr bool& __cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() ;

constexpr bool const& __cordl_internal_get_m_RetainTransformParent() const;

constexpr bool& __cordl_internal_get_m_RetainTransformParent() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Rigidbody() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_RigidbodyColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_RigidbodyColliders() ;

constexpr bool const& __cordl_internal_get_m_RigidbodyColliding() const;

constexpr bool& __cordl_internal_get_m_RigidbodyColliding() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_SecondaryAttachTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_SecondaryAttachTransform() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_SelectingCharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_SelectingCharacterController() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& __cordl_internal_get_m_SelectingCharacterInteractors() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& __cordl_internal_get_m_SelectingCharacterInteractors() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& __cordl_internal_get_m_SingleGrabTransformers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& __cordl_internal_get_m_SingleGrabTransformers() ;

constexpr bool const& __cordl_internal_get_m_SmoothPosition() const;

constexpr bool& __cordl_internal_get_m_SmoothPosition() ;

constexpr float_t const& __cordl_internal_get_m_SmoothPositionAmount() const;

constexpr float_t& __cordl_internal_get_m_SmoothPositionAmount() ;

constexpr bool const& __cordl_internal_get_m_SmoothRotation() const;

constexpr bool& __cordl_internal_get_m_SmoothRotation() ;

constexpr float_t const& __cordl_internal_get_m_SmoothRotationAmount() const;

constexpr float_t& __cordl_internal_get_m_SmoothRotationAmount() ;

constexpr bool const& __cordl_internal_get_m_SmoothScale() const;

constexpr bool& __cordl_internal_get_m_SmoothScale() ;

constexpr float_t const& __cordl_internal_get_m_SmoothScaleAmount() const;

constexpr float_t& __cordl_internal_get_m_SmoothScaleAmount() ;

constexpr bool const& __cordl_internal_get_m_SnapToColliderVolume() const;

constexpr bool& __cordl_internal_get_m_SnapToColliderVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* const& __cordl_internal_get_m_StartingMultipleGrabTransformers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& __cordl_internal_get_m_StartingMultipleGrabTransformers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* const& __cordl_internal_get_m_StartingSingleGrabTransformers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& __cordl_internal_get_m_StartingSingleGrabTransformers() ;

constexpr bool const& __cordl_internal_get_m_StopIgnoringCollisionInLateUpdate() const;

constexpr bool& __cordl_internal_get_m_StopIgnoringCollisionInLateUpdate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetLocalScale() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_TargetPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_TargetPose() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* const& __cordl_internal_get_m_TeleportationMonitor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*& __cordl_internal_get_m_TeleportationMonitor() ;

constexpr float_t const& __cordl_internal_get_m_ThrowAngularVelocityScale() const;

constexpr float_t& __cordl_internal_get_m_ThrowAngularVelocityScale() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist* const& __cordl_internal_get_m_ThrowAssist() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*& __cordl_internal_get_m_ThrowAssist() ;

constexpr bool const& __cordl_internal_get_m_ThrowOnDetach() const;

constexpr bool& __cordl_internal_get_m_ThrowOnDetach() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() ;

constexpr int32_t const& __cordl_internal_get_m_ThrowSmoothingCurrentFrame() const;

constexpr int32_t& __cordl_internal_get_m_ThrowSmoothingCurrentFrame() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_ThrowSmoothingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_ThrowSmoothingCurve() ;

constexpr float_t const& __cordl_internal_get_m_ThrowSmoothingDuration() const;

constexpr float_t& __cordl_internal_get_m_ThrowSmoothingDuration() ;

constexpr bool const& __cordl_internal_get_m_ThrowSmoothingFirstUpdate() const;

constexpr bool& __cordl_internal_get_m_ThrowSmoothingFirstUpdate() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_ThrowSmoothingFrameTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_ThrowSmoothingFrameTimes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_m_ThrowSmoothingLinearVelocityFrames() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_m_ThrowSmoothingLinearVelocityFrames() ;

constexpr float_t const& __cordl_internal_get_m_ThrowVelocityScale() const;

constexpr float_t& __cordl_internal_get_m_ThrowVelocityScale() ;

constexpr float_t const& __cordl_internal_get_m_TightenPosition() const;

constexpr float_t& __cordl_internal_get_m_TightenPosition() ;

constexpr float_t const& __cordl_internal_get_m_TightenRotation() const;

constexpr float_t& __cordl_internal_get_m_TightenRotation() ;

constexpr float_t const& __cordl_internal_get_m_TightenScale() const;

constexpr float_t& __cordl_internal_get_m_TightenScale() ;

constexpr bool const& __cordl_internal_get_m_TrackPosition() const;

constexpr bool& __cordl_internal_get_m_TrackPosition() ;

constexpr bool const& __cordl_internal_get_m_TrackRotation() const;

constexpr bool& __cordl_internal_get_m_TrackRotation() ;

constexpr bool const& __cordl_internal_get_m_TrackScale() const;

constexpr bool& __cordl_internal_get_m_TrackScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Transform() ;

constexpr bool const& __cordl_internal_get_m_UseDynamicAttach() const;

constexpr bool& __cordl_internal_get_m_UseDynamicAttach() ;

constexpr bool const& __cordl_internal_get_m_UsedGravity() const;

constexpr bool& __cordl_internal_get_m_UsedGravity() ;

constexpr float_t const& __cordl_internal_get_m_VelocityDamping() const;

constexpr float_t& __cordl_internal_get_m_VelocityDamping() ;

constexpr float_t const& __cordl_internal_get_m_VelocityScale() const;

constexpr float_t& __cordl_internal_get_m_VelocityScale() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_VisualAttachTransforms() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_VisualAttachTransforms() ;

constexpr bool const& __cordl_internal_get_m_WasKinematic() const;

constexpr bool& __cordl_internal_get_m_WasKinematic() ;

constexpr void __cordl_internal_set__allowVisualAttachTransform_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AddDefaultGrabTransformers(bool  value) ;

constexpr void __cordl_internal_set_m_AngularDampingOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_m_AngularVelocityDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_AngularVelocityScale(float_t  value) ;

constexpr void __cordl_internal_set_m_AttachEaseInTime(float_t  value) ;

constexpr void __cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CollidersThatAllowedCharacterCollision(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_CurrentAttachEaseTime(float_t  value) ;

constexpr void __cordl_internal_set_m_CurrentMovementType(::GlobalNamespace::XRBaseInteractable_MovementType  value) ;

constexpr void __cordl_internal_set_m_DetachAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_DetachInLateUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_DetachLinearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_DropTransformersCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_DynamicAttachTransforms(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_FarAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value) ;

constexpr void __cordl_internal_set_m_ForceGravityOnDetach(bool  value) ;

constexpr void __cordl_internal_set_m_GrabCountBeforeAndAfterChange(::System::ValueTuple_2<int32_t,int32_t>  value) ;

constexpr void __cordl_internal_set_m_GrabCountChanged(bool  value) ;

constexpr void __cordl_internal_set_m_GrabTransformersAddedWhenGrabbed(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value) ;

constexpr void __cordl_internal_set_m_IgnoringCharacterCollision(bool  value) ;

constexpr void __cordl_internal_set_m_InitialVisualsTransformLocalPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_InitialVisualsTransformLocalPoseIsIdentity(bool  value) ;

constexpr void __cordl_internal_set_m_InitialVisualsTransformLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InterpolationOnGrab(::UnityEngine::RigidbodyInterpolation  value) ;

constexpr void __cordl_internal_set_m_IsProcessingGrabTransformers(bool  value) ;

constexpr void __cordl_internal_set_m_IsTargetLocalScaleDirty(bool  value) ;

constexpr void __cordl_internal_set_m_IsTargetPoseDirty(bool  value) ;

constexpr void __cordl_internal_set_m_LastFixedDynamicTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LastFixedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastThrowReferencePose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_LimitAngularVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_LimitLinearVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_LinearDampingOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_m_MatchAttachPosition(bool  value) ;

constexpr void __cordl_internal_set_m_MatchAttachRotation(bool  value) ;

constexpr void __cordl_internal_set_m_MaxAngularVelocityDelta(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxLinearVelocityDelta(float_t  value) ;

constexpr void __cordl_internal_set_m_MovementType(::GlobalNamespace::XRBaseInteractable_MovementType  value) ;

constexpr void __cordl_internal_set_m_MultipleGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value) ;

constexpr void __cordl_internal_set_m_OriginalSceneParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_PredictedVisualsTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab(bool  value) ;

constexpr void __cordl_internal_set_m_RetainTransformParent(bool  value) ;

constexpr void __cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_RigidbodyColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_RigidbodyColliding(bool  value) ;

constexpr void __cordl_internal_set_m_SecondaryAttachTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_SelectingCharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_m_SelectingCharacterInteractors(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_SingleGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value) ;

constexpr void __cordl_internal_set_m_SmoothPosition(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothPositionAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothRotation(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothRotationAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothScale(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothScaleAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_SnapToColliderVolume(bool  value) ;

constexpr void __cordl_internal_set_m_StartingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value) ;

constexpr void __cordl_internal_set_m_StartingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value) ;

constexpr void __cordl_internal_set_m_StopIgnoringCollisionInLateUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_TargetLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TargetPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_TeleportationMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*  value) ;

constexpr void __cordl_internal_set_m_ThrowAngularVelocityScale(float_t  value) ;

constexpr void __cordl_internal_set_m_ThrowAssist(::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*  value) ;

constexpr void __cordl_internal_set_m_ThrowOnDetach(bool  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingCurrentFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingFrameTimes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_ThrowSmoothingLinearVelocityFrames(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_ThrowVelocityScale(float_t  value) ;

constexpr void __cordl_internal_set_m_TightenPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_TightenRotation(float_t  value) ;

constexpr void __cordl_internal_set_m_TightenScale(float_t  value) ;

constexpr void __cordl_internal_set_m_TrackPosition(bool  value) ;

constexpr void __cordl_internal_set_m_TrackRotation(bool  value) ;

constexpr void __cordl_internal_set_m_TrackScale(bool  value) ;

constexpr void __cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_UseDynamicAttach(bool  value) ;

constexpr void __cordl_internal_set_m_UsedGravity(bool  value) ;

constexpr void __cordl_internal_set_m_VelocityDamping(float_t  value) ;

constexpr void __cordl_internal_set_m_VelocityScale(float_t  value) ;

constexpr void __cordl_internal_set_m_VisualAttachTransforms(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_WasKinematic(bool  value) ;

/// @brief Method .ctor, addr 0xb49e510, size 0x3dc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>* getStaticF_s_DropEventArgs() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* getStaticF_s_DynamicAttachTransformPool() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessGrabTransformersMarker() ;

/// @brief Method get_addDefaultGrabTransformers, addr 0xb496278, size 0x8, virtual false, abstract: false, final false
inline bool get_addDefaultGrabTransformers() ;

/// [CompilerGenerated]
/// @brief Method get_allowVisualAttachTransform, addr 0xb4963a0, size 0x8, virtual false, abstract: false, final false
inline bool get_allowVisualAttachTransform() ;

/// @brief Method get_angularVelocityDamping, addr 0xb4960f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_angularVelocityDamping() ;

/// @brief Method get_angularVelocityScale, addr 0xb496100, size 0x8, virtual false, abstract: false, final false
inline float_t get_angularVelocityScale() ;

/// @brief Method get_attachEaseInTime, addr 0xb495c98, size 0x8, virtual false, abstract: false, final false
inline float_t get_attachEaseInTime() ;

/// @brief Method get_attachPointCompatibilityMode, addr 0xb49e320, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode get_attachPointCompatibilityMode() ;

/// @brief Method get_attachTransform, addr 0xb495c18, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_attachTransform() ;

/// @brief Method get_farAttachMode, addr 0xb496288, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode get_farAttachMode() ;

/// @brief Method get_forceGravityOnDetach, addr 0xb496228, size 0x8, virtual false, abstract: false, final false
inline bool get_forceGravityOnDetach() ;

/// @brief Method get_gravityOnDetach, addr 0xb49e418, size 0x7c, virtual false, abstract: false, final false
inline bool get_gravityOnDetach() ;

/// @brief Method get_isRigidbodyMovement, addr 0xb4962f0, size 0x10, virtual false, abstract: false, final false
inline bool get_isRigidbodyMovement() ;

/// @brief Method get_isTransformDirty, addr 0xb4963b0, size 0x20, virtual false, abstract: false, final false
inline bool get_isTransformDirty() ;

/// @brief Method get_limitAngularVelocity, addr 0xb4962a8, size 0x8, virtual false, abstract: false, final false
inline bool get_limitAngularVelocity() ;

/// @brief Method get_limitLinearVelocity, addr 0xb496298, size 0x8, virtual false, abstract: false, final false
inline bool get_limitLinearVelocity() ;

/// @brief Method get_matchAttachPosition, addr 0xb495c58, size 0x8, virtual false, abstract: false, final false
inline bool get_matchAttachPosition() ;

/// @brief Method get_matchAttachRotation, addr 0xb495c68, size 0x8, virtual false, abstract: false, final false
inline bool get_matchAttachRotation() ;

/// @brief Method get_maxAngularVelocityDelta, addr 0xb4962d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxAngularVelocityDelta() ;

/// @brief Method get_maxLinearVelocityDelta, addr 0xb4962b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxLinearVelocityDelta() ;

/// @brief Method get_movementType, addr 0xb495ca8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseInteractable_MovementType get_movementType() ;

/// @brief Method get_multipleGrabTransformersCount, addr 0xb496350, size 0x50, virtual false, abstract: false, final false
inline int32_t get_multipleGrabTransformersCount() ;

/// @brief Method get_predictedVisualsTransform, addr 0xb4960b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_predictedVisualsTransform() ;

/// @brief Method get_reinitializeDynamicAttachEverySingleGrab, addr 0xb495c88, size 0x8, virtual false, abstract: false, final false
inline bool get_reinitializeDynamicAttachEverySingleGrab() ;

/// @brief Method get_retainTransformParent, addr 0xb496238, size 0x8, virtual false, abstract: false, final false
inline bool get_retainTransformParent() ;

/// @brief Method get_secondaryAttachTransform, addr 0xb495c30, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_secondaryAttachTransform() ;

/// @brief Method get_singleGrabTransformersCount, addr 0xb496300, size 0x50, virtual false, abstract: false, final false
inline int32_t get_singleGrabTransformersCount() ;

/// @brief Method get_smoothPosition, addr 0xb496120, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothPosition() ;

/// @brief Method get_smoothPositionAmount, addr 0xb496130, size 0x8, virtual false, abstract: false, final false
inline float_t get_smoothPositionAmount() ;

/// @brief Method get_smoothRotation, addr 0xb496160, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothRotation() ;

/// @brief Method get_smoothRotationAmount, addr 0xb496170, size 0x8, virtual false, abstract: false, final false
inline float_t get_smoothRotationAmount() ;

/// @brief Method get_smoothScale, addr 0xb4961a0, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothScale() ;

/// @brief Method get_smoothScaleAmount, addr 0xb4961b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_smoothScaleAmount() ;

/// @brief Method get_snapToColliderVolume, addr 0xb495c78, size 0x8, virtual false, abstract: false, final false
inline bool get_snapToColliderVolume() ;

/// @brief Method get_startingMultipleGrabTransformers, addr 0xb496260, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* get_startingMultipleGrabTransformers() ;

/// @brief Method get_startingSingleGrabTransformers, addr 0xb496248, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* get_startingSingleGrabTransformers() ;

/// @brief Method get_throwAngularVelocityScale, addr 0xb496218, size 0x8, virtual false, abstract: false, final false
inline float_t get_throwAngularVelocityScale() ;

/// @brief Method get_throwOnDetach, addr 0xb4961d0, size 0x8, virtual false, abstract: false, final false
inline bool get_throwOnDetach() ;

/// @brief Method get_throwSmoothingCurve, addr 0xb4961f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_throwSmoothingCurve() ;

/// @brief Method get_throwSmoothingDuration, addr 0xb4961e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_throwSmoothingDuration() ;

/// @brief Method get_throwVelocityScale, addr 0xb496208, size 0x8, virtual false, abstract: false, final false
inline float_t get_throwVelocityScale() ;

/// @brief Method get_tightenPosition, addr 0xb496140, size 0x8, virtual false, abstract: false, final false
inline float_t get_tightenPosition() ;

/// @brief Method get_tightenRotation, addr 0xb496180, size 0x8, virtual false, abstract: false, final false
inline float_t get_tightenRotation() ;

/// @brief Method get_tightenScale, addr 0xb4961c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_tightenScale() ;

/// @brief Method get_trackPosition, addr 0xb496110, size 0x8, virtual false, abstract: false, final false
inline bool get_trackPosition() ;

/// @brief Method get_trackRotation, addr 0xb496150, size 0x8, virtual false, abstract: false, final false
inline bool get_trackRotation() ;

/// @brief Method get_trackScale, addr 0xb496190, size 0x8, virtual false, abstract: false, final false
inline bool get_trackScale() ;

/// @brief Method get_useDynamicAttach, addr 0xb495c48, size 0x8, virtual false, abstract: false, final false
inline bool get_useDynamicAttach() ;

/// @brief Method get_velocityDamping, addr 0xb4960d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_velocityDamping() ;

/// @brief Method get_velocityScale, addr 0xb4960e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_velocityScale() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IFarAttachProvider() noexcept;

static inline void setStaticF_s_DropEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*  value) ;

static inline void setStaticF_s_DynamicAttachTransformPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_s_ProcessGrabTransformersMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_addDefaultGrabTransformers, addr 0xb496280, size 0x8, virtual false, abstract: false, final false
inline void set_addDefaultGrabTransformers(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_allowVisualAttachTransform, addr 0xb4963a8, size 0x8, virtual false, abstract: false, final false
inline void set_allowVisualAttachTransform(bool  value) ;

/// @brief Method set_angularVelocityDamping, addr 0xb4960f8, size 0x8, virtual false, abstract: false, final false
inline void set_angularVelocityDamping(float_t  value) ;

/// @brief Method set_angularVelocityScale, addr 0xb496108, size 0x8, virtual false, abstract: false, final false
inline void set_angularVelocityScale(float_t  value) ;

/// @brief Method set_attachEaseInTime, addr 0xb495ca0, size 0x8, virtual false, abstract: false, final false
inline void set_attachEaseInTime(float_t  value) ;

/// @brief Method set_attachPointCompatibilityMode, addr 0xb49e39c, size 0x7c, virtual false, abstract: false, final false
inline void set_attachPointCompatibilityMode(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode  value) ;

/// @brief Method set_attachTransform, addr 0xb495c20, size 0x10, virtual false, abstract: false, final false
inline void set_attachTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_farAttachMode, addr 0xb496290, size 0x8, virtual true, abstract: false, final true
inline void set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value) ;

/// @brief Method set_forceGravityOnDetach, addr 0xb496230, size 0x8, virtual false, abstract: false, final false
inline void set_forceGravityOnDetach(bool  value) ;

/// @brief Method set_gravityOnDetach, addr 0xb49e494, size 0x7c, virtual false, abstract: false, final false
inline void set_gravityOnDetach(bool  value) ;

/// @brief Method set_isTransformDirty, addr 0xb4963d0, size 0xc, virtual false, abstract: false, final false
inline void set_isTransformDirty(bool  value) ;

/// @brief Method set_limitAngularVelocity, addr 0xb4962b0, size 0x8, virtual false, abstract: false, final false
inline void set_limitAngularVelocity(bool  value) ;

/// @brief Method set_limitLinearVelocity, addr 0xb4962a0, size 0x8, virtual false, abstract: false, final false
inline void set_limitLinearVelocity(bool  value) ;

/// @brief Method set_matchAttachPosition, addr 0xb495c60, size 0x8, virtual false, abstract: false, final false
inline void set_matchAttachPosition(bool  value) ;

/// @brief Method set_matchAttachRotation, addr 0xb495c70, size 0x8, virtual false, abstract: false, final false
inline void set_matchAttachRotation(bool  value) ;

/// @brief Method set_maxAngularVelocityDelta, addr 0xb4962dc, size 0x14, virtual false, abstract: false, final false
inline void set_maxAngularVelocityDelta(float_t  value) ;

/// @brief Method set_maxLinearVelocityDelta, addr 0xb4962c0, size 0x14, virtual false, abstract: false, final false
inline void set_maxLinearVelocityDelta(float_t  value) ;

/// @brief Method set_movementType, addr 0xb495cb0, size 0x8, virtual false, abstract: false, final false
inline void set_movementType(::GlobalNamespace::XRBaseInteractable_MovementType  value) ;

/// @brief Method set_predictedVisualsTransform, addr 0xb4960c0, size 0x10, virtual false, abstract: false, final false
inline void set_predictedVisualsTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_reinitializeDynamicAttachEverySingleGrab, addr 0xb495c90, size 0x8, virtual false, abstract: false, final false
inline void set_reinitializeDynamicAttachEverySingleGrab(bool  value) ;

/// @brief Method set_retainTransformParent, addr 0xb496240, size 0x8, virtual false, abstract: false, final false
inline void set_retainTransformParent(bool  value) ;

/// @brief Method set_secondaryAttachTransform, addr 0xb495c38, size 0x10, virtual false, abstract: false, final false
inline void set_secondaryAttachTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_smoothPosition, addr 0xb496128, size 0x8, virtual false, abstract: false, final false
inline void set_smoothPosition(bool  value) ;

/// @brief Method set_smoothPositionAmount, addr 0xb496138, size 0x8, virtual false, abstract: false, final false
inline void set_smoothPositionAmount(float_t  value) ;

/// @brief Method set_smoothRotation, addr 0xb496168, size 0x8, virtual false, abstract: false, final false
inline void set_smoothRotation(bool  value) ;

/// @brief Method set_smoothRotationAmount, addr 0xb496178, size 0x8, virtual false, abstract: false, final false
inline void set_smoothRotationAmount(float_t  value) ;

/// @brief Method set_smoothScale, addr 0xb4961a8, size 0x8, virtual false, abstract: false, final false
inline void set_smoothScale(bool  value) ;

/// @brief Method set_smoothScaleAmount, addr 0xb4961b8, size 0x8, virtual false, abstract: false, final false
inline void set_smoothScaleAmount(float_t  value) ;

/// @brief Method set_snapToColliderVolume, addr 0xb495c80, size 0x8, virtual false, abstract: false, final false
inline void set_snapToColliderVolume(bool  value) ;

/// @brief Method set_startingMultipleGrabTransformers, addr 0xb496268, size 0x10, virtual false, abstract: false, final false
inline void set_startingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value) ;

/// @brief Method set_startingSingleGrabTransformers, addr 0xb496250, size 0x10, virtual false, abstract: false, final false
inline void set_startingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value) ;

/// @brief Method set_throwAngularVelocityScale, addr 0xb496220, size 0x8, virtual false, abstract: false, final false
inline void set_throwAngularVelocityScale(float_t  value) ;

/// @brief Method set_throwOnDetach, addr 0xb4961d8, size 0x8, virtual false, abstract: false, final false
inline void set_throwOnDetach(bool  value) ;

/// @brief Method set_throwSmoothingCurve, addr 0xb4961f8, size 0x10, virtual false, abstract: false, final false
inline void set_throwSmoothingCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_throwSmoothingDuration, addr 0xb4961e8, size 0x8, virtual false, abstract: false, final false
inline void set_throwSmoothingDuration(float_t  value) ;

/// @brief Method set_throwVelocityScale, addr 0xb496210, size 0x8, virtual false, abstract: false, final false
inline void set_throwVelocityScale(float_t  value) ;

/// @brief Method set_tightenPosition, addr 0xb496148, size 0x8, virtual false, abstract: false, final false
inline void set_tightenPosition(float_t  value) ;

/// @brief Method set_tightenRotation, addr 0xb496188, size 0x8, virtual false, abstract: false, final false
inline void set_tightenRotation(float_t  value) ;

/// @brief Method set_tightenScale, addr 0xb4961c8, size 0x8, virtual false, abstract: false, final false
inline void set_tightenScale(float_t  value) ;

/// @brief Method set_trackPosition, addr 0xb496118, size 0x8, virtual false, abstract: false, final false
inline void set_trackPosition(bool  value) ;

/// @brief Method set_trackRotation, addr 0xb496158, size 0x8, virtual false, abstract: false, final false
inline void set_trackRotation(bool  value) ;

/// @brief Method set_trackScale, addr 0xb496198, size 0x8, virtual false, abstract: false, final false
inline void set_trackScale(bool  value) ;

/// @brief Method set_useDynamicAttach, addr 0xb495c50, size 0x8, virtual false, abstract: false, final false
inline void set_useDynamicAttach(bool  value) ;

/// @brief Method set_velocityDamping, addr 0xb4960d8, size 0x8, virtual false, abstract: false, final false
inline void set_velocityDamping(float_t  value) ;

/// @brief Method set_velocityScale, addr 0xb4960e8, size 0x8, virtual false, abstract: false, final false
inline void set_velocityScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable(XRGrabInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable(XRGrabInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11528};

/// @brief Field k_AngularVelocityDamping offset 0xffffffff size 0x4
static constexpr float_t  k_AngularVelocityDamping{static_cast<float_t>(1.0f)};

/// @brief Field k_AngularVelocityScale offset 0xffffffff size 0x4
static constexpr float_t  k_AngularVelocityScale{static_cast<float_t>(1.0f)};

/// @brief Field k_AttachPointCompatibilityModeDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AttachPointCompatibilityModeDeprecated{u"attachPointCompatibilityMode has been deprecated and will be removed in a future version of XRI."};

/// @brief Field k_DefaultAttachEaseInTime offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultAttachEaseInTime{static_cast<float_t>(0.15f)};

/// @brief Field k_DefaultMaxAngularVelocityDelta offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultMaxAngularVelocityDelta{static_cast<float_t>(20.0f)};

/// @brief Field k_DefaultMaxLinearVelocityDelta offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultMaxLinearVelocityDelta{static_cast<float_t>(10.0f)};

/// @brief Field k_DefaultSmoothingAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultSmoothingAmount{static_cast<float_t>(8.0f)};

/// @brief Field k_DefaultThrowAngularVelocityScale offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultThrowAngularVelocityScale{static_cast<float_t>(1.0f)};

/// @brief Field k_DefaultThrowLinearVelocityScale offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultThrowLinearVelocityScale{static_cast<float_t>(1.5f)};

/// @brief Field k_DefaultThrowSmoothingDuration offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultThrowSmoothingDuration{static_cast<float_t>(0.25f)};

/// @brief Field k_DefaultTighteningAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultTighteningAmount{static_cast<float_t>(0.1f)};

/// @brief Field k_DeltaTimeThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_DeltaTimeThreshold{static_cast<float_t>(0.001f)};

/// @brief Field k_GravityOnDetachDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GravityOnDetachDeprecated{u"gravityOnDetach has been deprecated. Use forceGravityOnDetach instead. (UnityUpgradable) -> forceGravityOnDetach"};

/// @brief Field k_LinearVelocityDamping offset 0xffffffff size 0x4
static constexpr float_t  k_LinearVelocityDamping{static_cast<float_t>(1.0f)};

/// @brief Field k_LinearVelocityScale offset 0xffffffff size 0x4
static constexpr float_t  k_LinearVelocityScale{static_cast<float_t>(1.0f)};

/// @brief Field k_ThrowSmoothingFrameCount offset 0xffffffff size 0x4
static constexpr int32_t  k_ThrowSmoothingFrameCount{static_cast<int32_t>(0x14)};

/// [SerializeField]
/// @brief Field m_AttachTransform, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_AttachTransform;

/// [SerializeField]
/// @brief Field m_SecondaryAttachTransform, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_SecondaryAttachTransform;

/// [SerializeField]
/// @brief Field m_UseDynamicAttach, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_UseDynamicAttach;

/// [SerializeField]
/// @brief Field m_MatchAttachPosition, offset: 0x1b1, size: 0x1, def value: None
 bool  ___m_MatchAttachPosition;

/// [SerializeField]
/// @brief Field m_MatchAttachRotation, offset: 0x1b2, size: 0x1, def value: None
 bool  ___m_MatchAttachRotation;

/// [SerializeField]
/// @brief Field m_SnapToColliderVolume, offset: 0x1b3, size: 0x1, def value: None
 bool  ___m_SnapToColliderVolume;

/// [SerializeField]
/// @brief Field m_ReinitializeDynamicAttachEverySingleGrab, offset: 0x1b4, size: 0x1, def value: None
 bool  ___m_ReinitializeDynamicAttachEverySingleGrab;

/// [SerializeField]
/// @brief Field m_AttachEaseInTime, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___m_AttachEaseInTime;

/// [SerializeField]
/// @brief Field m_MovementType, offset: 0x1bc, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInteractable_MovementType  ___m_MovementType;

/// [SerializeField]
/// [FormerlySerializedAs("m_VisualsTransform")]
/// @brief Field m_PredictedVisualsTransform, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_PredictedVisualsTransform;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_VelocityDamping, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___m_VelocityDamping;

/// [SerializeField]
/// @brief Field m_VelocityScale, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___m_VelocityScale;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_AngularVelocityDamping, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___m_AngularVelocityDamping;

/// [SerializeField]
/// @brief Field m_AngularVelocityScale, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___m_AngularVelocityScale;

/// [SerializeField]
/// @brief Field m_TrackPosition, offset: 0x1d8, size: 0x1, def value: None
 bool  ___m_TrackPosition;

/// [SerializeField]
/// @brief Field m_SmoothPosition, offset: 0x1d9, size: 0x1, def value: None
 bool  ___m_SmoothPosition;

/// [SerializeField]
/// [Range(0, 20)]
/// @brief Field m_SmoothPositionAmount, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___m_SmoothPositionAmount;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_TightenPosition, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___m_TightenPosition;

/// [SerializeField]
/// @brief Field m_TrackRotation, offset: 0x1e4, size: 0x1, def value: None
 bool  ___m_TrackRotation;

/// [SerializeField]
/// @brief Field m_SmoothRotation, offset: 0x1e5, size: 0x1, def value: None
 bool  ___m_SmoothRotation;

/// [SerializeField]
/// [Range(0, 20)]
/// @brief Field m_SmoothRotationAmount, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___m_SmoothRotationAmount;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_TightenRotation, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___m_TightenRotation;

/// [SerializeField]
/// @brief Field m_TrackScale, offset: 0x1f0, size: 0x1, def value: None
 bool  ___m_TrackScale;

/// [SerializeField]
/// @brief Field m_SmoothScale, offset: 0x1f1, size: 0x1, def value: None
 bool  ___m_SmoothScale;

/// [SerializeField]
/// [Range(0, 20)]
/// @brief Field m_SmoothScaleAmount, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___m_SmoothScaleAmount;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_TightenScale, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___m_TightenScale;

/// [SerializeField]
/// @brief Field m_ThrowOnDetach, offset: 0x1fc, size: 0x1, def value: None
 bool  ___m_ThrowOnDetach;

/// [SerializeField]
/// @brief Field m_ThrowSmoothingDuration, offset: 0x200, size: 0x4, def value: None
 float_t  ___m_ThrowSmoothingDuration;

/// [SerializeField]
/// @brief Field m_ThrowSmoothingCurve, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_ThrowSmoothingCurve;

/// [SerializeField]
/// @brief Field m_ThrowVelocityScale, offset: 0x210, size: 0x4, def value: None
 float_t  ___m_ThrowVelocityScale;

/// [SerializeField]
/// @brief Field m_ThrowAngularVelocityScale, offset: 0x214, size: 0x4, def value: None
 float_t  ___m_ThrowAngularVelocityScale;

/// [SerializeField]
/// [FormerlySerializedAs("m_GravityOnDetach")]
/// @brief Field m_ForceGravityOnDetach, offset: 0x218, size: 0x1, def value: None
 bool  ___m_ForceGravityOnDetach;

/// [SerializeField]
/// @brief Field m_RetainTransformParent, offset: 0x219, size: 0x1, def value: None
 bool  ___m_RetainTransformParent;

/// [SerializeField]
/// @brief Field m_StartingSingleGrabTransformers, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  ___m_StartingSingleGrabTransformers;

/// [SerializeField]
/// @brief Field m_StartingMultipleGrabTransformers, offset: 0x228, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  ___m_StartingMultipleGrabTransformers;

/// [SerializeField]
/// @brief Field m_AddDefaultGrabTransformers, offset: 0x230, size: 0x1, def value: None
 bool  ___m_AddDefaultGrabTransformers;

/// [SerializeField]
/// @brief Field m_FarAttachMode, offset: 0x234, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  ___m_FarAttachMode;

/// [SerializeField]
/// @brief Field m_LimitLinearVelocity, offset: 0x238, size: 0x1, def value: None
 bool  ___m_LimitLinearVelocity;

/// [SerializeField]
/// @brief Field m_LimitAngularVelocity, offset: 0x239, size: 0x1, def value: None
 bool  ___m_LimitAngularVelocity;

/// [SerializeField]
/// @brief Field m_MaxLinearVelocityDelta, offset: 0x23c, size: 0x4, def value: None
 float_t  ___m_MaxLinearVelocityDelta;

/// [SerializeField]
/// @brief Field m_MaxAngularVelocityDelta, offset: 0x240, size: 0x4, def value: None
 float_t  ___m_MaxAngularVelocityDelta;

/// [CompilerGenerated]
/// @brief Field <allowVisualAttachTransform>k__BackingField, offset: 0x244, size: 0x1, def value: None
 bool  ____allowVisualAttachTransform_k__BackingField;

/// @brief Field m_SingleGrabTransformers, offset: 0x248, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  ___m_SingleGrabTransformers;

/// @brief Field m_MultipleGrabTransformers, offset: 0x250, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  ___m_MultipleGrabTransformers;

/// @brief Field m_GrabTransformersAddedWhenGrabbed, offset: 0x258, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  ___m_GrabTransformersAddedWhenGrabbed;

/// @brief Field m_GrabCountChanged, offset: 0x260, size: 0x1, def value: None
 bool  ___m_GrabCountChanged;

/// @brief Field m_GrabCountBeforeAndAfterChange, offset: 0x268, size: 0x10, def value: None
 ::System::ValueTuple_2<int32_t,int32_t>  ___m_GrabCountBeforeAndAfterChange;

/// @brief Field m_IsProcessingGrabTransformers, offset: 0x278, size: 0x1, def value: None
 bool  ___m_IsProcessingGrabTransformers;

/// @brief Field m_DropTransformersCount, offset: 0x27c, size: 0x4, def value: None
 int32_t  ___m_DropTransformersCount;

/// @brief Field m_TargetPose, offset: 0x280, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_TargetPose;

/// @brief Field m_TargetLocalScale, offset: 0x29c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetLocalScale;

/// @brief Field m_IsTargetPoseDirty, offset: 0x2a8, size: 0x1, def value: None
 bool  ___m_IsTargetPoseDirty;

/// @brief Field m_IsTargetLocalScaleDirty, offset: 0x2a9, size: 0x1, def value: None
 bool  ___m_IsTargetLocalScaleDirty;

/// @brief Field m_Transform, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Transform;

/// @brief Field m_CurrentAttachEaseTime, offset: 0x2b8, size: 0x4, def value: None
 float_t  ___m_CurrentAttachEaseTime;

/// @brief Field m_CurrentMovementType, offset: 0x2bc, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInteractable_MovementType  ___m_CurrentMovementType;

/// @brief Field m_DetachInLateUpdate, offset: 0x2c0, size: 0x1, def value: None
 bool  ___m_DetachInLateUpdate;

/// @brief Field m_DetachLinearVelocity, offset: 0x2c4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_DetachLinearVelocity;

/// @brief Field m_DetachAngularVelocity, offset: 0x2d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_DetachAngularVelocity;

/// @brief Field m_ThrowSmoothingCurrentFrame, offset: 0x2dc, size: 0x4, def value: None
 int32_t  ___m_ThrowSmoothingCurrentFrame;

/// @brief Field m_ThrowSmoothingFrameTimes, offset: 0x2e0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_ThrowSmoothingFrameTimes;

/// @brief Field m_ThrowSmoothingLinearVelocityFrames, offset: 0x2e8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___m_ThrowSmoothingLinearVelocityFrames;

/// @brief Field m_ThrowSmoothingAngularVelocityFrames, offset: 0x2f0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___m_ThrowSmoothingAngularVelocityFrames;

/// @brief Field m_ThrowSmoothingFirstUpdate, offset: 0x2f8, size: 0x1, def value: None
 bool  ___m_ThrowSmoothingFirstUpdate;

/// @brief Field m_LastThrowReferencePose, offset: 0x2fc, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_LastThrowReferencePose;

/// @brief Field m_ThrowAssist, offset: 0x318, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*  ___m_ThrowAssist;

/// @brief Field m_Rigidbody, offset: 0x320, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_Rigidbody;

/// @brief Field m_RigidbodyColliding, offset: 0x328, size: 0x1, def value: None
 bool  ___m_RigidbodyColliding;

/// @brief Field m_WasKinematic, offset: 0x329, size: 0x1, def value: None
 bool  ___m_WasKinematic;

/// @brief Field m_UsedGravity, offset: 0x32a, size: 0x1, def value: None
 bool  ___m_UsedGravity;

/// @brief Field m_InterpolationOnGrab, offset: 0x32c, size: 0x4, def value: None
 ::UnityEngine::RigidbodyInterpolation  ___m_InterpolationOnGrab;

/// @brief Field m_LinearDampingOnGrab, offset: 0x330, size: 0x4, def value: None
 float_t  ___m_LinearDampingOnGrab;

/// @brief Field m_AngularDampingOnGrab, offset: 0x334, size: 0x4, def value: None
 float_t  ___m_AngularDampingOnGrab;

/// @brief Field m_LastFixedFrame, offset: 0x338, size: 0x4, def value: None
 int32_t  ___m_LastFixedFrame;

/// @brief Field m_LastFixedDynamicTime, offset: 0x33c, size: 0x4, def value: None
 float_t  ___m_LastFixedDynamicTime;

/// @brief Field m_InitialVisualsTransformLocalPose, offset: 0x340, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_InitialVisualsTransformLocalPose;

/// @brief Field m_InitialVisualsTransformLocalPoseIsIdentity, offset: 0x35c, size: 0x1, def value: None
 bool  ___m_InitialVisualsTransformLocalPoseIsIdentity;

/// @brief Field m_InitialVisualsTransformLocalScale, offset: 0x360, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialVisualsTransformLocalScale;

/// @brief Field m_IgnoringCharacterCollision, offset: 0x36c, size: 0x1, def value: None
 bool  ___m_IgnoringCharacterCollision;

/// @brief Field m_StopIgnoringCollisionInLateUpdate, offset: 0x36d, size: 0x1, def value: None
 bool  ___m_StopIgnoringCollisionInLateUpdate;

/// @brief Field m_SelectingCharacterController, offset: 0x370, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___m_SelectingCharacterController;

/// @brief Field m_SelectingCharacterInteractors, offset: 0x378, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  ___m_SelectingCharacterInteractors;

/// @brief Field m_RigidbodyColliders, offset: 0x380, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___m_RigidbodyColliders;

/// @brief Field m_CollidersThatAllowedCharacterCollision, offset: 0x388, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ___m_CollidersThatAllowedCharacterCollision;

/// @brief Field m_OriginalSceneParent, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_OriginalSceneParent;

/// @brief Field m_TeleportationMonitor, offset: 0x398, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*  ___m_TeleportationMonitor;

/// @brief Field m_DynamicAttachTransforms, offset: 0x3a0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  ___m_DynamicAttachTransforms;

/// @brief Size padding 0x3a0 - 0x3b0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field m_VisualAttachTransforms, offset: 0x3a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  ___m_VisualAttachTransforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AttachTransform) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SecondaryAttachTransform) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_UseDynamicAttach) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MatchAttachPosition) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MatchAttachRotation) == 0x1b2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SnapToColliderVolume) == 0x1b3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ReinitializeDynamicAttachEverySingleGrab) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AttachEaseInTime) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MovementType) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_PredictedVisualsTransform) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_VelocityDamping) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_VelocityScale) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AngularVelocityDamping) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AngularVelocityScale) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TrackPosition) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothPosition) == 0x1d9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothPositionAmount) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TightenPosition) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TrackRotation) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothRotation) == 0x1e5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothRotationAmount) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TightenRotation) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TrackScale) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothScale) == 0x1f1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SmoothScaleAmount) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TightenScale) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowOnDetach) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingDuration) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingCurve) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowVelocityScale) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowAngularVelocityScale) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ForceGravityOnDetach) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_RetainTransformParent) == 0x219, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_StartingSingleGrabTransformers) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_StartingMultipleGrabTransformers) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AddDefaultGrabTransformers) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_FarAttachMode) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LimitLinearVelocity) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LimitAngularVelocity) == 0x239, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MaxLinearVelocityDelta) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MaxAngularVelocityDelta) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ____allowVisualAttachTransform_k__BackingField) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SingleGrabTransformers) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_MultipleGrabTransformers) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_GrabTransformersAddedWhenGrabbed) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_GrabCountChanged) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_GrabCountBeforeAndAfterChange) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_IsProcessingGrabTransformers) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_DropTransformersCount) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TargetPose) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TargetLocalScale) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_IsTargetPoseDirty) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_IsTargetLocalScaleDirty) == 0x2a9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_Transform) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_CurrentAttachEaseTime) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_CurrentMovementType) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_DetachInLateUpdate) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_DetachLinearVelocity) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_DetachAngularVelocity) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingCurrentFrame) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingFrameTimes) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingLinearVelocityFrames) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingAngularVelocityFrames) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowSmoothingFirstUpdate) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LastThrowReferencePose) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_ThrowAssist) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_Rigidbody) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_RigidbodyColliding) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_WasKinematic) == 0x329, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_UsedGravity) == 0x32a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_InterpolationOnGrab) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LinearDampingOnGrab) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_AngularDampingOnGrab) == 0x334, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LastFixedFrame) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_LastFixedDynamicTime) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_InitialVisualsTransformLocalPose) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_InitialVisualsTransformLocalPoseIsIdentity) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_InitialVisualsTransformLocalScale) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_IgnoringCharacterCollision) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_StopIgnoringCollisionInLateUpdate) == 0x36d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SelectingCharacterController) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_SelectingCharacterInteractors) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_RigidbodyColliders) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_CollidersThatAllowedCharacterCollision) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_OriginalSceneParent) == 0x390, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_TeleportationMonitor) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_DynamicAttachTransforms) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable, ___m_VisualAttachTransforms) == 0x3a8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable) == 0x3a0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/StepSmoothingBurst_00000F9B$BurstDirectCall
class CORDL_TYPE XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb49f854, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb49f764, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb49bbc8, size 0x19c, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall(XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall(XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11527};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/StepSmoothingBurst_00000F9B$PostfixBurstDelegate
class CORDL_TYPE XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb49f560, size 0x1f8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_15) ;

/// @brief Method EndInvoke, addr 0xb49f758, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb49f548, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb49f494, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate(XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate(XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11526};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/EaseAttachBurst_00000F9A$BurstDirectCall
class CORDL_TYPE XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb49f47c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb49f38c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb49baa4, size 0x124, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall(XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall(XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/EaseAttachBurst_00000F9A$PostfixBurstDelegate
class CORDL_TYPE XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb49f230, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb49f380, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb49f21c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb49f168, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate(XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate(XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable/<>c
class CORDL_TYPE XRGrabInteractable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*  __9;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c* New_ctor() ;

/// @brief Method <.cctor>b__337_0, addr 0xb49f114, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs* __cctor_b__337_0() ;

/// @brief Method .ctor, addr 0xb49f10c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGrabInteractable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGrabInteractable___c(XRGrabInteractable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGrabInteractable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGrabInteractable___c(XRGrabInteractable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
