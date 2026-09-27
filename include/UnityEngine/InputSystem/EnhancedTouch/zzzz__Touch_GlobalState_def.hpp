#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_FingerAndTouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch_GlobalState)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
// Forward declare root types
namespace GlobalNamespace {
struct Touch_GlobalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Touch_GlobalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Touch_GlobalState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/GlobalState");
// Dependencies UnityEngine.InputSystem.EnhancedTouch.Touch::FingerAndTouchState, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/GlobalState
struct CORDL_TYPE Touch_GlobalState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Touch_GlobalState() ;

// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "onFingerDown", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerState", ty: "::GlobalNamespace::Touch_FingerAndTouchState", modifiers: "", def_value: None, comment: None }]
constexpr Touch_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens, int32_t  historyLengthPerFinger, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp, ::GlobalNamespace::Touch_FingerAndTouchState  playerState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x150};

/// @brief Field touchscreens, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens;

/// @brief Field historyLengthPerFinger, offset: 0x18, size: 0x4, def value: None
 int32_t  historyLengthPerFinger;

/// @brief Field onFingerDown, offset: 0x20, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown;

/// @brief Field onFingerMove, offset: 0x70, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove;

/// @brief Field onFingerUp, offset: 0xc0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp;

/// @brief Field playerState, offset: 0x110, size: 0x40, def value: None
 ::GlobalNamespace::Touch_FingerAndTouchState  playerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, touchscreens) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, historyLengthPerFinger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, onFingerDown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, onFingerMove) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, onFingerUp) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_GlobalState, playerState) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Touch_GlobalState) == 0x150, "Size mismatch!");

} // namespace end def GlobalNamespace
