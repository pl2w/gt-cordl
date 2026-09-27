#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHand_Hand_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_TrackingConfidence_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandTrackingState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRHand)
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
struct OVRHand_HandFinger;
}
namespace GlobalNamespace {
struct OVRHand_Hand;
}
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
namespace GlobalNamespace {
struct OVRHand_TrackingConfidence;
}
namespace GlobalNamespace {
struct OVRInputRayData;
}
namespace GlobalNamespace {
class OVRMeshRenderer_IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_MeshRendererData;
}
namespace GlobalNamespace {
class OVRMesh_IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
struct OVRPlugin_Hand;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace GlobalNamespace {
class OVRRayHelper;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace UnityEngine::EventSystems {
class OVRInputModule_InputSource;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRHand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHand*, "", "OVRHand");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-handtracking/")]
// [Feature((Meta.XR.Util.Feature)4)]
// Dependencies OVRHand::Hand, OVRHand::TrackingConfidence, OVRInput::InputDeviceShowState, OVRPlugin::HandState, OVRPlugin::HandTrackingState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRHand
class CORDL_TYPE OVRHand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Hand = ::GlobalNamespace::OVRHand_Hand;

using HandFinger = ::GlobalNamespace::OVRHand_HandFinger;

using MicrogestureType = ::GlobalNamespace::OVRHand_MicrogestureType;

using TrackingConfidence = ::GlobalNamespace::OVRHand_TrackingConfidence;

 __declspec(property(get=get_HandConfidence, put=set_HandConfidence)) ::GlobalNamespace::OVRHand_TrackingConfidence  HandConfidence;

 __declspec(property(get=get_HandScale, put=set_HandScale)) float_t  HandScale;

/// @brief Field HandType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandType, put=__cordl_internal_set_HandType)) ::GlobalNamespace::OVRHand_Hand  HandType;

 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_IsDominantHand, put=set_IsDominantHand)) bool  IsDominantHand;

 __declspec(property(get=get_IsPointerPoseValid, put=set_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsSystemGestureInProgress, put=set_IsSystemGestureInProgress)) bool  IsSystemGestureInProgress;

 __declspec(property(get=get_IsTracked, put=set_IsTracked)) bool  IsTracked;

 __declspec(property(get=get_PointerPose)) ::UnityW<::UnityEngine::Transform>  PointerPose;

/// @brief Field RayHelper, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RayHelper, put=__cordl_internal_set_RayHelper)) ::UnityW<::GlobalNamespace::OVRRayHelper>  RayHelper;

/// @brief Field <HandConfidence>k__BackingField, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__HandConfidence_k__BackingField, put=__cordl_internal_set__HandConfidence_k__BackingField)) ::GlobalNamespace::OVRHand_TrackingConfidence  _HandConfidence_k__BackingField;

/// @brief Field <HandScale>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__HandScale_k__BackingField, put=__cordl_internal_set__HandScale_k__BackingField)) float_t  _HandScale_k__BackingField;

/// @brief Field <IsDataHighConfidence>k__BackingField, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataHighConfidence_k__BackingField, put=__cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool  _IsDataHighConfidence_k__BackingField;

/// @brief Field <IsDataValid>k__BackingField, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataValid_k__BackingField, put=__cordl_internal_set__IsDataValid_k__BackingField)) bool  _IsDataValid_k__BackingField;

/// @brief Field <IsDominantHand>k__BackingField, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDominantHand_k__BackingField, put=__cordl_internal_set__IsDominantHand_k__BackingField)) bool  _IsDominantHand_k__BackingField;

/// @brief Field <IsPointerPoseValid>k__BackingField, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPointerPoseValid_k__BackingField, put=__cordl_internal_set__IsPointerPoseValid_k__BackingField)) bool  _IsPointerPoseValid_k__BackingField;

/// @brief Field <IsSystemGestureInProgress>k__BackingField, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSystemGestureInProgress_k__BackingField, put=__cordl_internal_set__IsSystemGestureInProgress_k__BackingField)) bool  _IsSystemGestureInProgress_k__BackingField;

/// @brief Field <IsTracked>k__BackingField, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTracked_k__BackingField, put=__cordl_internal_set__IsTracked_k__BackingField)) bool  _IsTracked_k__BackingField;

/// @brief Field _handState, offset 0x48, size 0x80 
 __declspec(property(get=__cordl_internal_get__handState, put=__cordl_internal_set__handState)) ::GlobalNamespace::OVRPlugin_HandState  _handState;

/// @brief Field _handTrackingState, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__handTrackingState, put=__cordl_internal_set__handTrackingState)) ::GlobalNamespace::OVRPlugin_HandTrackingState  _handTrackingState;

/// @brief Field _handTrackingStateValid, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__handTrackingStateValid, put=__cordl_internal_set__handTrackingStateValid)) bool  _handTrackingStateValid;

/// @brief Field _pointerPoseGO, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerPoseGO, put=__cordl_internal_set__pointerPoseGO)) ::UnityW<::UnityEngine::GameObject>  _pointerPoseGO;

/// @brief Field _pointerPoseRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerPoseRoot, put=__cordl_internal_set__pointerPoseRoot)) ::UnityW<::UnityEngine::Transform>  _pointerPoseRoot;

/// @brief Field _wasIndexPinching, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasIndexPinching, put=__cordl_internal_set__wasIndexPinching)) bool  _wasIndexPinching;

/// @brief Field _wasReleased, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasReleased, put=__cordl_internal_set__wasReleased)) bool  _wasReleased;

/// @brief Field m_showState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_showState, put=__cordl_internal_set_m_showState)) ::GlobalNamespace::OVRInput_InputDeviceShowState  m_showState;

/// @brief Convert operator to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr operator  ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr operator  ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr operator  ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr operator  ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr operator  ::UnityEngine::EventSystems::OVRInputModule_InputSource*() noexcept;

/// @brief Method Awake, addr 0xa664ab4, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0xa664fe4, size 0xd4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetFingerConfidence, addr 0xa665184, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRHand_TrackingConfidence GetFingerConfidence(::GlobalNamespace::OVRHand_HandFinger  finger) ;

/// @brief Method GetFingerIsPinching, addr 0xa664f98, size 0x20, virtual false, abstract: false, final false
inline bool GetFingerIsPinching(::GlobalNamespace::OVRHand_HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0xa665148, size 0x3c, virtual false, abstract: false, final false
inline float_t GetFingerPinchStrength(::GlobalNamespace::OVRHand_HandFinger  finger) ;

/// @brief Method GetHand, addr 0xa665a34, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_Hand GetHand() ;

/// @brief Method GetHandState, addr 0xa664b8c, size 0x314, virtual false, abstract: false, final false
inline void GetHandState(::GlobalNamespace::OVRPlugin_Step  step) ;

/// @brief Method GetMicrogestureType, addr 0xa665310, size 0x78, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRHand_MicrogestureType GetMicrogestureType() ;

/// @brief Method GetPointerRayTransform, addr 0xa665990, size 0x48, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GetPointerRayTransform() ;

/// @brief Method InitializePointerPose, addr 0xa664914, size 0x170, virtual false, abstract: false, final false
inline void InitializePointerPose() ;

/// @brief Method IsActive, addr 0xa664fb8, size 0x2c, virtual true, abstract: false, final true
inline bool IsActive() ;

/// @brief Method IsPressed, addr 0xa66596c, size 0x1c, virtual true, abstract: false, final true
inline bool IsPressed() ;

/// @brief Method IsReleased, addr 0xa665988, size 0x8, virtual true, abstract: false, final true
inline bool IsReleased() ;

/// @brief Method IsValid, addr 0xa6659d8, size 0x5c, virtual true, abstract: false, final true
inline bool IsValid() ;

static inline ::GlobalNamespace::OVRHand* New_ctor() ;

/// @brief Method OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData, addr 0xa6653e0, size 0x40, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRMeshRenderer_MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() ;

/// @brief Method OVRMesh.IOVRMeshDataProvider.GetMeshType, addr 0xa665388, size 0x58, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRMesh_MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType() ;

/// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData, addr 0xa6652c0, size 0x50, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0xa66521c, size 0xa4, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType, addr 0xa6651c4, size 0x58, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0xa665b1c, size 0x8, virtual true, abstract: false, final true
inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

/// @brief Method OnDestroy, addr 0xa6650b8, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa6655dc, size 0x140, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa665420, size 0x14c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSceneChanged, addr 0xa66571c, size 0x58, virtual false, abstract: false, final false
inline void OnSceneChanged(::UnityEngine::SceneManagement::Scene  unloading, ::UnityEngine::SceneManagement::Scene  loading) ;

/// @brief Method OnValidate, addr 0xa665774, size 0x1f8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ShouldShowHandUIRay, addr 0xa66556c, size 0x70, virtual false, abstract: false, final false
inline bool ShouldShowHandUIRay() ;

/// @brief Method Update, addr 0xa664ea0, size 0xf8, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePointerRay, addr 0xa665a3c, size 0xc8, virtual true, abstract: false, final true
inline void UpdatePointerRay(::GlobalNamespace::OVRInputRayData  rayData) ;

constexpr ::GlobalNamespace::OVRHand_Hand const& __cordl_internal_get_HandType() const;

constexpr ::GlobalNamespace::OVRHand_Hand& __cordl_internal_get_HandType() ;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper> const& __cordl_internal_get_RayHelper() const;

constexpr ::UnityW<::GlobalNamespace::OVRRayHelper>& __cordl_internal_get_RayHelper() ;

constexpr ::GlobalNamespace::OVRHand_TrackingConfidence const& __cordl_internal_get__HandConfidence_k__BackingField() const;

constexpr ::GlobalNamespace::OVRHand_TrackingConfidence& __cordl_internal_get__HandConfidence_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__HandScale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__HandScale_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDominantHand_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDominantHand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPointerPoseValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPointerPoseValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSystemGestureInProgress_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSystemGestureInProgress_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsTracked_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTracked_k__BackingField() ;

constexpr ::GlobalNamespace::OVRPlugin_HandState const& __cordl_internal_get__handState() const;

constexpr ::GlobalNamespace::OVRPlugin_HandState& __cordl_internal_get__handState() ;

constexpr ::GlobalNamespace::OVRPlugin_HandTrackingState const& __cordl_internal_get__handTrackingState() const;

constexpr ::GlobalNamespace::OVRPlugin_HandTrackingState& __cordl_internal_get__handTrackingState() ;

constexpr bool const& __cordl_internal_get__handTrackingStateValid() const;

constexpr bool& __cordl_internal_get__handTrackingStateValid() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerPoseGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerPoseGO() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pointerPoseRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pointerPoseRoot() ;

constexpr bool const& __cordl_internal_get__wasIndexPinching() const;

constexpr bool& __cordl_internal_get__wasIndexPinching() ;

constexpr bool const& __cordl_internal_get__wasReleased() const;

constexpr bool& __cordl_internal_get__wasReleased() ;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState const& __cordl_internal_get_m_showState() const;

constexpr ::GlobalNamespace::OVRInput_InputDeviceShowState& __cordl_internal_get_m_showState() ;

constexpr void __cordl_internal_set_HandType(::GlobalNamespace::OVRHand_Hand  value) ;

constexpr void __cordl_internal_set_RayHelper(::UnityW<::GlobalNamespace::OVRRayHelper>  value) ;

constexpr void __cordl_internal_set__HandConfidence_k__BackingField(::GlobalNamespace::OVRHand_TrackingConfidence  value) ;

constexpr void __cordl_internal_set__HandScale_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDominantHand_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsPointerPoseValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSystemGestureInProgress_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsTracked_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__handState(::GlobalNamespace::OVRPlugin_HandState  value) ;

constexpr void __cordl_internal_set__handTrackingState(::GlobalNamespace::OVRPlugin_HandTrackingState  value) ;

constexpr void __cordl_internal_set__handTrackingStateValid(bool  value) ;

constexpr void __cordl_internal_set__pointerPoseGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__pointerPoseRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__wasIndexPinching(bool  value) ;

constexpr void __cordl_internal_set__wasReleased(bool  value) ;

constexpr void __cordl_internal_set_m_showState(::GlobalNamespace::OVRInput_InputDeviceShowState  value) ;

/// @brief Method .ctor, addr 0xa665b04, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GlobalHandSkeletonVersion, addr 0xa6647e4, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRHandSkeletonVersion get_GlobalHandSkeletonVersion() ;

/// [CompilerGenerated]
/// @brief Method get_HandConfidence, addr 0xa664a94, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRHand_TrackingConfidence get_HandConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_HandScale, addr 0xa664a84, size 0x8, virtual false, abstract: false, final false
inline float_t get_HandScale() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa664854, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa664844, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [CompilerGenerated]
/// @brief Method get_IsDominantHand, addr 0xa664aa4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDominantHand() ;

/// [CompilerGenerated]
/// @brief Method get_IsPointerPoseValid, addr 0xa664884, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPointerPoseValid() ;

/// [CompilerGenerated]
/// @brief Method get_IsSystemGestureInProgress, addr 0xa664874, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSystemGestureInProgress() ;

/// [CompilerGenerated]
/// @brief Method get_IsTracked, addr 0xa664864, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTracked() ;

/// @brief Method get_PointerPose, addr 0xa664894, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_PointerPose() ;

/// @brief Convert to "::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider"
constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* i___GlobalNamespace__OVRMeshRenderer_IOVRMeshRendererDataProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::OVRMesh_IOVRMeshDataProvider"
constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* i___GlobalNamespace__OVRMesh_IOVRMeshDataProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::OVRInputModule_InputSource"
constexpr ::UnityEngine::EventSystems::OVRInputModule_InputSource* i___UnityEngine__EventSystems__OVRInputModule_InputSource() noexcept;

/// [CompilerGenerated]
/// @brief Method set_HandConfidence, addr 0xa664a9c, size 0x8, virtual false, abstract: false, final false
inline void set_HandConfidence(::GlobalNamespace::OVRHand_TrackingConfidence  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandScale, addr 0xa664a8c, size 0x8, virtual false, abstract: false, final false
inline void set_HandScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa66485c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa66484c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDominantHand, addr 0xa664aac, size 0x8, virtual false, abstract: false, final false
inline void set_IsDominantHand(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPointerPoseValid, addr 0xa66488c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPointerPoseValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSystemGestureInProgress, addr 0xa66487c, size 0x8, virtual false, abstract: false, final false
inline void set_IsSystemGestureInProgress(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsTracked, addr 0xa66486c, size 0x8, virtual false, abstract: false, final false
inline void set_IsTracked(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRHand(OVRHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRHand(OVRHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12649};

/// [SerializeField]
/// @brief Field HandType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRHand_Hand  ___HandType;

/// [SerializeField]
/// @brief Field _pointerPoseRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pointerPoseRoot;

/// @brief Field m_showState, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_InputDeviceShowState  ___m_showState;

/// @brief Field RayHelper, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRRayHelper>  ___RayHelper;

/// @brief Field _pointerPoseGO, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pointerPoseGO;

/// @brief Field _handState, offset: 0x48, size: 0x80, def value: None
 ::GlobalNamespace::OVRPlugin_HandState  ____handState;

/// @brief Field _wasIndexPinching, offset: 0xc8, size: 0x1, def value: None
 bool  ____wasIndexPinching;

/// @brief Field _wasReleased, offset: 0xc9, size: 0x1, def value: None
 bool  ____wasReleased;

/// @brief Field _handTrackingState, offset: 0xcc, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandTrackingState  ____handTrackingState;

/// @brief Field _handTrackingStateValid, offset: 0xd0, size: 0x1, def value: None
 bool  ____handTrackingStateValid;

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0xd1, size: 0x1, def value: None
 bool  ____IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0xd2, size: 0x1, def value: None
 bool  ____IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsTracked>k__BackingField, offset: 0xd3, size: 0x1, def value: None
 bool  ____IsTracked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsSystemGestureInProgress>k__BackingField, offset: 0xd4, size: 0x1, def value: None
 bool  ____IsSystemGestureInProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsPointerPoseValid>k__BackingField, offset: 0xd5, size: 0x1, def value: None
 bool  ____IsPointerPoseValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandScale>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 float_t  ____HandScale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandConfidence>k__BackingField, offset: 0xdc, size: 0x4, def value: None
 ::GlobalNamespace::OVRHand_TrackingConfidence  ____HandConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDominantHand>k__BackingField, offset: 0xe0, size: 0x1, def value: None
 bool  ____IsDominantHand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHand, ___HandType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ___m_showState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ___RayHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____pointerPoseGO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____handState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____wasIndexPinching) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____wasReleased) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____handTrackingState) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____handTrackingStateValid) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataValid_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDataHighConfidence_k__BackingField) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsTracked_k__BackingField) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsSystemGestureInProgress_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsPointerPoseValid_k__BackingField) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandScale_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____HandConfidence_k__BackingField) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHand, ____IsDominantHand_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHand) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
