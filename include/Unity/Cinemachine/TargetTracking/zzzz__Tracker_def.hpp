#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/Tracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Tracker)
namespace Unity::Cinemachine::TargetTracking {
struct BindingMode;
}
namespace Unity::Cinemachine::TargetTracking {
struct TrackerSettings;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineComponentBase;
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
namespace Unity::Cinemachine::TargetTracking {
struct Tracker;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::TargetTracking::Tracker);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetTracking::Tracker, "Unity.Cinemachine.TargetTracking", "Tracker");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::Cinemachine::TargetTracking {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetTracking.Tracker
struct CORDL_TYPE Tracker {
public:
// Declarations
 __declspec(property(get=get_PreviousReferenceOrientation, put=set_PreviousReferenceOrientation)) ::UnityEngine::Quaternion  PreviousReferenceOrientation;

 __declspec(property(get=get_PreviousTargetPosition, put=set_PreviousTargetPosition)) ::UnityEngine::Vector3  PreviousTargetPosition;

/// @brief Method GetOffsetForMinimumTargetDistance, addr 0xaf02148, size 0x3b0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetOffsetForMinimumTargetDistance(::Unity::Cinemachine::CinemachineComponentBase*  component, ::UnityEngine::Vector3  dampedTargetPos, ::UnityEngine::Vector3  cameraOffset, ::UnityEngine::Vector3  cameraFwd, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  actualTargetPos) ;

/// @brief Method GetReferenceOrientation, addr 0xaf016f8, size 0x334, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetReferenceOrientation(::Unity::Cinemachine::CinemachineComponentBase*  component, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::UnityEngine::Vector3  worldUp, ::by_ref<::Unity::Cinemachine::CameraState>  cameraState) ;

/// @brief Method InitStateInfo, addr 0xaf0154c, size 0x1ac, virtual false, abstract: false, final false
inline void InitStateInfo(::Unity::Cinemachine::CinemachineComponentBase*  component, float_t  deltaTime, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::UnityEngine::Vector3  up) ;

/// @brief Method OnForceCameraPosition, addr 0xaf02518, size 0x91c, virtual false, abstract: false, final false
inline void OnForceCameraPosition(::Unity::Cinemachine::CinemachineComponentBase*  component, ::Unity::Cinemachine::TargetTracking::BindingMode  bindingMode, ::by_ref<::Unity::Cinemachine::CameraState>  newState) ;

/// @brief Method OnTargetObjectWarped, addr 0xaf024f8, size 0x20, virtual false, abstract: false, final false
inline void OnTargetObjectWarped(::UnityEngine::Vector3  positionDelta) ;

/// @brief Method TrackTarget, addr 0xaf01a2c, size 0x71c, virtual false, abstract: false, final false
inline void TrackTarget(::Unity::Cinemachine::CinemachineComponentBase*  component, float_t  deltaTime, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  desiredCameraOffset, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::TargetTracking::TrackerSettings>  settings, ::by_ref<::Unity::Cinemachine::CameraState>  cameraState, ::by_ref<::UnityEngine::Vector3>  outTargetPosition, ::by_ref<::UnityEngine::Quaternion>  outTargetOrient) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PreviousReferenceOrientation, addr 0xaf01534, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_PreviousReferenceOrientation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_PreviousTargetPosition, addr 0xaf0151c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_PreviousTargetPosition() ;

/// [CompilerGenerated]
/// @brief Method set_PreviousReferenceOrientation, addr 0xaf01540, size 0xc, virtual false, abstract: false, final false
inline void set_PreviousReferenceOrientation(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreviousTargetPosition, addr 0xaf01528, size 0xc, virtual false, abstract: false, final false
inline void set_PreviousTargetPosition(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Tracker() ;

// Ctor Parameters [CppParam { name: "_PreviousTargetPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PreviousReferenceOrientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TargetOrientationOnAssign", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PreviousOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PreviousTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr Tracker(::UnityEngine::Vector3  _PreviousTargetPosition_k__BackingField, ::UnityEngine::Quaternion  _PreviousReferenceOrientation_k__BackingField, ::UnityEngine::Quaternion  m_TargetOrientationOnAssign, ::UnityEngine::Vector3  m_PreviousOffset, ::UnityW<::UnityEngine::Transform>  m_PreviousTarget) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22539};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <PreviousTargetPosition>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _PreviousTargetPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PreviousReferenceOrientation>k__BackingField, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _PreviousReferenceOrientation_k__BackingField;

/// @brief Field m_TargetOrientationOnAssign, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  m_TargetOrientationOnAssign;

/// @brief Field m_PreviousOffset, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_PreviousOffset;

/// @brief Field m_PreviousTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  m_PreviousTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::TargetTracking::Tracker, _PreviousTargetPosition_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::Tracker, _PreviousReferenceOrientation_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::Tracker, m_TargetOrientationOnAssign) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::Tracker, m_PreviousOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetTracking::Tracker, m_PreviousTarget) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::TargetTracking::Tracker) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine::TargetTracking
