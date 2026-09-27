#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_HitDetectionType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_LineType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_QuerySnapVolumeInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_RotateMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRRayInteractor)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace GlobalNamespace {
struct XRRayInteractor_AnchorRotationMode;
}
namespace GlobalNamespace {
struct XRRayInteractor_HitDetectionType;
}
namespace GlobalNamespace {
struct XRRayInteractor_LineType;
}
namespace GlobalNamespace {
struct XRRayInteractor_QuerySnapVolumeInteraction;
}
namespace GlobalNamespace {
struct XRRayInteractor_RotateMode;
}
namespace GlobalNamespace {
struct XRRayInteractor_SamplePoint;
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
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRInteractableSnapVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IAdvancedLineRenderable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ILineRenderable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRScaleValueProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct ScaleMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor_RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActionBasedController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRScreenSpaceController;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor_RaycastHitComparer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/RaycastHitComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRRayInteractor/<>c");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/XR Ray Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor.html")]
// Dependencies Unity.Mathematics.float3, UnityEngine.EventSystems.RaycastResult, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.ScaleMode, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor, UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::HitDetectionType, UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::LineType, UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::QuerySnapVolumeInteraction, UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor::RotateMode
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor
class CORDL_TYPE XRRayInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor {
public:
// Declarations
using AnchorRotationMode = ::GlobalNamespace::XRRayInteractor_AnchorRotationMode;

using HitDetectionType = ::GlobalNamespace::XRRayInteractor_HitDetectionType;

using LineType = ::GlobalNamespace::XRRayInteractor_LineType;

using QuerySnapVolumeInteraction = ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction;

using RotateMode = ::GlobalNamespace::XRRayInteractor_RotateMode;

using SamplePoint = ::GlobalNamespace::XRRayInteractor_SamplePoint;

using RaycastHitComparer = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer;

using __c = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c;

/// @brief [Obsolete("Acceleration has been deprecated. Use acceleration instead. (UnityUpgradable) -> acceleration", true)]
 __declspec(property(get=get_Acceleration, put=set_Acceleration)) float_t  Acceleration;

/// @brief [Obsolete("AdditionalFlightTime has been deprecated. Use additionalFlightTime instead. (UnityUpgradable) -> additionalFlightTime", true)]
 __declspec(property(get=get_AdditionalFlightTime, put=set_AdditionalFlightTime)) float_t  AdditionalFlightTime;

/// @brief [Obsolete("Angle has been deprecated. Use angle instead. (UnityUpgradable) -> angle", true)]
 __declspec(property(get=get_Angle)) float_t  Angle;

/// @brief [Obsolete("Velocity has been deprecated. Use velocity instead. (UnityUpgradable) -> velocity", true)]
 __declspec(property(get=get_Velocity, put=set_Velocity)) float_t  Velocity;

/// @brief Field <currentNearestValidTarget>k__BackingField, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentNearestValidTarget_k__BackingField, put=__cordl_internal_set__currentNearestValidTarget_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  _currentNearestValidTarget_k__BackingField;

/// @brief Field <rayEndPoint>k__BackingField, offset 0x370, size 0xc 
 __declspec(property(get=__cordl_internal_get__rayEndPoint_k__BackingField, put=__cordl_internal_set__rayEndPoint_k__BackingField)) ::UnityEngine::Vector3  _rayEndPoint_k__BackingField;

/// @brief Field <rayEndTransform>k__BackingField, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayEndTransform_k__BackingField, put=__cordl_internal_set__rayEndTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _rayEndTransform_k__BackingField;

/// @brief Field <scaleValue>k__BackingField, offset 0x388, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleValue_k__BackingField, put=__cordl_internal_set__scaleValue_k__BackingField)) float_t  _scaleValue_k__BackingField;

 __declspec(property(get=get_acceleration, put=set_acceleration)) float_t  acceleration;

 __declspec(property(get=get_additionalFlightTime, put=set_additionalFlightTime)) float_t  additionalFlightTime;

 __declspec(property(get=get_additionalGroundHeight, put=set_additionalGroundHeight)) float_t  additionalGroundHeight;

/// @brief [Obsolete("allowAnchorControl has been renamed in version 3.0.0. Use manipulateAttachTransform instead. (UnityUpgradable) -> manipulateAttachTransform")]
 __declspec(property(get=get_allowAnchorControl, put=set_allowAnchorControl)) bool  allowAnchorControl;

/// @brief [Obsolete("anchorRotateReferenceFrame has been renamed in version 3.0.0. Use rotateReferenceFrame instead. (UnityUpgradable) -> rotateReferenceFrame")]
 __declspec(property(get=get_anchorRotateReferenceFrame, put=set_anchorRotateReferenceFrame)) ::UnityW<::UnityEngine::Transform>  anchorRotateReferenceFrame;

/// @brief [Obsolete("anchorRotationMode has been deprecated in version 3.0.0. Use rotateMode instead.")]
 __declspec(property(get=get_anchorRotationMode, put=set_anchorRotationMode)) ::GlobalNamespace::XRRayInteractor_AnchorRotationMode  anchorRotationMode;

 __declspec(property(get=get_angle)) float_t  angle;

 __declspec(property(get=get_autoDeselect, put=set_autoDeselect)) bool  autoDeselect;

 __declspec(property(get=get_blendVisualLinePoints, put=set_blendVisualLinePoints)) bool  blendVisualLinePoints;

 __declspec(property(get=get_blockInteractionsWithScreenSpaceUI, put=set_blockInteractionsWithScreenSpaceUI)) bool  blockInteractionsWithScreenSpaceUI;

 __declspec(property(get=get_blockUIOnInteractableSelection, put=set_blockUIOnInteractableSelection)) bool  blockUIOnInteractableSelection;

 __declspec(property(get=get_closestAnyHitIndex)) int32_t  closestAnyHitIndex;

 __declspec(property(get=get_coneCastAngle, put=set_coneCastAngle)) float_t  coneCastAngle;

 __declspec(property(get=get_coneCastAngleRadius)) float_t  coneCastAngleRadius;

 __declspec(property(get=get_controlPointDistance, put=set_controlPointDistance)) float_t  controlPointDistance;

 __declspec(property(get=get_controlPointHeight, put=set_controlPointHeight)) float_t  controlPointHeight;

 __declspec(property(get=get_currentNearestValidTarget, put=set_currentNearestValidTarget)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  currentNearestValidTarget;

 __declspec(property(get=get_directionalManipulationInput, put=set_directionalManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  directionalManipulationInput;

 __declspec(property(get=get_effectiveRayOrigin)) ::UnityW<::UnityEngine::Transform>  effectiveRayOrigin;

 __declspec(property(get=get_enableARRaycasting, put=set_enableARRaycasting)) bool  enableARRaycasting;

 __declspec(property(get=get_enableUIInteraction, put=set_enableUIInteraction)) bool  enableUIInteraction;

 __declspec(property(get=get_endPointDistance, put=set_endPointDistance)) float_t  endPointDistance;

 __declspec(property(get=get_endPointHeight, put=set_endPointHeight)) float_t  endPointHeight;

 __declspec(property(get=get_hitClosestOnly, put=set_hitClosestOnly)) bool  hitClosestOnly;

 __declspec(property(get=get_hitDetectionType, put=set_hitDetectionType)) ::GlobalNamespace::XRRayInteractor_HitDetectionType  hitDetectionType;

 __declspec(property(get=get_hoverTimeToSelect, put=set_hoverTimeToSelect)) float_t  hoverTimeToSelect;

 __declspec(property(get=get_hoverToSelect, put=set_hoverToSelect)) bool  hoverToSelect;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

/// @brief [Obsolete("isUISelectActive has been deprecated in version 3.0.0. Use uiPressInput to read button input instead.")]
 __declspec(property(get=get_isUISelectActive)) bool  isUISelectActive;

 __declspec(property(get=get_lineType, put=set_lineType)) ::GlobalNamespace::XRRayInteractor_LineType  lineType;

 __declspec(property(get=get_liveConeCastDebugVisuals, put=set_liveConeCastDebugVisuals)) bool  liveConeCastDebugVisuals;

/// @brief Field m_Acceleration, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Acceleration, put=__cordl_internal_set_m_Acceleration)) float_t  m_Acceleration;

/// @brief Field m_ActionBasedController, offset 0x4c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionBasedController, put=__cordl_internal_set_m_ActionBasedController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>  m_ActionBasedController;

/// @brief Field m_AdditionalFlightTime, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AdditionalFlightTime, put=__cordl_internal_set_m_AdditionalFlightTime)) float_t  m_AdditionalFlightTime;

/// @brief Field m_AdditionalGroundHeight, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AdditionalGroundHeight, put=__cordl_internal_set_m_AdditionalGroundHeight)) float_t  m_AdditionalGroundHeight;

/// @brief Field m_AutoDeselect, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoDeselect, put=__cordl_internal_set_m_AutoDeselect)) bool  m_AutoDeselect;

/// @brief Field m_BlendVisualLinePoints, offset 0x27c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlendVisualLinePoints, put=__cordl_internal_set_m_BlendVisualLinePoints)) bool  m_BlendVisualLinePoints;

/// @brief Field m_BlockInteractionsWithScreenSpaceUI, offset 0x2f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI, put=__cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI)) bool  m_BlockInteractionsWithScreenSpaceUI;

/// @brief Field m_BlockUIAutoDeselect, offset 0x3bd, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlockUIAutoDeselect, put=__cordl_internal_set_m_BlockUIAutoDeselect)) bool  m_BlockUIAutoDeselect;

/// @brief Field m_BlockUIOnInteractableSelection, offset 0x2f2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlockUIOnInteractableSelection, put=__cordl_internal_set_m_BlockUIOnInteractableSelection)) bool  m_BlockUIOnInteractableSelection;

/// @brief Field m_CachedConeCastAngle, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedConeCastAngle, put=__cordl_internal_set_m_CachedConeCastAngle)) float_t  m_CachedConeCastAngle;

/// @brief Field m_CachedConeCastRadius, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CachedConeCastRadius, put=__cordl_internal_set_m_CachedConeCastRadius)) float_t  m_CachedConeCastRadius;

/// @brief Field m_ConeCastAngle, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConeCastAngle, put=__cordl_internal_set_m_ConeCastAngle)) float_t  m_ConeCastAngle;

/// @brief Field m_ConeCastDebugInfo, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConeCastDebugInfo, put=__cordl_internal_set_m_ConeCastDebugInfo)) ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  m_ConeCastDebugInfo;

/// @brief Field m_ControlPointDistance, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControlPointDistance, put=__cordl_internal_set_m_ControlPointDistance)) float_t  m_ControlPointDistance;

/// @brief Field m_ControlPointHeight, offset 0x2b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControlPointHeight, put=__cordl_internal_set_m_ControlPointHeight)) float_t  m_ControlPointHeight;

/// @brief Field m_ControlPoints, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControlPoints, put=__cordl_internal_set_m_ControlPoints)) ::ArrayW<::Unity::Mathematics::float3>  m_ControlPoints;

/// @brief Field m_DeviceBasedController, offset 0x4c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceBasedController, put=__cordl_internal_set_m_DeviceBasedController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  m_DeviceBasedController;

/// @brief Field m_DirectionalManipulationInput, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DirectionalManipulationInput, put=__cordl_internal_set_m_DirectionalManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_DirectionalManipulationInput;

/// @brief Field m_EnableARRaycasting, offset 0x320, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableARRaycasting, put=__cordl_internal_set_m_EnableARRaycasting)) bool  m_EnableARRaycasting;

/// @brief Field m_EnableUIInteraction, offset 0x2f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableUIInteraction, put=__cordl_internal_set_m_EnableUIInteraction)) bool  m_EnableUIInteraction;

/// @brief Field m_EndPointDistance, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndPointDistance, put=__cordl_internal_set_m_EndPointDistance)) float_t  m_EndPointDistance;

/// @brief Field m_EndPointHeight, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndPointHeight, put=__cordl_internal_set_m_EndPointHeight)) float_t  m_EndPointHeight;

/// @brief Field m_HasRayOriginTransform, offset 0x38c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasRayOriginTransform, put=__cordl_internal_set_m_HasRayOriginTransform)) bool  m_HasRayOriginTransform;

/// @brief Field m_HasReferenceFrame, offset 0x38d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasReferenceFrame, put=__cordl_internal_set_m_HasReferenceFrame)) bool  m_HasReferenceFrame;

/// @brief Field m_HitChordControlPoints, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HitChordControlPoints, put=__cordl_internal_set_m_HitChordControlPoints)) ::ArrayW<::Unity::Mathematics::float3>  m_HitChordControlPoints;

/// @brief Field m_HitClosestOnly, offset 0x2e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HitClosestOnly, put=__cordl_internal_set_m_HitClosestOnly)) bool  m_HitClosestOnly;

/// @brief Field m_HitDetectionType, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HitDetectionType, put=__cordl_internal_set_m_HitDetectionType)) ::GlobalNamespace::XRRayInteractor_HitDetectionType  m_HitDetectionType;

/// @brief Field m_HoverTimeToSelect, offset 0x2e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HoverTimeToSelect, put=__cordl_internal_set_m_HoverTimeToSelect)) float_t  m_HoverTimeToSelect;

/// @brief Field m_HoverToSelect, offset 0x2e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HoverToSelect, put=__cordl_internal_set_m_HoverToSelect)) bool  m_HoverToSelect;

/// @brief Field m_HoverUISelectActive, offset 0x3bc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HoverUISelectActive, put=__cordl_internal_set_m_HoverUISelectActive)) bool  m_HoverUISelectActive;

/// @brief Field m_InteractableRaycastHits, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableRaycastHits, put=__cordl_internal_set_m_InteractableRaycastHits)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*  m_InteractableRaycastHits;

/// @brief Field m_IsActionBasedController, offset 0x4d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActionBasedController, put=__cordl_internal_set_m_IsActionBasedController)) bool  m_IsActionBasedController;

/// @brief Field m_IsDeviceBasedController, offset 0x4d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsDeviceBasedController, put=__cordl_internal_set_m_IsDeviceBasedController)) bool  m_IsDeviceBasedController;

/// @brief Field m_IsScreenSpaceController, offset 0x4da, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsScreenSpaceController, put=__cordl_internal_set_m_IsScreenSpaceController)) bool  m_IsScreenSpaceController;

/// @brief Field m_IsUIHitClosest, offset 0x4b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsUIHitClosest, put=__cordl_internal_set_m_IsUIHitClosest)) bool  m_IsUIHitClosest;

/// @brief Field m_LastTimeAutoSelected, offset 0x3a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastTimeAutoSelected, put=__cordl_internal_set_m_LastTimeAutoSelected)) float_t  m_LastTimeAutoSelected;

/// @brief Field m_LastTimeHoveredObjectChanged, offset 0x3a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastTimeHoveredObjectChanged, put=__cordl_internal_set_m_LastTimeHoveredObjectChanged)) float_t  m_LastTimeHoveredObjectChanged;

/// @brief Field m_LastTimeHoveredUIChanged, offset 0x3b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastTimeHoveredUIChanged, put=__cordl_internal_set_m_LastTimeHoveredUIChanged)) float_t  m_LastTimeHoveredUIChanged;

/// @brief Field m_LastUIObject, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastUIObject, put=__cordl_internal_set_m_LastUIObject)) ::UnityW<::UnityEngine::GameObject>  m_LastUIObject;

/// @brief Field m_LineType, offset 0x278, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineType, put=__cordl_internal_set_m_LineType)) ::GlobalNamespace::XRRayInteractor_LineType  m_LineType;

/// @brief Field m_LiveConeCastDebugVisuals, offset 0x2d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LiveConeCastDebugVisuals, put=__cordl_internal_set_m_LiveConeCastDebugVisuals)) bool  m_LiveConeCastDebugVisuals;

/// @brief Field m_LocalPhysicsScene, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_ManipulateAttachTransform, offset 0x2f3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManipulateAttachTransform, put=__cordl_internal_set_m_ManipulateAttachTransform)) bool  m_ManipulateAttachTransform;

/// @brief Field m_MaxRaycastDistance, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxRaycastDistance, put=__cordl_internal_set_m_MaxRaycastDistance)) float_t  m_MaxRaycastDistance;

/// @brief Field m_OccludeARHitsWith2DObjects, offset 0x322, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OccludeARHitsWith2DObjects, put=__cordl_internal_set_m_OccludeARHitsWith2DObjects)) bool  m_OccludeARHitsWith2DObjects;

/// @brief Field m_OccludeARHitsWith3DObjects, offset 0x321, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OccludeARHitsWith3DObjects, put=__cordl_internal_set_m_OccludeARHitsWith3DObjects)) bool  m_OccludeARHitsWith3DObjects;

/// @brief Field m_PassedHoverTimeToSelect, offset 0x3a4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PassedHoverTimeToSelect, put=__cordl_internal_set_m_PassedHoverTimeToSelect)) bool  m_PassedHoverTimeToSelect;

/// @brief Field m_PassedTimeToAutoDeselect, offset 0x3ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PassedTimeToAutoDeselect, put=__cordl_internal_set_m_PassedTimeToAutoDeselect)) bool  m_PassedTimeToAutoDeselect;

/// @brief Field m_RayOriginTransform, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayOriginTransform, put=__cordl_internal_set_m_RayOriginTransform)) ::UnityW<::UnityEngine::Transform>  m_RayOriginTransform;

/// @brief Field m_RaycastHit, offset 0x414, size 0x2c 
 __declspec(property(get=__cordl_internal_get_m_RaycastHit, put=__cordl_internal_set_m_RaycastHit)) ::UnityEngine::RaycastHit  m_RaycastHit;

/// @brief Field m_RaycastHitComparer, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitComparer, put=__cordl_internal_set_m_RaycastHitComparer)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*  m_RaycastHitComparer;

/// @brief Field m_RaycastHitEndpointIndex, offset 0x3e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitEndpointIndex, put=__cordl_internal_set_m_RaycastHitEndpointIndex)) int32_t  m_RaycastHitEndpointIndex;

/// @brief Field m_RaycastHitOccurred, offset 0x410, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitOccurred, put=__cordl_internal_set_m_RaycastHitOccurred)) bool  m_RaycastHitOccurred;

/// @brief Field m_RaycastHits, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastHits, put=__cordl_internal_set_m_RaycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_RaycastHits;

/// @brief Field m_RaycastHitsCount, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastHitsCount, put=__cordl_internal_set_m_RaycastHitsCount)) int32_t  m_RaycastHitsCount;

/// @brief Field m_RaycastInteractable, offset 0x4b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastInteractable, put=__cordl_internal_set_m_RaycastInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_RaycastInteractable;

/// @brief Field m_RaycastMask, offset 0x2d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastMask, put=__cordl_internal_set_m_RaycastMask)) ::UnityEngine::LayerMask  m_RaycastMask;

/// @brief Field m_RaycastSnapVolumeInteraction, offset 0x2dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastSnapVolumeInteraction, put=__cordl_internal_set_m_RaycastSnapVolumeInteraction)) ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  m_RaycastSnapVolumeInteraction;

/// @brief Field m_RaycastTriggerInteraction, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastTriggerInteraction, put=__cordl_internal_set_m_RaycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_RaycastTriggerInteraction;

/// @brief Field m_ReferenceFrame, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReferenceFrame, put=__cordl_internal_set_m_ReferenceFrame)) ::UnityW<::UnityEngine::Transform>  m_ReferenceFrame;

/// @brief Field m_RegisteredUIInteractorCache, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredUIInteractorCache, put=__cordl_internal_set_m_RegisteredUIInteractorCache)) ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  m_RegisteredUIInteractorCache;

/// @brief Field m_RotateManipulationInput, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotateManipulationInput, put=__cordl_internal_set_m_RotateManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_RotateManipulationInput;

/// @brief Field m_RotateMode, offset 0x308, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateMode, put=__cordl_internal_set_m_RotateMode)) ::GlobalNamespace::XRRayInteractor_RotateMode  m_RotateMode;

/// @brief Field m_RotateReferenceFrame, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotateReferenceFrame, put=__cordl_internal_set_m_RotateReferenceFrame)) ::UnityW<::UnityEngine::Transform>  m_RotateReferenceFrame;

/// @brief Field m_RotateSpeed, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateSpeed, put=__cordl_internal_set_m_RotateSpeed)) float_t  m_RotateSpeed;

/// @brief Field m_SampleFrequency, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SampleFrequency, put=__cordl_internal_set_m_SampleFrequency)) int32_t  m_SampleFrequency;

/// @brief Field m_SamplePoints, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SamplePoints, put=__cordl_internal_set_m_SamplePoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  m_SamplePoints;

/// @brief Field m_SamplePointsFrameUpdated, offset 0x3e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SamplePointsFrameUpdated, put=__cordl_internal_set_m_SamplePointsFrameUpdated)) int32_t  m_SamplePointsFrameUpdated;

/// @brief Field m_ScaleDistanceDeltaInput, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleDistanceDeltaInput, put=__cordl_internal_set_m_ScaleDistanceDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_ScaleDistanceDeltaInput;

/// @brief Field m_ScaleInputActive, offset 0x38e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ScaleInputActive, put=__cordl_internal_set_m_ScaleInputActive)) bool  m_ScaleInputActive;

/// @brief Field m_ScaleMode, offset 0x324, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScaleMode, put=__cordl_internal_set_m_ScaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  m_ScaleMode;

/// @brief Field m_ScaleOverTimeInput, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleOverTimeInput, put=__cordl_internal_set_m_ScaleOverTimeInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_ScaleOverTimeInput;

/// @brief Field m_ScaleToggleInput, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleToggleInput, put=__cordl_internal_set_m_ScaleToggleInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ScaleToggleInput;

/// @brief Field m_ScreenSpaceController, offset 0x4d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenSpaceController, put=__cordl_internal_set_m_ScreenSpaceController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>  m_ScreenSpaceController;

/// @brief Field m_SphereCastRadius, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SphereCastRadius, put=__cordl_internal_set_m_SphereCastRadius)) float_t  m_SphereCastRadius;

/// @brief Field m_TimeToAutoDeselect, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeToAutoDeselect, put=__cordl_internal_set_m_TimeToAutoDeselect)) float_t  m_TimeToAutoDeselect;

/// @brief Field m_TranslateManipulationInput, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TranslateManipulationInput, put=__cordl_internal_set_m_TranslateManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_TranslateManipulationInput;

/// @brief Field m_TranslateSpeed, offset 0x2fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateSpeed, put=__cordl_internal_set_m_TranslateSpeed)) float_t  m_TranslateSpeed;

/// @brief Field m_UIHoverEntered, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverEntered, put=__cordl_internal_set_m_UIHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  m_UIHoverEntered;

/// @brief Field m_UIHoverExited, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverExited, put=__cordl_internal_set_m_UIHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  m_UIHoverExited;

/// @brief Field m_UIPressInput, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIPressInput, put=__cordl_internal_set_m_UIPressInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_UIPressInput;

/// @brief Field m_UIRaycastHit, offset 0x440, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_UIRaycastHit, put=__cordl_internal_set_m_UIRaycastHit)) ::UnityEngine::EventSystems::RaycastResult  m_UIRaycastHit;

/// @brief Field m_UIRaycastHitEndpointIndex, offset 0x3e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UIRaycastHitEndpointIndex, put=__cordl_internal_set_m_UIRaycastHitEndpointIndex)) int32_t  m_UIRaycastHitEndpointIndex;

/// @brief Field m_UIScrollInput, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIScrollInput, put=__cordl_internal_set_m_UIScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_UIScrollInput;

/// @brief Field m_UseForceGrab, offset 0x2f4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseForceGrab, put=__cordl_internal_set_m_UseForceGrab)) bool  m_UseForceGrab;

/// @brief Field m_ValidTargets, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidTargets, put=__cordl_internal_set_m_ValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_ValidTargets;

/// @brief Field m_Velocity, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Velocity, put=__cordl_internal_set_m_Velocity)) float_t  m_Velocity;

 __declspec(property(get=get_manipulateAttachTransform, put=set_manipulateAttachTransform)) bool  manipulateAttachTransform;

 __declspec(property(get=get_maxRaycastDistance, put=set_maxRaycastDistance)) float_t  maxRaycastDistance;

 __declspec(property(get=get_occludeARHitsWith2DObjects, put=set_occludeARHitsWith2DObjects)) bool  occludeARHitsWith2DObjects;

 __declspec(property(get=get_occludeARHitsWith3DObjects, put=set_occludeARHitsWith3DObjects)) bool  occludeARHitsWith3DObjects;

/// @brief [Obsolete("originalAttachTransform has been deprecated. Use rayOriginTransform instead. (UnityUpgradable) -> rayOriginTransform", true)]
 __declspec(property(get=get_originalAttachTransform, put=set_originalAttachTransform)) ::UnityW<::UnityEngine::Transform>  originalAttachTransform;

 __declspec(property(get=get_rayEndPoint, put=set_rayEndPoint)) ::UnityEngine::Vector3  rayEndPoint;

 __declspec(property(get=get_rayEndTransform, put=set_rayEndTransform)) ::UnityW<::UnityEngine::Transform>  rayEndTransform;

 __declspec(property(get=get_rayOriginTransform, put=set_rayOriginTransform)) ::UnityW<::UnityEngine::Transform>  rayOriginTransform;

 __declspec(property(get=get_raycastMask, put=set_raycastMask)) ::UnityEngine::LayerMask  raycastMask;

 __declspec(property(get=get_raycastSnapVolumeInteraction, put=set_raycastSnapVolumeInteraction)) ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  raycastSnapVolumeInteraction;

 __declspec(property(get=get_raycastTriggerInteraction, put=set_raycastTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  raycastTriggerInteraction;

 __declspec(property(get=get_referenceFrame, put=set_referenceFrame)) ::UnityW<::UnityEngine::Transform>  referenceFrame;

 __declspec(property(get=get_referencePosition)) ::UnityEngine::Vector3  referencePosition;

 __declspec(property(get=get_referenceUp)) ::UnityEngine::Vector3  referenceUp;

 __declspec(property(get=get_rotateManipulationInput, put=set_rotateManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  rotateManipulationInput;

 __declspec(property(get=get_rotateMode, put=set_rotateMode)) ::GlobalNamespace::XRRayInteractor_RotateMode  rotateMode;

 __declspec(property(get=get_rotateReferenceFrame, put=set_rotateReferenceFrame)) ::UnityW<::UnityEngine::Transform>  rotateReferenceFrame;

 __declspec(property(get=get_rotateSpeed, put=set_rotateSpeed)) float_t  rotateSpeed;

/// @brief Field s_OptimalHits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OptimalHits, put=setStaticF_s_OptimalHits)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  s_OptimalHits;

/// @brief Field s_Results, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Results, put=setStaticF_s_Results)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  s_Results;

/// @brief Field s_ScratchControlPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ScratchControlPoints, put=setStaticF_s_ScratchControlPoints)) ::ArrayW<::Unity::Mathematics::float3>  s_ScratchControlPoints;

/// @brief Field s_ScratchSamplePoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ScratchSamplePoints, put=setStaticF_s_ScratchSamplePoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  s_ScratchSamplePoints;

/// @brief Field s_SpherecastScratch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SpherecastScratch, put=setStaticF_s_SpherecastScratch)) ::ArrayW<::UnityEngine::RaycastHit>  s_SpherecastScratch;

 __declspec(property(get=get_sampleFrequency, put=set_sampleFrequency)) int32_t  sampleFrequency;

 __declspec(property(get=get_scaleDistanceDeltaInput, put=set_scaleDistanceDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  scaleDistanceDeltaInput;

 __declspec(property(get=get_scaleMode, put=set_scaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  scaleMode;

 __declspec(property(get=get_scaleOverTimeInput, put=set_scaleOverTimeInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  scaleOverTimeInput;

 __declspec(property(get=get_scaleToggleInput, put=set_scaleToggleInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  scaleToggleInput;

 __declspec(property(get=get_scaleValue, put=set_scaleValue)) float_t  scaleValue;

 __declspec(property(get=get_sphereCastRadius, put=set_sphereCastRadius)) float_t  sphereCastRadius;

 __declspec(property(get=get_timeToAutoDeselect, put=set_timeToAutoDeselect)) float_t  timeToAutoDeselect;

 __declspec(property(get=get_translateManipulationInput, put=set_translateManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  translateManipulationInput;

 __declspec(property(get=get_translateSpeed, put=set_translateSpeed)) float_t  translateSpeed;

 __declspec(property(get=get_uiHoverEntered, put=set_uiHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  uiHoverEntered;

 __declspec(property(get=get_uiHoverExited, put=set_uiHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  uiHoverExited;

 __declspec(property(get=get_uiPressInput, put=set_uiPressInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  uiPressInput;

 __declspec(property(get=get_uiScrollInput, put=set_uiScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  uiScrollInput;

 __declspec(property(get=get_useForceGrab, put=set_useForceGrab)) bool  useForceGrab;

 __declspec(property(get=get_velocity, put=set_velocity)) float_t  velocity;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

/// @brief Method Awake, addr 0xb478e14, size 0x418, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheRaycastHit, addr 0xb47c32c, size 0x308, virtual false, abstract: false, final false
inline void CacheRaycastHit() ;

/// [BurstCompile]
/// @brief Method CalculateProjectileParameters, addr 0xb47c784, size 0x1e0, virtual false, abstract: false, final false
inline void CalculateProjectileParameters(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, ::by_ref<::Unity::Mathematics::float3>  initialVelocity, ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, ::by_ref<float_t>  flightTime) ;

/// @brief Method CanHover, addr 0xb47f4e0, size 0x90, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method CanSelect, addr 0xb47f570, size 0xa0, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method CheckCollidersBetweenPoints, addr 0xb47e3cc, size 0x328, virtual false, abstract: false, final false
inline void CheckCollidersBetweenPoints(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  origin) ;

/// @brief Method CreateBezierCurve, addr 0xb47b1e8, size 0x314, virtual false, abstract: false, final false
inline void CreateBezierCurve(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  samplePoints, int32_t  endSamplePointIndex, ::ArrayW<::Unity::Mathematics::float3>  quadraticControlPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride) ;

/// @brief Method CreateRayOrigin, addr 0xb479520, size 0x2c4, virtual false, abstract: false, final false
inline void CreateRayOrigin() ;

/// @brief Method CreateSamplePointsListsIfNecessary, addr 0xb47922c, size 0x158, virtual false, abstract: false, final false
inline void CreateSamplePointsListsIfNecessary() ;

/// @brief Method DrawQuadraticBezierGizmo, addr 0xb47a3b8, size 0x204, virtual false, abstract: false, final false
static inline void DrawQuadraticBezierGizmo(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

/// @brief Method EnsureCapacity, addr 0xb47ac60, size 0xb0, virtual false, abstract: false, final false
static inline void EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, int32_t  numPoints) ;

/// @brief Method FilterOutTriggerColliders, addr 0xb47f108, size 0x228, virtual false, abstract: false, final false
inline int32_t FilterOutTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  manager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  raycastHitCount) ;

/// @brief Method FilterTriggerColliders, addr 0xb47f330, size 0x150, virtual false, abstract: false, final false
static inline int32_t FilterTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count, ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  removeRule) ;

/// @brief Method FilteredConecast, addr 0xb47e6f4, size 0xa14, virtual false, abstract: false, final false
inline int32_t FilteredConecast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method FindReferenceFrame, addr 0xb479384, size 0x19c, virtual false, abstract: false, final false
inline void FindReferenceFrame() ;

/// [Obsolete("GetCurrentRaycastHit has been deprecated. Use TryGetCurrent3DRaycastHit instead. (UnityUpgradable) -> TryGetCurrent3DRaycastHit(*)", true)]
/// @brief Method GetCurrentRaycastHit, addr 0xb47fb5c, size 0x14, virtual false, abstract: false, final false
inline bool GetCurrentRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit) ;

/// @brief Method GetHoverTimeToSelect, addr 0xb47f610, size 0x8, virtual true, abstract: false, final false
inline float_t GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method GetLineOriginAndDirection, addr 0xb4788b4, size 0x8c, virtual true, abstract: false, final true
inline void GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method GetLineOriginAndDirection, addr 0xb47b6a4, size 0x4c, virtual false, abstract: false, final false
static inline void GetLineOriginAndDirection(::UnityEngine::Transform*  rayOrigin, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method GetLineOriginAndDirection, addr 0xb47b6f0, size 0xc0, virtual false, abstract: false, final false
inline void GetLineOriginAndDirection(::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method GetLinePoints, addr 0xb47b4fc, size 0x1a8, virtual true, abstract: false, final true
inline bool GetLinePoints(::by_ref<::ArrayW<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints) ;

/// [Obsolete("GetLinePoints with ref int parameter has been deprecated. Use signature with out int parameter instead.", true)]
/// @brief Method GetLinePoints, addr 0xb47fb4c, size 0x8, virtual false, abstract: false, final false
inline bool GetLinePoints(::by_ref<::ArrayW<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, int32_t  _) ;

/// @brief Method GetLinePoints, addr 0xb47a734, size 0x52c, virtual true, abstract: false, final true
inline bool GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride) ;

/// @brief Method GetProjectileAngle, addr 0xb478940, size 0x290, virtual false, abstract: false, final false
inline float_t GetProjectileAngle(::UnityEngine::Vector3  lineDirection) ;

/// @brief Method GetTimeToAutoDeselect, addr 0xb47f618, size 0x8, virtual true, abstract: false, final false
inline float_t GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method GetValidTargets, addr 0xb47df58, size 0x474, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// @brief Method IsOverScreenSpaceCanvas, addr 0xb47a61c, size 0x118, virtual false, abstract: false, final false
inline bool IsOverScreenSpaceCanvas() ;

/// @brief Method IsOverUIGameObject, addr 0xb47a5fc, size 0x20, virtual false, abstract: false, final false
inline bool IsOverUIGameObject() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0xb479818, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0xb479888, size 0xaf8, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0xb4797e4, size 0x34, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSelectEntering, addr 0xb47f620, size 0x1dc, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb47f7fc, size 0x40, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnUIHoverEntered, addr 0xb47f8a4, size 0x178, virtual true, abstract: false, final false
inline void OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method OnUIHoverExited, addr 0xb47fa1c, size 0xf8, virtual true, abstract: false, final false
inline void OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method OnValidate, addr 0xb478d34, size 0xe0, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnXRControllerChanged, addr 0xb47fc70, size 0x2f0, virtual true, abstract: false, final false
inline void OnXRControllerChanged() ;

/// @brief Method PreprocessInteractor, addr 0xb47ce70, size 0x250, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb47d2e0, size 0x80, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessManipulationInput, addr 0xb47dcf4, size 0x264, virtual false, abstract: false, final false
inline void ProcessManipulationInput() ;

/// [Obsolete("ProcessManipulationInputActionBasedController has been deprecated in version 3.0.0.")]
/// @brief Method ProcessManipulationInputActionBasedController, addr 0xb47d6a8, size 0x330, virtual false, abstract: false, final false
inline void ProcessManipulationInputActionBasedController() ;

/// [Obsolete("ProcessManipulationInputDeviceBasedController has been deprecated in version 3.0.0.")]
/// @brief Method ProcessManipulationInputDeviceBasedController, addr 0xb47d360, size 0x348, virtual false, abstract: false, final false
inline void ProcessManipulationInputDeviceBasedController() ;

/// [Obsolete("ProcessManipulationInputScreenSpaceController has been deprecated in version 3.0.0.")]
/// @brief Method ProcessManipulationInputScreenSpaceController, addr 0xb47d9d8, size 0x31c, virtual false, abstract: false, final false
inline void ProcessManipulationInputScreenSpaceController() ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void RemoveAt(::ArrayW<T>  array, int32_t  index, int32_t  count) ;

/// @brief Method RestoreAttachTransform, addr 0xb47f83c, size 0x48, virtual false, abstract: false, final false
inline void RestoreAttachTransform() ;

/// [Obsolete("RotateAnchor has been renamed in version 3.0.0. Use RotateAttachTransform instead.")]
/// @brief Method RotateAnchor, addr 0xb47fc50, size 0x10, virtual true, abstract: false, final false
inline void RotateAnchor(::UnityEngine::Transform*  anchor, ::UnityEngine::Vector2  direction, ::UnityEngine::Quaternion  referenceRotation) ;

/// [Obsolete("RotateAnchor has been renamed in version 3.0.0. Use RotateAttachTransform instead.")]
/// @brief Method RotateAnchor, addr 0xb47fc40, size 0x10, virtual true, abstract: false, final false
inline void RotateAnchor(::UnityEngine::Transform*  anchor, float_t  directionAmount) ;

/// @brief Method RotateAttachTransform, addr 0xb47cae8, size 0x1bc, virtual true, abstract: false, final false
inline void RotateAttachTransform(::UnityEngine::Transform*  attach, ::UnityEngine::Vector2  direction, ::UnityEngine::Quaternion  referenceRotation) ;

/// @brief Method RotateAttachTransform, addr 0xb47c964, size 0x184, virtual true, abstract: false, final false
inline void RotateAttachTransform(::UnityEngine::Transform*  attach, float_t  directionAmount) ;

/// @brief Method SanitizeSampleFrequency, addr 0xb4782ec, size 0x10, virtual false, abstract: false, final false
static inline int32_t SanitizeSampleFrequency(int32_t  value) ;

/// [Obsolete("TranslateAnchor has been renamed in version 3.0.0. Use TranslateAttachTransform instead.")]
/// @brief Method TranslateAnchor, addr 0xb47fc60, size 0x10, virtual true, abstract: false, final false
inline void TranslateAnchor(::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Transform*  anchor, float_t  directionAmount) ;

/// @brief Method TranslateAttachTransform, addr 0xb47cca4, size 0x1cc, virtual true, abstract: false, final false
inline void TranslateAttachTransform(::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Transform*  attach, float_t  directionAmount) ;

/// @brief Method TryGetCurrent3DRaycastHit, addr 0xb47a380, size 0x1c, virtual false, abstract: false, final false
inline bool TryGetCurrent3DRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit) ;

/// @brief Method TryGetCurrent3DRaycastHit, addr 0xb47c1a8, size 0x6c, virtual false, abstract: false, final false
inline bool TryGetCurrent3DRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit, ::by_ref<int32_t>  raycastEndpointIndex) ;

/// @brief Method TryGetCurrentRaycast, addr 0xb47bb8c, size 0x140, virtual false, abstract: false, final false
inline bool TryGetCurrentRaycast(::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  raycastHit, ::by_ref<int32_t>  raycastHitIndex, ::by_ref<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>  uiRaycastHit, ::by_ref<int32_t>  uiRaycastHitIndex, ::by_ref<bool>  isUIHitClosest) ;

/// @brief Method TryGetCurrentUIRaycastResult, addr 0xb47a39c, size 0x1c, virtual false, abstract: false, final false
inline bool TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult) ;

/// @brief Method TryGetCurrentUIRaycastResult, addr 0xb47c214, size 0x118, virtual false, abstract: false, final false
inline bool TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult, ::by_ref<int32_t>  raycastEndpointIndex) ;

/// @brief Method TryGetHitInfo, addr 0xb47b7b0, size 0x3dc, virtual true, abstract: false, final true
inline bool TryGetHitInfo(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<int32_t>  positionInLine, ::by_ref<bool>  isValidTarget) ;

/// [Obsolete("TryGetHitInfo with ref parameters has been deprecated. Use signature with out parameters instead.", true)]
/// @brief Method TryGetHitInfo, addr 0xb47fb54, size 0x8, virtual false, abstract: false, final false
inline bool TryGetHitInfo(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<int32_t>  positionInLine, ::by_ref<bool>  isValidTarget, int32_t  _) ;

/// @brief Method TryGetUIModel, addr 0xb47c0e4, size 0xc4, virtual true, abstract: false, final true
inline bool TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// [Obsolete("TryRead2DAxis has been deprecated in version 3.0.0.")]
/// @brief Method TryRead2DAxis, addr 0xb47fbd8, size 0x68, virtual false, abstract: false, final false
static inline bool TryRead2DAxis(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<::UnityEngine::Vector2>  output) ;

/// [Obsolete("TryReadButton has been deprecated in version 3.0.0.")]
/// @brief Method TryReadButton, addr 0xb47fbc8, size 0x10, virtual false, abstract: false, final false
static inline bool TryReadButton(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform, addr 0xb47a5d4, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin, addr 0xb47a5bc, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform, addr 0xb47a5f4, size 0x8, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform(::UnityEngine::Transform*  newAttach) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin, addr 0xb47a5f0, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin(::UnityEngine::Transform*  newOrigin) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered, addr 0xb47f884, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited, addr 0xb47f894, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UpdateBezierControlPoints, addr 0xb47c690, size 0xf4, virtual false, abstract: false, final false
inline void UpdateBezierControlPoints(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveReferenceUp) ;

/// @brief Method UpdateRaycastHits, addr 0xb47d0c0, size 0x220, virtual false, abstract: false, final false
inline void UpdateRaycastHits() ;

/// @brief Method UpdateSamplePoints, addr 0xb47ad10, size 0x4d8, virtual false, abstract: false, final false
inline void UpdateSamplePoints(int32_t  count, ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  samplePoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride) ;

/// @brief Method UpdateSamplePointsIfNecessary, addr 0xb47c080, size 0x64, virtual false, abstract: false, final false
inline void UpdateSamplePointsIfNecessary() ;

/// @brief Method UpdateUIHover, addr 0xb47c634, size 0x5c, virtual false, abstract: false, final false
inline void UpdateUIHover() ;

/// @brief Method UpdateUIModel, addr 0xb47bccc, size 0x3b4, virtual true, abstract: false, final false
inline void UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get__currentNearestValidTarget_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get__currentNearestValidTarget_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rayEndPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rayEndPoint_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rayEndTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rayEndTransform_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__scaleValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__scaleValue_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_Acceleration() const;

constexpr float_t& __cordl_internal_get_m_Acceleration() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController> const& __cordl_internal_get_m_ActionBasedController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>& __cordl_internal_get_m_ActionBasedController() ;

constexpr float_t const& __cordl_internal_get_m_AdditionalFlightTime() const;

constexpr float_t& __cordl_internal_get_m_AdditionalFlightTime() ;

constexpr float_t const& __cordl_internal_get_m_AdditionalGroundHeight() const;

constexpr float_t& __cordl_internal_get_m_AdditionalGroundHeight() ;

constexpr bool const& __cordl_internal_get_m_AutoDeselect() const;

constexpr bool& __cordl_internal_get_m_AutoDeselect() ;

constexpr bool const& __cordl_internal_get_m_BlendVisualLinePoints() const;

constexpr bool& __cordl_internal_get_m_BlendVisualLinePoints() ;

constexpr bool const& __cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() const;

constexpr bool& __cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() ;

constexpr bool const& __cordl_internal_get_m_BlockUIAutoDeselect() const;

constexpr bool& __cordl_internal_get_m_BlockUIAutoDeselect() ;

constexpr bool const& __cordl_internal_get_m_BlockUIOnInteractableSelection() const;

constexpr bool& __cordl_internal_get_m_BlockUIOnInteractableSelection() ;

constexpr float_t const& __cordl_internal_get_m_CachedConeCastAngle() const;

constexpr float_t& __cordl_internal_get_m_CachedConeCastAngle() ;

constexpr float_t const& __cordl_internal_get_m_CachedConeCastRadius() const;

constexpr float_t& __cordl_internal_get_m_CachedConeCastRadius() ;

constexpr float_t const& __cordl_internal_get_m_ConeCastAngle() const;

constexpr float_t& __cordl_internal_get_m_ConeCastAngle() ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>* const& __cordl_internal_get_m_ConeCastDebugInfo() const;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*& __cordl_internal_get_m_ConeCastDebugInfo() ;

constexpr float_t const& __cordl_internal_get_m_ControlPointDistance() const;

constexpr float_t& __cordl_internal_get_m_ControlPointDistance() ;

constexpr float_t const& __cordl_internal_get_m_ControlPointHeight() const;

constexpr float_t& __cordl_internal_get_m_ControlPointHeight() ;

constexpr ::ArrayW<::Unity::Mathematics::float3> const& __cordl_internal_get_m_ControlPoints() const;

constexpr ::ArrayW<::Unity::Mathematics::float3>& __cordl_internal_get_m_ControlPoints() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& __cordl_internal_get_m_DeviceBasedController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& __cordl_internal_get_m_DeviceBasedController() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_DirectionalManipulationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_DirectionalManipulationInput() ;

constexpr bool const& __cordl_internal_get_m_EnableARRaycasting() const;

constexpr bool& __cordl_internal_get_m_EnableARRaycasting() ;

constexpr bool const& __cordl_internal_get_m_EnableUIInteraction() const;

constexpr bool& __cordl_internal_get_m_EnableUIInteraction() ;

constexpr float_t const& __cordl_internal_get_m_EndPointDistance() const;

constexpr float_t& __cordl_internal_get_m_EndPointDistance() ;

constexpr float_t const& __cordl_internal_get_m_EndPointHeight() const;

constexpr float_t& __cordl_internal_get_m_EndPointHeight() ;

constexpr bool const& __cordl_internal_get_m_HasRayOriginTransform() const;

constexpr bool& __cordl_internal_get_m_HasRayOriginTransform() ;

constexpr bool const& __cordl_internal_get_m_HasReferenceFrame() const;

constexpr bool& __cordl_internal_get_m_HasReferenceFrame() ;

constexpr ::ArrayW<::Unity::Mathematics::float3> const& __cordl_internal_get_m_HitChordControlPoints() const;

constexpr ::ArrayW<::Unity::Mathematics::float3>& __cordl_internal_get_m_HitChordControlPoints() ;

constexpr bool const& __cordl_internal_get_m_HitClosestOnly() const;

constexpr bool& __cordl_internal_get_m_HitClosestOnly() ;

constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType const& __cordl_internal_get_m_HitDetectionType() const;

constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType& __cordl_internal_get_m_HitDetectionType() ;

constexpr float_t const& __cordl_internal_get_m_HoverTimeToSelect() const;

constexpr float_t& __cordl_internal_get_m_HoverTimeToSelect() ;

constexpr bool const& __cordl_internal_get_m_HoverToSelect() const;

constexpr bool& __cordl_internal_get_m_HoverToSelect() ;

constexpr bool const& __cordl_internal_get_m_HoverUISelectActive() const;

constexpr bool& __cordl_internal_get_m_HoverUISelectActive() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>* const& __cordl_internal_get_m_InteractableRaycastHits() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*& __cordl_internal_get_m_InteractableRaycastHits() ;

constexpr bool const& __cordl_internal_get_m_IsActionBasedController() const;

constexpr bool& __cordl_internal_get_m_IsActionBasedController() ;

constexpr bool const& __cordl_internal_get_m_IsDeviceBasedController() const;

constexpr bool& __cordl_internal_get_m_IsDeviceBasedController() ;

constexpr bool const& __cordl_internal_get_m_IsScreenSpaceController() const;

constexpr bool& __cordl_internal_get_m_IsScreenSpaceController() ;

constexpr bool const& __cordl_internal_get_m_IsUIHitClosest() const;

constexpr bool& __cordl_internal_get_m_IsUIHitClosest() ;

constexpr float_t const& __cordl_internal_get_m_LastTimeAutoSelected() const;

constexpr float_t& __cordl_internal_get_m_LastTimeAutoSelected() ;

constexpr float_t const& __cordl_internal_get_m_LastTimeHoveredObjectChanged() const;

constexpr float_t& __cordl_internal_get_m_LastTimeHoveredObjectChanged() ;

constexpr float_t const& __cordl_internal_get_m_LastTimeHoveredUIChanged() const;

constexpr float_t& __cordl_internal_get_m_LastTimeHoveredUIChanged() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_LastUIObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_LastUIObject() ;

constexpr ::GlobalNamespace::XRRayInteractor_LineType const& __cordl_internal_get_m_LineType() const;

constexpr ::GlobalNamespace::XRRayInteractor_LineType& __cordl_internal_get_m_LineType() ;

constexpr bool const& __cordl_internal_get_m_LiveConeCastDebugVisuals() const;

constexpr bool& __cordl_internal_get_m_LiveConeCastDebugVisuals() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr bool const& __cordl_internal_get_m_ManipulateAttachTransform() const;

constexpr bool& __cordl_internal_get_m_ManipulateAttachTransform() ;

constexpr float_t const& __cordl_internal_get_m_MaxRaycastDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxRaycastDistance() ;

constexpr bool const& __cordl_internal_get_m_OccludeARHitsWith2DObjects() const;

constexpr bool& __cordl_internal_get_m_OccludeARHitsWith2DObjects() ;

constexpr bool const& __cordl_internal_get_m_OccludeARHitsWith3DObjects() const;

constexpr bool& __cordl_internal_get_m_OccludeARHitsWith3DObjects() ;

constexpr bool const& __cordl_internal_get_m_PassedHoverTimeToSelect() const;

constexpr bool& __cordl_internal_get_m_PassedHoverTimeToSelect() ;

constexpr bool const& __cordl_internal_get_m_PassedTimeToAutoDeselect() const;

constexpr bool& __cordl_internal_get_m_PassedTimeToAutoDeselect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RayOriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RayOriginTransform() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_m_RaycastHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_m_RaycastHit() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer* const& __cordl_internal_get_m_RaycastHitComparer() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*& __cordl_internal_get_m_RaycastHitComparer() ;

constexpr int32_t const& __cordl_internal_get_m_RaycastHitEndpointIndex() const;

constexpr int32_t& __cordl_internal_get_m_RaycastHitEndpointIndex() ;

constexpr bool const& __cordl_internal_get_m_RaycastHitOccurred() const;

constexpr bool& __cordl_internal_get_m_RaycastHitOccurred() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_RaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_RaycastHits() ;

constexpr int32_t const& __cordl_internal_get_m_RaycastHitsCount() const;

constexpr int32_t& __cordl_internal_get_m_RaycastHitsCount() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_RaycastInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_RaycastInteractable() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_RaycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_RaycastMask() ;

constexpr ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction const& __cordl_internal_get_m_RaycastSnapVolumeInteraction() const;

constexpr ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction& __cordl_internal_get_m_RaycastSnapVolumeInteraction() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_RaycastTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_RaycastTriggerInteraction() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ReferenceFrame() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ReferenceFrame() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& __cordl_internal_get_m_RegisteredUIInteractorCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& __cordl_internal_get_m_RegisteredUIInteractorCache() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_RotateManipulationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_RotateManipulationInput() ;

constexpr ::GlobalNamespace::XRRayInteractor_RotateMode const& __cordl_internal_get_m_RotateMode() const;

constexpr ::GlobalNamespace::XRRayInteractor_RotateMode& __cordl_internal_get_m_RotateMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RotateReferenceFrame() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RotateReferenceFrame() ;

constexpr float_t const& __cordl_internal_get_m_RotateSpeed() const;

constexpr float_t& __cordl_internal_get_m_RotateSpeed() ;

constexpr int32_t const& __cordl_internal_get_m_SampleFrequency() const;

constexpr int32_t& __cordl_internal_get_m_SampleFrequency() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>* const& __cordl_internal_get_m_SamplePoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*& __cordl_internal_get_m_SamplePoints() ;

constexpr int32_t const& __cordl_internal_get_m_SamplePointsFrameUpdated() const;

constexpr int32_t& __cordl_internal_get_m_SamplePointsFrameUpdated() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_ScaleDistanceDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_ScaleDistanceDeltaInput() ;

constexpr bool const& __cordl_internal_get_m_ScaleInputActive() const;

constexpr bool& __cordl_internal_get_m_ScaleInputActive() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const& __cordl_internal_get_m_ScaleMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode& __cordl_internal_get_m_ScaleMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_ScaleOverTimeInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_ScaleOverTimeInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ScaleToggleInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ScaleToggleInput() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController> const& __cordl_internal_get_m_ScreenSpaceController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>& __cordl_internal_get_m_ScreenSpaceController() ;

constexpr float_t const& __cordl_internal_get_m_SphereCastRadius() const;

constexpr float_t& __cordl_internal_get_m_SphereCastRadius() ;

constexpr float_t const& __cordl_internal_get_m_TimeToAutoDeselect() const;

constexpr float_t& __cordl_internal_get_m_TimeToAutoDeselect() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_TranslateManipulationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_TranslateManipulationInput() ;

constexpr float_t const& __cordl_internal_get_m_TranslateSpeed() const;

constexpr float_t& __cordl_internal_get_m_TranslateSpeed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& __cordl_internal_get_m_UIHoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& __cordl_internal_get_m_UIHoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& __cordl_internal_get_m_UIHoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& __cordl_internal_get_m_UIHoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_UIPressInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_UIPressInput() ;

constexpr ::UnityEngine::EventSystems::RaycastResult const& __cordl_internal_get_m_UIRaycastHit() const;

constexpr ::UnityEngine::EventSystems::RaycastResult& __cordl_internal_get_m_UIRaycastHit() ;

constexpr int32_t const& __cordl_internal_get_m_UIRaycastHitEndpointIndex() const;

constexpr int32_t& __cordl_internal_get_m_UIRaycastHitEndpointIndex() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_UIScrollInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_UIScrollInput() ;

constexpr bool const& __cordl_internal_get_m_UseForceGrab() const;

constexpr bool& __cordl_internal_get_m_UseForceGrab() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_ValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets() ;

constexpr float_t const& __cordl_internal_get_m_Velocity() const;

constexpr float_t& __cordl_internal_get_m_Velocity() ;

constexpr void __cordl_internal_set__currentNearestValidTarget_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set__rayEndPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rayEndTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__scaleValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_Acceleration(float_t  value) ;

constexpr void __cordl_internal_set_m_ActionBasedController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>  value) ;

constexpr void __cordl_internal_set_m_AdditionalFlightTime(float_t  value) ;

constexpr void __cordl_internal_set_m_AdditionalGroundHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_AutoDeselect(bool  value) ;

constexpr void __cordl_internal_set_m_BlendVisualLinePoints(bool  value) ;

constexpr void __cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI(bool  value) ;

constexpr void __cordl_internal_set_m_BlockUIAutoDeselect(bool  value) ;

constexpr void __cordl_internal_set_m_BlockUIOnInteractableSelection(bool  value) ;

constexpr void __cordl_internal_set_m_CachedConeCastAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedConeCastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_ConeCastAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_ConeCastDebugInfo(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  value) ;

constexpr void __cordl_internal_set_m_ControlPointDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_ControlPointHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_ControlPoints(::ArrayW<::Unity::Mathematics::float3>  value) ;

constexpr void __cordl_internal_set_m_DeviceBasedController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value) ;

constexpr void __cordl_internal_set_m_DirectionalManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_EnableARRaycasting(bool  value) ;

constexpr void __cordl_internal_set_m_EnableUIInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_EndPointDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_EndPointHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_HasRayOriginTransform(bool  value) ;

constexpr void __cordl_internal_set_m_HasReferenceFrame(bool  value) ;

constexpr void __cordl_internal_set_m_HitChordControlPoints(::ArrayW<::Unity::Mathematics::float3>  value) ;

constexpr void __cordl_internal_set_m_HitClosestOnly(bool  value) ;

constexpr void __cordl_internal_set_m_HitDetectionType(::GlobalNamespace::XRRayInteractor_HitDetectionType  value) ;

constexpr void __cordl_internal_set_m_HoverTimeToSelect(float_t  value) ;

constexpr void __cordl_internal_set_m_HoverToSelect(bool  value) ;

constexpr void __cordl_internal_set_m_HoverUISelectActive(bool  value) ;

constexpr void __cordl_internal_set_m_InteractableRaycastHits(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*  value) ;

constexpr void __cordl_internal_set_m_IsActionBasedController(bool  value) ;

constexpr void __cordl_internal_set_m_IsDeviceBasedController(bool  value) ;

constexpr void __cordl_internal_set_m_IsScreenSpaceController(bool  value) ;

constexpr void __cordl_internal_set_m_IsUIHitClosest(bool  value) ;

constexpr void __cordl_internal_set_m_LastTimeAutoSelected(float_t  value) ;

constexpr void __cordl_internal_set_m_LastTimeHoveredObjectChanged(float_t  value) ;

constexpr void __cordl_internal_set_m_LastTimeHoveredUIChanged(float_t  value) ;

constexpr void __cordl_internal_set_m_LastUIObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_LineType(::GlobalNamespace::XRRayInteractor_LineType  value) ;

constexpr void __cordl_internal_set_m_LiveConeCastDebugVisuals(bool  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_ManipulateAttachTransform(bool  value) ;

constexpr void __cordl_internal_set_m_MaxRaycastDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_OccludeARHitsWith2DObjects(bool  value) ;

constexpr void __cordl_internal_set_m_OccludeARHitsWith3DObjects(bool  value) ;

constexpr void __cordl_internal_set_m_PassedHoverTimeToSelect(bool  value) ;

constexpr void __cordl_internal_set_m_PassedTimeToAutoDeselect(bool  value) ;

constexpr void __cordl_internal_set_m_RayOriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RaycastHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*  value) ;

constexpr void __cordl_internal_set_m_RaycastHitEndpointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_RaycastHitOccurred(bool  value) ;

constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_RaycastHitsCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_RaycastInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_RaycastSnapVolumeInteraction(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  value) ;

constexpr void __cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_m_ReferenceFrame(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value) ;

constexpr void __cordl_internal_set_m_RotateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_RotateMode(::GlobalNamespace::XRRayInteractor_RotateMode  value) ;

constexpr void __cordl_internal_set_m_RotateReferenceFrame(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RotateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_SampleFrequency(int32_t  value) ;

constexpr void __cordl_internal_set_m_SamplePoints(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  value) ;

constexpr void __cordl_internal_set_m_SamplePointsFrameUpdated(int32_t  value) ;

constexpr void __cordl_internal_set_m_ScaleDistanceDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_ScaleInputActive(bool  value) ;

constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value) ;

constexpr void __cordl_internal_set_m_ScaleOverTimeInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_ScaleToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ScreenSpaceController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>  value) ;

constexpr void __cordl_internal_set_m_SphereCastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_TimeToAutoDeselect(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_TranslateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_UIPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_UIRaycastHit(::UnityEngine::EventSystems::RaycastResult  value) ;

constexpr void __cordl_internal_set_m_UIRaycastHitEndpointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_UIScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_UseForceGrab(bool  value) ;

constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_Velocity(float_t  value) ;

/// @brief Method .ctor, addr 0xb47ff60, size 0x578, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* getStaticF_s_OptimalHits() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* getStaticF_s_Results() ;

static inline ::ArrayW<::Unity::Mathematics::float3> getStaticF_s_ScratchControlPoints() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>* getStaticF_s_ScratchSamplePoints() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_s_SpherecastScratch() ;

/// @brief Method get_Acceleration, addr 0xb47fb20, size 0x8, virtual false, abstract: false, final false
inline float_t get_Acceleration() ;

/// @brief Method get_AdditionalFlightTime, addr 0xb47fb2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_AdditionalFlightTime() ;

/// @brief Method get_Angle, addr 0xb47fb38, size 0x8, virtual false, abstract: false, final false
inline float_t get_Angle() ;

/// @brief Method get_Velocity, addr 0xb47fb14, size 0x8, virtual false, abstract: false, final false
inline float_t get_Velocity() ;

/// @brief Method get_acceleration, addr 0xb478208, size 0x8, virtual false, abstract: false, final false
inline float_t get_acceleration() ;

/// @brief Method get_additionalFlightTime, addr 0xb478228, size 0x8, virtual false, abstract: false, final false
inline float_t get_additionalFlightTime() ;

/// @brief Method get_additionalGroundHeight, addr 0xb478218, size 0x8, virtual false, abstract: false, final false
inline float_t get_additionalGroundHeight() ;

/// @brief Method get_allowAnchorControl, addr 0xb47fb70, size 0x8, virtual false, abstract: false, final false
inline bool get_allowAnchorControl() ;

/// @brief Method get_anchorRotateReferenceFrame, addr 0xb47fb80, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_anchorRotateReferenceFrame() ;

/// @brief Method get_anchorRotationMode, addr 0xb47fb98, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRRayInteractor_AnchorRotationMode get_anchorRotationMode() ;

/// @brief Method get_angle, addr 0xb478874, size 0x40, virtual false, abstract: false, final false
inline float_t get_angle() ;

/// @brief Method get_autoDeselect, addr 0xb47849c, size 0x8, virtual false, abstract: false, final false
inline bool get_autoDeselect() ;

/// @brief Method get_blendVisualLinePoints, addr 0xb4780b8, size 0x8, virtual false, abstract: false, final false
inline bool get_blendVisualLinePoints() ;

/// @brief Method get_blockInteractionsWithScreenSpaceUI, addr 0xb4784f4, size 0x8, virtual false, abstract: false, final false
inline bool get_blockInteractionsWithScreenSpaceUI() ;

/// @brief Method get_blockUIOnInteractableSelection, addr 0xb478504, size 0x8, virtual false, abstract: false, final false
inline bool get_blockUIOnInteractableSelection() ;

/// @brief Method get_closestAnyHitIndex, addr 0xb478d10, size 0x24, virtual false, abstract: false, final false
inline int32_t get_closestAnyHitIndex() ;

/// @brief Method get_coneCastAngle, addr 0xb47831c, size 0x8, virtual false, abstract: false, final false
inline float_t get_coneCastAngle() ;

/// @brief Method get_coneCastAngleRadius, addr 0xb47832c, size 0x100, virtual false, abstract: false, final false
inline float_t get_coneCastAngleRadius() ;

/// @brief Method get_controlPointDistance, addr 0xb478258, size 0x8, virtual false, abstract: false, final false
inline float_t get_controlPointDistance() ;

/// @brief Method get_controlPointHeight, addr 0xb478268, size 0x8, virtual false, abstract: false, final false
inline float_t get_controlPointHeight() ;

/// [CompilerGenerated]
/// @brief Method get_currentNearestValidTarget, addr 0xb478bd0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* get_currentNearestValidTarget() ;

/// @brief Method get_directionalManipulationInput, addr 0xb478730, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_directionalManipulationInput() ;

/// @brief Method get_effectiveRayOrigin, addr 0xb478c30, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_effectiveRayOrigin() ;

/// @brief Method get_enableARRaycasting, addr 0xb4785ac, size 0x8, virtual false, abstract: false, final false
inline bool get_enableARRaycasting() ;

/// @brief Method get_enableUIInteraction, addr 0xb4784bc, size 0x8, virtual false, abstract: false, final false
inline bool get_enableUIInteraction() ;

/// @brief Method get_endPointDistance, addr 0xb478238, size 0x8, virtual false, abstract: false, final false
inline float_t get_endPointDistance() ;

/// @brief Method get_endPointHeight, addr 0xb478248, size 0x8, virtual false, abstract: false, final false
inline float_t get_endPointHeight() ;

/// @brief Method get_hitClosestOnly, addr 0xb47846c, size 0x8, virtual false, abstract: false, final false
inline bool get_hitClosestOnly() ;

/// @brief Method get_hitDetectionType, addr 0xb4782fc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRRayInteractor_HitDetectionType get_hitDetectionType() ;

/// @brief Method get_hoverTimeToSelect, addr 0xb47848c, size 0x8, virtual false, abstract: false, final false
inline float_t get_hoverTimeToSelect() ;

/// @brief Method get_hoverToSelect, addr 0xb47847c, size 0x8, virtual false, abstract: false, final false
inline bool get_hoverToSelect() ;

/// @brief Method get_isSelectActive, addr 0xb47f480, size 0x60, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_isUISelectActive, addr 0xb47fba8, size 0x20, virtual true, abstract: false, final false
inline bool get_isUISelectActive() ;

/// @brief Method get_lineType, addr 0xb4780a8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRRayInteractor_LineType get_lineType() ;

/// @brief Method get_liveConeCastDebugVisuals, addr 0xb47842c, size 0x8, virtual false, abstract: false, final false
inline bool get_liveConeCastDebugVisuals() ;

/// @brief Method get_manipulateAttachTransform, addr 0xb478514, size 0x8, virtual false, abstract: false, final false
inline bool get_manipulateAttachTransform() ;

/// @brief Method get_maxRaycastDistance, addr 0xb4780c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxRaycastDistance() ;

/// @brief Method get_occludeARHitsWith2DObjects, addr 0xb4785cc, size 0x8, virtual false, abstract: false, final false
inline bool get_occludeARHitsWith2DObjects() ;

/// @brief Method get_occludeARHitsWith3DObjects, addr 0xb4785bc, size 0x8, virtual false, abstract: false, final false
inline bool get_occludeARHitsWith3DObjects() ;

/// @brief Method get_originalAttachTransform, addr 0xb47fb40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_originalAttachTransform() ;

/// [CompilerGenerated]
/// @brief Method get_rayEndPoint, addr 0xb478be8, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_rayEndPoint() ;

/// [CompilerGenerated]
/// @brief Method get_rayEndTransform, addr 0xb478c08, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_rayEndTransform() ;

/// @brief Method get_rayOriginTransform, addr 0xb4780d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rayOriginTransform() ;

/// @brief Method get_raycastMask, addr 0xb47843c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_raycastMask() ;

/// @brief Method get_raycastSnapVolumeInteraction, addr 0xb47845c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction get_raycastSnapVolumeInteraction() ;

/// @brief Method get_raycastTriggerInteraction, addr 0xb47844c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_raycastTriggerInteraction() ;

/// @brief Method get_referenceFrame, addr 0xb478168, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_referenceFrame() ;

/// @brief Method get_referencePosition, addr 0xb478cac, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_referencePosition() ;

/// @brief Method get_referenceUp, addr 0xb478c48, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_referenceUp() ;

/// @brief Method get_rotateManipulationInput, addr 0xb4786cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_rotateManipulationInput() ;

/// @brief Method get_rotateMode, addr 0xb47856c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRRayInteractor_RotateMode get_rotateMode() ;

/// @brief Method get_rotateReferenceFrame, addr 0xb478554, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rotateReferenceFrame() ;

/// @brief Method get_rotateSpeed, addr 0xb478534, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotateSpeed() ;

/// @brief Method get_sampleFrequency, addr 0xb478278, size 0x8, virtual false, abstract: false, final false
inline int32_t get_sampleFrequency() ;

/// @brief Method get_scaleDistanceDeltaInput, addr 0xb478810, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_scaleDistanceDeltaInput() ;

/// @brief Method get_scaleMode, addr 0xb4785dc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode get_scaleMode() ;

/// @brief Method get_scaleOverTimeInput, addr 0xb4787ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_scaleOverTimeInput() ;

/// @brief Method get_scaleToggleInput, addr 0xb478794, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_scaleToggleInput() ;

/// [CompilerGenerated]
/// @brief Method get_scaleValue, addr 0xb478c20, size 0x8, virtual true, abstract: false, final true
inline float_t get_scaleValue() ;

/// @brief Method get_sphereCastRadius, addr 0xb47830c, size 0x8, virtual false, abstract: false, final false
inline float_t get_sphereCastRadius() ;

/// @brief Method get_timeToAutoDeselect, addr 0xb4784ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_timeToAutoDeselect() ;

/// @brief Method get_translateManipulationInput, addr 0xb478668, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_translateManipulationInput() ;

/// @brief Method get_translateSpeed, addr 0xb478544, size 0x8, virtual false, abstract: false, final false
inline float_t get_translateSpeed() ;

/// @brief Method get_uiHoverEntered, addr 0xb47857c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* get_uiHoverEntered() ;

/// @brief Method get_uiHoverExited, addr 0xb478594, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* get_uiHoverExited() ;

/// @brief Method get_uiPressInput, addr 0xb4785ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_uiPressInput() ;

/// @brief Method get_uiScrollInput, addr 0xb478604, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_uiScrollInput() ;

/// @brief Method get_useForceGrab, addr 0xb478524, size 0x8, virtual false, abstract: false, final false
inline bool get_useForceGrab() ;

/// @brief Method get_velocity, addr 0xb4781f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_velocity() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRRayProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRScaleValueProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IAdvancedLineRenderable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ILineRenderable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

static inline void setStaticF_s_OptimalHits(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

static inline void setStaticF_s_ScratchControlPoints(::ArrayW<::Unity::Mathematics::float3>  value) ;

static inline void setStaticF_s_ScratchSamplePoints(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  value) ;

static inline void setStaticF_s_SpherecastScratch(::ArrayW<::UnityEngine::RaycastHit>  value) ;

/// @brief Method set_Acceleration, addr 0xb47fb28, size 0x4, virtual false, abstract: false, final false
inline void set_Acceleration(float_t  value) ;

/// @brief Method set_AdditionalFlightTime, addr 0xb47fb34, size 0x4, virtual false, abstract: false, final false
inline void set_AdditionalFlightTime(float_t  value) ;

/// @brief Method set_Velocity, addr 0xb47fb1c, size 0x4, virtual false, abstract: false, final false
inline void set_Velocity(float_t  value) ;

/// @brief Method set_acceleration, addr 0xb478210, size 0x8, virtual false, abstract: false, final false
inline void set_acceleration(float_t  value) ;

/// @brief Method set_additionalFlightTime, addr 0xb478230, size 0x8, virtual false, abstract: false, final false
inline void set_additionalFlightTime(float_t  value) ;

/// @brief Method set_additionalGroundHeight, addr 0xb478220, size 0x8, virtual false, abstract: false, final false
inline void set_additionalGroundHeight(float_t  value) ;

/// @brief Method set_allowAnchorControl, addr 0xb47fb78, size 0x8, virtual false, abstract: false, final false
inline void set_allowAnchorControl(bool  value) ;

/// @brief Method set_anchorRotateReferenceFrame, addr 0xb47fb88, size 0x10, virtual false, abstract: false, final false
inline void set_anchorRotateReferenceFrame(::UnityEngine::Transform*  value) ;

/// @brief Method set_anchorRotationMode, addr 0xb47fba0, size 0x8, virtual false, abstract: false, final false
inline void set_anchorRotationMode(::GlobalNamespace::XRRayInteractor_AnchorRotationMode  value) ;

/// @brief Method set_autoDeselect, addr 0xb4784a4, size 0x8, virtual false, abstract: false, final false
inline void set_autoDeselect(bool  value) ;

/// @brief Method set_blendVisualLinePoints, addr 0xb4780c0, size 0x8, virtual false, abstract: false, final false
inline void set_blendVisualLinePoints(bool  value) ;

/// @brief Method set_blockInteractionsWithScreenSpaceUI, addr 0xb4784fc, size 0x8, virtual false, abstract: false, final false
inline void set_blockInteractionsWithScreenSpaceUI(bool  value) ;

/// @brief Method set_blockUIOnInteractableSelection, addr 0xb47850c, size 0x8, virtual false, abstract: false, final false
inline void set_blockUIOnInteractableSelection(bool  value) ;

/// @brief Method set_coneCastAngle, addr 0xb478324, size 0x8, virtual false, abstract: false, final false
inline void set_coneCastAngle(float_t  value) ;

/// @brief Method set_controlPointDistance, addr 0xb478260, size 0x8, virtual false, abstract: false, final false
inline void set_controlPointDistance(float_t  value) ;

/// @brief Method set_controlPointHeight, addr 0xb478270, size 0x8, virtual false, abstract: false, final false
inline void set_controlPointHeight(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentNearestValidTarget, addr 0xb478bd8, size 0x10, virtual false, abstract: false, final false
inline void set_currentNearestValidTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

/// @brief Method set_directionalManipulationInput, addr 0xb478738, size 0x5c, virtual false, abstract: false, final false
inline void set_directionalManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_enableARRaycasting, addr 0xb4785b4, size 0x8, virtual false, abstract: false, final false
inline void set_enableARRaycasting(bool  value) ;

/// @brief Method set_enableUIInteraction, addr 0xb4784c4, size 0x30, virtual false, abstract: false, final false
inline void set_enableUIInteraction(bool  value) ;

/// @brief Method set_endPointDistance, addr 0xb478240, size 0x8, virtual false, abstract: false, final false
inline void set_endPointDistance(float_t  value) ;

/// @brief Method set_endPointHeight, addr 0xb478250, size 0x8, virtual false, abstract: false, final false
inline void set_endPointHeight(float_t  value) ;

/// @brief Method set_hitClosestOnly, addr 0xb478474, size 0x8, virtual false, abstract: false, final false
inline void set_hitClosestOnly(bool  value) ;

/// @brief Method set_hitDetectionType, addr 0xb478304, size 0x8, virtual false, abstract: false, final false
inline void set_hitDetectionType(::GlobalNamespace::XRRayInteractor_HitDetectionType  value) ;

/// @brief Method set_hoverTimeToSelect, addr 0xb478494, size 0x8, virtual false, abstract: false, final false
inline void set_hoverTimeToSelect(float_t  value) ;

/// @brief Method set_hoverToSelect, addr 0xb478484, size 0x8, virtual false, abstract: false, final false
inline void set_hoverToSelect(bool  value) ;

/// @brief Method set_lineType, addr 0xb4780b0, size 0x8, virtual false, abstract: false, final false
inline void set_lineType(::GlobalNamespace::XRRayInteractor_LineType  value) ;

/// @brief Method set_liveConeCastDebugVisuals, addr 0xb478434, size 0x8, virtual false, abstract: false, final false
inline void set_liveConeCastDebugVisuals(bool  value) ;

/// @brief Method set_manipulateAttachTransform, addr 0xb47851c, size 0x8, virtual false, abstract: false, final false
inline void set_manipulateAttachTransform(bool  value) ;

/// @brief Method set_maxRaycastDistance, addr 0xb4780d0, size 0x8, virtual false, abstract: false, final false
inline void set_maxRaycastDistance(float_t  value) ;

/// @brief Method set_occludeARHitsWith2DObjects, addr 0xb4785d4, size 0x8, virtual false, abstract: false, final false
inline void set_occludeARHitsWith2DObjects(bool  value) ;

/// @brief Method set_occludeARHitsWith3DObjects, addr 0xb4785c4, size 0x8, virtual false, abstract: false, final false
inline void set_occludeARHitsWith3DObjects(bool  value) ;

/// @brief Method set_originalAttachTransform, addr 0xb47fb48, size 0x4, virtual false, abstract: false, final false
inline void set_originalAttachTransform(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rayEndPoint, addr 0xb478bf8, size 0x10, virtual false, abstract: false, final false
inline void set_rayEndPoint(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_rayEndTransform, addr 0xb478c10, size 0x10, virtual false, abstract: false, final false
inline void set_rayEndTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_rayOriginTransform, addr 0xb4780e0, size 0x88, virtual false, abstract: false, final false
inline void set_rayOriginTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_raycastMask, addr 0xb478444, size 0x8, virtual false, abstract: false, final false
inline void set_raycastMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_raycastSnapVolumeInteraction, addr 0xb478464, size 0x8, virtual false, abstract: false, final false
inline void set_raycastSnapVolumeInteraction(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  value) ;

/// @brief Method set_raycastTriggerInteraction, addr 0xb478454, size 0x8, virtual false, abstract: false, final false
inline void set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method set_referenceFrame, addr 0xb478170, size 0x88, virtual false, abstract: false, final false
inline void set_referenceFrame(::UnityEngine::Transform*  value) ;

/// @brief Method set_rotateManipulationInput, addr 0xb4786d4, size 0x5c, virtual false, abstract: false, final false
inline void set_rotateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_rotateMode, addr 0xb478574, size 0x8, virtual false, abstract: false, final false
inline void set_rotateMode(::GlobalNamespace::XRRayInteractor_RotateMode  value) ;

/// @brief Method set_rotateReferenceFrame, addr 0xb47855c, size 0x10, virtual false, abstract: false, final false
inline void set_rotateReferenceFrame(::UnityEngine::Transform*  value) ;

/// @brief Method set_rotateSpeed, addr 0xb47853c, size 0x8, virtual false, abstract: false, final false
inline void set_rotateSpeed(float_t  value) ;

/// @brief Method set_sampleFrequency, addr 0xb478280, size 0x6c, virtual false, abstract: false, final false
inline void set_sampleFrequency(int32_t  value) ;

/// @brief Method set_scaleDistanceDeltaInput, addr 0xb478818, size 0x5c, virtual false, abstract: false, final false
inline void set_scaleDistanceDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_scaleMode, addr 0xb4785e4, size 0x8, virtual true, abstract: false, final true
inline void set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value) ;

/// @brief Method set_scaleOverTimeInput, addr 0xb4787b4, size 0x5c, virtual false, abstract: false, final false
inline void set_scaleOverTimeInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_scaleToggleInput, addr 0xb47879c, size 0x10, virtual false, abstract: false, final false
inline void set_scaleToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// [CompilerGenerated]
/// @brief Method set_scaleValue, addr 0xb478c28, size 0x8, virtual false, abstract: false, final false
inline void set_scaleValue(float_t  value) ;

/// @brief Method set_sphereCastRadius, addr 0xb478314, size 0x8, virtual false, abstract: false, final false
inline void set_sphereCastRadius(float_t  value) ;

/// @brief Method set_timeToAutoDeselect, addr 0xb4784b4, size 0x8, virtual false, abstract: false, final false
inline void set_timeToAutoDeselect(float_t  value) ;

/// @brief Method set_translateManipulationInput, addr 0xb478670, size 0x5c, virtual false, abstract: false, final false
inline void set_translateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_translateSpeed, addr 0xb47854c, size 0x8, virtual false, abstract: false, final false
inline void set_translateSpeed(float_t  value) ;

/// @brief Method set_uiHoverEntered, addr 0xb478584, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

/// @brief Method set_uiHoverExited, addr 0xb47859c, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

/// @brief Method set_uiPressInput, addr 0xb4785f4, size 0x10, virtual false, abstract: false, final false
inline void set_uiPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_uiScrollInput, addr 0xb47860c, size 0x5c, virtual false, abstract: false, final false
inline void set_uiScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_useForceGrab, addr 0xb47852c, size 0x8, virtual false, abstract: false, final false
inline void set_useForceGrab(bool  value) ;

/// @brief Method set_velocity, addr 0xb478200, size 0x8, virtual false, abstract: false, final false
inline void set_velocity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRRayInteractor(XRRayInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRRayInteractor(XRRayInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11468};

/// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxRaycastHits{static_cast<int32_t>(0xa)};

/// @brief Field k_MaxSampleFrequency offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxSampleFrequency{static_cast<int32_t>(0x64)};

/// @brief Field k_MaxSpherecastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxSpherecastHits{static_cast<int32_t>(0xa)};

/// @brief Field k_MinSampleFrequency offset 0xffffffff size 0x4
static constexpr int32_t  k_MinSampleFrequency{static_cast<int32_t>(0x2)};

/// @brief Field m_ConeCastDebugInfo, offset: 0x270, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  ___m_ConeCastDebugInfo;

/// [SerializeField]
/// @brief Field m_LineType, offset: 0x278, size: 0x4, def value: None
 ::GlobalNamespace::XRRayInteractor_LineType  ___m_LineType;

/// [SerializeField]
/// @brief Field m_BlendVisualLinePoints, offset: 0x27c, size: 0x1, def value: None
 bool  ___m_BlendVisualLinePoints;

/// [SerializeField]
/// @brief Field m_MaxRaycastDistance, offset: 0x280, size: 0x4, def value: None
 float_t  ___m_MaxRaycastDistance;

/// [SerializeField]
/// @brief Field m_RayOriginTransform, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RayOriginTransform;

/// [SerializeField]
/// @brief Field m_ReferenceFrame, offset: 0x290, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ReferenceFrame;

/// [SerializeField]
/// @brief Field m_Velocity, offset: 0x298, size: 0x4, def value: None
 float_t  ___m_Velocity;

/// [SerializeField]
/// @brief Field m_Acceleration, offset: 0x29c, size: 0x4, def value: None
 float_t  ___m_Acceleration;

/// [SerializeField]
/// @brief Field m_AdditionalGroundHeight, offset: 0x2a0, size: 0x4, def value: None
 float_t  ___m_AdditionalGroundHeight;

/// [SerializeField]
/// @brief Field m_AdditionalFlightTime, offset: 0x2a4, size: 0x4, def value: None
 float_t  ___m_AdditionalFlightTime;

/// [SerializeField]
/// @brief Field m_EndPointDistance, offset: 0x2a8, size: 0x4, def value: None
 float_t  ___m_EndPointDistance;

/// [SerializeField]
/// @brief Field m_EndPointHeight, offset: 0x2ac, size: 0x4, def value: None
 float_t  ___m_EndPointHeight;

/// [SerializeField]
/// @brief Field m_ControlPointDistance, offset: 0x2b0, size: 0x4, def value: None
 float_t  ___m_ControlPointDistance;

/// [SerializeField]
/// @brief Field m_ControlPointHeight, offset: 0x2b4, size: 0x4, def value: None
 float_t  ___m_ControlPointHeight;

/// [SerializeField]
/// [Range(2, 100)]
/// @brief Field m_SampleFrequency, offset: 0x2b8, size: 0x4, def value: None
 int32_t  ___m_SampleFrequency;

/// [SerializeField]
/// @brief Field m_HitDetectionType, offset: 0x2bc, size: 0x4, def value: None
 ::GlobalNamespace::XRRayInteractor_HitDetectionType  ___m_HitDetectionType;

/// [SerializeField]
/// [Range(0.01, 0.25)]
/// @brief Field m_SphereCastRadius, offset: 0x2c0, size: 0x4, def value: None
 float_t  ___m_SphereCastRadius;

/// [SerializeField]
/// [Range(0, 180)]
/// @brief Field m_ConeCastAngle, offset: 0x2c4, size: 0x4, def value: None
 float_t  ___m_ConeCastAngle;

/// @brief Field m_CachedConeCastAngle, offset: 0x2c8, size: 0x4, def value: None
 float_t  ___m_CachedConeCastAngle;

/// @brief Field m_CachedConeCastRadius, offset: 0x2cc, size: 0x4, def value: None
 float_t  ___m_CachedConeCastRadius;

/// [SerializeField]
/// @brief Field m_LiveConeCastDebugVisuals, offset: 0x2d0, size: 0x1, def value: None
 bool  ___m_LiveConeCastDebugVisuals;

/// [SerializeField]
/// @brief Field m_RaycastMask, offset: 0x2d4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_RaycastMask;

/// [SerializeField]
/// @brief Field m_RaycastTriggerInteraction, offset: 0x2d8, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_RaycastTriggerInteraction;

/// [SerializeField]
/// @brief Field m_RaycastSnapVolumeInteraction, offset: 0x2dc, size: 0x4, def value: None
 ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  ___m_RaycastSnapVolumeInteraction;

/// [SerializeField]
/// @brief Field m_HitClosestOnly, offset: 0x2e0, size: 0x1, def value: None
 bool  ___m_HitClosestOnly;

/// [SerializeField]
/// @brief Field m_HoverToSelect, offset: 0x2e1, size: 0x1, def value: None
 bool  ___m_HoverToSelect;

/// [SerializeField]
/// @brief Field m_HoverTimeToSelect, offset: 0x2e4, size: 0x4, def value: None
 float_t  ___m_HoverTimeToSelect;

/// [SerializeField]
/// @brief Field m_AutoDeselect, offset: 0x2e8, size: 0x1, def value: None
 bool  ___m_AutoDeselect;

/// [SerializeField]
/// @brief Field m_TimeToAutoDeselect, offset: 0x2ec, size: 0x4, def value: None
 float_t  ___m_TimeToAutoDeselect;

/// [SerializeField]
/// @brief Field m_EnableUIInteraction, offset: 0x2f0, size: 0x1, def value: None
 bool  ___m_EnableUIInteraction;

/// [SerializeField]
/// @brief Field m_BlockInteractionsWithScreenSpaceUI, offset: 0x2f1, size: 0x1, def value: None
 bool  ___m_BlockInteractionsWithScreenSpaceUI;

/// [SerializeField]
/// @brief Field m_BlockUIOnInteractableSelection, offset: 0x2f2, size: 0x1, def value: None
 bool  ___m_BlockUIOnInteractableSelection;

/// [FormerlySerializedAs("m_AllowAnchorControl")]
/// [SerializeField]
/// @brief Field m_ManipulateAttachTransform, offset: 0x2f3, size: 0x1, def value: None
 bool  ___m_ManipulateAttachTransform;

/// [SerializeField]
/// @brief Field m_UseForceGrab, offset: 0x2f4, size: 0x1, def value: None
 bool  ___m_UseForceGrab;

/// [SerializeField]
/// @brief Field m_RotateSpeed, offset: 0x2f8, size: 0x4, def value: None
 float_t  ___m_RotateSpeed;

/// [SerializeField]
/// @brief Field m_TranslateSpeed, offset: 0x2fc, size: 0x4, def value: None
 float_t  ___m_TranslateSpeed;

/// [FormerlySerializedAs("m_AnchorRotateReferenceFrame")]
/// [SerializeField]
/// @brief Field m_RotateReferenceFrame, offset: 0x300, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RotateReferenceFrame;

/// [FormerlySerializedAs("m_AnchorRotationMode")]
/// [SerializeField]
/// @brief Field m_RotateMode, offset: 0x308, size: 0x4, def value: None
 ::GlobalNamespace::XRRayInteractor_RotateMode  ___m_RotateMode;

/// [SerializeField]
/// @brief Field m_UIHoverEntered, offset: 0x310, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  ___m_UIHoverEntered;

/// [SerializeField]
/// @brief Field m_UIHoverExited, offset: 0x318, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  ___m_UIHoverExited;

/// [SerializeField]
/// @brief Field m_EnableARRaycasting, offset: 0x320, size: 0x1, def value: None
 bool  ___m_EnableARRaycasting;

/// [SerializeField]
/// @brief Field m_OccludeARHitsWith3DObjects, offset: 0x321, size: 0x1, def value: None
 bool  ___m_OccludeARHitsWith3DObjects;

/// [SerializeField]
/// @brief Field m_OccludeARHitsWith2DObjects, offset: 0x322, size: 0x1, def value: None
 bool  ___m_OccludeARHitsWith2DObjects;

/// [SerializeField]
/// @brief Field m_ScaleMode, offset: 0x324, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  ___m_ScaleMode;

/// [SerializeField]
/// @brief Field m_UIPressInput, offset: 0x328, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_UIPressInput;

/// [SerializeField]
/// @brief Field m_UIScrollInput, offset: 0x330, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_UIScrollInput;

/// [SerializeField]
/// @brief Field m_TranslateManipulationInput, offset: 0x338, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_TranslateManipulationInput;

/// [SerializeField]
/// @brief Field m_RotateManipulationInput, offset: 0x340, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_RotateManipulationInput;

/// [SerializeField]
/// @brief Field m_DirectionalManipulationInput, offset: 0x348, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_DirectionalManipulationInput;

/// [SerializeField]
/// @brief Field m_ScaleToggleInput, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ScaleToggleInput;

/// [SerializeField]
/// @brief Field m_ScaleOverTimeInput, offset: 0x358, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_ScaleOverTimeInput;

/// [SerializeField]
/// @brief Field m_ScaleDistanceDeltaInput, offset: 0x360, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_ScaleDistanceDeltaInput;

/// [CompilerGenerated]
/// @brief Field <currentNearestValidTarget>k__BackingField, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ____currentNearestValidTarget_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rayEndPoint>k__BackingField, offset: 0x370, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rayEndPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rayEndTransform>k__BackingField, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rayEndTransform_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <scaleValue>k__BackingField, offset: 0x388, size: 0x4, def value: None
 float_t  ____scaleValue_k__BackingField;

/// @brief Field m_HasRayOriginTransform, offset: 0x38c, size: 0x1, def value: None
 bool  ___m_HasRayOriginTransform;

/// @brief Field m_HasReferenceFrame, offset: 0x38d, size: 0x1, def value: None
 bool  ___m_HasReferenceFrame;

/// @brief Field m_ScaleInputActive, offset: 0x38e, size: 0x1, def value: None
 bool  ___m_ScaleInputActive;

/// @brief Field m_ValidTargets, offset: 0x390, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_ValidTargets;

/// @brief Field m_InteractableRaycastHits, offset: 0x398, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*  ___m_InteractableRaycastHits;

/// @brief Field m_LastTimeHoveredObjectChanged, offset: 0x3a0, size: 0x4, def value: None
 float_t  ___m_LastTimeHoveredObjectChanged;

/// @brief Field m_PassedHoverTimeToSelect, offset: 0x3a4, size: 0x1, def value: None
 bool  ___m_PassedHoverTimeToSelect;

/// @brief Field m_LastTimeAutoSelected, offset: 0x3a8, size: 0x4, def value: None
 float_t  ___m_LastTimeAutoSelected;

/// @brief Field m_PassedTimeToAutoDeselect, offset: 0x3ac, size: 0x1, def value: None
 bool  ___m_PassedTimeToAutoDeselect;

/// @brief Field m_LastUIObject, offset: 0x3b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_LastUIObject;

/// @brief Field m_LastTimeHoveredUIChanged, offset: 0x3b8, size: 0x4, def value: None
 float_t  ___m_LastTimeHoveredUIChanged;

/// @brief Field m_HoverUISelectActive, offset: 0x3bc, size: 0x1, def value: None
 bool  ___m_HoverUISelectActive;

/// @brief Field m_BlockUIAutoDeselect, offset: 0x3bd, size: 0x1, def value: None
 bool  ___m_BlockUIAutoDeselect;

/// @brief Field m_RaycastHits, offset: 0x3c0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_RaycastHits;

/// @brief Field m_RaycastHitsCount, offset: 0x3c8, size: 0x4, def value: None
 int32_t  ___m_RaycastHitsCount;

/// @brief Field m_RaycastHitComparer, offset: 0x3d0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*  ___m_RaycastHitComparer;

/// @brief Field m_SamplePoints, offset: 0x3d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  ___m_SamplePoints;

/// @brief Field m_SamplePointsFrameUpdated, offset: 0x3e0, size: 0x4, def value: None
 int32_t  ___m_SamplePointsFrameUpdated;

/// @brief Field m_RaycastHitEndpointIndex, offset: 0x3e4, size: 0x4, def value: None
 int32_t  ___m_RaycastHitEndpointIndex;

/// @brief Field m_UIRaycastHitEndpointIndex, offset: 0x3e8, size: 0x4, def value: None
 int32_t  ___m_UIRaycastHitEndpointIndex;

/// @brief Field m_ControlPoints, offset: 0x3f0, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::float3>  ___m_ControlPoints;

/// @brief Field m_HitChordControlPoints, offset: 0x3f8, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::float3>  ___m_HitChordControlPoints;

/// @brief Field m_LocalPhysicsScene, offset: 0x400, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_RegisteredUIInteractorCache, offset: 0x408, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  ___m_RegisteredUIInteractorCache;

/// @brief Field m_RaycastHitOccurred, offset: 0x410, size: 0x1, def value: None
 bool  ___m_RaycastHitOccurred;

/// @brief Field m_RaycastHit, offset: 0x414, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___m_RaycastHit;

/// @brief Field m_UIRaycastHit, offset: 0x440, size: 0x70, def value: None
 ::UnityEngine::EventSystems::RaycastResult  ___m_UIRaycastHit;

/// @brief Field m_IsUIHitClosest, offset: 0x4b0, size: 0x1, def value: None
 bool  ___m_IsUIHitClosest;

/// @brief Field m_RaycastInteractable, offset: 0x4b8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_RaycastInteractable;

/// [Obsolete("m_ActionBasedController has been deprecated in version 3.0.0.")]
/// @brief Field m_ActionBasedController, offset: 0x4c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>  ___m_ActionBasedController;

/// [Obsolete("m_DeviceBasedController has been deprecated in version 3.0.0.")]
/// @brief Field m_DeviceBasedController, offset: 0x4c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  ___m_DeviceBasedController;

/// [Obsolete("m_ScreenSpaceController has been deprecated in version 3.0.0.")]
/// @brief Field m_ScreenSpaceController, offset: 0x4d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>  ___m_ScreenSpaceController;

/// [Obsolete("m_IsActionBasedController has been deprecated in version 3.0.0.")]
/// @brief Field m_IsActionBasedController, offset: 0x4d8, size: 0x1, def value: None
 bool  ___m_IsActionBasedController;

/// [Obsolete("m_IsDeviceBasedController has been deprecated in version 3.0.0.")]
/// @brief Field m_IsDeviceBasedController, offset: 0x4d9, size: 0x1, def value: None
 bool  ___m_IsDeviceBasedController;

/// [Obsolete("m_IsScreenSpaceController has been deprecated in version 3.0.0.")]
/// @brief Field m_IsScreenSpaceController, offset: 0x4da, size: 0x1, def value: None
 bool  ___m_IsScreenSpaceController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ConeCastDebugInfo) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LineType) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_BlendVisualLinePoints) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_MaxRaycastDistance) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RayOriginTransform) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ReferenceFrame) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_Velocity) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_Acceleration) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_AdditionalGroundHeight) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_AdditionalFlightTime) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_EndPointDistance) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_EndPointHeight) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ControlPointDistance) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ControlPointHeight) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_SampleFrequency) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HitDetectionType) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_SphereCastRadius) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ConeCastAngle) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_CachedConeCastAngle) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_CachedConeCastRadius) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LiveConeCastDebugVisuals) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastMask) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastTriggerInteraction) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastSnapVolumeInteraction) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HitClosestOnly) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HoverToSelect) == 0x2e1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HoverTimeToSelect) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_AutoDeselect) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_TimeToAutoDeselect) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_EnableUIInteraction) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_BlockInteractionsWithScreenSpaceUI) == 0x2f1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_BlockUIOnInteractableSelection) == 0x2f2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ManipulateAttachTransform) == 0x2f3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UseForceGrab) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RotateSpeed) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_TranslateSpeed) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RotateReferenceFrame) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RotateMode) == 0x308, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIHoverEntered) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIHoverExited) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_EnableARRaycasting) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_OccludeARHitsWith3DObjects) == 0x321, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_OccludeARHitsWith2DObjects) == 0x322, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScaleMode) == 0x324, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIPressInput) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIScrollInput) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_TranslateManipulationInput) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RotateManipulationInput) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_DirectionalManipulationInput) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScaleToggleInput) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScaleOverTimeInput) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScaleDistanceDeltaInput) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ____currentNearestValidTarget_k__BackingField) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ____rayEndPoint_k__BackingField) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ____rayEndTransform_k__BackingField) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ____scaleValue_k__BackingField) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HasRayOriginTransform) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HasReferenceFrame) == 0x38d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScaleInputActive) == 0x38e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ValidTargets) == 0x390, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_InteractableRaycastHits) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LastTimeHoveredObjectChanged) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_PassedHoverTimeToSelect) == 0x3a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LastTimeAutoSelected) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_PassedTimeToAutoDeselect) == 0x3ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LastUIObject) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LastTimeHoveredUIChanged) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HoverUISelectActive) == 0x3bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_BlockUIAutoDeselect) == 0x3bd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHits) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHitsCount) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHitComparer) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_SamplePoints) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_SamplePointsFrameUpdated) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHitEndpointIndex) == 0x3e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIRaycastHitEndpointIndex) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ControlPoints) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_HitChordControlPoints) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_LocalPhysicsScene) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RegisteredUIInteractorCache) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHitOccurred) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastHit) == 0x414, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_UIRaycastHit) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_IsUIHitClosest) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_RaycastInteractable) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ActionBasedController) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_DeviceBasedController) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_ScreenSpaceController) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_IsActionBasedController) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_IsDeviceBasedController) == 0x4d9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor, ___m_IsScreenSpaceController) == 0x4da, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor) == 0x4e0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/<>c
class CORDL_TYPE XRRayInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*  __9;

/// @brief Field <>9__316_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__316_0, put=setStaticF___9__316_0)) ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  __9__316_0;

/// @brief Field <>9__316_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__316_1, put=setStaticF___9__316_1)) ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  __9__316_1;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c* New_ctor() ;

/// @brief Method <FilterOutTriggerColliders>b__316_0, addr 0xb4807e0, size 0x5c, virtual false, abstract: false, final false
inline bool _FilterOutTriggerColliders_b__316_0(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume) ;

/// @brief Method <FilterOutTriggerColliders>b__316_1, addr 0xb48083c, size 0x5c, virtual false, abstract: false, final false
inline bool _FilterOutTriggerColliders_b__316_1(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume) ;

/// @brief Method .ctor, addr 0xb4807d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>* getStaticF___9__316_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>* getStaticF___9__316_1() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*  value) ;

static inline void setStaticF___9__316_0(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  value) ;

static inline void setStaticF___9__316_1(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRRayInteractor___c(XRRayInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRRayInteractor___c(XRRayInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor/RaycastHitComparer
class CORDL_TYPE XRRayInteractor_RaycastHitComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept;

/// @brief Method Compare, addr 0xb480648, size 0x100, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb4804d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRRayInteractor_RaycastHitComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor_RaycastHitComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRRayInteractor_RaycastHitComparer(XRRayInteractor_RaycastHitComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRRayInteractor_RaycastHitComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRRayInteractor_RaycastHitComparer(XRRayInteractor_RaycastHitComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
