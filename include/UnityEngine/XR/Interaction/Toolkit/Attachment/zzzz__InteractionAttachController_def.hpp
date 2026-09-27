#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/InteractionAttachController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationXAxisMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationYAxisMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__MotionStabilizationMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionAttachController)
namespace GlobalNamespace {
struct InteractionAttachController_ManipulationXAxisMode;
}
namespace GlobalNamespace {
struct InteractionAttachController_ManipulationYAxisMode;
}
namespace System {
class Action;
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
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class AttachPointVelocityTracker;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IInteractionAttachController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct MotionStabilizationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine {
struct Quaternion;
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
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class InteractionAttachController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractionAttachController");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractionAttachController/ComputeAmplifiedOffset_00001157$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "InteractionAttachController/ComputeAmplifiedOffset_00001157$PostfixBurstDelegate");
// [BurstCompile]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/Interaction Attach Controller", 22)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController::ManipulationXAxisMode, UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController::ManipulationYAxisMode, UnityEngine.XR.Interaction.Toolkit.Attachment.MotionStabilizationMode
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController
class CORDL_TYPE InteractionAttachController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ManipulationXAxisMode = ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode;

using ManipulationYAxisMode = ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode;

using ComputeAmplifiedOffset_00001157$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall;

using ComputeAmplifiedOffset_00001157$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate;

 __declspec(property(get=get_angleStabilization, put=set_angleStabilization)) float_t  angleStabilization;

/// @brief Field attachUpdated, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachUpdated, put=__cordl_internal_set_attachUpdated)) ::System::Action*  attachUpdated;

 __declspec(property(get=get_combineManipulationAxes, put=set_combineManipulationAxes)) bool  combineManipulationAxes;

 __declspec(property(get=get_enableDebugLines, put=set_enableDebugLines)) bool  enableDebugLines;

 __declspec(property(get=get_hasOffset)) bool  hasOffset;

/// @brief Field m_AnchorChild, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorChild, put=__cordl_internal_set_m_AnchorChild)) ::UnityW<::UnityEngine::Transform>  m_AnchorChild;

/// @brief Field m_AnchorParent, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnchorParent, put=__cordl_internal_set_m_AnchorParent)) ::UnityW<::UnityEngine::Transform>  m_AnchorParent;

/// @brief Field m_AngleStabilization, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AngleStabilization, put=__cordl_internal_set_m_AngleStabilization)) float_t  m_AngleStabilization;

/// @brief Field m_CombineManipulationAxes, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CombineManipulationAxes, put=__cordl_internal_set_m_CombineManipulationAxes)) bool  m_CombineManipulationAxes;

/// @brief Field m_EnableDebugLines, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableDebugLines, put=__cordl_internal_set_m_EnableDebugLines)) bool  m_EnableDebugLines;

/// @brief Field m_FirstMovementFrame, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstMovementFrame, put=__cordl_internal_set_m_FirstMovementFrame)) bool  m_FirstMovementFrame;

/// @brief Field m_HasOffset, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasOffset, put=__cordl_internal_set_m_HasOffset)) bool  m_HasOffset;

/// @brief Field m_HasSelectInteractor, offset 0xce, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasSelectInteractor, put=__cordl_internal_set_m_HasSelectInteractor)) bool  m_HasSelectInteractor;

/// @brief Field m_HasXROrigin, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasXROrigin, put=__cordl_internal_set_m_HasXROrigin)) bool  m_HasXROrigin;

/// @brief Field m_LastTargetLocalPosition, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastTargetLocalPosition, put=__cordl_internal_set_m_LastTargetLocalPosition)) ::UnityEngine::Vector3  m_LastTargetLocalPosition;

/// @brief Field m_LastTargetOriginSpacePosition, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastTargetOriginSpacePosition, put=__cordl_internal_set_m_LastTargetOriginSpacePosition)) ::UnityEngine::Vector3  m_LastTargetOriginSpacePosition;

/// @brief Field m_ManipulationInput, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManipulationInput, put=__cordl_internal_set_m_ManipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_ManipulationInput;

/// @brief Field m_ManipulationRotateReferenceFrame, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManipulationRotateReferenceFrame, put=__cordl_internal_set_m_ManipulationRotateReferenceFrame)) ::UnityW<::UnityEngine::Transform>  m_ManipulationRotateReferenceFrame;

/// @brief Field m_ManipulationRotateSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManipulationRotateSpeed, put=__cordl_internal_set_m_ManipulationRotateSpeed)) float_t  m_ManipulationRotateSpeed;

/// @brief Field m_ManipulationTranslateSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManipulationTranslateSpeed, put=__cordl_internal_set_m_ManipulationTranslateSpeed)) float_t  m_ManipulationTranslateSpeed;

/// @brief Field m_ManipulationXAxisMode, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManipulationXAxisMode, put=__cordl_internal_set_m_ManipulationXAxisMode)) ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  m_ManipulationXAxisMode;

/// @brief Field m_ManipulationYAxisMode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ManipulationYAxisMode, put=__cordl_internal_set_m_ManipulationYAxisMode)) ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  m_ManipulationYAxisMode;

/// @brief Field m_MaxAdditionalVelocityScalar, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxAdditionalVelocityScalar, put=__cordl_internal_set_m_MaxAdditionalVelocityScalar)) float_t  m_MaxAdditionalVelocityScalar;

/// @brief Field m_MinAdditionalVelocityScalar, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinAdditionalVelocityScalar, put=__cordl_internal_set_m_MinAdditionalVelocityScalar)) float_t  m_MinAdditionalVelocityScalar;

/// @brief Field m_Momentum, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Momentum, put=__cordl_internal_set_m_Momentum)) float_t  m_Momentum;

/// @brief Field m_MomentumDecayFromInput, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MomentumDecayFromInput, put=__cordl_internal_set_m_MomentumDecayFromInput)) bool  m_MomentumDecayFromInput;

/// @brief Field m_MomentumDecayScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MomentumDecayScale, put=__cordl_internal_set_m_MomentumDecayScale)) float_t  m_MomentumDecayScale;

/// @brief Field m_MomentumDecayScaleFromInput, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MomentumDecayScaleFromInput, put=__cordl_internal_set_m_MomentumDecayScaleFromInput)) float_t  m_MomentumDecayScaleFromInput;

/// @brief Field m_MotionStabilizationMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MotionStabilizationMode, put=__cordl_internal_set_m_MotionStabilizationMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  m_MotionStabilizationMode;

/// @brief Field m_Pivot, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Pivot, put=__cordl_internal_set_m_Pivot)) float_t  m_Pivot;

/// @brief Field m_PositionStabilization, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionStabilization, put=__cordl_internal_set_m_PositionStabilization)) float_t  m_PositionStabilization;

/// @brief Field m_PullVelocityBias, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PullVelocityBias, put=__cordl_internal_set_m_PullVelocityBias)) float_t  m_PullVelocityBias;

/// @brief Field m_PushVelocityBias, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PushVelocityBias, put=__cordl_internal_set_m_PushVelocityBias)) float_t  m_PushVelocityBias;

/// @brief Field m_SelectInteractor, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractor, put=__cordl_internal_set_m_SelectInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  m_SelectInteractor;

/// @brief Field m_SmoothOffset, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothOffset, put=__cordl_internal_set_m_SmoothOffset)) bool  m_SmoothOffset;

/// @brief Field m_SmoothingSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothingSpeed, put=__cordl_internal_set_m_SmoothingSpeed)) float_t  m_SmoothingSpeed;

/// @brief Field m_StartLocalOffset, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartLocalOffset, put=__cordl_internal_set_m_StartLocalOffset)) ::UnityEngine::Vector3  m_StartLocalOffset;

/// @brief Field m_StartLocalOffsetLength, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartLocalOffsetLength, put=__cordl_internal_set_m_StartLocalOffsetLength)) float_t  m_StartLocalOffsetLength;

/// @brief Field m_StartLocalOffsetNormalized, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartLocalOffsetNormalized, put=__cordl_internal_set_m_StartLocalOffsetNormalized)) ::UnityEngine::Vector3  m_StartLocalOffsetNormalized;

/// @brief Field m_TargetLocalOffsetNormalized, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetLocalOffsetNormalized, put=__cordl_internal_set_m_TargetLocalOffsetNormalized)) ::UnityEngine::Vector3  m_TargetLocalOffsetNormalized;

/// @brief Field m_TransformToFollow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TransformToFollow, put=__cordl_internal_set_m_TransformToFollow)) ::UnityW<::UnityEngine::Transform>  m_TransformToFollow;

/// @brief Field m_UseDistanceBasedVelocityScaling, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseDistanceBasedVelocityScaling, put=__cordl_internal_set_m_UseDistanceBasedVelocityScaling)) bool  m_UseDistanceBasedVelocityScaling;

/// @brief Field m_UseManipulationInput, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseManipulationInput, put=__cordl_internal_set_m_UseManipulationInput)) bool  m_UseManipulationInput;

/// @brief Field m_UseMomentum, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseMomentum, put=__cordl_internal_set_m_UseMomentum)) bool  m_UseMomentum;

/// @brief Field m_VelocityTracker, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VelocityTracker, put=__cordl_internal_set_m_VelocityTracker)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*  m_VelocityTracker;

/// @brief Field m_WasVelocityScalingBlocked, offset 0xcd, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasVelocityScalingBlocked, put=__cordl_internal_set_m_WasVelocityScalingBlocked)) bool  m_WasVelocityScalingBlocked;

/// @brief Field m_XROrigin, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROrigin, put=__cordl_internal_set_m_XROrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_XROrigin;

/// @brief Field m_ZVelocityRampThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ZVelocityRampThreshold, put=__cordl_internal_set_m_ZVelocityRampThreshold)) float_t  m_ZVelocityRampThreshold;

 __declspec(property(get=get_manipulationInput, put=set_manipulationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  manipulationInput;

 __declspec(property(get=get_manipulationRotateReferenceFrame, put=set_manipulationRotateReferenceFrame)) ::UnityW<::UnityEngine::Transform>  manipulationRotateReferenceFrame;

 __declspec(property(get=get_manipulationRotateSpeed, put=set_manipulationRotateSpeed)) float_t  manipulationRotateSpeed;

 __declspec(property(get=get_manipulationTranslateSpeed, put=set_manipulationTranslateSpeed)) float_t  manipulationTranslateSpeed;

 __declspec(property(get=get_manipulationXAxisMode, put=set_manipulationXAxisMode)) ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  manipulationXAxisMode;

 __declspec(property(get=get_manipulationYAxisMode, put=set_manipulationYAxisMode)) ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  manipulationYAxisMode;

 __declspec(property(get=get_maxAdditionalVelocityScalar, put=set_maxAdditionalVelocityScalar)) float_t  maxAdditionalVelocityScalar;

 __declspec(property(get=get_minAdditionalVelocityScalar, put=set_minAdditionalVelocityScalar)) float_t  minAdditionalVelocityScalar;

 __declspec(property(get=get_momentumDecayScale, put=set_momentumDecayScale)) float_t  momentumDecayScale;

 __declspec(property(get=get_momentumDecayScaleFromInput, put=set_momentumDecayScaleFromInput)) float_t  momentumDecayScaleFromInput;

 __declspec(property(get=get_motionStabilizationMode, put=set_motionStabilizationMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  motionStabilizationMode;

 __declspec(property(get=get_positionStabilization, put=set_positionStabilization)) float_t  positionStabilization;

 __declspec(property(get=get_pullVelocityBias, put=set_pullVelocityBias)) float_t  pullVelocityBias;

 __declspec(property(get=get_pushVelocityBias, put=set_pushVelocityBias)) float_t  pushVelocityBias;

 __declspec(property(get=get_smoothOffset, put=set_smoothOffset)) bool  smoothOffset;

 __declspec(property(get=get_smoothingSpeed, put=set_smoothingSpeed)) float_t  smoothingSpeed;

 __declspec(property(get=get_transformToFollow, put=set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

 __declspec(property(get=get_useDistanceBasedVelocityScaling, put=set_useDistanceBasedVelocityScaling)) bool  useDistanceBasedVelocityScaling;

 __declspec(property(get=get_useManipulationInput, put=set_useManipulationInput)) bool  useManipulationInput;

 __declspec(property(get=get_useMomentum, put=set_useMomentum)) bool  useMomentum;

 __declspec(property(get=get_zVelocityRampThreshold, put=set_zVelocityRampThreshold)) float_t  zVelocityRampThreshold;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*() noexcept;

/// @brief Method Awake, addr 0xb4ae710, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Attachment.UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController::ComputeAmplifiedOffset_00001157$PostfixBurstDelegate))]
/// @brief Method ComputeAmplifiedOffset, addr 0xb4ae158, size 0xc, virtual false, abstract: false, final false
static inline void ComputeAmplifiedOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset) ;

/// [BurstCompile]
/// @brief Method ComputeAmplifiedOffset$BurstManaged, addr 0xb4b06e0, size 0x4f0, virtual false, abstract: false, final false
static inline void ComputeAmplifiedOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset) ;

/// @brief Method DoPositionUpdate, addr 0xb4afea8, size 0x3b4, virtual false, abstract: false, final false
inline void DoPositionUpdate(float_t  deltaTime) ;

/// @brief Method FilterManipulationInput, addr 0xb4b03b0, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 FilterManipulationInput(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  input) ;

/// @brief Method GetXROriginTransform, addr 0xb4ae538, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetXROriginTransform() ;

/// @brief Method InitializeXROrigin, addr 0xb4ae574, size 0xe4, virtual false, abstract: false, final false
inline bool InitializeXROrigin() ;

/// @brief Method MoveToPosition, addr 0xb4aefbc, size 0x1f8, virtual false, abstract: false, final false
inline void MoveToPosition(::UnityEngine::Vector3  targetWorldPosition) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4ae8e8, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4ae7a0, size 0x148, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb4ae658, size 0xb8, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ResetOffset, addr 0xb4af31c, size 0xa0, virtual true, abstract: false, final true
inline void ResetOffset() ;

/// @brief Method SyncAnchorParent, addr 0xb4ae980, size 0xc4, virtual false, abstract: false, final false
inline void SyncAnchorParent() ;

/// @brief Method SyncOffset, addr 0xb4af1b4, size 0x28, virtual false, abstract: false, final false
inline void SyncOffset() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalPositionOffset, addr 0xb4af1dc, size 0x84, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalPositionOffset(::UnityEngine::Vector3  offset) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalRotationOffset, addr 0xb4af260, size 0xbc, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalRotationOffset(::UnityEngine::Quaternion  localRotation) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.DoUpdate, addr 0xb4af3bc, size 0x79c, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_DoUpdate(float_t  deltaTime) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.GetOrCreateAnchorTransform, addr 0xb4aea44, size 0x538, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_GetOrCreateAnchorTransform(bool  updateTransform) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.MoveTo, addr 0xb4aef7c, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_MoveTo(::UnityEngine::Vector3  targetWorldPosition) ;

/// @brief Method UpdatePosition, addr 0xb4b025c, size 0x154, virtual false, abstract: false, final false
inline void UpdatePosition(::UnityEngine::Vector3  targetLocalPosition, float_t  deltaTime) ;

/// @brief Method UpdateVelocityScalingBlock, addr 0xb4afcb0, size 0x1f8, virtual false, abstract: false, final false
inline bool UpdateVelocityScalingBlock() ;

constexpr ::System::Action* const& __cordl_internal_get_attachUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_attachUpdated() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AnchorChild() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AnchorChild() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AnchorParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AnchorParent() ;

constexpr float_t const& __cordl_internal_get_m_AngleStabilization() const;

constexpr float_t& __cordl_internal_get_m_AngleStabilization() ;

constexpr bool const& __cordl_internal_get_m_CombineManipulationAxes() const;

constexpr bool& __cordl_internal_get_m_CombineManipulationAxes() ;

constexpr bool const& __cordl_internal_get_m_EnableDebugLines() const;

constexpr bool& __cordl_internal_get_m_EnableDebugLines() ;

constexpr bool const& __cordl_internal_get_m_FirstMovementFrame() const;

constexpr bool& __cordl_internal_get_m_FirstMovementFrame() ;

constexpr bool const& __cordl_internal_get_m_HasOffset() const;

constexpr bool& __cordl_internal_get_m_HasOffset() ;

constexpr bool const& __cordl_internal_get_m_HasSelectInteractor() const;

constexpr bool& __cordl_internal_get_m_HasSelectInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasXROrigin() const;

constexpr bool& __cordl_internal_get_m_HasXROrigin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTargetLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTargetLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTargetOriginSpacePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTargetOriginSpacePosition() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_ManipulationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_ManipulationInput() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ManipulationRotateReferenceFrame() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ManipulationRotateReferenceFrame() ;

constexpr float_t const& __cordl_internal_get_m_ManipulationRotateSpeed() const;

constexpr float_t& __cordl_internal_get_m_ManipulationRotateSpeed() ;

constexpr float_t const& __cordl_internal_get_m_ManipulationTranslateSpeed() const;

constexpr float_t& __cordl_internal_get_m_ManipulationTranslateSpeed() ;

constexpr ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode const& __cordl_internal_get_m_ManipulationXAxisMode() const;

constexpr ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode& __cordl_internal_get_m_ManipulationXAxisMode() ;

constexpr ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode const& __cordl_internal_get_m_ManipulationYAxisMode() const;

constexpr ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode& __cordl_internal_get_m_ManipulationYAxisMode() ;

constexpr float_t const& __cordl_internal_get_m_MaxAdditionalVelocityScalar() const;

constexpr float_t& __cordl_internal_get_m_MaxAdditionalVelocityScalar() ;

constexpr float_t const& __cordl_internal_get_m_MinAdditionalVelocityScalar() const;

constexpr float_t& __cordl_internal_get_m_MinAdditionalVelocityScalar() ;

constexpr float_t const& __cordl_internal_get_m_Momentum() const;

constexpr float_t& __cordl_internal_get_m_Momentum() ;

constexpr bool const& __cordl_internal_get_m_MomentumDecayFromInput() const;

constexpr bool& __cordl_internal_get_m_MomentumDecayFromInput() ;

constexpr float_t const& __cordl_internal_get_m_MomentumDecayScale() const;

constexpr float_t& __cordl_internal_get_m_MomentumDecayScale() ;

constexpr float_t const& __cordl_internal_get_m_MomentumDecayScaleFromInput() const;

constexpr float_t& __cordl_internal_get_m_MomentumDecayScaleFromInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode const& __cordl_internal_get_m_MotionStabilizationMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode& __cordl_internal_get_m_MotionStabilizationMode() ;

constexpr float_t const& __cordl_internal_get_m_Pivot() const;

constexpr float_t& __cordl_internal_get_m_Pivot() ;

constexpr float_t const& __cordl_internal_get_m_PositionStabilization() const;

constexpr float_t& __cordl_internal_get_m_PositionStabilization() ;

constexpr float_t const& __cordl_internal_get_m_PullVelocityBias() const;

constexpr float_t& __cordl_internal_get_m_PullVelocityBias() ;

constexpr float_t const& __cordl_internal_get_m_PushVelocityBias() const;

constexpr float_t& __cordl_internal_get_m_PushVelocityBias() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& __cordl_internal_get_m_SelectInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& __cordl_internal_get_m_SelectInteractor() ;

constexpr bool const& __cordl_internal_get_m_SmoothOffset() const;

constexpr bool& __cordl_internal_get_m_SmoothOffset() ;

constexpr float_t const& __cordl_internal_get_m_SmoothingSpeed() const;

constexpr float_t& __cordl_internal_get_m_SmoothingSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartLocalOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartLocalOffset() ;

constexpr float_t const& __cordl_internal_get_m_StartLocalOffsetLength() const;

constexpr float_t& __cordl_internal_get_m_StartLocalOffsetLength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartLocalOffsetNormalized() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartLocalOffsetNormalized() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetLocalOffsetNormalized() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetLocalOffsetNormalized() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_TransformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_TransformToFollow() ;

constexpr bool const& __cordl_internal_get_m_UseDistanceBasedVelocityScaling() const;

constexpr bool& __cordl_internal_get_m_UseDistanceBasedVelocityScaling() ;

constexpr bool const& __cordl_internal_get_m_UseManipulationInput() const;

constexpr bool& __cordl_internal_get_m_UseManipulationInput() ;

constexpr bool const& __cordl_internal_get_m_UseMomentum() const;

constexpr bool& __cordl_internal_get_m_UseMomentum() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker* const& __cordl_internal_get_m_VelocityTracker() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*& __cordl_internal_get_m_VelocityTracker() ;

constexpr bool const& __cordl_internal_get_m_WasVelocityScalingBlocked() const;

constexpr bool& __cordl_internal_get_m_WasVelocityScalingBlocked() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin() ;

constexpr float_t const& __cordl_internal_get_m_ZVelocityRampThreshold() const;

constexpr float_t& __cordl_internal_get_m_ZVelocityRampThreshold() ;

constexpr void __cordl_internal_set_attachUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_AnchorChild(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_AnchorParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_AngleStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_CombineManipulationAxes(bool  value) ;

constexpr void __cordl_internal_set_m_EnableDebugLines(bool  value) ;

constexpr void __cordl_internal_set_m_FirstMovementFrame(bool  value) ;

constexpr void __cordl_internal_set_m_HasOffset(bool  value) ;

constexpr void __cordl_internal_set_m_HasSelectInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_LastTargetLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastTargetOriginSpacePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_ManipulationRotateReferenceFrame(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ManipulationRotateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_ManipulationTranslateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_ManipulationXAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  value) ;

constexpr void __cordl_internal_set_m_ManipulationYAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  value) ;

constexpr void __cordl_internal_set_m_MaxAdditionalVelocityScalar(float_t  value) ;

constexpr void __cordl_internal_set_m_MinAdditionalVelocityScalar(float_t  value) ;

constexpr void __cordl_internal_set_m_Momentum(float_t  value) ;

constexpr void __cordl_internal_set_m_MomentumDecayFromInput(bool  value) ;

constexpr void __cordl_internal_set_m_MomentumDecayScale(float_t  value) ;

constexpr void __cordl_internal_set_m_MomentumDecayScaleFromInput(float_t  value) ;

constexpr void __cordl_internal_set_m_MotionStabilizationMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  value) ;

constexpr void __cordl_internal_set_m_Pivot(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionStabilization(float_t  value) ;

constexpr void __cordl_internal_set_m_PullVelocityBias(float_t  value) ;

constexpr void __cordl_internal_set_m_PushVelocityBias(float_t  value) ;

constexpr void __cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

constexpr void __cordl_internal_set_m_SmoothOffset(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_StartLocalOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StartLocalOffsetLength(float_t  value) ;

constexpr void __cordl_internal_set_m_StartLocalOffsetNormalized(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TargetLocalOffsetNormalized(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TransformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_UseDistanceBasedVelocityScaling(bool  value) ;

constexpr void __cordl_internal_set_m_UseManipulationInput(bool  value) ;

constexpr void __cordl_internal_set_m_UseMomentum(bool  value) ;

constexpr void __cordl_internal_set_m_VelocityTracker(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*  value) ;

constexpr void __cordl_internal_set_m_WasVelocityScalingBlocked(bool  value) ;

constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

constexpr void __cordl_internal_set_m_ZVelocityRampThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0xb4b05a4, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_attachUpdated, addr 0xb4ae400, size 0x9c, virtual false, abstract: false, final false
inline void add_attachUpdated(::System::Action*  value) ;

/// @brief Method get_angleStabilization, addr 0xb4ae194, size 0x8, virtual false, abstract: false, final false
inline float_t get_angleStabilization() ;

/// @brief Method get_combineManipulationAxes, addr 0xb4ae3a8, size 0x8, virtual false, abstract: false, final false
inline bool get_combineManipulationAxes() ;

/// @brief Method get_enableDebugLines, addr 0xb4ae3e8, size 0x8, virtual false, abstract: false, final false
inline bool get_enableDebugLines() ;

/// @brief Method get_hasOffset, addr 0xb4ae3f8, size 0x8, virtual true, abstract: false, final true
inline bool get_hasOffset() ;

/// @brief Method get_manipulationInput, addr 0xb4ae324, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_manipulationInput() ;

/// @brief Method get_manipulationRotateReferenceFrame, addr 0xb4ae3d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_manipulationRotateReferenceFrame() ;

/// @brief Method get_manipulationRotateSpeed, addr 0xb4ae3c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_manipulationRotateSpeed() ;

/// @brief Method get_manipulationTranslateSpeed, addr 0xb4ae3b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_manipulationTranslateSpeed() ;

/// @brief Method get_manipulationXAxisMode, addr 0xb4ae388, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode get_manipulationXAxisMode() ;

/// @brief Method get_manipulationYAxisMode, addr 0xb4ae398, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode get_manipulationYAxisMode() ;

/// @brief Method get_maxAdditionalVelocityScalar, addr 0xb4ae2ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxAdditionalVelocityScalar() ;

/// @brief Method get_minAdditionalVelocityScalar, addr 0xb4ae2c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_minAdditionalVelocityScalar() ;

/// @brief Method get_momentumDecayScale, addr 0xb4ae1fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_momentumDecayScale() ;

/// @brief Method get_momentumDecayScaleFromInput, addr 0xb4ae224, size 0x8, virtual false, abstract: false, final false
inline float_t get_momentumDecayScaleFromInput() ;

/// @brief Method get_motionStabilizationMode, addr 0xb4ae174, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode get_motionStabilizationMode() ;

/// @brief Method get_positionStabilization, addr 0xb4ae184, size 0x8, virtual false, abstract: false, final false
inline float_t get_positionStabilization() ;

/// @brief Method get_pullVelocityBias, addr 0xb4ae274, size 0x8, virtual false, abstract: false, final false
inline float_t get_pullVelocityBias() ;

/// @brief Method get_pushVelocityBias, addr 0xb4ae29c, size 0x8, virtual false, abstract: false, final false
inline float_t get_pushVelocityBias() ;

/// @brief Method get_smoothOffset, addr 0xb4ae1a4, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothOffset() ;

/// @brief Method get_smoothingSpeed, addr 0xb4ae1b4, size 0x8, virtual false, abstract: false, final false
inline float_t get_smoothingSpeed() ;

/// @brief Method get_transformToFollow, addr 0xb4ae164, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_transformToFollow() ;

/// @brief Method get_useDistanceBasedVelocityScaling, addr 0xb4ae1dc, size 0x8, virtual false, abstract: false, final false
inline bool get_useDistanceBasedVelocityScaling() ;

/// @brief Method get_useManipulationInput, addr 0xb4ae314, size 0x8, virtual false, abstract: false, final false
inline bool get_useManipulationInput() ;

/// @brief Method get_useMomentum, addr 0xb4ae1ec, size 0x8, virtual false, abstract: false, final false
inline bool get_useMomentum() ;

/// @brief Method get_zVelocityRampThreshold, addr 0xb4ae24c, size 0x8, virtual false, abstract: false, final false
inline float_t get_zVelocityRampThreshold() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IInteractionAttachController() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_attachUpdated, addr 0xb4ae49c, size 0x9c, virtual false, abstract: false, final false
inline void remove_attachUpdated(::System::Action*  value) ;

/// @brief Method set_angleStabilization, addr 0xb4ae19c, size 0x8, virtual false, abstract: false, final false
inline void set_angleStabilization(float_t  value) ;

/// @brief Method set_combineManipulationAxes, addr 0xb4ae3b0, size 0x8, virtual false, abstract: false, final false
inline void set_combineManipulationAxes(bool  value) ;

/// @brief Method set_enableDebugLines, addr 0xb4ae3f0, size 0x8, virtual false, abstract: false, final false
inline void set_enableDebugLines(bool  value) ;

/// @brief Method set_manipulationInput, addr 0xb4ae32c, size 0x5c, virtual false, abstract: false, final false
inline void set_manipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_manipulationRotateReferenceFrame, addr 0xb4ae3e0, size 0x8, virtual false, abstract: false, final false
inline void set_manipulationRotateReferenceFrame(::UnityEngine::Transform*  value) ;

/// @brief Method set_manipulationRotateSpeed, addr 0xb4ae3d0, size 0x8, virtual false, abstract: false, final false
inline void set_manipulationRotateSpeed(float_t  value) ;

/// @brief Method set_manipulationTranslateSpeed, addr 0xb4ae3c0, size 0x8, virtual false, abstract: false, final false
inline void set_manipulationTranslateSpeed(float_t  value) ;

/// @brief Method set_manipulationXAxisMode, addr 0xb4ae390, size 0x8, virtual false, abstract: false, final false
inline void set_manipulationXAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  value) ;

/// @brief Method set_manipulationYAxisMode, addr 0xb4ae3a0, size 0x8, virtual false, abstract: false, final false
inline void set_manipulationYAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  value) ;

/// @brief Method set_maxAdditionalVelocityScalar, addr 0xb4ae2f4, size 0x20, virtual false, abstract: false, final false
inline void set_maxAdditionalVelocityScalar(float_t  value) ;

/// @brief Method set_minAdditionalVelocityScalar, addr 0xb4ae2cc, size 0x20, virtual false, abstract: false, final false
inline void set_minAdditionalVelocityScalar(float_t  value) ;

/// @brief Method set_momentumDecayScale, addr 0xb4ae204, size 0x20, virtual false, abstract: false, final false
inline void set_momentumDecayScale(float_t  value) ;

/// @brief Method set_momentumDecayScaleFromInput, addr 0xb4ae22c, size 0x20, virtual false, abstract: false, final false
inline void set_momentumDecayScaleFromInput(float_t  value) ;

/// @brief Method set_motionStabilizationMode, addr 0xb4ae17c, size 0x8, virtual true, abstract: false, final true
inline void set_motionStabilizationMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  value) ;

/// @brief Method set_positionStabilization, addr 0xb4ae18c, size 0x8, virtual false, abstract: false, final false
inline void set_positionStabilization(float_t  value) ;

/// @brief Method set_pullVelocityBias, addr 0xb4ae27c, size 0x20, virtual false, abstract: false, final false
inline void set_pullVelocityBias(float_t  value) ;

/// @brief Method set_pushVelocityBias, addr 0xb4ae2a4, size 0x20, virtual false, abstract: false, final false
inline void set_pushVelocityBias(float_t  value) ;

/// @brief Method set_smoothOffset, addr 0xb4ae1ac, size 0x8, virtual false, abstract: false, final false
inline void set_smoothOffset(bool  value) ;

/// @brief Method set_smoothingSpeed, addr 0xb4ae1bc, size 0x20, virtual false, abstract: false, final false
inline void set_smoothingSpeed(float_t  value) ;

/// @brief Method set_transformToFollow, addr 0xb4ae16c, size 0x8, virtual true, abstract: false, final true
inline void set_transformToFollow(::UnityEngine::Transform*  value) ;

/// @brief Method set_useDistanceBasedVelocityScaling, addr 0xb4ae1e4, size 0x8, virtual false, abstract: false, final false
inline void set_useDistanceBasedVelocityScaling(bool  value) ;

/// @brief Method set_useManipulationInput, addr 0xb4ae31c, size 0x8, virtual false, abstract: false, final false
inline void set_useManipulationInput(bool  value) ;

/// @brief Method set_useMomentum, addr 0xb4ae1f4, size 0x8, virtual false, abstract: false, final false
inline void set_useMomentum(bool  value) ;

/// @brief Method set_zVelocityRampThreshold, addr 0xb4ae254, size 0x20, virtual false, abstract: false, final false
inline void set_zVelocityRampThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionAttachController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionAttachController(InteractionAttachController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionAttachController(InteractionAttachController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11587};

/// [SerializeField]
/// @brief Field m_TransformToFollow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_TransformToFollow;

/// [SerializeField]
/// @brief Field m_MotionStabilizationMode, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  ___m_MotionStabilizationMode;

/// [SerializeField]
/// @brief Field m_PositionStabilization, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_PositionStabilization;

/// [SerializeField]
/// @brief Field m_AngleStabilization, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_AngleStabilization;

/// [SerializeField]
/// @brief Field m_SmoothOffset, offset: 0x34, size: 0x1, def value: None
 bool  ___m_SmoothOffset;

/// [SerializeField]
/// [Range(1, 30)]
/// @brief Field m_SmoothingSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_SmoothingSpeed;

/// [SerializeField]
/// @brief Field m_UseDistanceBasedVelocityScaling, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_UseDistanceBasedVelocityScaling;

/// [SerializeField]
/// @brief Field m_UseMomentum, offset: 0x3d, size: 0x1, def value: None
 bool  ___m_UseMomentum;

/// [SerializeField]
/// [Range(0, 10)]
/// @brief Field m_MomentumDecayScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MomentumDecayScale;

/// [SerializeField]
/// [Range(0, 10)]
/// @brief Field m_MomentumDecayScaleFromInput, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_MomentumDecayScaleFromInput;

/// [SerializeField]
/// [Range(0, 5)]
/// @brief Field m_ZVelocityRampThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_ZVelocityRampThreshold;

/// [SerializeField]
/// [Range(0, 2)]
/// @brief Field m_PullVelocityBias, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_PullVelocityBias;

/// [SerializeField]
/// [Range(0, 2)]
/// @brief Field m_PushVelocityBias, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_PushVelocityBias;

/// [SerializeField]
/// [Range(0, 2)]
/// @brief Field m_MinAdditionalVelocityScalar, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_MinAdditionalVelocityScalar;

/// [SerializeField]
/// [Range(0, 5)]
/// @brief Field m_MaxAdditionalVelocityScalar, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_MaxAdditionalVelocityScalar;

/// [SerializeField]
/// @brief Field m_UseManipulationInput, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_UseManipulationInput;

/// [SerializeField]
/// @brief Field m_ManipulationInput, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_ManipulationInput;

/// [SerializeField]
/// @brief Field m_ManipulationXAxisMode, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  ___m_ManipulationXAxisMode;

/// [SerializeField]
/// @brief Field m_ManipulationYAxisMode, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  ___m_ManipulationYAxisMode;

/// [SerializeField]
/// @brief Field m_CombineManipulationAxes, offset: 0x70, size: 0x1, def value: None
 bool  ___m_CombineManipulationAxes;

/// [SerializeField]
/// @brief Field m_ManipulationTranslateSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___m_ManipulationTranslateSpeed;

/// [SerializeField]
/// @brief Field m_ManipulationRotateSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_ManipulationRotateSpeed;

/// [SerializeField]
/// @brief Field m_ManipulationRotateReferenceFrame, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ManipulationRotateReferenceFrame;

/// [SerializeField]
/// @brief Field m_EnableDebugLines, offset: 0x88, size: 0x1, def value: None
 bool  ___m_EnableDebugLines;

/// [CompilerGenerated]
/// @brief Field attachUpdated, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___attachUpdated;

/// @brief Field m_FirstMovementFrame, offset: 0x98, size: 0x1, def value: None
 bool  ___m_FirstMovementFrame;

/// @brief Field m_HasOffset, offset: 0x99, size: 0x1, def value: None
 bool  ___m_HasOffset;

/// @brief Field m_StartLocalOffsetLength, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_StartLocalOffsetLength;

/// @brief Field m_StartLocalOffset, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartLocalOffset;

/// @brief Field m_StartLocalOffsetNormalized, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartLocalOffsetNormalized;

/// @brief Field m_TargetLocalOffsetNormalized, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetLocalOffsetNormalized;

/// @brief Field m_Pivot, offset: 0xc4, size: 0x4, def value: None
 float_t  ___m_Pivot;

/// @brief Field m_Momentum, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_Momentum;

/// @brief Field m_MomentumDecayFromInput, offset: 0xcc, size: 0x1, def value: None
 bool  ___m_MomentumDecayFromInput;

/// @brief Field m_WasVelocityScalingBlocked, offset: 0xcd, size: 0x1, def value: None
 bool  ___m_WasVelocityScalingBlocked;

/// @brief Field m_HasSelectInteractor, offset: 0xce, size: 0x1, def value: None
 bool  ___m_HasSelectInteractor;

/// @brief Field m_SelectInteractor, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  ___m_SelectInteractor;

/// @brief Field m_HasXROrigin, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_HasXROrigin;

/// @brief Field m_XROrigin, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_XROrigin;

/// @brief Field m_AnchorParent, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_AnchorParent;

/// @brief Field m_AnchorChild, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_AnchorChild;

/// @brief Field m_LastTargetLocalPosition, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastTargetLocalPosition;

/// @brief Field m_LastTargetOriginSpacePosition, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastTargetOriginSpacePosition;

/// @brief Field m_VelocityTracker, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*  ___m_VelocityTracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_TransformToFollow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MotionStabilizationMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_PositionStabilization) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_AngleStabilization) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_SmoothOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_SmoothingSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_UseDistanceBasedVelocityScaling) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_UseMomentum) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MomentumDecayScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MomentumDecayScaleFromInput) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ZVelocityRampThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_PullVelocityBias) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_PushVelocityBias) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MinAdditionalVelocityScalar) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MaxAdditionalVelocityScalar) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_UseManipulationInput) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationInput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationXAxisMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationYAxisMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_CombineManipulationAxes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationTranslateSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationRotateSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_ManipulationRotateReferenceFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_EnableDebugLines) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___attachUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_FirstMovementFrame) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_HasOffset) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_StartLocalOffsetLength) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_StartLocalOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_StartLocalOffsetNormalized) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_TargetLocalOffsetNormalized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_Pivot) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_Momentum) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_MomentumDecayFromInput) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_WasVelocityScalingBlocked) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_HasSelectInteractor) == 0xce, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_SelectInteractor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_HasXROrigin) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_XROrigin) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_AnchorParent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_AnchorChild) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_LastTargetLocalPosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_LastTargetOriginSpacePosition) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController, ___m_VelocityTracker) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController/ComputeAmplifiedOffset_00001157$BurstDirectCall
class CORDL_TYPE InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4b0fbc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4b0ecc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b03f4, size 0x1b0, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall(InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall(InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController/ComputeAmplifiedOffset_00001157$PostfixBurstDelegate
class CORDL_TYPE InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4b0ca4, size 0x21c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_18) ;

/// @brief Method EndInvoke, addr 0xb4b0ec0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4b0c84, size 0x20, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4b0bd0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate(InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate(InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
