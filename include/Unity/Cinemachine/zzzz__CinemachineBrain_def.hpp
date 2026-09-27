#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_BrainUpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_LensModeOverrideSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_UpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__OutputChannels_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineBrain)
namespace GlobalNamespace {
struct CameraUpdateManager_UpdateFilter;
}
namespace GlobalNamespace {
struct CinemachineBrain_BrainUpdateMethods;
}
namespace GlobalNamespace {
struct CinemachineBrain_LensModeOverrideSettings;
}
namespace GlobalNamespace {
struct CinemachineBrain_UpdateMethods;
}
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class BlendManager;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
namespace Unity::Cinemachine {
class CinemachineBlend;
}
namespace Unity::Cinemachine {
class CinemachineBlenderSettings;
}
namespace Unity::Cinemachine {
class CinemachineBrain__AfterPhysics_d__30;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICameraOverrideStack;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBrain;
}
namespace Unity::Cinemachine {
class CinemachineBrain__AfterPhysics_d__30;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBrain*);
MARK_REF_T(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBrain*, "Unity.Cinemachine", "CinemachineBrain");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30*, "Unity.Cinemachine", "CinemachineBrain/<AfterPhysics>d__30");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [AddComponentMenu("Cinemachine/Cinemachine Brain")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineBrain.html")]
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineBlendDefinition, Unity.Cinemachine.CinemachineBrain::BrainUpdateMethods, Unity.Cinemachine.CinemachineBrain::LensModeOverrideSettings, Unity.Cinemachine.CinemachineBrain::UpdateMethods, Unity.Cinemachine.OutputChannels, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBrain
class CORDL_TYPE CinemachineBrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BrainUpdateMethods = ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods;

using LensModeOverrideSettings = ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings;

using UpdateMethods = ::GlobalNamespace::CinemachineBrain_UpdateMethods;

using _AfterPhysics_d__30 = ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30;

 __declspec(property(get=get_ActiveBlend, put=set_ActiveBlend)) ::Unity::Cinemachine::CinemachineBlend*  ActiveBlend;

 __declspec(property(get=get_ActiveVirtualCamera)) ::Unity::Cinemachine::ICinemachineCamera*  ActiveVirtualCamera;

/// @brief Field BlendUpdateMethod, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendUpdateMethod, put=__cordl_internal_set_BlendUpdateMethod)) ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods  BlendUpdateMethod;

/// @brief Field ChannelMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChannelMask, put=__cordl_internal_set_ChannelMask)) ::Unity::Cinemachine::OutputChannels  ChannelMask;

 __declspec(property(get=get_ControlledObject, put=set_ControlledObject)) ::UnityW<::UnityEngine::GameObject>  ControlledObject;

/// @brief Field CustomBlends, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomBlends, put=__cordl_internal_set_CustomBlends)) ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  CustomBlends;

/// @brief Field DefaultBlend, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_DefaultBlend, put=__cordl_internal_set_DefaultBlend)) ::Unity::Cinemachine::CinemachineBlendDefinition  DefaultBlend;

 __declspec(property(get=get_DefaultWorldUp)) ::UnityEngine::Vector3  DefaultWorldUp;

 __declspec(property(get=get_Description)) ::StringW  Description;

/// @brief Field IgnoreTimeScale, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreTimeScale, put=__cordl_internal_set_IgnoreTimeScale)) bool  IgnoreTimeScale;

 __declspec(property(get=get_IsBlending)) bool  IsBlending;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field LensModeOverride, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_LensModeOverride, put=__cordl_internal_set_LensModeOverride)) ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings  LensModeOverride;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_OutputCamera)) ::UnityW<::UnityEngine::Camera>  OutputCamera;

 __declspec(property(get=get_ParentCamera)) ::Unity::Cinemachine::ICinemachineMixer*  ParentCamera;

/// @brief Field ShowCameraFrustum, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowCameraFrustum, put=__cordl_internal_set_ShowCameraFrustum)) bool  ShowCameraFrustum;

/// @brief Field ShowDebugText, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowDebugText, put=__cordl_internal_set_ShowDebugText)) bool  ShowDebugText;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field UpdateMethod, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateMethod, put=__cordl_internal_set_UpdateMethod)) ::GlobalNamespace::CinemachineBrain_UpdateMethods  UpdateMethod;

/// @brief Field WorldUpOverride, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WorldUpOverride, put=__cordl_internal_set_WorldUpOverride)) ::UnityW<::UnityEngine::Transform>  WorldUpOverride;

/// @brief Field m_BlendManager, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlendManager, put=__cordl_internal_set_m_BlendManager)) ::Unity::Cinemachine::BlendManager*  m_BlendManager;

/// @brief Field m_CameraState, offset 0x90, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_CameraState, put=__cordl_internal_set_m_CameraState)) ::Unity::Cinemachine::CameraState  m_CameraState;

/// @brief Field m_LastFrameUpdated, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFrameUpdated, put=__cordl_internal_set_m_LastFrameUpdated)) int32_t  m_LastFrameUpdated;

/// @brief Field m_OutputCamera, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OutputCamera, put=__cordl_internal_set_m_OutputCamera)) ::UnityW<::UnityEngine::Camera>  m_OutputCamera;

/// @brief Field m_PhysicsCoroutine, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PhysicsCoroutine, put=__cordl_internal_set_m_PhysicsCoroutine)) ::UnityEngine::Coroutine*  m_PhysicsCoroutine;

/// @brief Field m_TargetOverride, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetOverride, put=__cordl_internal_set_m_TargetOverride)) ::UnityW<::UnityEngine::GameObject>  m_TargetOverride;

/// @brief Field m_WaitForFixedUpdate, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WaitForFixedUpdate, put=__cordl_internal_set_m_WaitForFixedUpdate)) ::UnityEngine::WaitForFixedUpdate*  m_WaitForFixedUpdate;

/// @brief Field s_ActiveBrains, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActiveBrains, put=setStaticF_s_ActiveBrains)) ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  s_ActiveBrains;

/// @brief Convert operator to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr operator  ::Unity::Cinemachine::ICameraOverrideStack*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr operator  ::Unity::Cinemachine::ICinemachineCamera*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineMixer"
constexpr operator  ::Unity::Cinemachine::ICinemachineMixer*() noexcept;

/// [IteratorStateMachine(typeof(Unity.Cinemachine.CinemachineBrain::<AfterPhysics>d__30))]
/// @brief Method AfterPhysics, addr 0xae85e74, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AfterPhysics() ;

/// @brief Method Awake, addr 0xae858d8, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoFixedUpdate, addr 0xae87420, size 0x130, virtual false, abstract: false, final false
inline void DoFixedUpdate() ;

/// @brief Method DoNonFixedUpdate, addr 0xae86118, size 0x2e8, virtual false, abstract: false, final false
inline void DoNonFixedUpdate(int32_t  updateFrame) ;

/// @brief Method GetActiveBrain, addr 0xae86b44, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::Unity::Cinemachine::CinemachineBrain> GetActiveBrain(int32_t  index) ;

/// @brief Method GetEffectiveDeltaTime, addr 0xae86fe4, size 0x170, virtual false, abstract: false, final false
inline float_t GetEffectiveDeltaTime(bool  fixedDelta) ;

/// @brief Method IsLiveChild, addr 0xae8690c, size 0x1c8, virtual true, abstract: false, final true
inline bool IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  cam, bool  dominantChildOnly) ;

/// @brief Method IsLiveInBlend, addr 0xae86dd8, size 0x15c, virtual false, abstract: false, final false
inline bool IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method IsValidChannel, addr 0xae86d48, size 0x90, virtual false, abstract: false, final false
inline bool IsValidChannel(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method LateUpdate, addr 0xae86460, size 0x30, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LookupBlend, addr 0xae87604, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  fromKey, ::Unity::Cinemachine::ICinemachineCamera*  toKey) ;

/// @brief Method ManualUpdate, addr 0xae86fc4, size 0x20, virtual false, abstract: false, final false
inline void ManualUpdate() ;

/// @brief Method ManualUpdate, addr 0xae86f34, size 0x90, virtual false, abstract: false, final false
inline void ManualUpdate(int32_t  currentFrame, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineBrain* New_ctor() ;

/// @brief Method OnCameraActivated, addr 0xae86908, size 0x4, virtual true, abstract: false, final true
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnDisable, addr 0xae85ee0, size 0x1d8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae85c38, size 0x23c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSceneLoaded, addr 0xae860b8, size 0x60, virtual false, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnSceneUnloaded, addr 0xae86400, size 0x60, virtual false, abstract: false, final false
inline void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method OnValidate, addr 0xae8582c, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessActiveCamera, addr 0xae87154, size 0x2cc, virtual false, abstract: false, final false
inline void ProcessActiveCamera(float_t  deltaTime) ;

/// @brief Method PushStateToUnityCamera, addr 0xae87624, size 0x3b0, virtual false, abstract: false, final false
inline void PushStateToUnityCamera(::by_ref<::Unity::Cinemachine::CameraState>  state) ;

/// @brief Method ReleaseCameraOverride, addr 0xae864d0, size 0x18, virtual true, abstract: false, final true
inline void ReleaseCameraOverride(int32_t  overrideId) ;

/// @brief Method Reset, addr 0xae85844, size 0x94, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetState, addr 0xae86d18, size 0x18, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetCameraOverride, addr 0xae864b8, size 0x18, virtual true, abstract: false, final true
inline int32_t SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime) ;

/// @brief Method Start, addr 0xae859b0, size 0x14, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TopCameraFromPriorityQueue, addr 0xae87550, size 0xb4, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* TopCameraFromPriorityQueue() ;

/// @brief Method UpdateCameraState, addr 0xae86904, size 0x4, virtual true, abstract: false, final true
inline void UpdateCameraState(::UnityEngine::Vector3  up, float_t  deltaTime) ;

/// @brief Method UpdateVirtualCameras, addr 0xae859c4, size 0x274, virtual false, abstract: false, final false
inline void UpdateVirtualCameras(::GlobalNamespace::CameraUpdateManager_UpdateFilter  updateFilter, float_t  deltaTime) ;

constexpr ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods const& __cordl_internal_get_BlendUpdateMethod() const;

constexpr ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods& __cordl_internal_get_BlendUpdateMethod() ;

constexpr ::Unity::Cinemachine::OutputChannels const& __cordl_internal_get_ChannelMask() const;

constexpr ::Unity::Cinemachine::OutputChannels& __cordl_internal_get_ChannelMask() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings> const& __cordl_internal_get_CustomBlends() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>& __cordl_internal_get_CustomBlends() ;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition const& __cordl_internal_get_DefaultBlend() const;

constexpr ::Unity::Cinemachine::CinemachineBlendDefinition& __cordl_internal_get_DefaultBlend() ;

constexpr bool const& __cordl_internal_get_IgnoreTimeScale() const;

constexpr bool& __cordl_internal_get_IgnoreTimeScale() ;

constexpr ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings const& __cordl_internal_get_LensModeOverride() const;

constexpr ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings& __cordl_internal_get_LensModeOverride() ;

constexpr bool const& __cordl_internal_get_ShowCameraFrustum() const;

constexpr bool& __cordl_internal_get_ShowCameraFrustum() ;

constexpr bool const& __cordl_internal_get_ShowDebugText() const;

constexpr bool& __cordl_internal_get_ShowDebugText() ;

constexpr ::GlobalNamespace::CinemachineBrain_UpdateMethods const& __cordl_internal_get_UpdateMethod() const;

constexpr ::GlobalNamespace::CinemachineBrain_UpdateMethods& __cordl_internal_get_UpdateMethod() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_WorldUpOverride() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_WorldUpOverride() ;

constexpr ::Unity::Cinemachine::BlendManager* const& __cordl_internal_get_m_BlendManager() const;

constexpr ::Unity::Cinemachine::BlendManager*& __cordl_internal_get_m_BlendManager() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_CameraState() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_CameraState() ;

constexpr int32_t const& __cordl_internal_get_m_LastFrameUpdated() const;

constexpr int32_t& __cordl_internal_get_m_LastFrameUpdated() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_OutputCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_OutputCamera() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_PhysicsCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_PhysicsCoroutine() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_TargetOverride() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_TargetOverride() ;

constexpr ::UnityEngine::WaitForFixedUpdate* const& __cordl_internal_get_m_WaitForFixedUpdate() const;

constexpr ::UnityEngine::WaitForFixedUpdate*& __cordl_internal_get_m_WaitForFixedUpdate() ;

constexpr void __cordl_internal_set_BlendUpdateMethod(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods  value) ;

constexpr void __cordl_internal_set_ChannelMask(::Unity::Cinemachine::OutputChannels  value) ;

constexpr void __cordl_internal_set_CustomBlends(::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  value) ;

constexpr void __cordl_internal_set_DefaultBlend(::Unity::Cinemachine::CinemachineBlendDefinition  value) ;

constexpr void __cordl_internal_set_IgnoreTimeScale(bool  value) ;

constexpr void __cordl_internal_set_LensModeOverride(::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings  value) ;

constexpr void __cordl_internal_set_ShowCameraFrustum(bool  value) ;

constexpr void __cordl_internal_set_ShowDebugText(bool  value) ;

constexpr void __cordl_internal_set_UpdateMethod(::GlobalNamespace::CinemachineBrain_UpdateMethods  value) ;

constexpr void __cordl_internal_set_WorldUpOverride(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_BlendManager(::Unity::Cinemachine::BlendManager*  value) ;

constexpr void __cordl_internal_set_m_CameraState(::Unity::Cinemachine::CameraState  value) ;

constexpr void __cordl_internal_set_m_LastFrameUpdated(int32_t  value) ;

constexpr void __cordl_internal_set_m_OutputCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_PhysicsCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_TargetOverride(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value) ;

/// @brief Method .ctor, addr 0xae879d4, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>* getStaticF_s_ActiveBrains() ;

/// @brief Method get_ActiveBlend, addr 0xae86878, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlend* get_ActiveBlend() ;

/// @brief Method get_ActiveBrainCount, addr 0xae86ad4, size 0x70, virtual false, abstract: false, final false
static inline int32_t get_ActiveBrainCount() ;

/// @brief Method get_ActiveVirtualCamera, addr 0xae867b4, size 0xac, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineCamera* get_ActiveVirtualCamera() ;

/// @brief Method get_ControlledObject, addr 0xae85930, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_ControlledObject() ;

/// @brief Method get_DefaultWorldUp, addr 0xae864e8, size 0xc8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_DefaultWorldUp() ;

/// @brief Method get_Description, addr 0xae865b8, size 0x1fc, virtual true, abstract: false, final true
inline ::StringW get_Description() ;

/// @brief Method get_IsBlending, addr 0xae86860, size 0x18, virtual false, abstract: false, final false
inline bool get_IsBlending() ;

/// @brief Method get_IsValid, addr 0xae868a0, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsValid() ;

/// @brief Method get_Name, addr 0xae865b0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_OutputCamera, addr 0xae86c48, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_OutputCamera() ;

/// @brief Method get_ParentCamera, addr 0xae868fc, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::ICinemachineMixer* get_ParentCamera() ;

/// @brief Method get_State, addr 0xae86890, size 0x10, virtual true, abstract: false, final true
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Convert to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr ::Unity::Cinemachine::ICameraOverrideStack* i___Unity__Cinemachine__ICameraOverrideStack() noexcept;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* i___Unity__Cinemachine__ICinemachineCamera() noexcept;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineMixer"
constexpr ::Unity::Cinemachine::ICinemachineMixer* i___Unity__Cinemachine__ICinemachineMixer() noexcept;

static inline void setStaticF_s_ActiveBrains(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  value) ;

/// @brief Method set_ActiveBlend, addr 0xae86d30, size 0x18, virtual false, abstract: false, final false
inline void set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value) ;

/// @brief Method set_ControlledObject, addr 0xae86bc4, size 0x84, virtual false, abstract: false, final false
inline void set_ControlledObject(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBrain(CinemachineBrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBrain(CinemachineBrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22144};

/// [Tooltip("When enabled, the current camera and blend are indicated in the game window, for debugging")]
/// [FormerlySerializedAs("m_ShowDebugText")]
/// @brief Field ShowDebugText, offset: 0x20, size: 0x1, def value: None
 bool  ___ShowDebugText;

/// [Tooltip("When enabled, shows the camera\'s frustum at all times in the Scene view")]
/// [FormerlySerializedAs("m_ShowCameraFrustum")]
/// @brief Field ShowCameraFrustum, offset: 0x21, size: 0x1, def value: None
 bool  ___ShowCameraFrustum;

/// [Tooltip("When enabled, the cameras always respond in real-time to user input and damping, even if the game is running in slow motion")]
/// [FormerlySerializedAs("m_IgnoreTimeScale")]
/// @brief Field IgnoreTimeScale, offset: 0x22, size: 0x1, def value: None
 bool  ___IgnoreTimeScale;

/// [Tooltip("If set, this GameObject\'s Y axis defines the world-space Up vector for all the CinemachineCameras.  This is useful for instance in top-down game environments.  If not set, Up is world-space Y.  Setting this appropriately is important, because CinemachineCameras don\'t like looking straight up or straight down.")]
/// [FormerlySerializedAs("m_WorldUpOverride")]
/// @brief Field WorldUpOverride, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___WorldUpOverride;

/// [Tooltip("The CinemachineBrain finds the highest-priority CinemachineCamera that outputs to any of the channels selected.  CinemachineCameras that do not output to one of these channels are ignored.  Use this in situations where multiple CinemachineBrains are needed (for example, Split-screen).")]
/// @brief Field ChannelMask, offset: 0x30, size: 0x4, def value: None
 ::Unity::Cinemachine::OutputChannels  ___ChannelMask;

/// [Tooltip("The update time for the CinemachineCameras.  Use FixedUpdate if all your targets are animated during FixedUpdate (e.g. RigidBodies), LateUpdate if all your targets are animated during the normal Update loop, and SmartUpdate if you want Cinemachine to do the appropriate thing on a per-target basis.  SmartUpdate is the recommended setting")]
/// [FormerlySerializedAs("m_UpdateMethod")]
/// @brief Field UpdateMethod, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineBrain_UpdateMethods  ___UpdateMethod;

/// [Tooltip("The update time for the Brain, i.e. when the blends are evaluated and the brain\'s transform is updated")]
/// [FormerlySerializedAs("m_BlendUpdateMethod")]
/// @brief Field BlendUpdateMethod, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods  ___BlendUpdateMethod;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field LensModeOverride, offset: 0x3c, size: 0x8, def value: None
 ::GlobalNamespace::CinemachineBrain_LensModeOverrideSettings  ___LensModeOverride;

/// [Tooltip("The blend that is used in cases where you haven\'t explicitly defined a blend between two CinemachineCameras")]
/// [FormerlySerializedAs("m_DefaultBlend")]
/// @brief Field DefaultBlend, offset: 0x48, size: 0x10, def value: None
 ::Unity::Cinemachine::CinemachineBlendDefinition  ___DefaultBlend;

/// [Tooltip("This is the asset that contains custom settings for blends between specific CinemachineCameras in your Scene")]
/// [FormerlySerializedAs("m_CustomBlends")]
/// [EmbeddedBlenderSettingsProperty]
/// @brief Field CustomBlends, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineBlenderSettings>  ___CustomBlends;

/// @brief Field m_OutputCamera, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_OutputCamera;

/// @brief Field m_TargetOverride, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_TargetOverride;

/// @brief Field m_LastFrameUpdated, offset: 0x70, size: 0x4, def value: None
 int32_t  ___m_LastFrameUpdated;

/// @brief Field m_PhysicsCoroutine, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_PhysicsCoroutine;

/// @brief Field m_WaitForFixedUpdate, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::WaitForFixedUpdate*  ___m_WaitForFixedUpdate;

/// @brief Field m_BlendManager, offset: 0x88, size: 0x8, def value: None
 ::Unity::Cinemachine::BlendManager*  ___m_BlendManager;

/// @brief Field m_CameraState, offset: 0x90, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_CameraState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___ShowDebugText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___ShowCameraFrustum) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___IgnoreTimeScale) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___WorldUpOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___ChannelMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___UpdateMethod) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___BlendUpdateMethod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___LensModeOverride) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___DefaultBlend) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___CustomBlends) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_OutputCamera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_TargetOverride) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_LastFrameUpdated) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_PhysicsCoroutine) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_WaitForFixedUpdate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_BlendManager) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain, ___m_CameraState) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBrain) == 0x1a0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBrain/<AfterPhysics>d__30
class CORDL_TYPE CinemachineBrain__AfterPhysics_d__30 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Unity::Cinemachine::CinemachineBrain>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xae87b74, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xae87be8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xae87bf0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xae87c28, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xae87b70, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xae86490, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrain__AfterPhysics_d__30() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrain__AfterPhysics_d__30", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBrain__AfterPhysics_d__30(CinemachineBrain__AfterPhysics_d__30 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrain__AfterPhysics_d__30", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBrain__AfterPhysics_d__30(CinemachineBrain__AfterPhysics_d__30 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22143};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineBrain>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBrain__AfterPhysics_d__30) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
