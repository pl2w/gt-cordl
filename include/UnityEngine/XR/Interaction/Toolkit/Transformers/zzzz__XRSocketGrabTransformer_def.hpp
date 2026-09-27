#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSocketGrabTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRSocketGrabTransformer)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct SocketScaleMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class IXRGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/CalculateScaleToFit_00000931$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/CalculateScaleToFit_00000931$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/FastCalculateRadiusOffset_0000092E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/FastComputeNewTrackedPose_0000092F$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/IsWithinRadius_00000930$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRSocketGrabTransformer/IsWithinRadius_00000930$PostfixBurstDelegate");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.html")]
// [BurstCompile]
// Dependencies System.Object, Unity.Mathematics.float3, UnityEngine.XR.Interaction.Toolkit.Interactors.SocketScaleMode
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer
class CORDL_TYPE XRSocketGrabTransformer : public ::System::Object {
public:
// Declarations
using CalculateScaleToFit_00000931$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall;

using CalculateScaleToFit_00000931$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate;

using FastCalculateRadiusOffset_0000092E$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall;

using FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate;

using FastComputeNewTrackedPose_0000092F$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall;

using FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate;

using IsWithinRadius_00000930$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall;

using IsWithinRadius_00000930$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate;

/// @brief Field <canProcess>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__canProcess_k__BackingField, put=__cordl_internal_set__canProcess_k__BackingField)) bool  _canProcess_k__BackingField;

/// @brief Field <fixedScale>k__BackingField, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__fixedScale_k__BackingField, put=__cordl_internal_set__fixedScale_k__BackingField)) ::Unity::Mathematics::float3  _fixedScale_k__BackingField;

/// @brief Field <scaleMode>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaleMode_k__BackingField, put=__cordl_internal_set__scaleMode_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  _scaleMode_k__BackingField;

/// @brief Field <scaleOnlyMode>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleOnlyMode_k__BackingField, put=__cordl_internal_set__scaleOnlyMode_k__BackingField)) bool  _scaleOnlyMode_k__BackingField;

/// @brief Field <socketInteractor>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__socketInteractor_k__BackingField, put=__cordl_internal_set__socketInteractor_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  _socketInteractor_k__BackingField;

/// @brief Field <socketSnappingRadius>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__socketSnappingRadius_k__BackingField, put=__cordl_internal_set__socketSnappingRadius_k__BackingField)) float_t  _socketSnappingRadius_k__BackingField;

/// @brief Field <targetBoundsSize>k__BackingField, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetBoundsSize_k__BackingField, put=__cordl_internal_set__targetBoundsSize_k__BackingField)) ::Unity::Mathematics::float3  _targetBoundsSize_k__BackingField;

 __declspec(property(get=get_canProcess, put=set_canProcess)) bool  canProcess;

 __declspec(property(get=get_fixedScale, put=set_fixedScale)) ::Unity::Mathematics::float3  fixedScale;

/// @brief Field m_InitialScale, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InitialScale, put=__cordl_internal_set_m_InitialScale)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  m_InitialScale;

/// @brief Field m_InteractableBoundsSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableBoundsSize, put=__cordl_internal_set_m_InteractableBoundsSize)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  m_InteractableBoundsSize;

 __declspec(property(get=get_scaleMode, put=set_scaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  scaleMode;

 __declspec(property(get=get_scaleOnlyMode, put=set_scaleOnlyMode)) bool  scaleOnlyMode;

 __declspec(property(get=get_socketInteractor, put=set_socketInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  socketInteractor;

 __declspec(property(get=get_socketSnappingRadius, put=set_socketSnappingRadius)) float_t  socketSnappingRadius;

 __declspec(property(get=get_targetBoundsSize, put=set_targetBoundsSize)) ::Unity::Mathematics::float3  targetBoundsSize;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer::CalculateScaleToFit_00000931$PostfixBurstDelegate))]
/// @brief Method CalculateScaleToFit, addr 0xb45e548, size 0x4, virtual false, abstract: false, final false
static inline void CalculateScaleToFit(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale) ;

/// [BurstCompile]
/// @brief Method CalculateScaleToFit$BurstManaged, addr 0xb45fb78, size 0x90, virtual false, abstract: false, final false
static inline void CalculateScaleToFit$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale) ;

/// @brief Method ComputeSocketTargetScale, addr 0xb45eb3c, size 0x128, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 ComputeSocketTargetScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialInteractableScale) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer::FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate))]
/// @brief Method FastCalculateRadiusOffset, addr 0xb45e53c, size 0x4, virtual false, abstract: false, final false
static inline float_t FastCalculateRadiusOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius) ;

/// [BurstCompile]
/// @brief Method FastCalculateRadiusOffset$BurstManaged, addr 0xb45f83c, size 0xf4, virtual false, abstract: false, final false
static inline float_t FastCalculateRadiusOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer::FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate))]
/// @brief Method FastComputeNewTrackedPose, addr 0xb45e540, size 0x4, virtual false, abstract: false, final false
static inline void FastComputeNewTrackedPose(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot) ;

/// [BurstCompile]
/// @brief Method FastComputeNewTrackedPose$BurstManaged, addr 0xb45f930, size 0x210, virtual false, abstract: false, final false
static inline void FastComputeNewTrackedPose$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot) ;

/// @brief Method GetTargetPoseForInteractable, addr 0xb45ee70, size 0x374, virtual false, abstract: false, final false
static inline bool GetTargetPoseForInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::Pose>  targetPose) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Transformers.UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer::IsWithinRadius_00000930$PostfixBurstDelegate))]
/// @brief Method IsWithinRadius, addr 0xb45e544, size 0x4, virtual false, abstract: false, final false
static inline bool IsWithinRadius(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius) ;

/// [BurstCompile]
/// @brief Method IsWithinRadius$BurstManaged, addr 0xb45fb40, size 0x38, virtual false, abstract: false, final false
static inline bool IsWithinRadius$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer* New_ctor() ;

/// @brief Method OnGrab, addr 0xb45e5d0, size 0x4, virtual true, abstract: false, final true
inline void OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method OnGrabCountChanged, addr 0xb45e5d4, size 0x4, virtual true, abstract: false, final true
inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale) ;

/// @brief Method OnLink, addr 0xb45e5cc, size 0x4, virtual true, abstract: false, final true
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method OnUnlink, addr 0xb45f1e4, size 0xd0, virtual true, abstract: false, final true
inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable) ;

/// @brief Method Process, addr 0xb45e880, size 0x158, virtual true, abstract: false, final true
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method RegisterInteractableScale, addr 0xb45e5d8, size 0x2a8, virtual false, abstract: false, final false
inline bool RegisterInteractableScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  targetInteractable, ::UnityEngine::Vector3  scale) ;

/// @brief Method UpdateTargetWithScale, addr 0xb45ec64, size 0x20c, virtual false, abstract: false, final false
static inline void UpdateTargetWithScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  innerRadius, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBounds, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method UpdateTargetWithoutScale, addr 0xb45e9d8, size 0x164, virtual false, abstract: false, final false
static inline void UpdateTargetWithoutScale(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  snappingRadius, ::by_ref<::UnityEngine::Pose>  targetPose) ;

constexpr bool const& __cordl_internal_get__canProcess_k__BackingField() const;

constexpr bool& __cordl_internal_get__canProcess_k__BackingField() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__fixedScale_k__BackingField() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__fixedScale_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode const& __cordl_internal_get__scaleMode_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode& __cordl_internal_get__scaleMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__scaleOnlyMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__scaleOnlyMode_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get__socketInteractor_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get__socketInteractor_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__socketSnappingRadius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__socketSnappingRadius_k__BackingField() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get__targetBoundsSize_k__BackingField() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get__targetBoundsSize_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>* const& __cordl_internal_get_m_InitialScale() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*& __cordl_internal_get_m_InitialScale() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>* const& __cordl_internal_get_m_InteractableBoundsSize() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*& __cordl_internal_get_m_InteractableBoundsSize() ;

constexpr void __cordl_internal_set__canProcess_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__fixedScale_k__BackingField(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set__scaleMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value) ;

constexpr void __cordl_internal_set__scaleOnlyMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__socketInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

constexpr void __cordl_internal_set__socketSnappingRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__targetBoundsSize_k__BackingField(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_m_InitialScale(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  value) ;

constexpr void __cordl_internal_set_m_InteractableBoundsSize(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  value) ;

/// @brief Method .ctor, addr 0xb45f778, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_canProcess, addr 0xb45e54c, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// [CompilerGenerated]
/// @brief Method get_fixedScale, addr 0xb45e58c, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_fixedScale() ;

/// [CompilerGenerated]
/// @brief Method get_scaleMode, addr 0xb45e56c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode get_scaleMode() ;

/// [CompilerGenerated]
/// @brief Method get_scaleOnlyMode, addr 0xb45e57c, size 0x8, virtual false, abstract: false, final false
inline bool get_scaleOnlyMode() ;

/// [CompilerGenerated]
/// @brief Method get_socketInteractor, addr 0xb45e5bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_socketInteractor() ;

/// [CompilerGenerated]
/// @brief Method get_socketSnappingRadius, addr 0xb45e55c, size 0x8, virtual false, abstract: false, final false
inline float_t get_socketSnappingRadius() ;

/// [CompilerGenerated]
/// @brief Method get_targetBoundsSize, addr 0xb45e5a4, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_targetBoundsSize() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_canProcess, addr 0xb45e554, size 0x8, virtual false, abstract: false, final false
inline void set_canProcess(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_fixedScale, addr 0xb45e598, size 0xc, virtual false, abstract: false, final false
inline void set_fixedScale(::Unity::Mathematics::float3  value) ;

/// [CompilerGenerated]
/// @brief Method set_scaleMode, addr 0xb45e574, size 0x8, virtual false, abstract: false, final false
inline void set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_scaleOnlyMode, addr 0xb45e584, size 0x8, virtual false, abstract: false, final false
inline void set_scaleOnlyMode(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_socketInteractor, addr 0xb45e5c4, size 0x8, virtual false, abstract: false, final false
inline void set_socketInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_socketSnappingRadius, addr 0xb45e564, size 0x8, virtual false, abstract: false, final false
inline void set_socketSnappingRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_targetBoundsSize, addr 0xb45e5b0, size 0xc, virtual false, abstract: false, final false
inline void set_targetBoundsSize(::Unity::Mathematics::float3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer(XRSocketGrabTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer(XRSocketGrabTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11423};

/// @brief Field k_SocketSnappingAxisTolerance offset 0xffffffff size 0x4
static constexpr float_t  k_SocketSnappingAxisTolerance{static_cast<float_t>(0.01f)};

/// [CompilerGenerated]
/// @brief Field <canProcess>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____canProcess_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <socketSnappingRadius>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  ____socketSnappingRadius_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <scaleMode>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  ____scaleMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <scaleOnlyMode>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____scaleOnlyMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <fixedScale>k__BackingField, offset: 0x20, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____fixedScale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <targetBoundsSize>k__BackingField, offset: 0x2c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ____targetBoundsSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <socketInteractor>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ____socketInteractor_k__BackingField;

/// @brief Field m_InitialScale, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  ___m_InitialScale;

/// @brief Field m_InteractableBoundsSize, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::Unity::Mathematics::float3>*  ___m_InteractableBoundsSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____canProcess_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____socketSnappingRadius_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____scaleMode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____scaleOnlyMode_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____fixedScale_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____targetBoundsSize_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ____socketInteractor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ___m_InitialScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer, ___m_InteractableBoundsSize) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/CalculateScaleToFit_00000931$BurstDirectCall
class CORDL_TYPE XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb46079c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4606ac, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45f624, size 0x154, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall(XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall(XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/CalculateScaleToFit_00000931$PostfixBurstDelegate
class CORDL_TYPE XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb46059c, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb4606a0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb460588, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  boundsSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  fixedSize, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, float_t  epsilon, ::by_ref<::Unity::Mathematics::float3>  newScale) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4604d4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate(XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate(XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_CalculateScaleToFit_00000931$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/IsWithinRadius_00000930$BurstDirectCall
class CORDL_TYPE XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4604bc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4603cc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45f53c, size 0xe8, virtual false, abstract: false, final false
static inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall(XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall(XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/IsWithinRadius_00000930$PostfixBurstDelegate
class CORDL_TYPE XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb4602dc, size 0xc8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method EndInvoke, addr 0xb4603a4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb4602c8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  b, float_t  radius) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb460214, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate(XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate(XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_IsWithinRadius_00000930$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/FastComputeNewTrackedPose_0000092F$BurstDirectCall
class CORDL_TYPE XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb4601fc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb46010c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45f43c, size 0x100, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall(XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall(XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate
class CORDL_TYPE XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45ffb8, size 0x148, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb460100, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45ffa0, size 0x18, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorAttachPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorAttachRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  positionOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactableAttachRot, ::by_ref<::Unity::Mathematics::float3>  targetPos, ::by_ref<::Unity::Mathematics::quaternion>  targetRot) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45feec, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate(XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate(XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/FastCalculateRadiusOffset_0000092E$BurstDirectCall
class CORDL_TYPE XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb45fed4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb45fde4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45f2b4, size 0x188, virtual false, abstract: false, final false
static inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall(XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall(XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11416};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer/FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate
class CORDL_TYPE XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb45fcd0, size 0xec, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb45fdbc, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb45fcbc, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetScale, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialBoundsSize, float_t  innerRadius) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb45fc08, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate(XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate(XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
