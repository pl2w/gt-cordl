#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/XRInteractorLineVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorLineVisual)
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
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IXRCustomReticleProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class FloatTweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/ComputeNewRenderPoints_00000D7D$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/EvaluateLineEndPoint_00000D7E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorLineVisual/EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/Visual/XR Interactor Line Visual", 11)]
// [DisallowMultipleComponent]
// [RequireComponent(typeof(UnityEngine.LineRenderer))]
// [DefaultExecutionOrder(100)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual.html")]
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual
class CORDL_TYPE XRInteractorLineVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall;

using CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate;

using ComputeNewRenderPoints_00000D7D$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall;

using ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate;

using EvaluateLineEndPoint_00000D7E$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall;

using EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate;

 __declspec(property(get=get_autoAdjustLineLength, put=set_autoAdjustLineLength)) bool  autoAdjustLineLength;

 __declspec(property(get=get_bendingEnabledInteractionLayers, put=set_bendingEnabledInteractionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  bendingEnabledInteractionLayers;

 __declspec(property(get=get_blockedColorGradient, put=set_blockedColorGradient)) ::UnityEngine::Gradient*  blockedColorGradient;

 __declspec(property(get=get_blockedReticle, put=set_blockedReticle)) ::UnityW<::UnityEngine::GameObject>  blockedReticle;

 __declspec(property(get=get_followTightness, put=set_followTightness)) float_t  followTightness;

 __declspec(property(get=get_invalidColorGradient, put=set_invalidColorGradient)) ::UnityEngine::Gradient*  invalidColorGradient;

 __declspec(property(get=get_lineBendRatio, put=set_lineBendRatio)) float_t  lineBendRatio;

 __declspec(property(get=get_lineLength, put=set_lineLength)) float_t  lineLength;

 __declspec(property(get=get_lineLengthChangeSpeed, put=set_lineLengthChangeSpeed)) float_t  lineLengthChangeSpeed;

 __declspec(property(get=get_lineOriginOffset, put=set_lineOriginOffset)) float_t  lineOriginOffset;

 __declspec(property(get=get_lineOriginTransform, put=set_lineOriginTransform)) ::UnityW<::UnityEngine::Transform>  lineOriginTransform;

 __declspec(property(get=get_lineRetractionDelay, put=set_lineRetractionDelay)) float_t  lineRetractionDelay;

 __declspec(property(get=get_lineWidth, put=set_lineWidth)) float_t  lineWidth;

/// @brief Field m_AdvancedLineRenderable, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdvancedLineRenderable, put=__cordl_internal_set_m_AdvancedLineRenderable)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*  m_AdvancedLineRenderable;

/// @brief Field m_AutoAdjustLineLength, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoAdjustLineLength, put=__cordl_internal_set_m_AutoAdjustLineLength)) bool  m_AutoAdjustLineLength;

/// @brief Field m_BendingEnabledInteractionLayers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BendingEnabledInteractionLayers, put=__cordl_internal_set_m_BendingEnabledInteractionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  m_BendingEnabledInteractionLayers;

/// @brief Field m_BindingsGroup, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_BlockedColorGradient, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlockedColorGradient, put=__cordl_internal_set_m_BlockedColorGradient)) ::UnityEngine::Gradient*  m_BlockedColorGradient;

/// @brief Field m_BlockedReticle, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlockedReticle, put=__cordl_internal_set_m_BlockedReticle)) ::UnityW<::UnityEngine::GameObject>  m_BlockedReticle;

/// @brief Field m_ClearArray, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClearArray, put=__cordl_internal_set_m_ClearArray)) ::ArrayW<::UnityEngine::Vector3>  m_ClearArray;

/// @brief Field m_CurrentHitPoint, offset 0x198, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CurrentHitPoint, put=__cordl_internal_set_m_CurrentHitPoint)) ::UnityEngine::Vector3  m_CurrentHitPoint;

/// @brief Field m_CustomReticle, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomReticle, put=__cordl_internal_set_m_CustomReticle)) ::UnityW<::UnityEngine::GameObject>  m_CustomReticle;

/// @brief Field m_CustomReticleAttached, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CustomReticleAttached, put=__cordl_internal_set_m_CustomReticleAttached)) bool  m_CustomReticleAttached;

/// @brief Field m_EndPositionInLine, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndPositionInLine, put=__cordl_internal_set_m_EndPositionInLine)) int32_t  m_EndPositionInLine;

/// @brief Field m_FollowTightness, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FollowTightness, put=__cordl_internal_set_m_FollowTightness)) float_t  m_FollowTightness;

/// @brief Field m_HasAdvancedLineRenderable, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasAdvancedLineRenderable, put=__cordl_internal_set_m_HasAdvancedLineRenderable)) bool  m_HasAdvancedLineRenderable;

/// @brief Field m_HasBaseInteractor, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasBaseInteractor, put=__cordl_internal_set_m_HasBaseInteractor)) bool  m_HasBaseInteractor;

/// @brief Field m_HasHitInfo, offset 0x1a4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasHitInfo, put=__cordl_internal_set_m_HasHitInfo)) bool  m_HasHitInfo;

/// @brief Field m_HasHoverInteractor, offset 0x1c2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasHoverInteractor, put=__cordl_internal_set_m_HasHoverInteractor)) bool  m_HasHoverInteractor;

/// @brief Field m_HasRayInteractor, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasRayInteractor, put=__cordl_internal_set_m_HasRayInteractor)) bool  m_HasRayInteractor;

/// @brief Field m_HasSelectInteractor, offset 0x1c3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasSelectInteractor, put=__cordl_internal_set_m_HasSelectInteractor)) bool  m_HasSelectInteractor;

/// @brief Field m_InvalidColorGradient, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InvalidColorGradient, put=__cordl_internal_set_m_InvalidColorGradient)) ::UnityEngine::Gradient*  m_InvalidColorGradient;

/// @brief Field m_LastValidHitTime, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastValidHitTime, put=__cordl_internal_set_m_LastValidHitTime)) float_t  m_LastValidHitTime;

/// @brief Field m_LastValidLineLength, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastValidLineLength, put=__cordl_internal_set_m_LastValidLineLength)) float_t  m_LastValidLineLength;

/// @brief Field m_LineBendRatio, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineBendRatio, put=__cordl_internal_set_m_LineBendRatio)) float_t  m_LineBendRatio;

/// @brief Field m_LineLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineLength, put=__cordl_internal_set_m_LineLength)) float_t  m_LineLength;

/// @brief Field m_LineLengthChangeSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineLengthChangeSpeed, put=__cordl_internal_set_m_LineLengthChangeSpeed)) float_t  m_LineLengthChangeSpeed;

/// @brief Field m_LineLengthOverrideTweenableVariable, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineLengthOverrideTweenableVariable, put=__cordl_internal_set_m_LineLengthOverrideTweenableVariable)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*  m_LineLengthOverrideTweenableVariable;

/// @brief Field m_LineOriginOffset, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineOriginOffset, put=__cordl_internal_set_m_LineOriginOffset)) float_t  m_LineOriginOffset;

/// @brief Field m_LineOriginTransform, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineOriginTransform, put=__cordl_internal_set_m_LineOriginTransform)) ::UnityW<::UnityEngine::Transform>  m_LineOriginTransform;

/// @brief Field m_LineRenderable, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderable, put=__cordl_internal_set_m_LineRenderable)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*  m_LineRenderable;

/// @brief Field m_LineRenderableAsBaseInteractor, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderableAsBaseInteractor, put=__cordl_internal_set_m_LineRenderableAsBaseInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  m_LineRenderableAsBaseInteractor;

/// @brief Field m_LineRenderableAsHoverInteractor, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderableAsHoverInteractor, put=__cordl_internal_set_m_LineRenderableAsHoverInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  m_LineRenderableAsHoverInteractor;

/// @brief Field m_LineRenderableAsRayInteractor, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderableAsRayInteractor, put=__cordl_internal_set_m_LineRenderableAsRayInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  m_LineRenderableAsRayInteractor;

/// @brief Field m_LineRenderableAsSelectInteractor, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderableAsSelectInteractor, put=__cordl_internal_set_m_LineRenderableAsSelectInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  m_LineRenderableAsSelectInteractor;

/// @brief Field m_LineRenderer, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderer, put=__cordl_internal_set_m_LineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  m_LineRenderer;

/// @brief Field m_LineRetractionDelay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineRetractionDelay, put=__cordl_internal_set_m_LineRetractionDelay)) float_t  m_LineRetractionDelay;

/// @brief Field m_LineWidth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineWidth, put=__cordl_internal_set_m_LineWidth)) float_t  m_LineWidth;

/// @brief Field m_MinLineLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinLineLength, put=__cordl_internal_set_m_MinLineLength)) float_t  m_MinLineLength;

/// @brief Field m_NumPreviousRenderPoints, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumPreviousRenderPoints, put=__cordl_internal_set_m_NumPreviousRenderPoints)) int32_t  m_NumPreviousRenderPoints;

/// @brief Field m_NumRenderPoints, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumRenderPoints, put=__cordl_internal_set_m_NumRenderPoints)) int32_t  m_NumRenderPoints;

/// @brief Field m_NumTargetPoints, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumTargetPoints, put=__cordl_internal_set_m_NumTargetPoints)) int32_t  m_NumTargetPoints;

/// @brief Field m_OverrideInteractorLineLength, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideInteractorLineLength, put=__cordl_internal_set_m_OverrideInteractorLineLength)) bool  m_OverrideInteractorLineLength;

/// @brief Field m_OverrideInteractorLineOrigin, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideInteractorLineOrigin, put=__cordl_internal_set_m_OverrideInteractorLineOrigin)) bool  m_OverrideInteractorLineOrigin;

/// @brief Field m_PerformSetup, offset 0xcd, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PerformSetup, put=__cordl_internal_set_m_PerformSetup)) bool  m_PerformSetup;

/// @brief Field m_PreviousCollider, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousCollider, put=__cordl_internal_set_m_PreviousCollider)) ::UnityW<::UnityEngine::Collider>  m_PreviousCollider;

/// @brief Field m_PreviousLineDirection, offset 0x18c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousLineDirection, put=__cordl_internal_set_m_PreviousLineDirection)) ::UnityEngine::Vector3  m_PreviousLineDirection;

/// @brief Field m_PreviousRenderPoints, offset 0x150, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousRenderPoints, put=__cordl_internal_set_m_PreviousRenderPoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_PreviousRenderPoints;

/// @brief Field m_PreviousShouldBendLine, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousShouldBendLine, put=__cordl_internal_set_m_PreviousShouldBendLine)) bool  m_PreviousShouldBendLine;

/// @brief Field m_RenderPoints, offset 0x138, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RenderPoints, put=__cordl_internal_set_m_RenderPoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_RenderPoints;

/// @brief Field m_Reticle, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Reticle, put=__cordl_internal_set_m_Reticle)) ::UnityW<::UnityEngine::GameObject>  m_Reticle;

/// @brief Field m_ReticleNormal, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ReticleNormal, put=__cordl_internal_set_m_ReticleNormal)) ::UnityEngine::Vector3  m_ReticleNormal;

/// @brief Field m_ReticlePos, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ReticlePos, put=__cordl_internal_set_m_ReticlePos)) ::UnityEngine::Vector3  m_ReticlePos;

/// @brief Field m_ReticleToUse, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReticleToUse, put=__cordl_internal_set_m_ReticleToUse)) ::UnityW<::UnityEngine::GameObject>  m_ReticleToUse;

/// @brief Field m_SetLineColorGradient, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SetLineColorGradient, put=__cordl_internal_set_m_SetLineColorGradient)) bool  m_SetLineColorGradient;

/// @brief Field m_SmoothMovement, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SmoothMovement, put=__cordl_internal_set_m_SmoothMovement)) bool  m_SmoothMovement;

/// @brief Field m_SnapCurve, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapCurve, put=__cordl_internal_set_m_SnapCurve)) bool  m_SnapCurve;

/// @brief Field m_SnapEndpointIfAvailable, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapEndpointIfAvailable, put=__cordl_internal_set_m_SnapEndpointIfAvailable)) bool  m_SnapEndpointIfAvailable;

/// @brief Field m_SnapThresholdDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SnapThresholdDistance, put=__cordl_internal_set_m_SnapThresholdDistance)) float_t  m_SnapThresholdDistance;

/// @brief Field m_SquareSnapThresholdDistance, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SquareSnapThresholdDistance, put=__cordl_internal_set_m_SquareSnapThresholdDistance)) float_t  m_SquareSnapThresholdDistance;

/// @brief Field m_StopLineAtFirstRaycastHit, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StopLineAtFirstRaycastHit, put=__cordl_internal_set_m_StopLineAtFirstRaycastHit)) bool  m_StopLineAtFirstRaycastHit;

/// @brief Field m_StopLineAtSelection, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StopLineAtSelection, put=__cordl_internal_set_m_StopLineAtSelection)) bool  m_StopLineAtSelection;

/// @brief Field m_TargetPoints, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_TargetPoints, put=__cordl_internal_set_m_TargetPoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_TargetPoints;

/// @brief Field m_TargetPointsFallback, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetPointsFallback, put=__cordl_internal_set_m_TargetPointsFallback)) ::ArrayW<::UnityEngine::Vector3>  m_TargetPointsFallback;

/// @brief Field m_TreatSelectionAsValidState, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TreatSelectionAsValidState, put=__cordl_internal_set_m_TreatSelectionAsValidState)) bool  m_TreatSelectionAsValidState;

/// @brief Field m_UseDistanceToHitAsMaxLineLength, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseDistanceToHitAsMaxLineLength, put=__cordl_internal_set_m_UseDistanceToHitAsMaxLineLength)) bool  m_UseDistanceToHitAsMaxLineLength;

/// @brief Field m_UserScaleVar, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UserScaleVar, put=__cordl_internal_set_m_UserScaleVar)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  m_UserScaleVar;

/// @brief Field m_ValidColorGradient, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidColorGradient, put=__cordl_internal_set_m_ValidColorGradient)) ::UnityEngine::Gradient*  m_ValidColorGradient;

/// @brief Field m_ValidHit, offset 0x1a5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ValidHit, put=__cordl_internal_set_m_ValidHit)) bool  m_ValidHit;

/// @brief Field m_WidthCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WidthCurve, put=__cordl_internal_set_m_WidthCurve)) ::UnityEngine::AnimationCurve*  m_WidthCurve;

/// @brief Field m_XRInteractableSnapVolume, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRInteractableSnapVolume, put=__cordl_internal_set_m_XRInteractableSnapVolume)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  m_XRInteractableSnapVolume;

/// @brief Field m_XROrigin, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROrigin, put=__cordl_internal_set_m_XROrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_XROrigin;

 __declspec(property(get=get_minLineLength, put=set_minLineLength)) float_t  minLineLength;

 __declspec(property(get=get_overrideInteractorLineLength, put=set_overrideInteractorLineLength)) bool  overrideInteractorLineLength;

 __declspec(property(get=get_overrideInteractorLineOrigin, put=set_overrideInteractorLineOrigin)) bool  overrideInteractorLineOrigin;

 __declspec(property(get=get_reticle, put=set_reticle)) ::UnityW<::UnityEngine::GameObject>  reticle;

 __declspec(property(get=get_setLineColorGradient, put=set_setLineColorGradient)) bool  setLineColorGradient;

 __declspec(property(get=get_smoothMovement, put=set_smoothMovement)) bool  smoothMovement;

 __declspec(property(get=get_snapEndpointIfAvailable, put=set_snapEndpointIfAvailable)) bool  snapEndpointIfAvailable;

 __declspec(property(get=get_snapThresholdDistance, put=set_snapThresholdDistance)) float_t  snapThresholdDistance;

 __declspec(property(get=get_stopLineAtFirstRaycastHit, put=set_stopLineAtFirstRaycastHit)) bool  stopLineAtFirstRaycastHit;

 __declspec(property(get=get_stopLineAtSelection, put=set_stopLineAtSelection)) bool  stopLineAtSelection;

 __declspec(property(get=get_treatSelectionAsValidState, put=set_treatSelectionAsValidState)) bool  treatSelectionAsValidState;

 __declspec(property(get=get_useDistanceToHitAsMaxLineLength, put=set_useDistanceToHitAsMaxLineLength)) bool  useDistanceToHitAsMaxLineLength;

 __declspec(property(get=get_validColorGradient, put=set_validColorGradient)) ::UnityEngine::Gradient*  validColorGradient;

 __declspec(property(get=get_widthCurve, put=set_widthCurve)) ::UnityEngine::AnimationCurve*  widthCurve;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*() noexcept;

/// @brief Method AdjustLineAndReticle, addr 0xb489c5c, size 0x444, virtual false, abstract: false, final false
inline void AdjustLineAndReticle(bool  hasSelection, bool  bendLine, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetEndPoint) ;

/// @brief Method AssignReticle, addr 0xb48a2b0, size 0x36c, virtual false, abstract: false, final false
inline void AssignReticle(bool  useBlockedVisuals) ;

/// @brief Method AttachCustomReticle, addr 0xb48a7bc, size 0x28, virtual true, abstract: false, final true
inline bool AttachCustomReticle(::UnityEngine::GameObject*  reticleInstance) ;

/// @brief Method Awake, addr 0xb487c40, size 0x21c, virtual false, abstract: false, final false
inline void Awake() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual::CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate))]
/// @brief Method CalculateLineCurveRenderPoints, addr 0xb487594, size 0x8, virtual false, abstract: false, final false
static inline void CalculateLineCurveRenderPoints(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints) ;

/// [BurstCompile]
/// @brief Method CalculateLineCurveRenderPoints$BurstManaged, addr 0xb48af68, size 0x110, virtual false, abstract: false, final false
static inline void CalculateLineCurveRenderPoints$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints) ;

/// @brief Method ClearLineRenderer, addr 0xb487f10, size 0x48, virtual false, abstract: false, final false
inline void ClearLineRenderer() ;

/// @brief Method ClearReticle, addr 0xb48a61c, size 0x98, virtual false, abstract: false, final false
inline void ClearReticle() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual::ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate))]
/// @brief Method ComputeNewRenderPoints, addr 0xb48759c, size 0x8, virtual false, abstract: false, final false
static inline int32_t ComputeNewRenderPoints(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints) ;

/// [BurstCompile]
/// @brief Method ComputeNewRenderPoints$BurstManaged, addr 0xb48b078, size 0x1f4, virtual false, abstract: false, final false
static inline int32_t ComputeNewRenderPoints$BurstManaged(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints) ;

/// @brief Method EnsureSize, addr 0xb489ba0, size 0xbc, virtual false, abstract: false, final false
static inline bool EnsureSize(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  array, int32_t  targetSize) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual::EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate))]
/// @brief Method EvaluateLineEndPoint, addr 0xb4875a4, size 0x8, virtual false, abstract: false, final false
static inline bool EvaluateLineEndPoint(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength) ;

/// [BurstCompile]
/// @brief Method EvaluateLineEndPoint$BurstManaged, addr 0xb48b26c, size 0x5b0, virtual false, abstract: false, final false
static inline bool EvaluateLineEndPoint$BurstManaged(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength) ;

/// @brief Method ExtractHitInformation, addr 0xb489594, size 0x368, virtual false, abstract: false, final false
inline bool ExtractHitInformation(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, int32_t  numTargetPoints, ::by_ref<::UnityEngine::Vector3>  targetEndPoint, ::by_ref<bool>  hitSnapVolume) ;

/// @brief Method FindClosestInteractableAttachPoint, addr 0xb4898fc, size 0x2a4, virtual false, abstract: false, final false
inline void FindClosestInteractableAttachPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, ::by_ref<::UnityEngine::Vector3>  closestPoint) ;

/// @brief Method FindXROrigin, addr 0xb487e5c, size 0xb4, virtual false, abstract: false, final false
inline void FindXROrigin() ;

/// @brief Method GetLineOriginAndDirection, addr 0xb48928c, size 0x308, virtual false, abstract: false, final false
inline void GetLineOriginAndDirection(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, int32_t  numTargetPoints, bool  isLineStraight, ::by_ref<::UnityEngine::Vector3>  lineOrigin, ::by_ref<::UnityEngine::Vector3>  lineDirection) ;

/// @brief Method GetLinePoints, addr 0xb488f08, size 0x384, virtual false, abstract: false, final false
inline bool GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints) ;

/// @brief Method LateUpdate, addr 0xb488430, size 0x110, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual* New_ctor() ;

/// [BeforeRenderOrder(101)]
/// @brief Method OnBeforeRenderLineVisual, addr 0xb488540, size 0x4, virtual false, abstract: false, final false
inline void OnBeforeRenderLineVisual() ;

/// @brief Method OnDestroy, addr 0xb488384, size 0xac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb488234, size 0x150, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb487f58, size 0x2dc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb487af0, size 0x6c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RemoveCustomReticle, addr 0xb48a7e4, size 0x28, virtual true, abstract: false, final true
inline bool RemoveCustomReticle() ;

/// @brief Method Reset, addr 0xb487aec, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetColorGradient, addr 0xb48a28c, size 0x24, virtual false, abstract: false, final false
inline void SetColorGradient(::UnityEngine::Gradient*  colorGradient) ;

/// @brief Method SetupBlockedReticle, addr 0xb48795c, size 0xf4, virtual false, abstract: false, final false
inline void SetupBlockedReticle() ;

/// @brief Method SetupReticle, addr 0xb4877d4, size 0xf4, virtual false, abstract: false, final false
inline void SetupReticle() ;

/// @brief Method TryFindLineRenderer, addr 0xb48a6b4, size 0x108, virtual false, abstract: false, final false
inline bool TryFindLineRenderer() ;

/// @brief Method UpdateLineVisual, addr 0xb488544, size 0x9c4, virtual false, abstract: false, final false
inline void UpdateLineVisual() ;

/// @brief Method UpdateSettings, addr 0xb487b5c, size 0xe4, virtual false, abstract: false, final false
inline void UpdateSettings() ;

/// @brief Method UpdateTargetLineLength, addr 0xb48a0a0, size 0x1ec, virtual false, abstract: false, final false
inline float_t UpdateTargetLineLength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  hitPoint, float_t  minimumLineLength, float_t  maximumLineLength, float_t  lineRetractionDelaySeconds, float_t  lineRetractionScalar, bool  hasHit, bool  deriveMaxLineLength) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__158_0, addr 0xb48af24, size 0x44, virtual false, abstract: false, final false
inline void _OnEnable_b__158_0(float_t  userScale) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable* const& __cordl_internal_get_m_AdvancedLineRenderable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*& __cordl_internal_get_m_AdvancedLineRenderable() ;

constexpr bool const& __cordl_internal_get_m_AutoAdjustLineLength() const;

constexpr bool& __cordl_internal_get_m_AutoAdjustLineLength() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_m_BendingEnabledInteractionLayers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_m_BendingEnabledInteractionLayers() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_BlockedColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_BlockedColorGradient() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_BlockedReticle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_BlockedReticle() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_m_ClearArray() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_m_ClearArray() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentHitPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentHitPoint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CustomReticle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CustomReticle() ;

constexpr bool const& __cordl_internal_get_m_CustomReticleAttached() const;

constexpr bool& __cordl_internal_get_m_CustomReticleAttached() ;

constexpr int32_t const& __cordl_internal_get_m_EndPositionInLine() const;

constexpr int32_t& __cordl_internal_get_m_EndPositionInLine() ;

constexpr float_t const& __cordl_internal_get_m_FollowTightness() const;

constexpr float_t& __cordl_internal_get_m_FollowTightness() ;

constexpr bool const& __cordl_internal_get_m_HasAdvancedLineRenderable() const;

constexpr bool& __cordl_internal_get_m_HasAdvancedLineRenderable() ;

constexpr bool const& __cordl_internal_get_m_HasBaseInteractor() const;

constexpr bool& __cordl_internal_get_m_HasBaseInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasHitInfo() const;

constexpr bool& __cordl_internal_get_m_HasHitInfo() ;

constexpr bool const& __cordl_internal_get_m_HasHoverInteractor() const;

constexpr bool& __cordl_internal_get_m_HasHoverInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasRayInteractor() const;

constexpr bool& __cordl_internal_get_m_HasRayInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasSelectInteractor() const;

constexpr bool& __cordl_internal_get_m_HasSelectInteractor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_InvalidColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_InvalidColorGradient() ;

constexpr float_t const& __cordl_internal_get_m_LastValidHitTime() const;

constexpr float_t& __cordl_internal_get_m_LastValidHitTime() ;

constexpr float_t const& __cordl_internal_get_m_LastValidLineLength() const;

constexpr float_t& __cordl_internal_get_m_LastValidLineLength() ;

constexpr float_t const& __cordl_internal_get_m_LineBendRatio() const;

constexpr float_t& __cordl_internal_get_m_LineBendRatio() ;

constexpr float_t const& __cordl_internal_get_m_LineLength() const;

constexpr float_t& __cordl_internal_get_m_LineLength() ;

constexpr float_t const& __cordl_internal_get_m_LineLengthChangeSpeed() const;

constexpr float_t& __cordl_internal_get_m_LineLengthChangeSpeed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable* const& __cordl_internal_get_m_LineLengthOverrideTweenableVariable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*& __cordl_internal_get_m_LineLengthOverrideTweenableVariable() ;

constexpr float_t const& __cordl_internal_get_m_LineOriginOffset() const;

constexpr float_t& __cordl_internal_get_m_LineOriginOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LineOriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LineOriginTransform() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* const& __cordl_internal_get_m_LineRenderable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*& __cordl_internal_get_m_LineRenderable() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> const& __cordl_internal_get_m_LineRenderableAsBaseInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>& __cordl_internal_get_m_LineRenderableAsBaseInteractor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* const& __cordl_internal_get_m_LineRenderableAsHoverInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*& __cordl_internal_get_m_LineRenderableAsHoverInteractor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get_m_LineRenderableAsRayInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get_m_LineRenderableAsRayInteractor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& __cordl_internal_get_m_LineRenderableAsSelectInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& __cordl_internal_get_m_LineRenderableAsSelectInteractor() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_m_LineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_m_LineRenderer() ;

constexpr float_t const& __cordl_internal_get_m_LineRetractionDelay() const;

constexpr float_t& __cordl_internal_get_m_LineRetractionDelay() ;

constexpr float_t const& __cordl_internal_get_m_LineWidth() const;

constexpr float_t& __cordl_internal_get_m_LineWidth() ;

constexpr float_t const& __cordl_internal_get_m_MinLineLength() const;

constexpr float_t& __cordl_internal_get_m_MinLineLength() ;

constexpr int32_t const& __cordl_internal_get_m_NumPreviousRenderPoints() const;

constexpr int32_t& __cordl_internal_get_m_NumPreviousRenderPoints() ;

constexpr int32_t const& __cordl_internal_get_m_NumRenderPoints() const;

constexpr int32_t& __cordl_internal_get_m_NumRenderPoints() ;

constexpr int32_t const& __cordl_internal_get_m_NumTargetPoints() const;

constexpr int32_t& __cordl_internal_get_m_NumTargetPoints() ;

constexpr bool const& __cordl_internal_get_m_OverrideInteractorLineLength() const;

constexpr bool& __cordl_internal_get_m_OverrideInteractorLineLength() ;

constexpr bool const& __cordl_internal_get_m_OverrideInteractorLineOrigin() const;

constexpr bool& __cordl_internal_get_m_OverrideInteractorLineOrigin() ;

constexpr bool const& __cordl_internal_get_m_PerformSetup() const;

constexpr bool& __cordl_internal_get_m_PerformSetup() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_PreviousCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_PreviousCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousLineDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousLineDirection() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_PreviousRenderPoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_PreviousRenderPoints() ;

constexpr bool const& __cordl_internal_get_m_PreviousShouldBendLine() const;

constexpr bool& __cordl_internal_get_m_PreviousShouldBendLine() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_RenderPoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_RenderPoints() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Reticle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Reticle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReticleNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReticleNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReticlePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReticlePos() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticleToUse() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticleToUse() ;

constexpr bool const& __cordl_internal_get_m_SetLineColorGradient() const;

constexpr bool& __cordl_internal_get_m_SetLineColorGradient() ;

constexpr bool const& __cordl_internal_get_m_SmoothMovement() const;

constexpr bool& __cordl_internal_get_m_SmoothMovement() ;

constexpr bool const& __cordl_internal_get_m_SnapCurve() const;

constexpr bool& __cordl_internal_get_m_SnapCurve() ;

constexpr bool const& __cordl_internal_get_m_SnapEndpointIfAvailable() const;

constexpr bool& __cordl_internal_get_m_SnapEndpointIfAvailable() ;

constexpr float_t const& __cordl_internal_get_m_SnapThresholdDistance() const;

constexpr float_t& __cordl_internal_get_m_SnapThresholdDistance() ;

constexpr float_t const& __cordl_internal_get_m_SquareSnapThresholdDistance() const;

constexpr float_t& __cordl_internal_get_m_SquareSnapThresholdDistance() ;

constexpr bool const& __cordl_internal_get_m_StopLineAtFirstRaycastHit() const;

constexpr bool& __cordl_internal_get_m_StopLineAtFirstRaycastHit() ;

constexpr bool const& __cordl_internal_get_m_StopLineAtSelection() const;

constexpr bool& __cordl_internal_get_m_StopLineAtSelection() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_TargetPoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_TargetPoints() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_m_TargetPointsFallback() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_m_TargetPointsFallback() ;

constexpr bool const& __cordl_internal_get_m_TreatSelectionAsValidState() const;

constexpr bool& __cordl_internal_get_m_TreatSelectionAsValidState() ;

constexpr bool const& __cordl_internal_get_m_UseDistanceToHitAsMaxLineLength() const;

constexpr bool& __cordl_internal_get_m_UseDistanceToHitAsMaxLineLength() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& __cordl_internal_get_m_UserScaleVar() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get_m_UserScaleVar() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_ValidColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_ValidColorGradient() ;

constexpr bool const& __cordl_internal_get_m_ValidHit() const;

constexpr bool& __cordl_internal_get_m_ValidHit() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_WidthCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_WidthCurve() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume> const& __cordl_internal_get_m_XRInteractableSnapVolume() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>& __cordl_internal_get_m_XRInteractableSnapVolume() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin() ;

constexpr void __cordl_internal_set_m_AdvancedLineRenderable(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*  value) ;

constexpr void __cordl_internal_set_m_AutoAdjustLineLength(bool  value) ;

constexpr void __cordl_internal_set_m_BendingEnabledInteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_BlockedColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_m_BlockedReticle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ClearArray(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_CurrentHitPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_CustomReticleAttached(bool  value) ;

constexpr void __cordl_internal_set_m_EndPositionInLine(int32_t  value) ;

constexpr void __cordl_internal_set_m_FollowTightness(float_t  value) ;

constexpr void __cordl_internal_set_m_HasAdvancedLineRenderable(bool  value) ;

constexpr void __cordl_internal_set_m_HasBaseInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasHitInfo(bool  value) ;

constexpr void __cordl_internal_set_m_HasHoverInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasRayInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasSelectInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_InvalidColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_m_LastValidHitTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LastValidLineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_LineBendRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_LineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_LineLengthChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_LineLengthOverrideTweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*  value) ;

constexpr void __cordl_internal_set_m_LineOriginOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_LineOriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LineRenderable(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*  value) ;

constexpr void __cordl_internal_set_m_LineRenderableAsBaseInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  value) ;

constexpr void __cordl_internal_set_m_LineRenderableAsHoverInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value) ;

constexpr void __cordl_internal_set_m_LineRenderableAsRayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

constexpr void __cordl_internal_set_m_LineRenderableAsSelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

constexpr void __cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_m_LineRetractionDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_LineWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_MinLineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_NumPreviousRenderPoints(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumRenderPoints(int32_t  value) ;

constexpr void __cordl_internal_set_m_NumTargetPoints(int32_t  value) ;

constexpr void __cordl_internal_set_m_OverrideInteractorLineLength(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideInteractorLineOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_PerformSetup(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_PreviousLineDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousRenderPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_PreviousShouldBendLine(bool  value) ;

constexpr void __cordl_internal_set_m_RenderPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_Reticle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ReticleNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ReticlePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ReticleToUse(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_SetLineColorGradient(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothMovement(bool  value) ;

constexpr void __cordl_internal_set_m_SnapCurve(bool  value) ;

constexpr void __cordl_internal_set_m_SnapEndpointIfAvailable(bool  value) ;

constexpr void __cordl_internal_set_m_SnapThresholdDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_SquareSnapThresholdDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_StopLineAtFirstRaycastHit(bool  value) ;

constexpr void __cordl_internal_set_m_StopLineAtSelection(bool  value) ;

constexpr void __cordl_internal_set_m_TargetPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_TargetPointsFallback(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_TreatSelectionAsValidState(bool  value) ;

constexpr void __cordl_internal_set_m_UseDistanceToHitAsMaxLineLength(bool  value) ;

constexpr void __cordl_internal_set_m_UserScaleVar(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_ValidColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_m_ValidHit(bool  value) ;

constexpr void __cordl_internal_set_m_WidthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_XRInteractableSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  value) ;

constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0xb48a80c, size 0x718, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_autoAdjustLineLength, addr 0xb48763c, size 0x8, virtual false, abstract: false, final false
inline bool get_autoAdjustLineLength() ;

/// @brief Method get_bendingEnabledInteractionLayers, addr 0xb487aac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_bendingEnabledInteractionLayers() ;

/// @brief Method get_blockedColorGradient, addr 0xb4876e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_blockedColorGradient() ;

/// @brief Method get_blockedReticle, addr 0xb4878c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_blockedReticle() ;

/// @brief Method get_followTightness, addr 0xb487718, size 0x8, virtual false, abstract: false, final false
inline float_t get_followTightness() ;

/// @brief Method get_invalidColorGradient, addr 0xb4876d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_invalidColorGradient() ;

/// @brief Method get_lineBendRatio, addr 0xb487a80, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineBendRatio() ;

/// @brief Method get_lineLength, addr 0xb48762c, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineLength() ;

/// @brief Method get_lineLengthChangeSpeed, addr 0xb48767c, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineLengthChangeSpeed() ;

/// @brief Method get_lineOriginOffset, addr 0xb487adc, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineOriginOffset() ;

/// @brief Method get_lineOriginTransform, addr 0xb487acc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_lineOriginTransform() ;

/// @brief Method get_lineRetractionDelay, addr 0xb48766c, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineRetractionDelay() ;

/// @brief Method get_lineWidth, addr 0xb4875ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_lineWidth() ;

/// @brief Method get_minLineLength, addr 0xb48764c, size 0x8, virtual false, abstract: false, final false
inline float_t get_minLineLength() ;

/// @brief Method get_overrideInteractorLineLength, addr 0xb48761c, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideInteractorLineLength() ;

/// @brief Method get_overrideInteractorLineOrigin, addr 0xb487abc, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideInteractorLineOrigin() ;

/// @brief Method get_reticle, addr 0xb487740, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_reticle() ;

/// @brief Method get_setLineColorGradient, addr 0xb4876b8, size 0x8, virtual false, abstract: false, final false
inline bool get_setLineColorGradient() ;

/// @brief Method get_smoothMovement, addr 0xb487708, size 0x8, virtual false, abstract: false, final false
inline bool get_smoothMovement() ;

/// @brief Method get_snapEndpointIfAvailable, addr 0xb487a70, size 0x8, virtual false, abstract: false, final false
inline bool get_snapEndpointIfAvailable() ;

/// @brief Method get_snapThresholdDistance, addr 0xb487728, size 0x8, virtual false, abstract: false, final false
inline float_t get_snapThresholdDistance() ;

/// @brief Method get_stopLineAtFirstRaycastHit, addr 0xb487a50, size 0x8, virtual false, abstract: false, final false
inline bool get_stopLineAtFirstRaycastHit() ;

/// @brief Method get_stopLineAtSelection, addr 0xb487a60, size 0x8, virtual false, abstract: false, final false
inline bool get_stopLineAtSelection() ;

/// @brief Method get_treatSelectionAsValidState, addr 0xb4876f8, size 0x8, virtual false, abstract: false, final false
inline bool get_treatSelectionAsValidState() ;

/// @brief Method get_useDistanceToHitAsMaxLineLength, addr 0xb48765c, size 0x8, virtual false, abstract: false, final false
inline bool get_useDistanceToHitAsMaxLineLength() ;

/// @brief Method get_validColorGradient, addr 0xb4876c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_validColorGradient() ;

/// @brief Method get_widthCurve, addr 0xb48768c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_widthCurve() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IXRCustomReticleProvider() noexcept;

/// @brief Method set_autoAdjustLineLength, addr 0xb487644, size 0x8, virtual false, abstract: false, final false
inline void set_autoAdjustLineLength(bool  value) ;

/// @brief Method set_bendingEnabledInteractionLayers, addr 0xb487ab4, size 0x8, virtual false, abstract: false, final false
inline void set_bendingEnabledInteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

/// @brief Method set_blockedColorGradient, addr 0xb4876f0, size 0x8, virtual false, abstract: false, final false
inline void set_blockedColorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_blockedReticle, addr 0xb4878d0, size 0x8c, virtual false, abstract: false, final false
inline void set_blockedReticle(::UnityEngine::GameObject*  value) ;

/// @brief Method set_followTightness, addr 0xb487720, size 0x8, virtual false, abstract: false, final false
inline void set_followTightness(float_t  value) ;

/// @brief Method set_invalidColorGradient, addr 0xb4876e0, size 0x8, virtual false, abstract: false, final false
inline void set_invalidColorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_lineBendRatio, addr 0xb487a88, size 0x24, virtual false, abstract: false, final false
inline void set_lineBendRatio(float_t  value) ;

/// @brief Method set_lineLength, addr 0xb487634, size 0x8, virtual false, abstract: false, final false
inline void set_lineLength(float_t  value) ;

/// @brief Method set_lineLengthChangeSpeed, addr 0xb487684, size 0x8, virtual false, abstract: false, final false
inline void set_lineLengthChangeSpeed(float_t  value) ;

/// @brief Method set_lineOriginOffset, addr 0xb487ae4, size 0x8, virtual false, abstract: false, final false
inline void set_lineOriginOffset(float_t  value) ;

/// @brief Method set_lineOriginTransform, addr 0xb487ad4, size 0x8, virtual false, abstract: false, final false
inline void set_lineOriginTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_lineRetractionDelay, addr 0xb487674, size 0x8, virtual false, abstract: false, final false
inline void set_lineRetractionDelay(float_t  value) ;

/// @brief Method set_lineWidth, addr 0xb4875b4, size 0x68, virtual false, abstract: false, final false
inline void set_lineWidth(float_t  value) ;

/// @brief Method set_minLineLength, addr 0xb487654, size 0x8, virtual false, abstract: false, final false
inline void set_minLineLength(float_t  value) ;

/// @brief Method set_overrideInteractorLineLength, addr 0xb487624, size 0x8, virtual false, abstract: false, final false
inline void set_overrideInteractorLineLength(bool  value) ;

/// @brief Method set_overrideInteractorLineOrigin, addr 0xb487ac4, size 0x8, virtual false, abstract: false, final false
inline void set_overrideInteractorLineOrigin(bool  value) ;

/// @brief Method set_reticle, addr 0xb487748, size 0x8c, virtual false, abstract: false, final false
inline void set_reticle(::UnityEngine::GameObject*  value) ;

/// @brief Method set_setLineColorGradient, addr 0xb4876c0, size 0x8, virtual false, abstract: false, final false
inline void set_setLineColorGradient(bool  value) ;

/// @brief Method set_smoothMovement, addr 0xb487710, size 0x8, virtual false, abstract: false, final false
inline void set_smoothMovement(bool  value) ;

/// @brief Method set_snapEndpointIfAvailable, addr 0xb487a78, size 0x8, virtual false, abstract: false, final false
inline void set_snapEndpointIfAvailable(bool  value) ;

/// @brief Method set_snapThresholdDistance, addr 0xb487730, size 0x10, virtual false, abstract: false, final false
inline void set_snapThresholdDistance(float_t  value) ;

/// @brief Method set_stopLineAtFirstRaycastHit, addr 0xb487a58, size 0x8, virtual false, abstract: false, final false
inline void set_stopLineAtFirstRaycastHit(bool  value) ;

/// @brief Method set_stopLineAtSelection, addr 0xb487a68, size 0x8, virtual false, abstract: false, final false
inline void set_stopLineAtSelection(bool  value) ;

/// @brief Method set_treatSelectionAsValidState, addr 0xb487700, size 0x8, virtual false, abstract: false, final false
inline void set_treatSelectionAsValidState(bool  value) ;

/// @brief Method set_useDistanceToHitAsMaxLineLength, addr 0xb487664, size 0x8, virtual false, abstract: false, final false
inline void set_useDistanceToHitAsMaxLineLength(bool  value) ;

/// @brief Method set_validColorGradient, addr 0xb4876d0, size 0x8, virtual false, abstract: false, final false
inline void set_validColorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_widthCurve, addr 0xb487694, size 0x24, virtual false, abstract: false, final false
inline void set_widthCurve(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual(XRInteractorLineVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual(XRInteractorLineVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11496};

/// @brief Field k_MaxLineBendRatio offset 0xffffffff size 0x4
static constexpr float_t  k_MaxLineBendRatio{static_cast<float_t>(1.0f)};

/// @brief Field k_MaxLineWidth offset 0xffffffff size 0x4
static constexpr float_t  k_MaxLineWidth{static_cast<float_t>(0.05f)};

/// @brief Field k_MinLineBendRatio offset 0xffffffff size 0x4
static constexpr float_t  k_MinLineBendRatio{static_cast<float_t>(0.01f)};

/// @brief Field k_MinLineWidth offset 0xffffffff size 0x4
static constexpr float_t  k_MinLineWidth{static_cast<float_t>(0.0001f)};

/// @brief Field k_NumberOfSegmentsForBendableLine offset 0xffffffff size 0x4
static constexpr int32_t  k_NumberOfSegmentsForBendableLine{static_cast<int32_t>(0x14)};

/// [SerializeField]
/// [Range(0.0001, 0.05)]
/// @brief Field m_LineWidth, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_LineWidth;

/// [SerializeField]
/// @brief Field m_OverrideInteractorLineLength, offset: 0x24, size: 0x1, def value: None
 bool  ___m_OverrideInteractorLineLength;

/// [SerializeField]
/// @brief Field m_LineLength, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_LineLength;

/// [SerializeField]
/// @brief Field m_AutoAdjustLineLength, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_AutoAdjustLineLength;

/// [SerializeField]
/// @brief Field m_MinLineLength, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_MinLineLength;

/// [SerializeField]
/// @brief Field m_UseDistanceToHitAsMaxLineLength, offset: 0x34, size: 0x1, def value: None
 bool  ___m_UseDistanceToHitAsMaxLineLength;

/// [SerializeField]
/// @brief Field m_LineRetractionDelay, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_LineRetractionDelay;

/// [SerializeField]
/// @brief Field m_LineLengthChangeSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_LineLengthChangeSpeed;

/// [SerializeField]
/// @brief Field m_WidthCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_WidthCurve;

/// [SerializeField]
/// @brief Field m_SetLineColorGradient, offset: 0x48, size: 0x1, def value: None
 bool  ___m_SetLineColorGradient;

/// [SerializeField]
/// @brief Field m_ValidColorGradient, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___m_ValidColorGradient;

/// [SerializeField]
/// @brief Field m_InvalidColorGradient, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___m_InvalidColorGradient;

/// [SerializeField]
/// @brief Field m_BlockedColorGradient, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___m_BlockedColorGradient;

/// [SerializeField]
/// @brief Field m_TreatSelectionAsValidState, offset: 0x68, size: 0x1, def value: None
 bool  ___m_TreatSelectionAsValidState;

/// [SerializeField]
/// @brief Field m_SmoothMovement, offset: 0x69, size: 0x1, def value: None
 bool  ___m_SmoothMovement;

/// [SerializeField]
/// @brief Field m_FollowTightness, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_FollowTightness;

/// [SerializeField]
/// @brief Field m_SnapThresholdDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_SnapThresholdDistance;

/// [SerializeField]
/// @brief Field m_Reticle, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_Reticle;

/// [SerializeField]
/// @brief Field m_BlockedReticle, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_BlockedReticle;

/// [SerializeField]
/// @brief Field m_StopLineAtFirstRaycastHit, offset: 0x88, size: 0x1, def value: None
 bool  ___m_StopLineAtFirstRaycastHit;

/// [SerializeField]
/// @brief Field m_StopLineAtSelection, offset: 0x89, size: 0x1, def value: None
 bool  ___m_StopLineAtSelection;

/// [SerializeField]
/// @brief Field m_SnapEndpointIfAvailable, offset: 0x8a, size: 0x1, def value: None
 bool  ___m_SnapEndpointIfAvailable;

/// [SerializeField]
/// [Range(0.01, 1)]
/// @brief Field m_LineBendRatio, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_LineBendRatio;

/// [SerializeField]
/// @brief Field m_BendingEnabledInteractionLayers, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  ___m_BendingEnabledInteractionLayers;

/// [SerializeField]
/// @brief Field m_OverrideInteractorLineOrigin, offset: 0x98, size: 0x1, def value: None
 bool  ___m_OverrideInteractorLineOrigin;

/// [SerializeField]
/// @brief Field m_LineOriginTransform, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LineOriginTransform;

/// [SerializeField]
/// @brief Field m_LineOriginOffset, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_LineOriginOffset;

/// @brief Field m_SquareSnapThresholdDistance, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_SquareSnapThresholdDistance;

/// @brief Field m_ReticlePos, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ReticlePos;

/// @brief Field m_ReticleNormal, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ReticleNormal;

/// @brief Field m_EndPositionInLine, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___m_EndPositionInLine;

/// @brief Field m_SnapCurve, offset: 0xcc, size: 0x1, def value: None
 bool  ___m_SnapCurve;

/// @brief Field m_PerformSetup, offset: 0xcd, size: 0x1, def value: None
 bool  ___m_PerformSetup;

/// @brief Field m_ReticleToUse, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ReticleToUse;

/// @brief Field m_LineRenderer, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___m_LineRenderer;

/// @brief Field m_LineRenderable, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*  ___m_LineRenderable;

/// @brief Field m_AdvancedLineRenderable, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*  ___m_AdvancedLineRenderable;

/// @brief Field m_HasAdvancedLineRenderable, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_HasAdvancedLineRenderable;

/// @brief Field m_LineRenderableAsSelectInteractor, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  ___m_LineRenderableAsSelectInteractor;

/// @brief Field m_LineRenderableAsHoverInteractor, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  ___m_LineRenderableAsHoverInteractor;

/// @brief Field m_LineRenderableAsBaseInteractor, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  ___m_LineRenderableAsBaseInteractor;

/// @brief Field m_LineRenderableAsRayInteractor, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ___m_LineRenderableAsRayInteractor;

/// @brief Field m_TargetPoints, offset: 0x118, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_TargetPoints;

/// @brief Field m_NumTargetPoints, offset: 0x128, size: 0x4, def value: None
 int32_t  ___m_NumTargetPoints;

/// @brief Field m_TargetPointsFallback, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___m_TargetPointsFallback;

/// @brief Field m_RenderPoints, offset: 0x138, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_RenderPoints;

/// @brief Field m_NumRenderPoints, offset: 0x148, size: 0x4, def value: None
 int32_t  ___m_NumRenderPoints;

/// @brief Field m_PreviousRenderPoints, offset: 0x150, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_PreviousRenderPoints;

/// @brief Field m_NumPreviousRenderPoints, offset: 0x160, size: 0x4, def value: None
 int32_t  ___m_NumPreviousRenderPoints;

/// @brief Field m_ClearArray, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___m_ClearArray;

/// @brief Field m_CustomReticle, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_CustomReticle;

/// @brief Field m_CustomReticleAttached, offset: 0x178, size: 0x1, def value: None
 bool  ___m_CustomReticleAttached;

/// @brief Field m_XRInteractableSnapVolume, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  ___m_XRInteractableSnapVolume;

/// @brief Field m_PreviousShouldBendLine, offset: 0x188, size: 0x1, def value: None
 bool  ___m_PreviousShouldBendLine;

/// @brief Field m_PreviousLineDirection, offset: 0x18c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousLineDirection;

/// @brief Field m_CurrentHitPoint, offset: 0x198, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CurrentHitPoint;

/// @brief Field m_HasHitInfo, offset: 0x1a4, size: 0x1, def value: None
 bool  ___m_HasHitInfo;

/// @brief Field m_ValidHit, offset: 0x1a5, size: 0x1, def value: None
 bool  ___m_ValidHit;

/// @brief Field m_LastValidHitTime, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___m_LastValidHitTime;

/// @brief Field m_LastValidLineLength, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___m_LastValidLineLength;

/// @brief Field m_PreviousCollider, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_PreviousCollider;

/// @brief Field m_XROrigin, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_XROrigin;

/// @brief Field m_HasRayInteractor, offset: 0x1c0, size: 0x1, def value: None
 bool  ___m_HasRayInteractor;

/// @brief Field m_HasBaseInteractor, offset: 0x1c1, size: 0x1, def value: None
 bool  ___m_HasBaseInteractor;

/// @brief Field m_HasHoverInteractor, offset: 0x1c2, size: 0x1, def value: None
 bool  ___m_HasHoverInteractor;

/// @brief Field m_HasSelectInteractor, offset: 0x1c3, size: 0x1, def value: None
 bool  ___m_HasSelectInteractor;

/// @brief Field m_UserScaleVar, offset: 0x1c8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  ___m_UserScaleVar;

/// @brief Field m_LineLengthOverrideTweenableVariable, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*  ___m_LineLengthOverrideTweenableVariable;

/// @brief Field m_BindingsGroup, offset: 0x1d8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineWidth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_OverrideInteractorLineLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_AutoAdjustLineLength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_MinLineLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_UseDistanceToHitAsMaxLineLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRetractionDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineLengthChangeSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_WidthCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SetLineColorGradient) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ValidColorGradient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_InvalidColorGradient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_BlockedColorGradient) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_TreatSelectionAsValidState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SmoothMovement) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_FollowTightness) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SnapThresholdDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_Reticle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_BlockedReticle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_StopLineAtFirstRaycastHit) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_StopLineAtSelection) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SnapEndpointIfAvailable) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineBendRatio) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_BendingEnabledInteractionLayers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_OverrideInteractorLineOrigin) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineOriginTransform) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineOriginOffset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SquareSnapThresholdDistance) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ReticlePos) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ReticleNormal) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_EndPositionInLine) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_SnapCurve) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_PerformSetup) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ReticleToUse) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderable) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_AdvancedLineRenderable) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasAdvancedLineRenderable) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderableAsSelectInteractor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderableAsHoverInteractor) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderableAsBaseInteractor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineRenderableAsRayInteractor) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_TargetPoints) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_NumTargetPoints) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_TargetPointsFallback) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_RenderPoints) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_NumRenderPoints) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_PreviousRenderPoints) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_NumPreviousRenderPoints) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ClearArray) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_CustomReticle) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_CustomReticleAttached) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_XRInteractableSnapVolume) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_PreviousShouldBendLine) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_PreviousLineDirection) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_CurrentHitPoint) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasHitInfo) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_ValidHit) == 0x1a5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LastValidHitTime) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LastValidLineLength) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_PreviousCollider) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_XROrigin) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasRayInteractor) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasBaseInteractor) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasHoverInteractor) == 0x1c2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_HasSelectInteractor) == 0x1c3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_UserScaleVar) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_LineLengthOverrideTweenableVariable) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual, ___m_BindingsGroup) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual) == 0x1e0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/EvaluateLineEndPoint_00000D7E$BurstDirectCall
class CORDL_TYPE XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb48c4e0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb48c3f0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48c4f8, size 0xe8, virtual false, abstract: false, final false
static inline bool Invoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall(XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall(XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate
class CORDL_TYPE XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb48c2a8, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb48c3c8, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48c294, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb48c1f4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate(XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate(XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/ComputeNewRenderPoints_00000D7D$BurstDirectCall
class CORDL_TYPE XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb48bf38, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb48be48, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48bf50, size 0x2a4, virtual false, abstract: false, final false
static inline int32_t Invoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall(XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall(XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate
class CORDL_TYPE XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb48bcc0, size 0x160, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0xb48be20, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48bca8, size 0x18, virtual true, abstract: false, final false
inline int32_t Invoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb48bc08, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate(XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate(XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall
class CORDL_TYPE XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb48bb08, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb48ba18, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48bb20, size 0xe8, virtual false, abstract: false, final false
static inline void Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall(XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall(XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual/CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate
class CORDL_TYPE XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb48b8d0, size 0x13c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb48ba0c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48b8bc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb48b81c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate(XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate(XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
