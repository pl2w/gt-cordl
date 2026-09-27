#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CameraTarget)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct CameraTarget;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::CameraTarget);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraTarget, "Unity.Cinemachine", "CameraTarget");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraTarget
struct CORDL_TYPE CameraTarget {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CameraTarget() ;

// Ctor Parameters [CppParam { name: "TrackingTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "LookAtTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomLookAtTarget", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CameraTarget(::UnityW<::UnityEngine::Transform>  TrackingTarget, ::UnityW<::UnityEngine::Transform>  LookAtTarget, bool  CustomLookAtTarget) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("Object for the camera to follow")]
/// @brief Field TrackingTarget, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  TrackingTarget;

/// [Tooltip("Object for the camera to look at")]
/// @brief Field LookAtTarget, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  LookAtTarget;

/// @brief Field CustomLookAtTarget, offset: 0x10, size: 0x1, def value: None
 bool  CustomLookAtTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CameraTarget, TrackingTarget) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraTarget, LookAtTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CameraTarget, CustomLookAtTarget) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CameraTarget) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
