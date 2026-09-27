#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineAutoFocus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_FocusTrackingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineAutoFocus)
namespace GlobalNamespace {
struct CinemachineAutoFocus_FocusTrackingMode;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineAutoFocus_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineAutoFocus;
}
namespace Unity::Cinemachine {
class CinemachineAutoFocus_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineAutoFocus*);
MARK_REF_T(::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineAutoFocus*, "Unity.Cinemachine", "CinemachineAutoFocus");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState*, "Unity.Cinemachine", "CinemachineAutoFocus/VcamExtraState");
// [ExecuteAlways]
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Auto Focus")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineAutoFocus.html")]
// Dependencies Unity.Cinemachine.CinemachineAutoFocus::FocusTrackingMode, Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineAutoFocus
class CORDL_TYPE CinemachineAutoFocus : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using FocusTrackingMode = ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode;

using VcamExtraState = ::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState;

/// @brief Field CustomTarget, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomTarget, put=__cordl_internal_set_CustomTarget)) ::UnityW<::UnityEngine::Transform>  CustomTarget;

/// @brief Field Damping, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) float_t  Damping;

/// @brief Field FocusDepthOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_FocusDepthOffset, put=__cordl_internal_set_FocusDepthOffset)) float_t  FocusDepthOffset;

/// @brief Field FocusTarget, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_FocusTarget, put=__cordl_internal_set_FocusTarget)) ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  FocusTarget;

static inline ::Unity::Cinemachine::CinemachineAutoFocus* New_ctor() ;

/// @brief Method OnValidate, addr 0xaee5d54, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xaee5d6c, size 0x2cc, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaee5d20, size 0x34, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CustomTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CustomTarget() ;

constexpr float_t const& __cordl_internal_get_Damping() const;

constexpr float_t& __cordl_internal_get_Damping() ;

constexpr float_t const& __cordl_internal_get_FocusDepthOffset() const;

constexpr float_t& __cordl_internal_get_FocusDepthOffset() ;

constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode const& __cordl_internal_get_FocusTarget() const;

constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode& __cordl_internal_get_FocusTarget() ;

constexpr void __cordl_internal_set_CustomTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Damping(float_t  value) ;

constexpr void __cordl_internal_set_FocusDepthOffset(float_t  value) ;

constexpr void __cordl_internal_set_FocusTarget(::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  value) ;

/// @brief Method .ctor, addr 0xaee6038, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineAutoFocus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineAutoFocus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineAutoFocus(CinemachineAutoFocus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineAutoFocus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineAutoFocus(CinemachineAutoFocus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22488};

/// [Tooltip("The camera\'s focus distance will be set to the distance from the camera to the selected target.  The Focus Offset field will then modify that distance.")]
/// @brief Field FocusTarget, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  ___FocusTarget;

/// [Tooltip("The target to use if Focus Target is set to Custom Target")]
/// @brief Field CustomTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CustomTarget;

/// [Tooltip("Offsets the sharpest point away in depth from the focus target location.")]
/// @brief Field FocusDepthOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___FocusDepthOffset;

/// [Tooltip("The value corresponds approximately to the time the focus will take to adjust to the new value.")]
/// @brief Field Damping, offset: 0x44, size: 0x4, def value: None
 float_t  ___Damping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineAutoFocus, ___FocusTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineAutoFocus, ___CustomTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineAutoFocus, ___FocusDepthOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineAutoFocus, ___Damping) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineAutoFocus) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineAutoFocus/VcamExtraState
class CORDL_TYPE CinemachineAutoFocus_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field CurrentFocusDistance, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentFocusDistance, put=__cordl_internal_set_CurrentFocusDistance)) float_t  CurrentFocusDistance;

static inline ::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_CurrentFocusDistance() const;

constexpr float_t& __cordl_internal_get_CurrentFocusDistance() ;

constexpr void __cordl_internal_set_CurrentFocusDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xaee6040, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineAutoFocus_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineAutoFocus_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineAutoFocus_VcamExtraState(CinemachineAutoFocus_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineAutoFocus_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineAutoFocus_VcamExtraState(CinemachineAutoFocus_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22487};

/// @brief Field CurrentFocusDistance, offset: 0x18, size: 0x4, def value: None
 float_t  ___CurrentFocusDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState, ___CurrentFocusDistance) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
