#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch_FingerAndTouchState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch_FingerAndTouchState)
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
// Forward declare root types
namespace GlobalNamespace {
struct Touch_FingerAndTouchState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Touch_FingerAndTouchState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Touch_FingerAndTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/FingerAndTouchState");
// Dependencies UnityEngine.InputSystem.EnhancedTouch.Finger, UnityEngine.InputSystem.EnhancedTouch.Touch, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/FingerAndTouchState
struct CORDL_TYPE Touch_FingerAndTouchState {
public:
// Declarations
/// @brief Method AddFingers, addr 0xafe8574, size 0x114, virtual false, abstract: false, final false
inline void AddFingers(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method Destroy, addr 0xafe5558, size 0x8c, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method RemoveFingers, addr 0xafe8688, size 0x148, virtual false, abstract: false, final false
inline void RemoveFingers(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method UpdateActiveFingers, addr 0xafe7a94, size 0x114, virtual false, abstract: false, final false
inline void UpdateActiveFingers() ;

/// @brief Method UpdateActiveTouches, addr 0xafe73a8, size 0x5bc, virtual false, abstract: false, final false
inline void UpdateActiveTouches() ;

// Ctor Parameters []
// @brief default ctor
constexpr Touch_FingerAndTouchState() ;

// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None, comment: None }, CppParam { name: "fingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalFingerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None, comment: None }]
constexpr Touch_FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  fingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  activeFingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>  activeTouches, int32_t  activeFingerCount, int32_t  activeTouchCount, int32_t  totalFingerCount, uint32_t  lastId, bool  haveBuiltActiveTouches, bool  haveActiveTouchesNeedingRefreshNextUpdate, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field updateMask, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

/// @brief Field fingers, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  fingers;

/// @brief Field activeFingers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*>  activeFingers;

/// @brief Field activeTouches, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>  activeTouches;

/// @brief Field activeFingerCount, offset: 0x20, size: 0x4, def value: None
 int32_t  activeFingerCount;

/// @brief Field activeTouchCount, offset: 0x24, size: 0x4, def value: None
 int32_t  activeTouchCount;

/// @brief Field totalFingerCount, offset: 0x28, size: 0x4, def value: None
 int32_t  totalFingerCount;

/// @brief Field lastId, offset: 0x2c, size: 0x4, def value: None
 uint32_t  lastId;

/// @brief Field haveBuiltActiveTouches, offset: 0x30, size: 0x1, def value: None
 bool  haveBuiltActiveTouches;

/// @brief Field haveActiveTouchesNeedingRefreshNextUpdate, offset: 0x31, size: 0x1, def value: None
 bool  haveActiveTouchesNeedingRefreshNextUpdate;

/// @brief Field activeTouchState, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, updateMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, fingers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, activeFingers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, activeTouches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, activeFingerCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, activeTouchCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, totalFingerCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, lastId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, haveBuiltActiveTouches) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, haveActiveTouchesNeedingRefreshNextUpdate) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Touch_FingerAndTouchState, activeTouchState) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Touch_FingerAndTouchState) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
