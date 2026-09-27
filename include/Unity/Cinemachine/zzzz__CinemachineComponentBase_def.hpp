#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComponentBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineComponentBase)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
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
class CinemachineComponentBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineComponentBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineComponentBase*, "Unity.Cinemachine", "CinemachineComponentBase");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineComponentBase
class CORDL_TYPE CinemachineComponentBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BodyAppliesAfterAim)) bool  BodyAppliesAfterAim;

 __declspec(property(get=get_CameraLooksAtTarget)) bool  CameraLooksAtTarget;

 __declspec(property(get=get_FollowTarget)) ::UnityW<::UnityEngine::Transform>  FollowTarget;

 __declspec(property(get=get_FollowTargetAsGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  FollowTargetAsGroup;

 __declspec(property(get=get_FollowTargetPosition)) ::UnityEngine::Vector3  FollowTargetPosition;

 __declspec(property(get=get_FollowTargetRotation)) ::UnityEngine::Quaternion  FollowTargetRotation;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_LookAtTarget)) ::UnityW<::UnityEngine::Transform>  LookAtTarget;

 __declspec(property(get=get_LookAtTargetAsGroup)) ::Unity::Cinemachine::ICinemachineTargetGroup*  LookAtTargetAsGroup;

 __declspec(property(get=get_LookAtTargetPosition)) ::UnityEngine::Vector3  LookAtTargetPosition;

 __declspec(property(get=get_LookAtTargetRotation)) ::UnityEngine::Quaternion  LookAtTargetRotation;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=get_VcamState)) ::Unity::Cinemachine::CameraState  VcamState;

 __declspec(property(get=get_VirtualCamera)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  VirtualCamera;

/// @brief Field m_VcamOwner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VcamOwner, put=__cordl_internal_set_m_VcamOwner)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_VcamOwner;

/// @brief Method ForceCameraPosition, addr 0xaeb20ac, size 0x4, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetMaxDampTime, addr 0xaeb20b0, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineComponentBase* New_ctor() ;

/// @brief Method OnDisable, addr 0xaeb17f8, size 0xb8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaeb1740, size 0xb8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xaeb20a8, size 0x4, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnTransitionFromCamera, addr 0xaeb20a0, size 0x8, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method PrePipelineMutateCameraState, addr 0xaeb2094, size 0x4, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_VcamOwner() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_VcamOwner() ;

constexpr void __cordl_internal_set_m_VcamOwner(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaeb20c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BodyAppliesAfterAim, addr 0xaeb2098, size 0x8, virtual true, abstract: false, final false
inline bool get_BodyAppliesAfterAim() ;

/// @brief Method get_CameraLooksAtTarget, addr 0xaeb20b8, size 0x8, virtual true, abstract: false, final false
inline bool get_CameraLooksAtTarget() ;

/// @brief Method get_FollowTarget, addr 0xaeb18b0, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_FollowTarget() ;

/// @brief Method get_FollowTargetAsGroup, addr 0xaeb1a00, size 0x88, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineTargetGroup* get_FollowTargetAsGroup() ;

/// @brief Method get_FollowTargetPosition, addr 0xaeb1a88, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_FollowTargetPosition() ;

/// @brief Method get_FollowTargetRotation, addr 0xaeb1bcc, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_FollowTargetRotation() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsValid() ;

/// @brief Method get_LookAtTarget, addr 0xaeb1958, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LookAtTarget() ;

/// @brief Method get_LookAtTargetAsGroup, addr 0xaeb1d0c, size 0x1c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineTargetGroup* get_LookAtTargetAsGroup() ;

/// @brief Method get_LookAtTargetPosition, addr 0xaeb1d28, size 0x144, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LookAtTargetPosition() ;

/// @brief Method get_LookAtTargetRotation, addr 0xaeb1e6c, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_LookAtTargetRotation() ;

/// @brief Method get_Stage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Method get_VcamState, addr 0xaeb1fac, size 0xe8, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::CameraState get_VcamState() ;

/// @brief Method get_VirtualCamera, addr 0xaeb160c, size 0x134, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> get_VirtualCamera() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineComponentBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineComponentBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineComponentBase(CinemachineComponentBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineComponentBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineComponentBase(CinemachineComponentBase const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22274};

/// @brief Field m_VcamOwner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_VcamOwner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineComponentBase, ___m_VcamOwner) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineComponentBase) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
