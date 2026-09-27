#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/CurveVisualController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__EndPointType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__LineDynamicsMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveVisualController)
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct EndPointType;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ICurveInteractionDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct LineDynamicsMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class LineProperties;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/AdjustCastHitEndPoint_00000D26$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/ComputeFallBackLine_00000D27$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/ComputeFallBackLine_00000D27$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/GetClosestPointOnLine_00000D25$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "CurveVisualController/GetClosestPointOnLine_00000D25$PostfixBurstDelegate");
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Visual/Curve Visual Controller", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.html")]
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.EndPointType, UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.LineDynamicsMode
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController
class CORDL_TYPE CurveVisualController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AdjustCastHitEndPoint_00000D26$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall;

using AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate;

using ComputeFallBackLine_00000D27$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall;

using ComputeFallBackLine_00000D27$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate;

using GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall;

using GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate;

using GetClosestPointOnLine_00000D25$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall;

using GetClosestPointOnLine_00000D25$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate;

 __declspec(property(get=get_baseLineMaterial, put=set_baseLineMaterial)) ::UnityW<::UnityEngine::Material>  baseLineMaterial;

 __declspec(property(get=get_computeMidPointWithComplexCurves, put=set_computeMidPointWithComplexCurves)) bool  computeMidPointWithComplexCurves;

 __declspec(property(get=get_curveEndOffset, put=set_curveEndOffset)) float_t  curveEndOffset;

 __declspec(property(get=get_curveInteractionDataProvider, put=set_curveInteractionDataProvider)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  curveInteractionDataProvider;

 __declspec(property(get=get_curveStartOffset, put=set_curveStartOffset)) float_t  curveStartOffset;

 __declspec(property(get=get_customizeLinePropertiesForState, put=set_customizeLinePropertiesForState)) bool  customizeLinePropertiesForState;

 __declspec(property(get=get_emptyHitMaterial, put=set_emptyHitMaterial)) ::UnityW<::UnityEngine::Material>  emptyHitMaterial;

 __declspec(property(get=get_endPointExpansionRate, put=set_endPointExpansionRate)) float_t  endPointExpansionRate;

 __declspec(property(get=get_extendLineToEmptyHit, put=set_extendLineToEmptyHit)) bool  extendLineToEmptyHit;

 __declspec(property(get=get_extensionRate, put=set_extensionRate)) float_t  extensionRate;

 __declspec(property(get=get_hoverHitProperties, put=set_hoverHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  hoverHitProperties;

 __declspec(property(get=get_lineDynamicsMode, put=set_lineDynamicsMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  lineDynamicsMode;

 __declspec(property(get=get_lineOriginTransform, put=set_lineOriginTransform)) ::UnityW<::UnityEngine::Transform>  lineOriginTransform;

 __declspec(property(get=get_linePropertyAnimationSpeed, put=set_linePropertyAnimationSpeed)) float_t  linePropertyAnimationSpeed;

 __declspec(property(get=get_lineRenderer, put=set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field m_BaseLineMaterial, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BaseLineMaterial, put=__cordl_internal_set_m_BaseLineMaterial)) ::UnityW<::UnityEngine::Material>  m_BaseLineMaterial;

/// @brief Field m_CanSwapMaterials, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CanSwapMaterials, put=__cordl_internal_set_m_CanSwapMaterials)) bool  m_CanSwapMaterials;

/// @brief Field m_ComputeMidPointWithComplexCurves, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ComputeMidPointWithComplexCurves, put=__cordl_internal_set_m_ComputeMidPointWithComplexCurves)) bool  m_ComputeMidPointWithComplexCurves;

/// @brief Field m_CurveDataProviderObjectRef, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurveDataProviderObjectRef, put=__cordl_internal_set_m_CurveDataProviderObjectRef)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*  m_CurveDataProviderObjectRef;

/// @brief Field m_CurveEndOffset, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurveEndOffset, put=__cordl_internal_set_m_CurveEndOffset)) float_t  m_CurveEndOffset;

/// @brief Field m_CurveStartOffset, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurveStartOffset, put=__cordl_internal_set_m_CurveStartOffset)) float_t  m_CurveStartOffset;

/// @brief Field m_CurveVisualObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurveVisualObject, put=__cordl_internal_set_m_CurveVisualObject)) ::UnityW<::UnityEngine::Object>  m_CurveVisualObject;

/// @brief Field m_CustomizeLinePropertiesForState, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CustomizeLinePropertiesForState, put=__cordl_internal_set_m_CustomizeLinePropertiesForState)) bool  m_CustomizeLinePropertiesForState;

/// @brief Field m_EmptyHitMaterial, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EmptyHitMaterial, put=__cordl_internal_set_m_EmptyHitMaterial)) ::UnityW<::UnityEngine::Material>  m_EmptyHitMaterial;

/// @brief Field m_EndPointExpansionRate, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndPointExpansionRate, put=__cordl_internal_set_m_EndPointExpansionRate)) float_t  m_EndPointExpansionRate;

/// @brief Field m_EndPointTypeChangeTime, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndPointTypeChangeTime, put=__cordl_internal_set_m_EndPointTypeChangeTime)) float_t  m_EndPointTypeChangeTime;

/// @brief Field m_ExtendLineToEmptyHit, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ExtendLineToEmptyHit, put=__cordl_internal_set_m_ExtendLineToEmptyHit)) bool  m_ExtendLineToEmptyHit;

/// @brief Field m_ExtensionRate, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ExtensionRate, put=__cordl_internal_set_m_ExtensionRate)) float_t  m_ExtensionRate;

/// @brief Field m_FallBackSamplePoints, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_FallBackSamplePoints, put=__cordl_internal_set_m_FallBackSamplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_FallBackSamplePoints;

/// @brief Field m_HoverHitProperties, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverHitProperties, put=__cordl_internal_set_m_HoverHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  m_HoverHitProperties;

/// @brief Field m_InternalSamplePoints, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InternalSamplePoints, put=__cordl_internal_set_m_InternalSamplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_InternalSamplePoints;

/// @brief Field m_LastBendRatio, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastBendRatio, put=__cordl_internal_set_m_LastBendRatio)) float_t  m_LastBendRatio;

/// @brief Field m_LastEndPointType, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastEndPointType, put=__cordl_internal_set_m_LastEndPointType)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  m_LastEndPointType;

/// @brief Field m_LastHitTime, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHitTime, put=__cordl_internal_set_m_LastHitTime)) float_t  m_LastHitTime;

/// @brief Field m_LastLineEndWidth, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastLineEndWidth, put=__cordl_internal_set_m_LastLineEndWidth)) float_t  m_LastLineEndWidth;

/// @brief Field m_LastLineStartWidth, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastLineStartWidth, put=__cordl_internal_set_m_LastLineStartWidth)) float_t  m_LastLineStartWidth;

/// @brief Field m_LastPosCount, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastPosCount, put=__cordl_internal_set_m_LastPosCount)) int32_t  m_LastPosCount;

/// @brief Field m_LastValidSelectState, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LastValidSelectState, put=__cordl_internal_set_m_LastValidSelectState)) bool  m_LastValidSelectState;

/// @brief Field m_LengthToLastHit, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LengthToLastHit, put=__cordl_internal_set_m_LengthToLastHit)) float_t  m_LengthToLastHit;

/// @brief Field m_LerpGradient, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LerpGradient, put=__cordl_internal_set_m_LerpGradient)) ::UnityEngine::Gradient*  m_LerpGradient;

/// @brief Field m_LineDynamicsMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineDynamicsMode, put=__cordl_internal_set_m_LineDynamicsMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  m_LineDynamicsMode;

/// @brief Field m_LineLength, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LineLength, put=__cordl_internal_set_m_LineLength)) float_t  m_LineLength;

/// @brief Field m_LineOriginTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineOriginTransform, put=__cordl_internal_set_m_LineOriginTransform)) ::UnityW<::UnityEngine::Transform>  m_LineOriginTransform;

/// @brief Field m_LinePropertyAnimationSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LinePropertyAnimationSpeed, put=__cordl_internal_set_m_LinePropertyAnimationSpeed)) float_t  m_LinePropertyAnimationSpeed;

/// @brief Field m_LineRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LineRenderer, put=__cordl_internal_set_m_LineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  m_LineRenderer;

/// @brief Field m_MaxVisualCurveDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxVisualCurveDistance, put=__cordl_internal_set_m_MaxVisualCurveDistance)) float_t  m_MaxVisualCurveDistance;

/// @brief Field m_NoValidHitProperties, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NoValidHitProperties, put=__cordl_internal_set_m_NoValidHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  m_NoValidHitProperties;

/// @brief Field m_OverrideLineOrigin, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideLineOrigin, put=__cordl_internal_set_m_OverrideLineOrigin)) bool  m_OverrideLineOrigin;

/// @brief Field m_ParentTransform, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParentTransform, put=__cordl_internal_set_m_ParentTransform)) ::UnityW<::UnityEngine::Transform>  m_ParentTransform;

/// @brief Field m_RenderLengthMultiplier, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RenderLengthMultiplier, put=__cordl_internal_set_m_RenderLengthMultiplier)) float_t  m_RenderLengthMultiplier;

/// @brief Field m_RenderLineInWorldSpace, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RenderLineInWorldSpace, put=__cordl_internal_set_m_RenderLineInWorldSpace)) bool  m_RenderLineInWorldSpace;

/// @brief Field m_RestingVisualLineLength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RestingVisualLineLength, put=__cordl_internal_set_m_RestingVisualLineLength)) float_t  m_RestingVisualLineLength;

/// @brief Field m_RetractDelay, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RetractDelay, put=__cordl_internal_set_m_RetractDelay)) float_t  m_RetractDelay;

/// @brief Field m_RetractDuration, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RetractDuration, put=__cordl_internal_set_m_RetractDuration)) float_t  m_RetractDuration;

/// @brief Field m_SelectHitProperties, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectHitProperties, put=__cordl_internal_set_m_SelectHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  m_SelectHitProperties;

/// @brief Field m_SnapToSelectedAttachIfAvailable, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapToSelectedAttachIfAvailable, put=__cordl_internal_set_m_SnapToSelectedAttachIfAvailable)) bool  m_SnapToSelectedAttachIfAvailable;

/// @brief Field m_SnapToSnapVolumeIfAvailable, offset 0x6e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SnapToSnapVolumeIfAvailable, put=__cordl_internal_set_m_SnapToSnapVolumeIfAvailable)) bool  m_SnapToSnapVolumeIfAvailable;

/// @brief Field m_SwapMaterials, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SwapMaterials, put=__cordl_internal_set_m_SwapMaterials)) bool  m_SwapMaterials;

/// @brief Field m_UIHitProperties, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHitProperties, put=__cordl_internal_set_m_UIHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  m_UIHitProperties;

/// @brief Field m_UIPressHitProperties, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIPressHitProperties, put=__cordl_internal_set_m_UIPressHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  m_UIPressHitProperties;

/// @brief Field m_UseCustomOrigin, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseCustomOrigin, put=__cordl_internal_set_m_UseCustomOrigin)) bool  m_UseCustomOrigin;

/// @brief Field m_VisualPointCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VisualPointCount, put=__cordl_internal_set_m_VisualPointCount)) int32_t  m_VisualPointCount;

 __declspec(property(get=get_maxVisualCurveDistance, put=set_maxVisualCurveDistance)) float_t  maxVisualCurveDistance;

 __declspec(property(get=get_noValidHitProperties, put=set_noValidHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  noValidHitProperties;

 __declspec(property(get=get_overrideLineOrigin, put=set_overrideLineOrigin)) bool  overrideLineOrigin;

 __declspec(property(get=get_renderLineInWorldSpace, put=set_renderLineInWorldSpace)) bool  renderLineInWorldSpace;

 __declspec(property(get=get_restingVisualLineLength, put=set_restingVisualLineLength)) float_t  restingVisualLineLength;

 __declspec(property(get=get_retractDelay, put=set_retractDelay)) float_t  retractDelay;

 __declspec(property(get=get_retractDuration, put=set_retractDuration)) float_t  retractDuration;

 __declspec(property(get=get_selectHitProperties, put=set_selectHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  selectHitProperties;

 __declspec(property(get=get_snapToSelectedAttachIfAvailable, put=set_snapToSelectedAttachIfAvailable)) bool  snapToSelectedAttachIfAvailable;

 __declspec(property(get=get_snapToSnapVolumeIfAvailable, put=set_snapToSnapVolumeIfAvailable)) bool  snapToSnapVolumeIfAvailable;

 __declspec(property(get=get_swapMaterials, put=set_swapMaterials)) bool  swapMaterials;

 __declspec(property(get=get_uiHitProperties, put=set_uiHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  uiHitProperties;

 __declspec(property(get=get_uiPressHitProperties, put=set_uiPressHitProperties)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  uiPressHitProperties;

 __declspec(property(get=get_visualPointCount, put=set_visualPointCount)) int32_t  visualPointCount;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController::AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate))]
/// @brief Method AdjustCastHitEndPoint, addr 0xb483e70, size 0x4, virtual false, abstract: false, final false
static inline void AdjustCastHitEndPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint) ;

/// [BurstCompile]
/// @brief Method AdjustCastHitEndPoint$BurstManaged, addr 0xb486644, size 0x160, virtual false, abstract: false, final false
static inline void AdjustCastHitEndPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint) ;

/// @brief Method Awake, addr 0xb48423c, size 0x374, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckIfVisualStateChanged, addr 0xb4851fc, size 0x58, virtual false, abstract: false, final false
inline bool CheckIfVisualStateChanged(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  newPointType, bool  hasValidSelect) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController::ComputeFallBackLine_00000D27$PostfixBurstDelegate))]
/// @brief Method ComputeFallBackLine, addr 0xb483e74, size 0x4, virtual false, abstract: false, final false
static inline bool ComputeFallBackLine(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints) ;

/// [BurstCompile]
/// @brief Method ComputeFallBackLine$BurstManaged, addr 0xb4867a4, size 0x254, virtual false, abstract: false, final false
static inline bool ComputeFallBackLine$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints) ;

/// @brief Method DetermineOffsets, addr 0xb485298, size 0x130, virtual false, abstract: false, final false
inline void DetermineOffsets(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  lineDistance, ::by_ref<float_t>  startOffset, ::by_ref<float_t>  endOffset) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController::GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate))]
/// @brief Method GetAdjustedEndPointForMaxDistance, addr 0xb483e68, size 0x4, virtual false, abstract: false, final false
static inline void GetAdjustedEndPointForMaxDistance(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint) ;

/// [BurstCompile]
/// @brief Method GetAdjustedEndPointForMaxDistance$BurstManaged, addr 0xb486520, size 0xd8, virtual false, abstract: false, final false
static inline void GetAdjustedEndPointForMaxDistance$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController::GetClosestPointOnLine_00000D25$PostfixBurstDelegate))]
/// @brief Method GetClosestPointOnLine, addr 0xb483e6c, size 0x4, virtual false, abstract: false, final false
static inline void GetClosestPointOnLine(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint) ;

/// [BurstCompile]
/// @brief Method GetClosestPointOnLine$BurstManaged, addr 0xb4865f8, size 0x4c, virtual false, abstract: false, final false
static inline void GetClosestPointOnLine$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint) ;

/// @brief Method GetEndpointInformation, addr 0xb484d18, size 0x394, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType GetEndpointInformation(::UnityEngine::Vector3  worldOrigin, ::UnityEngine::Vector3  worldDirection, ::by_ref<float_t>  validHitDistance, ::by_ref<::UnityEngine::Vector3>  endPoint) ;

/// @brief Method GetLineBendRatio, addr 0xb485b00, size 0xa4, virtual false, abstract: false, final false
inline float_t GetLineBendRatio(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType) ;

/// @brief Method GetLineOriginAndDirection, addr 0xb484b98, size 0x180, virtual false, abstract: false, final false
inline void GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  worldOrigin, ::by_ref<::UnityEngine::Vector3>  worldDirection) ;

/// @brief Method LateUpdate, addr 0xb484774, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController* New_ctor() ;

/// [BeforeRenderOrder(101)]
/// @brief Method OnBeforeRenderLineVisual, addr 0xb484778, size 0x4, virtual false, abstract: false, final false
inline void OnBeforeRenderLineVisual() ;

/// @brief Method OnDestroy, addr 0xb4846f8, size 0x7c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb484654, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4845b0, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetLinePositions, addr 0xb485e08, size 0x68, virtual false, abstract: false, final false
inline void SetLinePositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  targetPoints, int32_t  numPoints) ;

/// @brief Method SwapMaterials, addr 0xb485254, size 0x44, virtual false, abstract: false, final false
inline void SwapMaterials(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType) ;

/// @brief Method TryGetLineProperties, addr 0xb485e70, size 0x1b4, virtual false, abstract: false, final false
inline bool TryGetLineProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>  properties) ;

/// @brief Method TryGetMidPointFromCurveSamples, addr 0xb485ba4, size 0x264, virtual false, abstract: false, final false
static inline bool TryGetMidPointFromCurveSamples(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>  curveInteractionDataProvider, ::by_ref<::UnityEngine::Vector3>  midPoint) ;

/// @brief Method UpdateGradient, addr 0xb4855b0, size 0x148, virtual false, abstract: false, final false
inline void UpdateGradient(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType) ;

/// @brief Method UpdateLinePoints, addr 0xb4856f8, size 0x408, virtual false, abstract: false, final false
inline void UpdateLinePoints(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, ::UnityEngine::Vector3  worldOrigin, ::UnityEngine::Vector3  worldEndPoint, ::UnityEngine::Vector3  worldDirection, float_t  startOffset, float_t  endOffset, bool  forceStraightLineFallback) ;

/// @brief Method UpdateLineVisual, addr 0xb48477c, size 0x350, virtual false, abstract: false, final false
inline void UpdateLineVisual() ;

/// @brief Method UpdateLineWidth, addr 0xb4853c8, size 0x1e8, virtual false, abstract: false, final false
inline void UpdateLineWidth(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  targetDistance) ;

/// @brief Method UpdateTargetDistance, addr 0xb4850ac, size 0x150, virtual false, abstract: false, final false
inline float_t UpdateTargetDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  validHitDistance, float_t  minLength, float_t  maxLength, bool  retractOnHitLoss, float_t  retractionDelay, float_t  retractionDuration, float_t  curveExtensionRate) ;

/// @brief Method ValidatePointCount, addr 0xb484acc, size 0xcc, virtual false, abstract: false, final false
inline void ValidatePointCount() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BaseLineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BaseLineMaterial() ;

constexpr bool const& __cordl_internal_get_m_CanSwapMaterials() const;

constexpr bool& __cordl_internal_get_m_CanSwapMaterials() ;

constexpr bool const& __cordl_internal_get_m_ComputeMidPointWithComplexCurves() const;

constexpr bool& __cordl_internal_get_m_ComputeMidPointWithComplexCurves() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_CurveDataProviderObjectRef() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_CurveDataProviderObjectRef() ;

constexpr float_t const& __cordl_internal_get_m_CurveEndOffset() const;

constexpr float_t& __cordl_internal_get_m_CurveEndOffset() ;

constexpr float_t const& __cordl_internal_get_m_CurveStartOffset() const;

constexpr float_t& __cordl_internal_get_m_CurveStartOffset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_CurveVisualObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_CurveVisualObject() ;

constexpr bool const& __cordl_internal_get_m_CustomizeLinePropertiesForState() const;

constexpr bool& __cordl_internal_get_m_CustomizeLinePropertiesForState() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_EmptyHitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_EmptyHitMaterial() ;

constexpr float_t const& __cordl_internal_get_m_EndPointExpansionRate() const;

constexpr float_t& __cordl_internal_get_m_EndPointExpansionRate() ;

constexpr float_t const& __cordl_internal_get_m_EndPointTypeChangeTime() const;

constexpr float_t& __cordl_internal_get_m_EndPointTypeChangeTime() ;

constexpr bool const& __cordl_internal_get_m_ExtendLineToEmptyHit() const;

constexpr bool& __cordl_internal_get_m_ExtendLineToEmptyHit() ;

constexpr float_t const& __cordl_internal_get_m_ExtensionRate() const;

constexpr float_t& __cordl_internal_get_m_ExtensionRate() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_FallBackSamplePoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_FallBackSamplePoints() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& __cordl_internal_get_m_HoverHitProperties() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& __cordl_internal_get_m_HoverHitProperties() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_InternalSamplePoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_InternalSamplePoints() ;

constexpr float_t const& __cordl_internal_get_m_LastBendRatio() const;

constexpr float_t& __cordl_internal_get_m_LastBendRatio() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const& __cordl_internal_get_m_LastEndPointType() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType& __cordl_internal_get_m_LastEndPointType() ;

constexpr float_t const& __cordl_internal_get_m_LastHitTime() const;

constexpr float_t& __cordl_internal_get_m_LastHitTime() ;

constexpr float_t const& __cordl_internal_get_m_LastLineEndWidth() const;

constexpr float_t& __cordl_internal_get_m_LastLineEndWidth() ;

constexpr float_t const& __cordl_internal_get_m_LastLineStartWidth() const;

constexpr float_t& __cordl_internal_get_m_LastLineStartWidth() ;

constexpr int32_t const& __cordl_internal_get_m_LastPosCount() const;

constexpr int32_t& __cordl_internal_get_m_LastPosCount() ;

constexpr bool const& __cordl_internal_get_m_LastValidSelectState() const;

constexpr bool& __cordl_internal_get_m_LastValidSelectState() ;

constexpr float_t const& __cordl_internal_get_m_LengthToLastHit() const;

constexpr float_t& __cordl_internal_get_m_LengthToLastHit() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_LerpGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_LerpGradient() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode const& __cordl_internal_get_m_LineDynamicsMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode& __cordl_internal_get_m_LineDynamicsMode() ;

constexpr float_t const& __cordl_internal_get_m_LineLength() const;

constexpr float_t& __cordl_internal_get_m_LineLength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LineOriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LineOriginTransform() ;

constexpr float_t const& __cordl_internal_get_m_LinePropertyAnimationSpeed() const;

constexpr float_t& __cordl_internal_get_m_LinePropertyAnimationSpeed() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_m_LineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_m_LineRenderer() ;

constexpr float_t const& __cordl_internal_get_m_MaxVisualCurveDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxVisualCurveDistance() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& __cordl_internal_get_m_NoValidHitProperties() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& __cordl_internal_get_m_NoValidHitProperties() ;

constexpr bool const& __cordl_internal_get_m_OverrideLineOrigin() const;

constexpr bool& __cordl_internal_get_m_OverrideLineOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ParentTransform() ;

constexpr float_t const& __cordl_internal_get_m_RenderLengthMultiplier() const;

constexpr float_t& __cordl_internal_get_m_RenderLengthMultiplier() ;

constexpr bool const& __cordl_internal_get_m_RenderLineInWorldSpace() const;

constexpr bool& __cordl_internal_get_m_RenderLineInWorldSpace() ;

constexpr float_t const& __cordl_internal_get_m_RestingVisualLineLength() const;

constexpr float_t& __cordl_internal_get_m_RestingVisualLineLength() ;

constexpr float_t const& __cordl_internal_get_m_RetractDelay() const;

constexpr float_t& __cordl_internal_get_m_RetractDelay() ;

constexpr float_t const& __cordl_internal_get_m_RetractDuration() const;

constexpr float_t& __cordl_internal_get_m_RetractDuration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& __cordl_internal_get_m_SelectHitProperties() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& __cordl_internal_get_m_SelectHitProperties() ;

constexpr bool const& __cordl_internal_get_m_SnapToSelectedAttachIfAvailable() const;

constexpr bool& __cordl_internal_get_m_SnapToSelectedAttachIfAvailable() ;

constexpr bool const& __cordl_internal_get_m_SnapToSnapVolumeIfAvailable() const;

constexpr bool& __cordl_internal_get_m_SnapToSnapVolumeIfAvailable() ;

constexpr bool const& __cordl_internal_get_m_SwapMaterials() const;

constexpr bool& __cordl_internal_get_m_SwapMaterials() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& __cordl_internal_get_m_UIHitProperties() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& __cordl_internal_get_m_UIHitProperties() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& __cordl_internal_get_m_UIPressHitProperties() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& __cordl_internal_get_m_UIPressHitProperties() ;

constexpr bool const& __cordl_internal_get_m_UseCustomOrigin() const;

constexpr bool& __cordl_internal_get_m_UseCustomOrigin() ;

constexpr int32_t const& __cordl_internal_get_m_VisualPointCount() const;

constexpr int32_t& __cordl_internal_get_m_VisualPointCount() ;

constexpr void __cordl_internal_set_m_BaseLineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_CanSwapMaterials(bool  value) ;

constexpr void __cordl_internal_set_m_ComputeMidPointWithComplexCurves(bool  value) ;

constexpr void __cordl_internal_set_m_CurveDataProviderObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_CurveEndOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_CurveStartOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_CurveVisualObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_CustomizeLinePropertiesForState(bool  value) ;

constexpr void __cordl_internal_set_m_EmptyHitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_EndPointExpansionRate(float_t  value) ;

constexpr void __cordl_internal_set_m_EndPointTypeChangeTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ExtendLineToEmptyHit(bool  value) ;

constexpr void __cordl_internal_set_m_ExtensionRate(float_t  value) ;

constexpr void __cordl_internal_set_m_FallBackSamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_HoverHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

constexpr void __cordl_internal_set_m_InternalSamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_LastBendRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_LastEndPointType(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  value) ;

constexpr void __cordl_internal_set_m_LastHitTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LastLineEndWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_LastLineStartWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_LastPosCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastValidSelectState(bool  value) ;

constexpr void __cordl_internal_set_m_LengthToLastHit(float_t  value) ;

constexpr void __cordl_internal_set_m_LerpGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_m_LineDynamicsMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  value) ;

constexpr void __cordl_internal_set_m_LineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_LineOriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LinePropertyAnimationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_m_MaxVisualCurveDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_NoValidHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

constexpr void __cordl_internal_set_m_OverrideLineOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_ParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RenderLengthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_RenderLineInWorldSpace(bool  value) ;

constexpr void __cordl_internal_set_m_RestingVisualLineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_RetractDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_RetractDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_SelectHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

constexpr void __cordl_internal_set_m_SnapToSelectedAttachIfAvailable(bool  value) ;

constexpr void __cordl_internal_set_m_SnapToSnapVolumeIfAvailable(bool  value) ;

constexpr void __cordl_internal_set_m_SwapMaterials(bool  value) ;

constexpr void __cordl_internal_set_m_UIHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

constexpr void __cordl_internal_set_m_UIPressHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

constexpr void __cordl_internal_set_m_UseCustomOrigin(bool  value) ;

constexpr void __cordl_internal_set_m_VisualPointCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xb486440, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_baseLineMaterial, addr 0xb48421c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_baseLineMaterial() ;

/// @brief Method get_computeMidPointWithComplexCurves, addr 0xb4840a4, size 0x8, virtual false, abstract: false, final false
inline bool get_computeMidPointWithComplexCurves() ;

/// @brief Method get_curveEndOffset, addr 0xb4840e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_curveEndOffset() ;

/// @brief Method get_curveInteractionDataProvider, addr 0xb483eb0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* get_curveInteractionDataProvider() ;

/// @brief Method get_curveStartOffset, addr 0xb4840d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_curveStartOffset() ;

/// @brief Method get_customizeLinePropertiesForState, addr 0xb4840f4, size 0x8, virtual false, abstract: false, final false
inline bool get_customizeLinePropertiesForState() ;

/// @brief Method get_emptyHitMaterial, addr 0xb48422c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_emptyHitMaterial() ;

/// @brief Method get_endPointExpansionRate, addr 0xb484094, size 0x8, virtual false, abstract: false, final false
inline float_t get_endPointExpansionRate() ;

/// @brief Method get_extendLineToEmptyHit, addr 0xb48405c, size 0x8, virtual false, abstract: false, final false
inline bool get_extendLineToEmptyHit() ;

/// @brief Method get_extensionRate, addr 0xb48406c, size 0x8, virtual false, abstract: false, final false
inline float_t get_extensionRate() ;

/// @brief Method get_hoverHitProperties, addr 0xb484154, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* get_hoverHitProperties() ;

/// @brief Method get_lineDynamicsMode, addr 0xb48402c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode get_lineDynamicsMode() ;

/// @brief Method get_lineOriginTransform, addr 0xb483f70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_lineOriginTransform() ;

/// @brief Method get_linePropertyAnimationSpeed, addr 0xb484104, size 0x8, virtual false, abstract: false, final false
inline float_t get_linePropertyAnimationSpeed() ;

/// @brief Method get_lineRenderer, addr 0xb483e78, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::LineRenderer> get_lineRenderer() ;

/// @brief Method get_maxVisualCurveDistance, addr 0xb48400c, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxVisualCurveDistance() ;

/// @brief Method get_noValidHitProperties, addr 0xb484114, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* get_noValidHitProperties() ;

/// @brief Method get_overrideLineOrigin, addr 0xb483f60, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideLineOrigin() ;

/// @brief Method get_renderLineInWorldSpace, addr 0xb484164, size 0x8, virtual false, abstract: false, final false
inline bool get_renderLineInWorldSpace() ;

/// @brief Method get_restingVisualLineLength, addr 0xb48401c, size 0x8, virtual false, abstract: false, final false
inline float_t get_restingVisualLineLength() ;

/// @brief Method get_retractDelay, addr 0xb48403c, size 0x8, virtual false, abstract: false, final false
inline float_t get_retractDelay() ;

/// @brief Method get_retractDuration, addr 0xb48404c, size 0x8, virtual false, abstract: false, final false
inline float_t get_retractDuration() ;

/// @brief Method get_selectHitProperties, addr 0xb484144, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* get_selectHitProperties() ;

/// @brief Method get_snapToSelectedAttachIfAvailable, addr 0xb4840b4, size 0x8, virtual false, abstract: false, final false
inline bool get_snapToSelectedAttachIfAvailable() ;

/// @brief Method get_snapToSnapVolumeIfAvailable, addr 0xb4840c4, size 0x8, virtual false, abstract: false, final false
inline bool get_snapToSnapVolumeIfAvailable() ;

/// @brief Method get_swapMaterials, addr 0xb48420c, size 0x8, virtual false, abstract: false, final false
inline bool get_swapMaterials() ;

/// @brief Method get_uiHitProperties, addr 0xb484124, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* get_uiHitProperties() ;

/// @brief Method get_uiPressHitProperties, addr 0xb484134, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* get_uiPressHitProperties() ;

/// @brief Method get_visualPointCount, addr 0xb483ffc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_visualPointCount() ;

/// @brief Method set_baseLineMaterial, addr 0xb484224, size 0x8, virtual false, abstract: false, final false
inline void set_baseLineMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_computeMidPointWithComplexCurves, addr 0xb4840ac, size 0x8, virtual false, abstract: false, final false
inline void set_computeMidPointWithComplexCurves(bool  value) ;

/// @brief Method set_curveEndOffset, addr 0xb4840ec, size 0x8, virtual false, abstract: false, final false
inline void set_curveEndOffset(float_t  value) ;

/// @brief Method set_curveInteractionDataProvider, addr 0xb483f04, size 0x5c, virtual false, abstract: false, final false
inline void set_curveInteractionDataProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  value) ;

/// @brief Method set_curveStartOffset, addr 0xb4840dc, size 0x8, virtual false, abstract: false, final false
inline void set_curveStartOffset(float_t  value) ;

/// @brief Method set_customizeLinePropertiesForState, addr 0xb4840fc, size 0x8, virtual false, abstract: false, final false
inline void set_customizeLinePropertiesForState(bool  value) ;

/// @brief Method set_emptyHitMaterial, addr 0xb484234, size 0x8, virtual false, abstract: false, final false
inline void set_emptyHitMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_endPointExpansionRate, addr 0xb48409c, size 0x8, virtual false, abstract: false, final false
inline void set_endPointExpansionRate(float_t  value) ;

/// @brief Method set_extendLineToEmptyHit, addr 0xb484064, size 0x8, virtual false, abstract: false, final false
inline void set_extendLineToEmptyHit(bool  value) ;

/// @brief Method set_extensionRate, addr 0xb484074, size 0x20, virtual false, abstract: false, final false
inline void set_extensionRate(float_t  value) ;

/// @brief Method set_hoverHitProperties, addr 0xb48415c, size 0x8, virtual false, abstract: false, final false
inline void set_hoverHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

/// @brief Method set_lineDynamicsMode, addr 0xb484034, size 0x8, virtual false, abstract: false, final false
inline void set_lineDynamicsMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  value) ;

/// @brief Method set_lineOriginTransform, addr 0xb483f78, size 0x84, virtual false, abstract: false, final false
inline void set_lineOriginTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_linePropertyAnimationSpeed, addr 0xb48410c, size 0x8, virtual false, abstract: false, final false
inline void set_linePropertyAnimationSpeed(float_t  value) ;

/// @brief Method set_lineRenderer, addr 0xb483e80, size 0x30, virtual false, abstract: false, final false
inline void set_lineRenderer(::UnityEngine::LineRenderer*  value) ;

/// @brief Method set_maxVisualCurveDistance, addr 0xb484014, size 0x8, virtual false, abstract: false, final false
inline void set_maxVisualCurveDistance(float_t  value) ;

/// @brief Method set_noValidHitProperties, addr 0xb48411c, size 0x8, virtual false, abstract: false, final false
inline void set_noValidHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

/// @brief Method set_overrideLineOrigin, addr 0xb483f68, size 0x8, virtual false, abstract: false, final false
inline void set_overrideLineOrigin(bool  value) ;

/// @brief Method set_renderLineInWorldSpace, addr 0xb48416c, size 0xa0, virtual false, abstract: false, final false
inline void set_renderLineInWorldSpace(bool  value) ;

/// @brief Method set_restingVisualLineLength, addr 0xb484024, size 0x8, virtual false, abstract: false, final false
inline void set_restingVisualLineLength(float_t  value) ;

/// @brief Method set_retractDelay, addr 0xb484044, size 0x8, virtual false, abstract: false, final false
inline void set_retractDelay(float_t  value) ;

/// @brief Method set_retractDuration, addr 0xb484054, size 0x8, virtual false, abstract: false, final false
inline void set_retractDuration(float_t  value) ;

/// @brief Method set_selectHitProperties, addr 0xb48414c, size 0x8, virtual false, abstract: false, final false
inline void set_selectHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

/// @brief Method set_snapToSelectedAttachIfAvailable, addr 0xb4840bc, size 0x8, virtual false, abstract: false, final false
inline void set_snapToSelectedAttachIfAvailable(bool  value) ;

/// @brief Method set_snapToSnapVolumeIfAvailable, addr 0xb4840cc, size 0x8, virtual false, abstract: false, final false
inline void set_snapToSnapVolumeIfAvailable(bool  value) ;

/// @brief Method set_swapMaterials, addr 0xb484214, size 0x8, virtual false, abstract: false, final false
inline void set_swapMaterials(bool  value) ;

/// @brief Method set_uiHitProperties, addr 0xb48412c, size 0x8, virtual false, abstract: false, final false
inline void set_uiHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

/// @brief Method set_uiPressHitProperties, addr 0xb48413c, size 0x8, virtual false, abstract: false, final false
inline void set_uiPressHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value) ;

/// @brief Method set_visualPointCount, addr 0xb484004, size 0x8, virtual false, abstract: false, final false
inline void set_visualPointCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController(CurveVisualController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController(CurveVisualController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11483};

/// @brief Field k_CurveFallbackLength offset 0xffffffff size 0x4
static constexpr float_t  k_CurveFallbackLength{static_cast<float_t>(0.06f)};

/// @brief Field k_DisableSquaredLength offset 0xffffffff size 0x4
static constexpr float_t  k_DisableSquaredLength{static_cast<float_t>(0.0001f)};

/// @brief Field k_FallBackLinePointCount offset 0xffffffff size 0x4
static constexpr int32_t  k_FallBackLinePointCount{static_cast<int32_t>(0x3)};

/// [SerializeField]
/// @brief Field m_LineRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___m_LineRenderer;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider))]
/// @brief Field m_CurveVisualObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_CurveVisualObject;

/// @brief Field m_CurveDataProviderObjectRef, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*  ___m_CurveDataProviderObjectRef;

/// [SerializeField]
/// @brief Field m_OverrideLineOrigin, offset: 0x38, size: 0x1, def value: None
 bool  ___m_OverrideLineOrigin;

/// [SerializeField]
/// @brief Field m_LineOriginTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LineOriginTransform;

/// [SerializeField]
/// @brief Field m_VisualPointCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_VisualPointCount;

/// [SerializeField]
/// @brief Field m_MaxVisualCurveDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_MaxVisualCurveDistance;

/// [SerializeField]
/// @brief Field m_RestingVisualLineLength, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_RestingVisualLineLength;

/// [SerializeField]
/// @brief Field m_LineDynamicsMode, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  ___m_LineDynamicsMode;

/// [SerializeField]
/// @brief Field m_RetractDelay, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_RetractDelay;

/// [SerializeField]
/// @brief Field m_RetractDuration, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_RetractDuration;

/// [SerializeField]
/// @brief Field m_ExtendLineToEmptyHit, offset: 0x60, size: 0x1, def value: None
 bool  ___m_ExtendLineToEmptyHit;

/// [SerializeField]
/// [Range(0, 30)]
/// @brief Field m_ExtensionRate, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_ExtensionRate;

/// [SerializeField]
/// @brief Field m_EndPointExpansionRate, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_EndPointExpansionRate;

/// [SerializeField]
/// @brief Field m_ComputeMidPointWithComplexCurves, offset: 0x6c, size: 0x1, def value: None
 bool  ___m_ComputeMidPointWithComplexCurves;

/// [SerializeField]
/// @brief Field m_SnapToSelectedAttachIfAvailable, offset: 0x6d, size: 0x1, def value: None
 bool  ___m_SnapToSelectedAttachIfAvailable;

/// [SerializeField]
/// @brief Field m_SnapToSnapVolumeIfAvailable, offset: 0x6e, size: 0x1, def value: None
 bool  ___m_SnapToSnapVolumeIfAvailable;

/// [SerializeField]
/// @brief Field m_CurveStartOffset, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_CurveStartOffset;

/// [SerializeField]
/// @brief Field m_CurveEndOffset, offset: 0x74, size: 0x4, def value: None
 float_t  ___m_CurveEndOffset;

/// [SerializeField]
/// @brief Field m_CustomizeLinePropertiesForState, offset: 0x78, size: 0x1, def value: None
 bool  ___m_CustomizeLinePropertiesForState;

/// [SerializeField]
/// @brief Field m_LinePropertyAnimationSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___m_LinePropertyAnimationSpeed;

/// [SerializeField]
/// @brief Field m_NoValidHitProperties, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  ___m_NoValidHitProperties;

/// [SerializeField]
/// @brief Field m_UIHitProperties, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  ___m_UIHitProperties;

/// [SerializeField]
/// @brief Field m_UIPressHitProperties, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  ___m_UIPressHitProperties;

/// [SerializeField]
/// @brief Field m_SelectHitProperties, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  ___m_SelectHitProperties;

/// [SerializeField]
/// @brief Field m_HoverHitProperties, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  ___m_HoverHitProperties;

/// [SerializeField]
/// @brief Field m_RenderLineInWorldSpace, offset: 0xa8, size: 0x1, def value: None
 bool  ___m_RenderLineInWorldSpace;

/// [SerializeField]
/// @brief Field m_SwapMaterials, offset: 0xa9, size: 0x1, def value: None
 bool  ___m_SwapMaterials;

/// [SerializeField]
/// @brief Field m_BaseLineMaterial, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_BaseLineMaterial;

/// [SerializeField]
/// @brief Field m_EmptyHitMaterial, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_EmptyHitMaterial;

/// @brief Field m_InternalSamplePoints, offset: 0xc0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_InternalSamplePoints;

/// @brief Field m_FallBackSamplePoints, offset: 0xd0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_FallBackSamplePoints;

/// @brief Field m_ParentTransform, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ParentTransform;

/// @brief Field m_LastHitTime, offset: 0xe8, size: 0x4, def value: None
 float_t  ___m_LastHitTime;

/// @brief Field m_LengthToLastHit, offset: 0xec, size: 0x4, def value: None
 float_t  ___m_LengthToLastHit;

/// @brief Field m_LineLength, offset: 0xf0, size: 0x4, def value: None
 float_t  ___m_LineLength;

/// @brief Field m_LastPosCount, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___m_LastPosCount;

/// @brief Field m_RenderLengthMultiplier, offset: 0xf8, size: 0x4, def value: None
 float_t  ___m_RenderLengthMultiplier;

/// @brief Field m_CanSwapMaterials, offset: 0xfc, size: 0x1, def value: None
 bool  ___m_CanSwapMaterials;

/// @brief Field m_LastLineStartWidth, offset: 0x100, size: 0x4, def value: None
 float_t  ___m_LastLineStartWidth;

/// @brief Field m_LastLineEndWidth, offset: 0x104, size: 0x4, def value: None
 float_t  ___m_LastLineEndWidth;

/// @brief Field m_EndPointTypeChangeTime, offset: 0x108, size: 0x4, def value: None
 float_t  ___m_EndPointTypeChangeTime;

/// @brief Field m_LastBendRatio, offset: 0x10c, size: 0x4, def value: None
 float_t  ___m_LastBendRatio;

/// @brief Field m_UseCustomOrigin, offset: 0x110, size: 0x1, def value: None
 bool  ___m_UseCustomOrigin;

/// @brief Field m_LastEndPointType, offset: 0x114, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  ___m_LastEndPointType;

/// @brief Field m_LastValidSelectState, offset: 0x118, size: 0x1, def value: None
 bool  ___m_LastValidSelectState;

/// @brief Field m_LerpGradient, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___m_LerpGradient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LineRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CurveVisualObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CurveDataProviderObjectRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_OverrideLineOrigin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LineOriginTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_VisualPointCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_MaxVisualCurveDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_RestingVisualLineLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LineDynamicsMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_RetractDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_RetractDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_ExtendLineToEmptyHit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_ExtensionRate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_EndPointExpansionRate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_ComputeMidPointWithComplexCurves) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_SnapToSelectedAttachIfAvailable) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_SnapToSnapVolumeIfAvailable) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CurveStartOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CurveEndOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CustomizeLinePropertiesForState) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LinePropertyAnimationSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_NoValidHitProperties) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_UIHitProperties) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_UIPressHitProperties) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_SelectHitProperties) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_HoverHitProperties) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_RenderLineInWorldSpace) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_SwapMaterials) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_BaseLineMaterial) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_EmptyHitMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_InternalSamplePoints) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_FallBackSamplePoints) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_ParentTransform) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastHitTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LengthToLastHit) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LineLength) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastPosCount) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_RenderLengthMultiplier) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_CanSwapMaterials) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastLineStartWidth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastLineEndWidth) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_EndPointTypeChangeTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastBendRatio) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_UseCustomOrigin) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastEndPointType) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LastValidSelectState) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController, ___m_LerpGradient) == 0x120, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController) == 0x128, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/ComputeFallBackLine_00000D27$BurstDirectCall
class CORDL_TYPE CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb48757c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb48748c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb486364, size 0xdc, virtual false, abstract: false, final false
static inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall(CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall(CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/ComputeFallBackLine_00000D27$PostfixBurstDelegate
class CORDL_TYPE CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb48734c, size 0x118, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb487464, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb487338, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb487284, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate(CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate(CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/AdjustCastHitEndPoint_00000D26$BurstDirectCall
class CORDL_TYPE CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb48726c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb48717c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb48627c, size 0xe8, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall(CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall(CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate
class CORDL_TYPE CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb487048, size 0x128, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb487170, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb487034, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb486f80, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate(CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate(CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/GetClosestPointOnLine_00000D25$BurstDirectCall
class CORDL_TYPE CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb486f68, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb486e78, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb486184, size 0xf8, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall(CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall(CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/GetClosestPointOnLine_00000D25$PostfixBurstDelegate
class CORDL_TYPE CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb486d88, size 0xe4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb486e6c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb486d74, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb486cc0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate(CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate(CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall
class CORDL_TYPE CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb486ca8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb486bb8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb486024, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall(CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall(CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11476};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController/GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate
class CORDL_TYPE CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb486ac0, size 0xec, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb486bac, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb486aac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4869f8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate(CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate(CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
