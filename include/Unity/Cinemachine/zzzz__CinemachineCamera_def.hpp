#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraTarget_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineCamera)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System {
class Type;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineComponentBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
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
class CinemachineCamera;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCamera*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCamera*, "Unity.Cinemachine", "CinemachineCamera");
// [DisallowMultipleComponent]
// [ExecuteAlways]
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Cinemachine Camera")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineCamera.html")]
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CameraTarget, Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineCore::BlendHints, Unity.Cinemachine.CinemachineVirtualCameraBase, Unity.Cinemachine.LensSettings
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCamera
class CORDL_TYPE CinemachineCamera : public ::Unity::Cinemachine::CinemachineVirtualCameraBase {
public:
// Declarations
/// @brief Field BlendHint, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendHint, put=__cordl_internal_set_BlendHint)) ::GlobalNamespace::CinemachineCore_BlendHints  BlendHint;

 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

/// @brief Field Lens, offset 0xb8, size 0x58 
 __declspec(property(get=__cordl_internal_get_Lens, put=__cordl_internal_set_Lens)) ::Unity::Cinemachine::LensSettings  Lens;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

 __declspec(property(get=get_PipelineCacheInvalidated)) bool  PipelineCacheInvalidated;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field Target, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::Unity::Cinemachine::CameraTarget  Target;

/// @brief Field m_Pipeline, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pipeline, put=__cordl_internal_set_m_Pipeline)) ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  m_Pipeline;

/// @brief Field m_State, offset 0x118, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Method ForceCameraPosition, addr 0xae88060, size 0x18c, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetCinemachineComponent, addr 0xae88b88, size 0x4c, virtual true, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage) ;

/// @brief Method GetMaxDampTime, addr 0xae881ec, size 0x100, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InternalUpdateCameraState, addr 0xae88648, size 0x204, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method InvalidatePipelineCache, addr 0xae88a94, size 0x14, virtual false, abstract: false, final false
inline void InvalidatePipelineCache() ;

/// @brief Method InvokeComponentPipeline, addr 0xae8884c, size 0x248, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState InvokeComponentPipeline(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineCamera* New_ctor() ;

/// @brief Method OnTargetObjectWarped, addr 0xae87ce4, size 0x1b4, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xae882ec, size 0x35c, virtual true, abstract: false, final false
inline void OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xae87c78, size 0xc, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PeekPipelineCacheType, addr 0xae88ab8, size 0xd0, virtual false, abstract: false, final false
inline ::System::Type* PeekPipelineCacheType(::GlobalNamespace::CinemachineCore_Stage  stage) ;

/// @brief Method Reset, addr 0xae87c30, size 0x48, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdatePipelineCache, addr 0xae87e98, size 0x1c8, virtual false, abstract: false, final false
inline void UpdatePipelineCache() ;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& __cordl_internal_get_BlendHint() const;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints& __cordl_internal_get_BlendHint() ;

constexpr ::Unity::Cinemachine::LensSettings const& __cordl_internal_get_Lens() const;

constexpr ::Unity::Cinemachine::LensSettings& __cordl_internal_get_Lens() ;

constexpr ::Unity::Cinemachine::CameraTarget const& __cordl_internal_get_Target() const;

constexpr ::Unity::Cinemachine::CameraTarget& __cordl_internal_get_Target() ;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> const& __cordl_internal_get_m_Pipeline() const;

constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>& __cordl_internal_get_m_Pipeline() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value) ;

constexpr void __cordl_internal_set_Lens(::Unity::Cinemachine::LensSettings  value) ;

constexpr void __cordl_internal_set_Target(::Unity::Cinemachine::CameraTarget  value) ;

constexpr void __cordl_internal_set_m_Pipeline(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

/// @brief Method .ctor, addr 0xae88bd4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Follow, addr 0xae87cd0, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_LookAt, addr 0xae87c94, size 0x2c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_PipelineCacheInvalidated, addr 0xae88aa8, size 0x10, virtual false, abstract: false, final false
inline bool get_PipelineCacheInvalidated() ;

/// @brief Method get_State, addr 0xae87c84, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// @brief Method set_Follow, addr 0xae87cdc, size 0x8, virtual true, abstract: false, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// @brief Method set_LookAt, addr 0xae87cc0, size 0x10, virtual true, abstract: false, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCamera(CinemachineCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCamera(CinemachineCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22145};

/// [NoSaveDuringPlay]
/// [Tooltip("Specifies the Tracking and LookAt targets for this camera.")]
/// @brief Field Target, offset: 0xa0, size: 0x18, def value: None
 ::Unity::Cinemachine::CameraTarget  ___Target;

/// [Tooltip("Specifies the lens properties of this Virtual Camera.  This generally mirrors the Unity Camera\'s lens settings, and will be used to drive the Unity camera when the vcam is active.")]
/// @brief Field Lens, offset: 0xb8, size: 0x58, def value: None
 ::Unity::Cinemachine::LensSettings  ___Lens;

/// [Tooltip("Hint for transitioning to and from this CinemachineCamera.  Hints can be combined, although not all combinations make sense.  In the case of conflicting hints, Cinemachine will make an arbitrary choice.")]
/// @brief Field BlendHint, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_BlendHints  ___BlendHint;

/// @brief Field m_State, offset: 0x118, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// @brief Field m_Pipeline, offset: 0x228, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  ___m_Pipeline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCamera, ___Target) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCamera, ___Lens) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCamera, ___BlendHint) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCamera, ___m_State) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCamera, ___m_Pipeline) == 0x228, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCamera) == 0x230, "Size mismatch!");

} // namespace end def Unity::Cinemachine
