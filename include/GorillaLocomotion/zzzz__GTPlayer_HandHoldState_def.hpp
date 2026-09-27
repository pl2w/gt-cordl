#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HandHoldState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GTPlayer_HandHoldState)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_HandHoldState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_HandHoldState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_HandHoldState, "GorillaLocomotion", "GTPlayer/HandHoldState");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/HandHoldState
struct CORDL_TYPE GTPlayer_HandHoldState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_HandHoldState() ;

// Ctor Parameters [CppParam { name: "grabber", ty: "::UnityW<::GlobalNamespace::GorillaGrabber>", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectHeld", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPositionHeld", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotationalOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "applyRotation", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_HandHoldState(::UnityW<::GlobalNamespace::GorillaGrabber>  grabber, ::UnityW<::UnityEngine::Transform>  objectHeld, ::UnityEngine::Vector3  localPositionHeld, float_t  localRotationalOffset, bool  applyRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field grabber, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGrabber>  grabber;

/// @brief Field objectHeld, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  objectHeld;

/// @brief Field localPositionHeld, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPositionHeld;

/// @brief Field localRotationalOffset, offset: 0x1c, size: 0x4, def value: None
 float_t  localRotationalOffset;

/// @brief Field applyRotation, offset: 0x20, size: 0x1, def value: None
 bool  applyRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_HandHoldState, grabber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandHoldState, objectHeld) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandHoldState, localPositionHeld) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandHoldState, localRotationalOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandHoldState, applyRotation) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_HandHoldState) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
