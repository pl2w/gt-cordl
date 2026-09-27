#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVirtualCameraBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_StandbyUpdateMode_def.hpp"
#include "Unity/Cinemachine/zzzz__OutputChannels_def.hpp"
#include "Unity/Cinemachine/zzzz__PrioritySettings_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVirtualCameraBase)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineVirtualCameraBase_StandbyUpdateMode;
}
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineComponentBase;
}
namespace Unity::Cinemachine {
class CinemachineExtension;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
namespace Unity::Cinemachine {
struct LensSettings;
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
class CinemachineVirtualCameraBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineVirtualCameraBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVirtualCameraBase*, "Unity.Cinemachine", "CinemachineVirtualCameraBase");
// Dependencies Unity.Cinemachine.CinemachineVirtualCameraBase::StandbyUpdateMode, Unity.Cinemachine.OutputChannels, Unity.Cinemachine.PrioritySettings, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVirtualCameraBase
class CORDL_TYPE CinemachineVirtualCameraBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StandbyUpdateMode = ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode;

/// @brief Field ActivationId, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActivationId, put=__cordl_internal_set_ActivationId)) int32_t  ActivationId;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_Extensions, put=set_Extensions)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  Extensions;

 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

 __declspec(property(get=get_FollowTargetAsGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  FollowTargetAsGroup;

 __declspec(property(get=get_FollowTargetAsVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  FollowTargetAsVcam;

/// @brief Field FollowTargetAttachment, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_FollowTargetAttachment, put=__cordl_internal_set_FollowTargetAttachment)) float_t  FollowTargetAttachment;

 __declspec(property(get=get_FollowTargetChanged, put=set_FollowTargetChanged)) bool  FollowTargetChanged;

 __declspec(property(get=get_IsDprecated)) bool  IsDprecated;

 __declspec(property(get=get_IsLive)) bool  IsLive;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

 __declspec(property(get=get_LookAtTargetAsGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  LookAtTargetAsGroup;

 __declspec(property(get=get_LookAtTargetAsVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  LookAtTargetAsVcam;

/// @brief Field LookAtTargetAttachment, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_LookAtTargetAttachment, put=__cordl_internal_set_LookAtTargetAttachment)) float_t  LookAtTargetAttachment;

 __declspec(property(get=get_LookAtTargetChanged, put=set_LookAtTargetChanged)) bool  LookAtTargetChanged;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field OutputChannel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_OutputChannel, put=__cordl_internal_set_OutputChannel)) ::Unity::Cinemachine::OutputChannels  OutputChannel;

 __declspec(property(get=get_ParentCamera)) ::Unity::Cinemachine::ICinemachineMixer*  ParentCamera;

 __declspec(property(get=get_PreviousStateIsValid, put=set_PreviousStateIsValid)) bool  PreviousStateIsValid;

/// @brief Field Priority, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) ::Unity::Cinemachine::PrioritySettings  Priority;

/// @brief Field StandbyUpdate, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StandbyUpdate, put=__cordl_internal_set_StandbyUpdate)) ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  StandbyUpdate;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field <Extensions>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Extensions_k__BackingField, put=__cordl_internal_set__Extensions_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  _Extensions_k__BackingField;

/// @brief Field <FollowTargetChanged>k__BackingField, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__FollowTargetChanged_k__BackingField, put=__cordl_internal_set__FollowTargetChanged_k__BackingField)) bool  _FollowTargetChanged_k__BackingField;

/// @brief Field <LookAtTargetChanged>k__BackingField, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get__LookAtTargetChanged_k__BackingField, put=__cordl_internal_set__LookAtTargetChanged_k__BackingField)) bool  _LookAtTargetChanged_k__BackingField;

/// @brief Field <PreviousStateIsValid>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreviousStateIsValid_k__BackingField, put=__cordl_internal_set__PreviousStateIsValid_k__BackingField)) bool  _PreviousStateIsValid_k__BackingField;

/// @brief Field m_CachedFollowTarget, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedFollowTarget, put=__cordl_internal_set_m_CachedFollowTarget)) ::UnityW<::UnityEngine::Transform>  m_CachedFollowTarget;

/// @brief Field m_CachedFollowTargetGroup, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedFollowTargetGroup, put=__cordl_internal_set_m_CachedFollowTargetGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  m_CachedFollowTargetGroup;

/// @brief Field m_CachedFollowTargetVcam, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedFollowTargetVcam, put=__cordl_internal_set_m_CachedFollowTargetVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_CachedFollowTargetVcam;

/// @brief Field m_CachedLookAtTarget, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedLookAtTarget, put=__cordl_internal_set_m_CachedLookAtTarget)) ::UnityW<::UnityEngine::Transform>  m_CachedLookAtTarget;

/// @brief Field m_CachedLookAtTargetGroup, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedLookAtTargetGroup, put=__cordl_internal_set_m_CachedLookAtTargetGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  m_CachedLookAtTargetGroup;

/// @brief Field m_CachedLookAtTargetVcam, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedLookAtTargetVcam, put=__cordl_internal_set_m_CachedLookAtTargetVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_CachedLookAtTargetVcam;

/// @brief Field m_CachedName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedName, put=__cordl_internal_set_m_CachedName)) ::StringW  m_CachedName;

/// @brief Field m_ChildStatusUpdated, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ChildStatusUpdated, put=__cordl_internal_set_m_ChildStatusUpdated)) bool  m_ChildStatusUpdated;

/// @brief Field m_LegacyPriority, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyPriority, put=__cordl_internal_set_m_LegacyPriority)) int32_t  m_LegacyPriority;

/// @brief Field m_ParentVcam, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ParentVcam, put=__cordl_internal_set_m_ParentVcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_ParentVcam;

/// @brief Field m_QueuePriority, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_QueuePriority, put=__cordl_internal_set_m_QueuePriority)) int32_t  m_QueuePriority;

/// @brief Field m_StreamingVersion, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StreamingVersion, put=__cordl_internal_set_m_StreamingVersion)) int32_t  m_StreamingVersion;

/// @brief Field m_WasStarted, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasStarted, put=__cordl_internal_set_m_WasStarted)) bool  m_WasStarted;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

/// @brief Method AddExtension, addr 0xaeb3414, size 0x124, virtual false, abstract: false, final false
inline void AddExtension(::Unity::Cinemachine::CinemachineExtension*  extension) ;

/// @brief Method CancelDamping, addr 0xaeb4fa8, size 0x13c, virtual false, abstract: false, final false
inline void CancelDamping(bool  updateNow) ;

/// @brief Method DetachedFollowTargetDamp, addr 0xaeb39ac, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DetachedFollowTargetDamp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime) ;

/// @brief Method DetachedFollowTargetDamp, addr 0xaeb3c1c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DetachedFollowTargetDamp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method DetachedFollowTargetDamp, addr 0xaeb38a8, size 0x9c, virtual false, abstract: false, final false
inline float_t DetachedFollowTargetDamp(float_t  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method DetachedLookAtTargetDamp, addr 0xaeb3e0c, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DetachedLookAtTargetDamp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime) ;

/// @brief Method DetachedLookAtTargetDamp, addr 0xaeb3ef8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DetachedLookAtTargetDamp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method DetachedLookAtTargetDamp, addr 0xaeb3d70, size 0x9c, virtual false, abstract: false, final false
inline float_t DetachedLookAtTargetDamp(float_t  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method EnsureStarted, addr 0xaeb43a0, size 0xdc, virtual false, abstract: false, final false
inline void EnsureStarted() ;

/// @brief Method ForceCameraPosition, addr 0xaeb0ebc, size 0x8, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method ForceCameraPosition, addr 0xaeb4894, size 0x1fc, virtual false, abstract: false, final false
inline void ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetCinemachineComponent, addr 0xaeb4da4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage) ;

/// @brief Method GetMaxDampTime, addr 0xaeb37f8, size 0xb0, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InternalUpdateCameraState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvalidateCachedTargets, addr 0xaeb4654, size 0x68, virtual false, abstract: false, final false
inline void InvalidateCachedTargets() ;

/// @brief Method InvokeOnTransitionInExtensions, addr 0xaeb0f98, size 0x178, virtual false, abstract: false, final false
inline bool InvokeOnTransitionInExtensions(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvokePostPipelineStageCallback, addr 0xaeb133c, size 0x1a0, virtual false, abstract: false, final false
inline void InvokePostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  newState, float_t  deltaTime) ;

/// @brief Method InvokePrePipelineMutateCameraStateCallback, addr 0xaeb3fcc, size 0x198, virtual false, abstract: false, final false
inline void InvokePrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  newState, float_t  deltaTime) ;

/// @brief Method IsParticipatingInBlend, addr 0xaeb4e00, size 0x1a8, virtual false, abstract: false, final false
inline bool IsParticipatingInBlend() ;

/// [Obsolete("Please use Prioritize()")]
/// @brief Method MoveToTopOfPrioritySubqueue, addr 0xaeb46f4, size 0x4, virtual false, abstract: false, final false
inline void MoveToTopOfPrioritySubqueue() ;

static inline ::Unity::Cinemachine::CinemachineVirtualCameraBase* New_ctor() ;

/// @brief Method OnCameraActivated, addr 0xaeb4370, size 0x30, virtual true, abstract: false, final false
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnDestroy, addr 0xaeb45b4, size 0x54, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xaeb0188, size 0x5c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaeafeec, size 0x270, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb0d8c, size 0xc, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb46fc, size 0x198, virtual false, abstract: false, final false
inline void OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransformParentChanged, addr 0xaeb447c, size 0x6c, virtual true, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method OnTransitionFromCamera, addr 0xaeb0f50, size 0x48, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method PerformLegacyUpgrade, addr 0xaeb37bc, size 0x2c, virtual true, abstract: false, final false
inline void PerformLegacyUpgrade(int32_t  streamedVersion) ;

/// @brief Method Prioritize, addr 0xaeb46f8, size 0x4, virtual false, abstract: false, final false
inline void Prioritize() ;

/// @brief Method PullStateFromVirtualCamera, addr 0xaeb4a90, size 0x268, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState PullStateFromVirtualCamera(::UnityEngine::Vector3  worldUp, ::by_ref<::Unity::Cinemachine::LensSettings>  lens) ;

/// @brief Method RemoveExtension, addr 0xaeb3538, size 0x60, virtual false, abstract: false, final false
inline void RemoveExtension(::Unity::Cinemachine::CinemachineExtension*  extension) ;

/// @brief Method ResolveFollow, addr 0xaeb04d8, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> ResolveFollow(::UnityEngine::Transform*  localFollow) ;

/// @brief Method ResolveLookAt, addr 0xaeb03d4, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> ResolveLookAt(::UnityEngine::Transform*  localLookAt) ;

/// @brief Method Start, addr 0xaeb4608, size 0x4c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xaeb46bc, size 0x20, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCameraState, addr 0xaeb0b00, size 0x84, virtual true, abstract: false, final true
inline void UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method UpdateStatusAsChild, addr 0xaeb428c, size 0xd4, virtual false, abstract: false, final false
inline void UpdateStatusAsChild() ;

/// @brief Method UpdateTargetCache, addr 0xaeb0894, size 0x254, virtual false, abstract: false, final false
inline void UpdateTargetCache() ;

/// @brief Method UpdateVcamPoolStatus, addr 0xaeb44e8, size 0xcc, virtual false, abstract: false, final false
inline void UpdateVcamPoolStatus() ;

constexpr int32_t const& __cordl_internal_get_ActivationId() const;

constexpr int32_t& __cordl_internal_get_ActivationId() ;

constexpr float_t const& __cordl_internal_get_FollowTargetAttachment() const;

constexpr float_t& __cordl_internal_get_FollowTargetAttachment() ;

constexpr float_t const& __cordl_internal_get_LookAtTargetAttachment() const;

constexpr float_t& __cordl_internal_get_LookAtTargetAttachment() ;

constexpr ::Unity::Cinemachine::OutputChannels const& __cordl_internal_get_OutputChannel() const;

constexpr ::Unity::Cinemachine::OutputChannels& __cordl_internal_get_OutputChannel() ;

constexpr ::Unity::Cinemachine::PrioritySettings const& __cordl_internal_get_Priority() const;

constexpr ::Unity::Cinemachine::PrioritySettings& __cordl_internal_get_Priority() ;

constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode const& __cordl_internal_get_StandbyUpdate() const;

constexpr ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode& __cordl_internal_get_StandbyUpdate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>* const& __cordl_internal_get__Extensions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*& __cordl_internal_get__Extensions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FollowTargetChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__FollowTargetChanged_k__BackingField() ;

constexpr bool const& __cordl_internal_get__LookAtTargetChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__LookAtTargetChanged_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PreviousStateIsValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreviousStateIsValid_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CachedFollowTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CachedFollowTarget() ;

constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* const& __cordl_internal_get_m_CachedFollowTargetGroup() const;

constexpr ::Unity::Cinemachine::ICinemachineTargetGroup*& __cordl_internal_get_m_CachedFollowTargetGroup() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_CachedFollowTargetVcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_CachedFollowTargetVcam() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CachedLookAtTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CachedLookAtTarget() ;

constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* const& __cordl_internal_get_m_CachedLookAtTargetGroup() const;

constexpr ::Unity::Cinemachine::ICinemachineTargetGroup*& __cordl_internal_get_m_CachedLookAtTargetGroup() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_CachedLookAtTargetVcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_CachedLookAtTargetVcam() ;

constexpr ::StringW const& __cordl_internal_get_m_CachedName() const;

constexpr ::StringW& __cordl_internal_get_m_CachedName() ;

constexpr bool const& __cordl_internal_get_m_ChildStatusUpdated() const;

constexpr bool& __cordl_internal_get_m_ChildStatusUpdated() ;

constexpr int32_t const& __cordl_internal_get_m_LegacyPriority() const;

constexpr int32_t& __cordl_internal_get_m_LegacyPriority() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_ParentVcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_ParentVcam() ;

constexpr int32_t const& __cordl_internal_get_m_QueuePriority() const;

constexpr int32_t& __cordl_internal_get_m_QueuePriority() ;

constexpr int32_t const& __cordl_internal_get_m_StreamingVersion() const;

constexpr int32_t& __cordl_internal_get_m_StreamingVersion() ;

constexpr bool const& __cordl_internal_get_m_WasStarted() const;

constexpr bool& __cordl_internal_get_m_WasStarted() ;

constexpr void __cordl_internal_set_ActivationId(int32_t  value) ;

constexpr void __cordl_internal_set_FollowTargetAttachment(float_t  value) ;

constexpr void __cordl_internal_set_LookAtTargetAttachment(float_t  value) ;

constexpr void __cordl_internal_set_OutputChannel(::Unity::Cinemachine::OutputChannels  value) ;

constexpr void __cordl_internal_set_Priority(::Unity::Cinemachine::PrioritySettings  value) ;

constexpr void __cordl_internal_set_StandbyUpdate(::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  value) ;

constexpr void __cordl_internal_set__Extensions_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  value) ;

constexpr void __cordl_internal_set__FollowTargetChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LookAtTargetChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PreviousStateIsValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_CachedFollowTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CachedFollowTargetGroup(::Unity::Cinemachine::ICinemachineTargetGroup*  value) ;

constexpr void __cordl_internal_set_m_CachedFollowTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

constexpr void __cordl_internal_set_m_CachedLookAtTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CachedLookAtTargetGroup(::Unity::Cinemachine::ICinemachineTargetGroup*  value) ;

constexpr void __cordl_internal_set_m_CachedLookAtTargetVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

constexpr void __cordl_internal_set_m_CachedName(::StringW  value) ;

constexpr void __cordl_internal_set_m_ChildStatusUpdated(bool  value) ;

constexpr void __cordl_internal_set_m_LegacyPriority(int32_t  value) ;

constexpr void __cordl_internal_set_m_ParentVcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

constexpr void __cordl_internal_set_m_QueuePriority(int32_t  value) ;

constexpr void __cordl_internal_set_m_StreamingVersion(int32_t  value) ;

constexpr void __cordl_internal_set_m_WasStarted(bool  value) ;

/// @brief Method .ctor, addr 0xaeb15ec, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Description, addr 0xaeb424c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Description() ;

/// [CompilerGenerated]
/// @brief Method get_Extensions, addr 0xaeb3f34, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>* get_Extensions() ;

/// @brief Method get_Follow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_FollowTargetAsGroup, addr 0xaeb4d84, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineTargetGroup* get_FollowTargetAsGroup() ;

/// @brief Method get_FollowTargetAsVcam, addr 0xaeb4d8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> get_FollowTargetAsVcam() ;

/// [CompilerGenerated]
/// @brief Method get_FollowTargetChanged, addr 0xaeb4d64, size 0x8, virtual false, abstract: false, final false
inline bool get_FollowTargetChanged() ;

/// @brief Method get_IsDprecated, addr 0xaeb37b4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDprecated() ;

/// @brief Method get_IsLive, addr 0xaeb4dac, size 0x54, virtual false, abstract: false, final false
inline bool get_IsLive() ;

/// @brief Method get_IsValid, addr 0xaeb41e4, size 0x68, virtual true, abstract: false, final true
inline bool get_IsValid() ;

/// @brief Method get_LookAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_LookAtTargetAsGroup, addr 0xaeb4d94, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineTargetGroup* get_LookAtTargetAsGroup() ;

/// @brief Method get_LookAtTargetAsVcam, addr 0xaeb4d9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> get_LookAtTargetAsVcam() ;

/// [CompilerGenerated]
/// @brief Method get_LookAtTargetChanged, addr 0xaeb4d74, size 0x8, virtual false, abstract: false, final false
inline bool get_LookAtTargetChanged() ;

/// @brief Method get_Name, addr 0xaeb4164, size 0x80, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_ParentCamera, addr 0xaeb3f44, size 0x88, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ICinemachineMixer* get_ParentCamera() ;

/// [CompilerGenerated]
/// @brief Method get_PreviousStateIsValid, addr 0xaeb4360, size 0x8, virtual true, abstract: false, final false
inline bool get_PreviousStateIsValid() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Extensions, addr 0xaeb3f3c, size 0x8, virtual false, abstract: false, final false
inline void set_Extensions(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  value) ;

/// @brief Method set_Follow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FollowTargetChanged, addr 0xaeb4d6c, size 0x8, virtual false, abstract: false, final false
inline void set_FollowTargetChanged(bool  value) ;

/// @brief Method set_LookAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LookAtTargetChanged, addr 0xaeb4d7c, size 0x8, virtual false, abstract: false, final false
inline void set_LookAtTargetChanged(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreviousStateIsValid, addr 0xaeb4368, size 0x8, virtual true, abstract: false, final false
inline void set_PreviousStateIsValid(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVirtualCameraBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCameraBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVirtualCameraBase(CinemachineVirtualCameraBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVirtualCameraBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVirtualCameraBase(CinemachineVirtualCameraBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22308};

/// [NoSaveDuringPlay]
/// [Tooltip("Priority can be used to control which Cm Camera is live when multiple CM Cameras are active simultaneously.  The most-recently-activated CinemachineCamera will take control, unless there is another Cm Camera active with a higher priority.  In general, the most-recently-activated highest-priority CinemachineCamera will control the main camera. \n\nThe default priority is value 0.  Often it is sufficient to leave the default setting.  In special cases where you want a CinemachineCamera to have a higher or lower priority value than 0, you can set it here.")]
/// [EnabledProperty("Enabled", "(using default)")]
/// @brief Field Priority, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::PrioritySettings  ___Priority;

/// [NoSaveDuringPlay]
/// [Tooltip("The output channel functions like Unity layers.  Use it to filter the output of CinemachineCameras to different CinemachineBrains, for instance in a multi-screen environemnt.")]
/// @brief Field OutputChannel, offset: 0x28, size: 0x4, def value: None
 ::Unity::Cinemachine::OutputChannels  ___OutputChannel;

/// @brief Field ActivationId, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___ActivationId;

/// @brief Field m_QueuePriority, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_QueuePriority;

/// @brief Field FollowTargetAttachment, offset: 0x34, size: 0x4, def value: None
 float_t  ___FollowTargetAttachment;

/// @brief Field LookAtTargetAttachment, offset: 0x38, size: 0x4, def value: None
 float_t  ___LookAtTargetAttachment;

/// [Tooltip("When the virtual camera is not live, this is how often the virtual camera will be updated.  Set this to tune for performance. Most of the time Never is fine, unless the virtual camera is doing shot evaluation.")]
/// [FormerlySerializedAs("m_StandbyUpdate")]
/// @brief Field StandbyUpdate, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineVirtualCameraBase_StandbyUpdateMode  ___StandbyUpdate;

/// @brief Field m_CachedName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___m_CachedName;

/// @brief Field m_WasStarted, offset: 0x48, size: 0x1, def value: None
 bool  ___m_WasStarted;

/// @brief Field m_ChildStatusUpdated, offset: 0x49, size: 0x1, def value: None
 bool  ___m_ChildStatusUpdated;

/// @brief Field m_ParentVcam, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_ParentVcam;

/// @brief Field m_CachedFollowTarget, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CachedFollowTarget;

/// @brief Field m_CachedFollowTargetVcam, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_CachedFollowTargetVcam;

/// @brief Field m_CachedFollowTargetGroup, offset: 0x68, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineTargetGroup*  ___m_CachedFollowTargetGroup;

/// @brief Field m_CachedLookAtTarget, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CachedLookAtTarget;

/// @brief Field m_CachedLookAtTargetVcam, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_CachedLookAtTargetVcam;

/// @brief Field m_CachedLookAtTargetGroup, offset: 0x80, size: 0x8, def value: None
 ::Unity::Cinemachine::ICinemachineTargetGroup*  ___m_CachedLookAtTargetGroup;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// @brief Field m_StreamingVersion, offset: 0x88, size: 0x4, def value: None
 int32_t  ___m_StreamingVersion;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_Priority")]
/// @brief Field m_LegacyPriority, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___m_LegacyPriority;

/// [CompilerGenerated]
/// @brief Field <Extensions>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineExtension>>*  ____Extensions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PreviousStateIsValid>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____PreviousStateIsValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FollowTargetChanged>k__BackingField, offset: 0x99, size: 0x1, def value: None
 bool  ____FollowTargetChanged_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LookAtTargetChanged>k__BackingField, offset: 0x9a, size: 0x1, def value: None
 bool  ____LookAtTargetChanged_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___Priority) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___OutputChannel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___ActivationId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_QueuePriority) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___FollowTargetAttachment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___LookAtTargetAttachment) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___StandbyUpdate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_WasStarted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_ChildStatusUpdated) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_ParentVcam) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedFollowTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedFollowTargetVcam) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedFollowTargetGroup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedLookAtTarget) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedLookAtTargetVcam) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_CachedLookAtTargetGroup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_StreamingVersion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ___m_LegacyPriority) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ____Extensions_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ____PreviousStateIsValid_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ____FollowTargetChanged_k__BackingField) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVirtualCameraBase, ____LookAtTargetChanged_k__BackingField) == 0x9a, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineVirtualCameraBase) == 0xa0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
