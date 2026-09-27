#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ManipulationAxes_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_TwoHandedRotationMode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGeneralGrabTransformer)
namespace GlobalNamespace {
struct XRBaseGrabTransformer_RegistrationMode;
}
namespace GlobalNamespace {
struct XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode;
}
namespace GlobalNamespace {
struct XRGeneralGrabTransformer_ManipulationAxes;
}
namespace GlobalNamespace {
struct XRGeneralGrabTransformer_TwoHandedRotationMode;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
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
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRScaleValueProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewObjectPosition_00000905$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewObjectPosition_00000905$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewOneHandedScale_0000090B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewTwoHandedScale_0000090C$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRGeneralGrabTransformer/ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate");
// [AddComponentMenu("XR/Transformers/XR General Grab Transformer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer.html")]
// [BurstCompile]
// Dependencies UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer, UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::ConstrainedAxisDisplacementMode, UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::ManipulationAxes, UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::TwoHandedRotationMode
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer
class CORDL_TYPE XRGeneralGrabTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
// Declarations
using ConstrainedAxisDisplacementMode = ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode;

using ManipulationAxes = ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes;

using TwoHandedRotationMode = ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode;

using AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall;

using AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate;

using ComputeNewObjectPosition_00000905$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall;

using ComputeNewObjectPosition_00000905$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate;

using ComputeNewOneHandedScale_0000090B$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall;

using ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate;

using ComputeNewTwoHandedScale_0000090C$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall;

using ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate;

 __declspec(property(get=get_allowOneHandedScaling, put=set_allowOneHandedScaling)) bool  allowOneHandedScaling;

 __declspec(property(get=get_allowTwoHandedRotation, put=set_allowTwoHandedRotation)) ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  allowTwoHandedRotation;

 __declspec(property(get=get_allowTwoHandedScaling, put=set_allowTwoHandedScaling)) bool  allowTwoHandedScaling;

 __declspec(property(get=get_clampScaling, put=set_clampScaling)) bool  clampScaling;

 __declspec(property(get=get_constrainedAxisDisplacementMode, put=set_constrainedAxisDisplacementMode)) ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  constrainedAxisDisplacementMode;

/// @brief Field m_AllowOneHandedScaling, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowOneHandedScaling, put=__cordl_internal_set_m_AllowOneHandedScaling)) bool  m_AllowOneHandedScaling;

/// @brief Field m_AllowTwoHandedScaling, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowTwoHandedScaling, put=__cordl_internal_set_m_AllowTwoHandedScaling)) bool  m_AllowTwoHandedScaling;

/// @brief Field m_ClampScaling, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ClampScaling, put=__cordl_internal_set_m_ClampScaling)) bool  m_ClampScaling;

/// @brief Field m_ConstrainedAxisDisplacementMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConstrainedAxisDisplacementMode, put=__cordl_internal_set_m_ConstrainedAxisDisplacementMode)) ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  m_ConstrainedAxisDisplacementMode;

/// @brief Field m_ConstrainedAxisDisplacementModeOnGrab, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab, put=__cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab)) ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  m_ConstrainedAxisDisplacementModeOnGrab;

/// @brief Field m_FirstFrameSinceTwoHandedGrab, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstFrameSinceTwoHandedGrab, put=__cordl_internal_set_m_FirstFrameSinceTwoHandedGrab)) bool  m_FirstFrameSinceTwoHandedGrab;

/// @brief Field m_HasScaleValueProvider, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasScaleValueProvider, put=__cordl_internal_set_m_HasScaleValueProvider)) bool  m_HasScaleValueProvider;

/// @brief Field m_InitialScale, offset 0x134, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialScale, put=__cordl_internal_set_m_InitialScale)) ::UnityEngine::Vector3  m_InitialScale;

/// @brief Field m_InitialScaleProportions, offset 0x140, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialScaleProportions, put=__cordl_internal_set_m_InitialScaleProportions)) ::UnityEngine::Vector3  m_InitialScaleProportions;

/// @brief Field m_InteractorLocalGrabPoint, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InteractorLocalGrabPoint, put=__cordl_internal_set_m_InteractorLocalGrabPoint)) ::UnityEngine::Vector3  m_InteractorLocalGrabPoint;

/// @brief Field m_InverseStartHandleBarLookRotation, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InverseStartHandleBarLookRotation, put=__cordl_internal_set_m_InverseStartHandleBarLookRotation)) ::UnityEngine::Quaternion  m_InverseStartHandleBarLookRotation;

/// @brief Field m_LastGrabCount, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastGrabCount, put=__cordl_internal_set_m_LastGrabCount)) int32_t  m_LastGrabCount;

/// @brief Field m_LastHandleBarLocalRotation, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastHandleBarLocalRotation, put=__cordl_internal_set_m_LastHandleBarLocalRotation)) ::UnityEngine::Quaternion  m_LastHandleBarLocalRotation;

/// @brief Field m_LastTwoHandedUp, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastTwoHandedUp, put=__cordl_internal_set_m_LastTwoHandedUp)) ::UnityEngine::Vector3  m_LastTwoHandedUp;

/// @brief Field m_MaximumScale, offset 0x158, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_MaximumScale, put=__cordl_internal_set_m_MaximumScale)) ::UnityEngine::Vector3  m_MaximumScale;

/// @brief Field m_MaximumScaleRatio, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumScaleRatio, put=__cordl_internal_set_m_MaximumScaleRatio)) float_t  m_MaximumScaleRatio;

/// @brief Field m_MinimumScale, offset 0x14c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_MinimumScale, put=__cordl_internal_set_m_MinimumScale)) ::UnityEngine::Vector3  m_MinimumScale;

/// @brief Field m_MinimumScaleRatio, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumScaleRatio, put=__cordl_internal_set_m_MinimumScaleRatio)) float_t  m_MinimumScaleRatio;

/// @brief Field m_ObjectLocalGrabPoint, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ObjectLocalGrabPoint, put=__cordl_internal_set_m_ObjectLocalGrabPoint)) ::UnityEngine::Vector3  m_ObjectLocalGrabPoint;

/// @brief Field m_OffsetPose, offset 0x64, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_OffsetPose, put=__cordl_internal_set_m_OffsetPose)) ::UnityEngine::Pose  m_OffsetPose;

/// @brief Field m_OneHandedScaleSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OneHandedScaleSpeed, put=__cordl_internal_set_m_OneHandedScaleSpeed)) float_t  m_OneHandedScaleSpeed;

/// @brief Field m_OriginalInteractor, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OriginalInteractor, put=__cordl_internal_set_m_OriginalInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  m_OriginalInteractor;

/// @brief Field m_OriginalInteractorPose, offset 0x80, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_OriginalInteractorPose, put=__cordl_internal_set_m_OriginalInteractorPose)) ::UnityEngine::Pose  m_OriginalInteractorPose;

/// @brief Field m_OriginalObjectPose, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_OriginalObjectPose, put=__cordl_internal_set_m_OriginalObjectPose)) ::UnityEngine::Pose  m_OriginalObjectPose;

/// @brief Field m_PermittedDisplacementAxes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PermittedDisplacementAxes, put=__cordl_internal_set_m_PermittedDisplacementAxes)) ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  m_PermittedDisplacementAxes;

/// @brief Field m_PermittedDisplacementAxesOnGrab, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PermittedDisplacementAxesOnGrab, put=__cordl_internal_set_m_PermittedDisplacementAxesOnGrab)) ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  m_PermittedDisplacementAxesOnGrab;

/// @brief Field m_ScaleAtGrabStart, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ScaleAtGrabStart, put=__cordl_internal_set_m_ScaleAtGrabStart)) ::UnityEngine::Vector3  m_ScaleAtGrabStart;

/// @brief Field m_ScaleMultiplier, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScaleMultiplier, put=__cordl_internal_set_m_ScaleMultiplier)) float_t  m_ScaleMultiplier;

/// @brief Field m_ScaleValueProvider, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScaleValueProvider, put=__cordl_internal_set_m_ScaleValueProvider)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*  m_ScaleValueProvider;

/// @brief Field m_StartHandleBar, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartHandleBar, put=__cordl_internal_set_m_StartHandleBar)) ::UnityEngine::Vector3  m_StartHandleBar;

/// @brief Field m_StartHandleBarLookRotation, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_StartHandleBarLookRotation, put=__cordl_internal_set_m_StartHandleBarLookRotation)) ::UnityEngine::Quaternion  m_StartHandleBarLookRotation;

/// @brief Field m_StartHandleBarNormalized, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartHandleBarNormalized, put=__cordl_internal_set_m_StartHandleBarNormalized)) ::UnityEngine::Vector3  m_StartHandleBarNormalized;

/// @brief Field m_StartHandleBarUp, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartHandleBarUp, put=__cordl_internal_set_m_StartHandleBarUp)) ::UnityEngine::Vector3  m_StartHandleBarUp;

/// @brief Field m_ThresholdMoveRatioForScale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ThresholdMoveRatioForScale, put=__cordl_internal_set_m_ThresholdMoveRatioForScale)) float_t  m_ThresholdMoveRatioForScale;

/// @brief Field m_TwoHandedRotationMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TwoHandedRotationMode, put=__cordl_internal_set_m_TwoHandedRotationMode)) ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  m_TwoHandedRotationMode;

 __declspec(property(get=get_maximumScaleRatio, put=set_maximumScaleRatio)) float_t  maximumScaleRatio;

 __declspec(property(get=get_minimumScaleRatio, put=set_minimumScaleRatio)) float_t  minimumScaleRatio;

 __declspec(property(get=get_oneHandedScaleSpeed, put=set_oneHandedScaleSpeed)) float_t  oneHandedScaleSpeed;

 __declspec(property(get=get_permittedDisplacementAxes, put=set_permittedDisplacementAxes)) ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  permittedDisplacementAxes;

 __declspec(property(get=get_registrationMode)) ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode  registrationMode;

 __declspec(property(get=get_scaleMultiplier, put=set_scaleMultiplier)) float_t  scaleMultiplier;

 __declspec(property(get=get_thresholdMoveRatioForScale, put=set_thresholdMoveRatioForScale)) float_t  thresholdMoveRatioForScale;

/// @brief Method AdjustPositionForPermittedAxes, addr 0xb45abd8, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 AdjustPositionForPermittedAxes(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  permittedAxes, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate))]
/// @brief Method AdjustPositionForPermittedAxesBurst, addr 0xb45a17c, size 0x8, virtual false, abstract: false, final false
static inline void AdjustPositionForPermittedAxesBurst(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition) ;

/// [BurstCompile]
/// @brief Method AdjustPositionForPermittedAxesBurst$BurstManaged, addr 0xb45c27c, size 0x7d0, virtual false, abstract: false, final false
static inline void AdjustPositionForPermittedAxesBurst$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition) ;

/// @brief Method Awake, addr 0xb45a2a4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeAdjustedInteractorPose, addr 0xb45b0e0, size 0xad8, virtual false, abstract: false, final false
inline void ComputeAdjustedInteractorPose(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Vector3>  newHandleBar, ::by_ref<::UnityEngine::Vector3>  adjustedInteractorPosition, ::by_ref<::UnityEngine::Quaternion>  adjustedInteractorRotation) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::ComputeNewObjectPosition_00000905$PostfixBurstDelegate))]
/// @brief Method ComputeNewObjectPosition, addr 0xb45a170, size 0xc, virtual false, abstract: false, final false
static inline void ComputeNewObjectPosition(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition) ;

/// [BurstCompile]
/// @brief Method ComputeNewObjectPosition$BurstManaged, addr 0xb45c070, size 0x20c, virtual false, abstract: false, final false
static inline void ComputeNewObjectPosition$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition) ;

/// @brief Method ComputeNewObjectRotation, addr 0xb45bce8, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion ComputeNewObjectRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  interactorRotation, bool  trackRotation) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate))]
/// @brief Method ComputeNewOneHandedScale, addr 0xb45a184, size 0x8, virtual false, abstract: false, final false
static inline void ComputeNewOneHandedScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale) ;

/// [BurstCompile]
/// @brief Method ComputeNewOneHandedScale$BurstManaged, addr 0xb45ca4c, size 0x220, virtual false, abstract: false, final false
static inline void ComputeNewOneHandedScale$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale) ;

/// @brief Method ComputeNewScale, addr 0xb45bd90, size 0x29c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeNewScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>  grabInteractable, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  trackScale) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer::ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate))]
/// @brief Method ComputeNewTwoHandedScale, addr 0xb45a18c, size 0x8, virtual false, abstract: false, final false
static inline void ComputeNewTwoHandedScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale) ;

/// [BurstCompile]
/// @brief Method ComputeNewTwoHandedScale$BurstManaged, addr 0xb45cc6c, size 0x278, virtual false, abstract: false, final false
static inline void ComputeNewTwoHandedScale$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer* New_ctor() ;

/// @brief Method OnGrab, addr 0xb45a5c0, size 0x618, virtual true, abstract: false, final false
inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method OnGrabCountChanged, addr 0xb45ad1c, size 0x3c4, virtual true, abstract: false, final false
inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale) ;

/// @brief Method OnLink, addr 0xb45a2a8, size 0x110, virtual true, abstract: false, final false
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method Process, addr 0xb45a3b8, size 0x1c, virtual true, abstract: false, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method Scale, addr 0xb45bcd8, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Scale(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method TranslateSetup, addr 0xb45ac48, size 0xd4, virtual false, abstract: false, final false
inline void TranslateSetup(::UnityEngine::Pose  interactorCentroidPose, ::UnityEngine::Vector3  grabCentroid, ::UnityEngine::Pose  objectPose, ::UnityEngine::Vector3  objectScale) ;

/// @brief Method UpdateTarget, addr 0xb45a3d4, size 0x1ec, virtual false, abstract: false, final false
inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

constexpr bool const& __cordl_internal_get_m_AllowOneHandedScaling() const;

constexpr bool& __cordl_internal_get_m_AllowOneHandedScaling() ;

constexpr bool const& __cordl_internal_get_m_AllowTwoHandedScaling() const;

constexpr bool& __cordl_internal_get_m_AllowTwoHandedScaling() ;

constexpr bool const& __cordl_internal_get_m_ClampScaling() const;

constexpr bool& __cordl_internal_get_m_ClampScaling() ;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const& __cordl_internal_get_m_ConstrainedAxisDisplacementMode() const;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode& __cordl_internal_get_m_ConstrainedAxisDisplacementMode() ;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const& __cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() const;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode& __cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() ;

constexpr bool const& __cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() const;

constexpr bool& __cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() ;

constexpr bool const& __cordl_internal_get_m_HasScaleValueProvider() const;

constexpr bool& __cordl_internal_get_m_HasScaleValueProvider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialScaleProportions() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialScaleProportions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InteractorLocalGrabPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InteractorLocalGrabPoint() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_InverseStartHandleBarLookRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_InverseStartHandleBarLookRotation() ;

constexpr int32_t const& __cordl_internal_get_m_LastGrabCount() const;

constexpr int32_t& __cordl_internal_get_m_LastGrabCount() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_LastHandleBarLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_LastHandleBarLocalRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastTwoHandedUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastTwoHandedUp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MaximumScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MaximumScale() ;

constexpr float_t const& __cordl_internal_get_m_MaximumScaleRatio() const;

constexpr float_t& __cordl_internal_get_m_MaximumScaleRatio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MinimumScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MinimumScale() ;

constexpr float_t const& __cordl_internal_get_m_MinimumScaleRatio() const;

constexpr float_t& __cordl_internal_get_m_MinimumScaleRatio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ObjectLocalGrabPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ObjectLocalGrabPoint() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OffsetPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OffsetPose() ;

constexpr float_t const& __cordl_internal_get_m_OneHandedScaleSpeed() const;

constexpr float_t& __cordl_internal_get_m_OneHandedScaleSpeed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get_m_OriginalInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get_m_OriginalInteractor() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginalInteractorPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginalInteractorPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginalObjectPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginalObjectPose() ;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes const& __cordl_internal_get_m_PermittedDisplacementAxes() const;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes& __cordl_internal_get_m_PermittedDisplacementAxes() ;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes const& __cordl_internal_get_m_PermittedDisplacementAxesOnGrab() const;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes& __cordl_internal_get_m_PermittedDisplacementAxesOnGrab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ScaleAtGrabStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ScaleAtGrabStart() ;

constexpr float_t const& __cordl_internal_get_m_ScaleMultiplier() const;

constexpr float_t& __cordl_internal_get_m_ScaleMultiplier() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider* const& __cordl_internal_get_m_ScaleValueProvider() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*& __cordl_internal_get_m_ScaleValueProvider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartHandleBar() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartHandleBar() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_StartHandleBarLookRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_StartHandleBarLookRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartHandleBarNormalized() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartHandleBarNormalized() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartHandleBarUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartHandleBarUp() ;

constexpr float_t const& __cordl_internal_get_m_ThresholdMoveRatioForScale() const;

constexpr float_t& __cordl_internal_get_m_ThresholdMoveRatioForScale() ;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode const& __cordl_internal_get_m_TwoHandedRotationMode() const;

constexpr ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode& __cordl_internal_get_m_TwoHandedRotationMode() ;

constexpr void __cordl_internal_set_m_AllowOneHandedScaling(bool  value) ;

constexpr void __cordl_internal_set_m_AllowTwoHandedScaling(bool  value) ;

constexpr void __cordl_internal_set_m_ClampScaling(bool  value) ;

constexpr void __cordl_internal_set_m_ConstrainedAxisDisplacementMode(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value) ;

constexpr void __cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value) ;

constexpr void __cordl_internal_set_m_FirstFrameSinceTwoHandedGrab(bool  value) ;

constexpr void __cordl_internal_set_m_HasScaleValueProvider(bool  value) ;

constexpr void __cordl_internal_set_m_InitialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InitialScaleProportions(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InteractorLocalGrabPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InverseStartHandleBarLookRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_LastGrabCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastHandleBarLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_LastTwoHandedUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MaximumScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MaximumScaleRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_MinimumScaleRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_ObjectLocalGrabPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_OffsetPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_OneHandedScaleSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_OriginalInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

constexpr void __cordl_internal_set_m_OriginalInteractorPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_OriginalObjectPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_PermittedDisplacementAxes(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value) ;

constexpr void __cordl_internal_set_m_PermittedDisplacementAxesOnGrab(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value) ;

constexpr void __cordl_internal_set_m_ScaleAtGrabStart(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_ScaleValueProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*  value) ;

constexpr void __cordl_internal_set_m_StartHandleBar(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StartHandleBarLookRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_StartHandleBarNormalized(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StartHandleBarUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ThresholdMoveRatioForScale(float_t  value) ;

constexpr void __cordl_internal_set_m_TwoHandedRotationMode(::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  value) ;

/// @brief Method .ctor, addr 0xb45c02c, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowOneHandedScaling, addr 0xb45a1c4, size 0x8, virtual false, abstract: false, final false
inline bool get_allowOneHandedScaling() ;

/// @brief Method get_allowTwoHandedRotation, addr 0xb45a1b4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode get_allowTwoHandedRotation() ;

/// @brief Method get_allowTwoHandedScaling, addr 0xb45a1d4, size 0x8, virtual false, abstract: false, final false
inline bool get_allowTwoHandedScaling() ;

/// @brief Method get_clampScaling, addr 0xb45a20c, size 0x8, virtual false, abstract: false, final false
inline bool get_clampScaling() ;

/// @brief Method get_constrainedAxisDisplacementMode, addr 0xb45a1a4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode get_constrainedAxisDisplacementMode() ;

/// @brief Method get_maximumScaleRatio, addr 0xb45a254, size 0x8, virtual false, abstract: false, final false
inline float_t get_maximumScaleRatio() ;

/// @brief Method get_minimumScaleRatio, addr 0xb45a21c, size 0x8, virtual false, abstract: false, final false
inline float_t get_minimumScaleRatio() ;

/// @brief Method get_oneHandedScaleSpeed, addr 0xb45a1e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_oneHandedScaleSpeed() ;

/// @brief Method get_permittedDisplacementAxes, addr 0xb45a194, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes get_permittedDisplacementAxes() ;

/// @brief Method get_registrationMode, addr 0xb45a29c, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode get_registrationMode() ;

/// @brief Method get_scaleMultiplier, addr 0xb45a28c, size 0x8, virtual false, abstract: false, final false
inline float_t get_scaleMultiplier() ;

/// @brief Method get_thresholdMoveRatioForScale, addr 0xb45a1fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_thresholdMoveRatioForScale() ;

/// @brief Method set_allowOneHandedScaling, addr 0xb45a1cc, size 0x8, virtual false, abstract: false, final false
inline void set_allowOneHandedScaling(bool  value) ;

/// @brief Method set_allowTwoHandedRotation, addr 0xb45a1bc, size 0x8, virtual false, abstract: false, final false
inline void set_allowTwoHandedRotation(::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  value) ;

/// @brief Method set_allowTwoHandedScaling, addr 0xb45a1dc, size 0x8, virtual false, abstract: false, final false
inline void set_allowTwoHandedScaling(bool  value) ;

/// @brief Method set_clampScaling, addr 0xb45a214, size 0x8, virtual false, abstract: false, final false
inline void set_clampScaling(bool  value) ;

/// @brief Method set_constrainedAxisDisplacementMode, addr 0xb45a1ac, size 0x8, virtual false, abstract: false, final false
inline void set_constrainedAxisDisplacementMode(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value) ;

/// @brief Method set_maximumScaleRatio, addr 0xb45a25c, size 0x30, virtual false, abstract: false, final false
inline void set_maximumScaleRatio(float_t  value) ;

/// @brief Method set_minimumScaleRatio, addr 0xb45a224, size 0x30, virtual false, abstract: false, final false
inline void set_minimumScaleRatio(float_t  value) ;

/// @brief Method set_oneHandedScaleSpeed, addr 0xb45a1ec, size 0x10, virtual false, abstract: false, final false
inline void set_oneHandedScaleSpeed(float_t  value) ;

/// @brief Method set_permittedDisplacementAxes, addr 0xb45a19c, size 0x8, virtual false, abstract: false, final false
inline void set_permittedDisplacementAxes(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value) ;

/// @brief Method set_scaleMultiplier, addr 0xb45a294, size 0x8, virtual false, abstract: false, final false
inline void set_scaleMultiplier(float_t  value) ;

/// @brief Method set_thresholdMoveRatioForScale, addr 0xb45a204, size 0x8, virtual false, abstract: false, final false
inline void set_thresholdMoveRatioForScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer(XRGeneralGrabTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer(XRGeneralGrabTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11412};

/// [Header("Translation Constraints")]
/// [SerializeField]
/// [Tooltip("Permitted axes for translation displacement relative to the object\'s initial rotation.")]
/// @brief Field m_PermittedDisplacementAxes, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  ___m_PermittedDisplacementAxes;

/// [SerializeField]
/// [Tooltip("Determines how the constrained axis displacement mode is computed.")]
/// @brief Field m_ConstrainedAxisDisplacementMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  ___m_ConstrainedAxisDisplacementMode;

/// [Header("Rotation Constraints")]
/// [SerializeField]
/// [Tooltip("Determines how rotation is calculated when using two hands for the grab interaction.")]
/// @brief Field m_TwoHandedRotationMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  ___m_TwoHandedRotationMode;

/// [Header("Scaling Constraints")]
/// [SerializeField]
/// [Tooltip("Allow one handed scaling using the scale value provider if available.")]
/// @brief Field m_AllowOneHandedScaling, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_AllowOneHandedScaling;

/// [SerializeField]
/// [Tooltip("Allow scaling when using multi-grab interaction.")]
/// @brief Field m_AllowTwoHandedScaling, offset: 0x2d, size: 0x1, def value: None
 bool  ___m_AllowTwoHandedScaling;

/// [SerializeField]
/// [Tooltip("Scaling speed over time for one handed scaling based on the scale value provider.")]
/// [Range(0, 32)]
/// @brief Field m_OneHandedScaleSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_OneHandedScaleSpeed;

/// [SerializeField]
/// [Tooltip("(Two Handed Scaling) Percentage as a measure of 0 to 1 of scaled relative hand displacement required to trigger scale operation.\nIf this value is 0f, scaling happens the moment both grab interactors move closer or further away from each other.\nOtherwise, this percentage is used as a threshold before any scaling happens.")]
/// [Range(0, 1)]
/// @brief Field m_ThresholdMoveRatioForScale, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_ThresholdMoveRatioForScale;

/// [Space]
/// [SerializeField]
/// [Tooltip("If enabled, scaling will abide by ratio ranges defined below.")]
/// @brief Field m_ClampScaling, offset: 0x38, size: 0x1, def value: None
 bool  ___m_ClampScaling;

/// [SerializeField]
/// [Tooltip("Minimum scale multiplier applied to the initial scale captured on start.")]
/// [Range(0.01, 1)]
/// @brief Field m_MinimumScaleRatio, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_MinimumScaleRatio;

/// [SerializeField]
/// [Tooltip("Maximum scale multiplier applied to the initial scale captured on start.")]
/// [Range(1, 10)]
/// @brief Field m_MaximumScaleRatio, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MaximumScaleRatio;

/// [Space]
/// [SerializeField]
/// [Range(0.1, 5)]
/// [Tooltip("Scales the distance of displacement between interactors needed to modify the scale interactable.")]
/// @brief Field m_ScaleMultiplier, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_ScaleMultiplier;

/// @brief Field m_OriginalObjectPose, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_OriginalObjectPose;

/// @brief Field m_OffsetPose, offset: 0x64, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_OffsetPose;

/// @brief Field m_OriginalInteractorPose, offset: 0x80, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_OriginalInteractorPose;

/// @brief Field m_InteractorLocalGrabPoint, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InteractorLocalGrabPoint;

/// @brief Field m_ObjectLocalGrabPoint, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ObjectLocalGrabPoint;

/// @brief Field m_OriginalInteractor, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ___m_OriginalInteractor;

/// @brief Field m_LastGrabCount, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___m_LastGrabCount;

/// @brief Field m_StartHandleBar, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartHandleBar;

/// @brief Field m_StartHandleBarNormalized, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartHandleBarNormalized;

/// @brief Field m_StartHandleBarUp, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartHandleBarUp;

/// @brief Field m_StartHandleBarLookRotation, offset: 0xe8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_StartHandleBarLookRotation;

/// @brief Field m_InverseStartHandleBarLookRotation, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_InverseStartHandleBarLookRotation;

/// @brief Field m_LastHandleBarLocalRotation, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_LastHandleBarLocalRotation;

/// @brief Field m_ScaleAtGrabStart, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ScaleAtGrabStart;

/// @brief Field m_FirstFrameSinceTwoHandedGrab, offset: 0x124, size: 0x1, def value: None
 bool  ___m_FirstFrameSinceTwoHandedGrab;

/// @brief Field m_LastTwoHandedUp, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastTwoHandedUp;

/// @brief Field m_InitialScale, offset: 0x134, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialScale;

/// @brief Field m_InitialScaleProportions, offset: 0x140, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialScaleProportions;

/// @brief Field m_MinimumScale, offset: 0x14c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_MinimumScale;

/// @brief Field m_MaximumScale, offset: 0x158, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_MaximumScale;

/// @brief Field m_ConstrainedAxisDisplacementModeOnGrab, offset: 0x164, size: 0x4, def value: None
 ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  ___m_ConstrainedAxisDisplacementModeOnGrab;

/// @brief Field m_PermittedDisplacementAxesOnGrab, offset: 0x168, size: 0x4, def value: None
 ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  ___m_PermittedDisplacementAxesOnGrab;

/// @brief Field m_ScaleValueProvider, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*  ___m_ScaleValueProvider;

/// @brief Field m_HasScaleValueProvider, offset: 0x178, size: 0x1, def value: None
 bool  ___m_HasScaleValueProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_PermittedDisplacementAxes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ConstrainedAxisDisplacementMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_TwoHandedRotationMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_AllowOneHandedScaling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_AllowTwoHandedScaling) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OneHandedScaleSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ThresholdMoveRatioForScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ClampScaling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MinimumScaleRatio) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MaximumScaleRatio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ScaleMultiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalObjectPose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OffsetPose) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalInteractorPose) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InteractorLocalGrabPoint) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ObjectLocalGrabPoint) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_OriginalInteractor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_LastGrabCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_StartHandleBar) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_StartHandleBarNormalized) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_StartHandleBarUp) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_StartHandleBarLookRotation) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InverseStartHandleBarLookRotation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_LastHandleBarLocalRotation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ScaleAtGrabStart) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_FirstFrameSinceTwoHandedGrab) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_LastTwoHandedUp) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InitialScale) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_InitialScaleProportions) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MinimumScale) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_MaximumScale) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ConstrainedAxisDisplacementModeOnGrab) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_PermittedDisplacementAxesOnGrab) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_ScaleValueProvider) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer, ___m_HasScaleValueProvider) == 0x178, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer) == 0x180, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewTwoHandedScale_0000090C$BurstDirectCall
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb45e07c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb45df8c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45e094, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45ddf4, size 0x18c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method EndInvoke, addr 0xb45df80, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45ddd8, size 0x1c, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45dd24, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewOneHandedScale_0000090B$BurstDirectCall
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb45dbdc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb45daec, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45dbf4, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45d970, size 0x170, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0xb45dae0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45d95c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45d8a8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall
class CORDL_TYPE XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb45d790, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb45d6a0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45d7a8, size 0x100, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall(XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall(XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11407};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate
class CORDL_TYPE XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45d534, size 0x160, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb45d694, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45d51c, size 0x18, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45d468, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate(XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate(XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewObjectPosition_00000905$BurstDirectCall
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb45d244, size 0x224, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb45d154, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45bbb8, size 0x120, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall(XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11405};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer/ComputeNewObjectPosition_00000905$PostfixBurstDelegate
class CORDL_TYPE XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45cfb8, size 0x190, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0xb45d148, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45cf98, size 0x20, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45cee4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate(XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
