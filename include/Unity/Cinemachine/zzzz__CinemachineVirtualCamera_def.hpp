#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCamera_LegacyTransitionParams_def.hpp"
#include "Unity/Cinemachine/zzzz__LegacyLensSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVirtualCamera)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineVirtualCamera_LegacyTransitionParams;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
class Comparison_1;
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
namespace Unity::Cinemachine {
class AxisState_IRequiresInput;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineComponentBase;
}
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents_OnCameraLiveEvent;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera_CreatePipelineDelegate;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera_DestroyPipelineDelegate;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera___c;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineVirtualCamera;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera_CreatePipelineDelegate;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera_DestroyPipelineDelegate;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCamera___c;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineVirtualCamera*);
MARK_REF_T(::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*);
MARK_REF_T(::Unity::Cinemachine::CinemachineVirtualCamera___c*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVirtualCamera*, "Unity.Cinemachine", "CinemachineVirtualCamera");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*, "Unity.Cinemachine", "CinemachineVirtualCamera/CreatePipelineDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*, "Unity.Cinemachine", "CinemachineVirtualCamera/DestroyPipelineDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVirtualCamera___c*, "Unity.Cinemachine", "CinemachineVirtualCamera/<>c");
// [Obsolete("CinemachineVirtualCamera is deprecated. Use CinemachineCamera instead.")]
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [ExcludeFromPreset]
// [AddComponentMenu("")]
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineCore::BlendHints, Unity.Cinemachine.CinemachineCore::Stage, Unity.Cinemachine.CinemachineVirtualCamera::LegacyTransitionParams, Unity.Cinemachine.CinemachineVirtualCameraBase, Unity.Cinemachine.LegacyLensSettings, Unity.Cinemachine.LensSettings
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVirtualCamera
class CORDL_TYPE CinemachineVirtualCamera : public ::Unity::Cinemachine::CinemachineVirtualCameraBase {
public:
// Declarations
using LegacyTransitionParams = ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams;

using CreatePipelineDelegate = ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate;

using DestroyPipelineDelegate = ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate;

using __c = ::Unity::Cinemachine::CinemachineVirtualCamera___c;

/// @brief Field BlendHint, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendHint, put=__cordl_internal_set_BlendHint)) ::GlobalNamespace::CinemachineCore_BlendHints  BlendHint;

/// @brief Field CreatePipelineOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CreatePipelineOverride, put=setStaticF_CreatePipelineOverride)) ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*  CreatePipelineOverride;

/// @brief Field DestroyPipelineOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DestroyPipelineOverride, put=setStaticF_DestroyPipelineOverride)) ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*  DestroyPipelineOverride;

 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

 __declspec(property(get=get_IsDprecated)) bool  IsDprecated;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field mCachedLookAtTarget, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCachedLookAtTarget, put=__cordl_internal_set_mCachedLookAtTarget)) ::UnityW<::UnityEngine::Transform>  mCachedLookAtTarget;

/// @brief Field mCachedLookAtTargetVcam, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mCachedLookAtTargetVcam, put=__cordl_internal_set_mCachedLookAtTargetVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  mCachedLookAtTargetVcam;

/// @brief Field m_ComponentOwner, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ComponentOwner, put=__cordl_internal_set_m_ComponentOwner)) ::UnityW<::UnityEngine::Transform>  m_ComponentOwner;

/// @brief Field m_ComponentPipeline, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ComponentPipeline, put=__cordl_internal_set_m_ComponentPipeline)) ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  m_ComponentPipeline;

/// @brief Field m_ExcludedPropertiesInInspector, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExcludedPropertiesInInspector, put=__cordl_internal_set_m_ExcludedPropertiesInInspector)) ::ArrayW<::StringW>  m_ExcludedPropertiesInInspector;

/// @brief Field m_Follow, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Follow, put=__cordl_internal_set_m_Follow)) ::UnityW<::UnityEngine::Transform>  m_Follow;

/// @brief Field m_LegacyTransitions, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LegacyTransitions, put=__cordl_internal_set_m_LegacyTransitions)) ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams  m_LegacyTransitions;

/// @brief Field m_Lens, offset 0xb0, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_Lens, put=__cordl_internal_set_m_Lens)) ::Unity::Cinemachine::LegacyLensSettings  m_Lens;

/// @brief Field m_LensSettings, offset 0x250, size 0x58 
 __declspec(property(get=__cordl_internal_get_m_LensSettings, put=__cordl_internal_set_m_LensSettings)) ::Unity::Cinemachine::LensSettings  m_LensSettings;

/// @brief Field m_LockStageInInspector, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LockStageInInspector, put=__cordl_internal_set_m_LockStageInInspector)) ::ArrayW<::GlobalNamespace::CinemachineCore_Stage>  m_LockStageInInspector;

/// @brief Field m_LookAt, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LookAt, put=__cordl_internal_set_m_LookAt)) ::UnityW<::UnityEngine::Transform>  m_LookAt;

/// @brief Field m_OnCameraLiveEvent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnCameraLiveEvent, put=__cordl_internal_set_m_OnCameraLiveEvent)) ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  m_OnCameraLiveEvent;

/// @brief Field m_State, offset 0x130, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr operator  ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept;

/// @brief Method AddCinemachineComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline T AddCinemachineComponent() ;

/// @brief Method CalculateNewState, addr 0xaedc114, size 0x474, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState CalculateNewState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method CreatePipeline, addr 0xaedd1f8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> CreatePipeline(::Unity::Cinemachine::CinemachineVirtualCamera*  copyFrom) ;

/// @brief Method DestroyCinemachineComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline void DestroyCinemachineComponent() ;

/// @brief Method DestroyPipeline, addr 0xaedcb98, size 0x660, virtual false, abstract: false, final false
inline void DestroyPipeline() ;

/// @brief Method ForceCameraPosition, addr 0xaedd69c, size 0x150, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetCinemachineComponent, addr 0xaedd40c, size 0x8c, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage) ;

/// @brief Method GetCinemachineComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Cinemachine::CinemachineComponentBase*>)
inline T GetCinemachineComponent() ;

/// @brief Method GetComponentOwner, addr 0xaedd3f4, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetComponentOwner() ;

/// @brief Method GetComponentPipeline, addr 0xaedd3dc, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> GetComponentPipeline() ;

/// @brief Method GetMaxDampTime, addr 0xaedb804, size 0x90, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InternalUpdateCameraState, addr 0xaedbf1c, size 0x1f8, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvalidateComponentPipeline, addr 0xaedc6dc, size 0x14, virtual false, abstract: false, final false
inline void InvalidateComponentPipeline() ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0xaedc6f0, size 0x358, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xaedc588, size 0xbc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaedd52c, size 0x170, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransformChildrenChanged, addr 0xaedcb5c, size 0x14, virtual false, abstract: false, final false
inline void OnTransformChildrenChanged() ;

/// @brief Method OnTransitionFromCamera, addr 0xaedd7fc, size 0x368, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaedca48, size 0x8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PerformLegacyUpgrade, addr 0xaedb730, size 0x94, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Reset, addr 0xaedcb70, size 0x28, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetFlagsForHiddenChild, addr 0xaedd498, size 0x94, virtual false, abstract: false, final false
static inline void SetFlagsForHiddenChild(::UnityEngine::GameObject*  child) ;

/// @brief Method SetStateRawPosition, addr 0xaedd7ec, size 0x10, virtual false, abstract: false, final false
inline void SetStateRawPosition(::UnityEngine::Vector3  pos) ;

/// @brief Method Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput, addr 0xaeddb64, size 0x10c, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput() ;

/// @brief Method UpdateComponentPipeline, addr 0xaedb894, size 0x688, virtual false, abstract: false, final false
inline void UpdateComponentPipeline() ;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& __cordl_internal_get_BlendHint() const;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints& __cordl_internal_get_BlendHint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mCachedLookAtTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mCachedLookAtTarget() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_mCachedLookAtTargetVcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_mCachedLookAtTargetVcam() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ComponentOwner() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ComponentOwner() ;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> const& __cordl_internal_get_m_ComponentPipeline() const;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>& __cordl_internal_get_m_ComponentPipeline() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ExcludedPropertiesInInspector() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ExcludedPropertiesInInspector() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Follow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Follow() ;

constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams const& __cordl_internal_get_m_LegacyTransitions() const;

constexpr ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams& __cordl_internal_get_m_LegacyTransitions() ;

constexpr ::Unity::Cinemachine::LegacyLensSettings const& __cordl_internal_get_m_Lens() const;

constexpr ::Unity::Cinemachine::LegacyLensSettings& __cordl_internal_get_m_Lens() ;

constexpr ::Unity::Cinemachine::LensSettings const& __cordl_internal_get_m_LensSettings() const;

constexpr ::Unity::Cinemachine::LensSettings& __cordl_internal_get_m_LensSettings() ;

constexpr ::ArrayW<::GlobalNamespace::CinemachineCore_Stage> const& __cordl_internal_get_m_LockStageInInspector() const;

constexpr ::ArrayW<::GlobalNamespace::CinemachineCore_Stage>& __cordl_internal_get_m_LockStageInInspector() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LookAt() ;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& __cordl_internal_get_m_OnCameraLiveEvent() const;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& __cordl_internal_get_m_OnCameraLiveEvent() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value) ;

constexpr void __cordl_internal_set_mCachedLookAtTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mCachedLookAtTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

constexpr void __cordl_internal_set_m_ComponentOwner(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ComponentPipeline(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  value) ;

constexpr void __cordl_internal_set_m_ExcludedPropertiesInInspector(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_Follow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LegacyTransitions(::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams  value) ;

constexpr void __cordl_internal_set_m_Lens(::Unity::Cinemachine::LegacyLensSettings  value) ;

constexpr void __cordl_internal_set_m_LensSettings(::Unity::Cinemachine::LensSettings  value) ;

constexpr void __cordl_internal_set_m_LockStageInInspector(::ArrayW<::GlobalNamespace::CinemachineCore_Stage>  value) ;

constexpr void __cordl_internal_set_m_LookAt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_OnCameraLiveEvent(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

/// @brief Method .ctor, addr 0xaeddc70, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate* getStaticF_CreatePipelineOverride() ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate* getStaticF_DestroyPipelineOverride() ;

/// @brief Method get_Follow, addr 0xaedb7f0, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_IsDprecated, addr 0xaedb7c4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDprecated() ;

/// @brief Method get_LookAt, addr 0xaedb7dc, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_State, addr 0xaedb7cc, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept;

static inline void setStaticF_CreatePipelineOverride(::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate*  value) ;

static inline void setStaticF_DestroyPipelineOverride(::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate*  value) ;

/// @brief Method set_Follow, addr 0xaedb7fc, size 0x8, virtual true, abstract: false, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// @brief Method set_LookAt, addr 0xaedb7e8, size 0x8, virtual true, abstract: false, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVirtualCamera(CinemachineVirtualCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVirtualCamera(CinemachineVirtualCamera const& ) = delete;

/// @brief Field PipelineName offset 0xffffffff size 0x8
static constexpr ::ConstString  PipelineName{u"cm"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22449};

/// [Tooltip("The object that the camera wants to look at (the Aim target).  If this is null, then the vcam\'s Transform orientation will define the camera\'s orientation.")]
/// [NoSaveDuringPlay]
/// [VcamTargetProperty]
/// @brief Field m_LookAt, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LookAt;

/// [Tooltip("The object that the camera wants to move with (the Body target).  If this is null, then the vcam\'s Transform position will define the camera\'s position.")]
/// [NoSaveDuringPlay]
/// [VcamTargetProperty]
/// @brief Field m_Follow, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Follow;

/// [Tooltip("Specifies the lens properties of this Virtual Camera.  This generally mirrors the Unity Camera\'s lens settings, and will be used to drive the Unity camera when the vcam is active.")]
/// [FormerlySerializedAs("m_LensAttributes")]
/// @brief Field m_Lens, offset: 0xb0, size: 0x50, def value: None
 ::Unity::Cinemachine::LegacyLensSettings  ___m_Lens;

/// [Tooltip("Hint for transitioning to and from this CinemachineCamera.  Hints can be combined, although not all combinations make sense.  In the case of conflicting hints, Cinemachine will make an arbitrary choice.")]
/// @brief Field BlendHint, offset: 0x100, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_BlendHints  ___BlendHint;

/// [Tooltip("This event fires when a transition occurs")]
/// @brief Field m_OnCameraLiveEvent, offset: 0x108, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  ___m_OnCameraLiveEvent;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field m_ExcludedPropertiesInInspector, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ExcludedPropertiesInInspector;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field m_LockStageInInspector, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CinemachineCore_Stage>  ___m_LockStageInInspector;

/// [FormerlySerializedAs("m_Transitions")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_LegacyTransitions, offset: 0x120, size: 0x10, def value: None
 ::GlobalNamespace::CinemachineVirtualCamera_LegacyTransitionParams  ___m_LegacyTransitions;

/// @brief Field m_State, offset: 0x130, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// @brief Field m_ComponentPipeline, offset: 0x240, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  ___m_ComponentPipeline;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_ComponentOwner, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ComponentOwner;

/// @brief Field m_LensSettings, offset: 0x250, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  ___m_LensSettings;

/// @brief Field mCachedLookAtTarget, offset: 0x2a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mCachedLookAtTarget;

/// @brief Field mCachedLookAtTargetVcam, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___mCachedLookAtTargetVcam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_LookAt) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_Follow) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_Lens) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___BlendHint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_OnCameraLiveEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_ExcludedPropertiesInInspector) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_LockStageInInspector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_LegacyTransitions) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_State) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_ComponentPipeline) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_ComponentOwner) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___m_LensSettings) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___mCachedLookAtTarget) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCamera, ___mCachedLookAtTargetVcam) == 0x2b0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineVirtualCamera) == 0x2b8, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVirtualCamera/<>c
class CORDL_TYPE CinemachineVirtualCamera___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Cinemachine::CinemachineVirtualCamera___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*  __9__44_0;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera___c* New_ctor() ;

/// @brief Method <UpdateComponentPipeline>b__44_0, addr 0xaede194, size 0x50, virtual false, abstract: false, final false
inline int32_t _UpdateComponentPipeline_b__44_0(::Unity::Cinemachine::CinemachineComponentBase*  c1, ::Unity::Cinemachine::CinemachineComponentBase*  c2) ;

/// @brief Method .ctor, addr 0xaede18c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>* getStaticF___9__44_0() ;

static inline void setStaticF___9(::Unity::Cinemachine::CinemachineVirtualCamera___c*  value) ;

static inline void setStaticF___9__44_0(::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCamera___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVirtualCamera___c(CinemachineVirtualCamera___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVirtualCamera___c(CinemachineVirtualCamera___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineVirtualCamera___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
class CORDL_TYPE CinemachineVirtualCamera_DestroyPipelineDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaede0f8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject*  pipeline, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaede118, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaede0e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::GameObject*  pipeline) ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaede034, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCamera_DestroyPipelineDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera_DestroyPipelineDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVirtualCamera_DestroyPipelineDelegate(CinemachineVirtualCamera_DestroyPipelineDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera_DestroyPipelineDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVirtualCamera_DestroyPipelineDelegate(CinemachineVirtualCamera_DestroyPipelineDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineVirtualCamera_DestroyPipelineDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
class CORDL_TYPE CinemachineVirtualCamera_CreatePipelineDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeddff4, size 0x34, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::CinemachineVirtualCamera*  vcam, ::StringW  name, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>  copyFrom, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaede028, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeddfe0, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> Invoke(::Unity::Cinemachine::CinemachineVirtualCamera*  vcam, ::StringW  name, ::ArrayW<::Unity::Cinemachine::CinemachineComponentBase*>  copyFrom) ;

static inline ::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaedded4, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCamera_CreatePipelineDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera_CreatePipelineDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVirtualCamera_CreatePipelineDelegate(CinemachineVirtualCamera_CreatePipelineDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCamera_CreatePipelineDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVirtualCamera_CreatePipelineDelegate(CinemachineVirtualCamera_CreatePipelineDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineVirtualCamera_CreatePipelineDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
