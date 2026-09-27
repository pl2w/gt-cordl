#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExternalCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineExternalCamera)
namespace Unity::Cinemachine {
struct CameraState;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineExternalCamera;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineExternalCamera*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineExternalCamera*, "Unity.Cinemachine", "CinemachineExternalCamera");
// [RequireComponent(typeof(UnityEngine.Camera))]
// [DisallowMultipleComponent]
// [AddComponentMenu("Cinemachine/Cinemachine External Camera")]
// [ExecuteAlways]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineExternalCamera.html")]
// Dependencies Unity.Cinemachine.CameraState, Unity.Cinemachine.CinemachineCore::BlendHints, Unity.Cinemachine.CinemachineVirtualCameraBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineExternalCamera
class CORDL_TYPE CinemachineExternalCamera : public ::Unity::Cinemachine::CinemachineVirtualCameraBase {
public:
// Declarations
/// @brief Field BlendHint, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendHint, put=__cordl_internal_set_BlendHint)) ::GlobalNamespace::CinemachineCore_BlendHints  BlendHint;

/// @brief [HideInInspector]
 __declspec(property(get=get_Follow, put=set_Follow)) ::UnityW<::UnityEngine::Transform>  Follow;

 __declspec(property(get=get_LookAt, put=set_LookAt)) ::UnityW<::UnityEngine::Transform>  LookAt;

/// @brief Field LookAtTarget, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_LookAtTarget, put=__cordl_internal_set_LookAtTarget)) ::UnityW<::UnityEngine::Transform>  LookAtTarget;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Field <Follow>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Follow_k__BackingField, put=__cordl_internal_set__Follow_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _Follow_k__BackingField;

/// @brief Field m_Camera, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Camera, put=__cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera>  m_Camera;

/// @brief Field m_State, offset 0xb0, size 0x110 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::Unity::Cinemachine::CameraState  m_State;

/// @brief Method InternalUpdateCameraState, addr 0xae91fe0, size 0x430, virtual true, abstract: false, final false
inline void InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineExternalCamera* New_ctor() ;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& __cordl_internal_get_BlendHint() const;

constexpr ::GlobalNamespace::CinemachineCore_BlendHints& __cordl_internal_get_BlendHint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_LookAtTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_LookAtTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Follow_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Follow_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera() ;

constexpr ::Unity::Cinemachine::CameraState const& __cordl_internal_get_m_State() const;

constexpr ::Unity::Cinemachine::CameraState& __cordl_internal_get_m_State() ;

constexpr void __cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value) ;

constexpr void __cordl_internal_set_LookAtTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Follow_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value) ;

/// @brief Method .ctor, addr 0xae92410, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Follow, addr 0xae91fc8, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Follow() ;

/// @brief Method get_LookAt, addr 0xae91fb8, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAt() ;

/// @brief Method get_State, addr 0xae91fa8, size 0x10, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

/// [CompilerGenerated]
/// @brief Method set_Follow, addr 0xae91fd0, size 0x10, virtual true, abstract: false, final false
inline void set_Follow(::UnityEngine::Transform*  value) ;

/// @brief Method set_LookAt, addr 0xae91fc0, size 0x8, virtual true, abstract: false, final false
inline void set_LookAt(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineExternalCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExternalCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineExternalCamera(CinemachineExternalCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineExternalCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineExternalCamera(CinemachineExternalCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22168};

/// [Tooltip("Hint for transitioning to and from this CinemachineCamera.  Hints can be combined, although not all combinations make sense.  In the case of conflicting hints, Cinemachine will make an arbitrary choice.")]
/// [FormerlySerializedAs("m_PositionBlending")]
/// [FormerlySerializedAs("m_BlendHint")]
/// @brief Field BlendHint, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCore_BlendHints  ___BlendHint;

/// [Tooltip("The object that the camera is looking at.  Setting this may improve the quality of the blends to and from this camera")]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_LookAt")]
/// @brief Field LookAtTarget, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___LookAtTarget;

/// @brief Field m_Camera, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_Camera;

/// @brief Field m_State, offset: 0xb0, size: 0x110, def value: None
 ::Unity::Cinemachine::CameraState  ___m_State;

/// [CompilerGenerated]
/// @brief Field <Follow>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Follow_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalCamera, ___BlendHint) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalCamera, ___LookAtTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalCamera, ___m_Camera) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalCamera, ___m_State) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineExternalCamera, ____Follow_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineExternalCamera) == 0x1c8, "Size mismatch!");

} // namespace end def Unity::Cinemachine
