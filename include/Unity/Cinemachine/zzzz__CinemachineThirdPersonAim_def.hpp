#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonAim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineThirdPersonAim)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineThirdPersonAim;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineThirdPersonAim*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineThirdPersonAim*, "Unity.Cinemachine", "CinemachineThirdPersonAim");
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Third Person Aim")]
// [ExecuteAlways]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineThirdPersonAim.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineThirdPersonAim
class CORDL_TYPE CinemachineThirdPersonAim : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
/// @brief Field AimCollisionFilter, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_AimCollisionFilter, put=__cordl_internal_set_AimCollisionFilter)) ::UnityEngine::LayerMask  AimCollisionFilter;

/// @brief Field AimDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_AimDistance, put=__cordl_internal_set_AimDistance)) float_t  AimDistance;

 __declspec(property(get=get_AimTarget, put=set_AimTarget)) ::UnityEngine::Vector3  AimTarget;

/// @brief Field IgnoreTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_IgnoreTag, put=__cordl_internal_set_IgnoreTag)) ::StringW  IgnoreTag;

/// @brief Field NoiseCancellation, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_NoiseCancellation, put=__cordl_internal_set_NoiseCancellation)) bool  NoiseCancellation;

/// @brief Field <AimTarget>k__BackingField, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__AimTarget_k__BackingField, put=__cordl_internal_set__AimTarget_k__BackingField)) ::UnityEngine::Vector3  _AimTarget_k__BackingField;

/// @brief Method ComputeAimTarget, addr 0xae9e170, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeAimTarget(::UnityEngine::Vector3  cameraLookAt, ::UnityEngine::Transform*  player) ;

/// @brief Method ComputeLookAtPoint, addr 0xae9df04, size 0x26c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ComputeLookAtPoint(::UnityEngine::Vector3  camPos, ::UnityEngine::Transform*  player, ::UnityEngine::Vector3  fwd) ;

static inline ::Unity::Cinemachine::CinemachineThirdPersonAim* New_ctor() ;

/// @brief Method OnValidate, addr 0xae9db98, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae9dc08, size 0x2fc, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xae9dbb0, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_AimCollisionFilter() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_AimCollisionFilter() ;

constexpr float_t const& __cordl_internal_get_AimDistance() const;

constexpr float_t& __cordl_internal_get_AimDistance() ;

constexpr ::StringW const& __cordl_internal_get_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_IgnoreTag() ;

constexpr bool const& __cordl_internal_get_NoiseCancellation() const;

constexpr bool& __cordl_internal_get_NoiseCancellation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AimTarget_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AimTarget_k__BackingField() ;

constexpr void __cordl_internal_set_AimCollisionFilter(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_AimDistance(float_t  value) ;

constexpr void __cordl_internal_set_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_NoiseCancellation(bool  value) ;

constexpr void __cordl_internal_set__AimTarget_k__BackingField(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xae9e368, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AimTarget, addr 0xae9db80, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AimTarget() ;

/// [CompilerGenerated]
/// @brief Method set_AimTarget, addr 0xae9db8c, size 0xc, virtual false, abstract: false, final false
inline void set_AimTarget(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineThirdPersonAim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineThirdPersonAim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineThirdPersonAim(CinemachineThirdPersonAim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineThirdPersonAim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineThirdPersonAim(CinemachineThirdPersonAim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22220};

/// [Header("Aim Target Detection")]
/// [Tooltip("Objects on these layers will be detected")]
/// @brief Field AimCollisionFilter, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___AimCollisionFilter;

/// [TagField]
/// [Tooltip("Objects with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field IgnoreTag, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___IgnoreTag;

/// [Tooltip("How far to project the object detection ray")]
/// @brief Field AimDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___AimDistance;

/// [Tooltip("If set, camera noise will be adjusted to stabilize target on screen")]
/// @brief Field NoiseCancellation, offset: 0x44, size: 0x1, def value: None
 bool  ___NoiseCancellation;

/// [CompilerGenerated]
/// @brief Field <AimTarget>k__BackingField, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AimTarget_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonAim, ___AimCollisionFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonAim, ___IgnoreTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonAim, ___AimDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonAim, ___NoiseCancellation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineThirdPersonAim, ____AimTarget_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineThirdPersonAim) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
