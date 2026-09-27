#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorTimeout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_StateChangeMonitorTimeout)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorTimeout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManager_StateChangeMonitorTimeout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorTimeout");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorTimeout
struct CORDL_TYPE InputManager_StateChangeMonitorTimeout {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorTimeout() ;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputManager_StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field control, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field time, offset: 0x8, size: 0x8, def value: None
 double_t  time;

/// @brief Field monitor, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex, offset: 0x18, size: 0x8, def value: None
 int64_t  monitorIndex;

/// @brief Field timerIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  timerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, time) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, monitor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, monitorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout, timerIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManager_StateChangeMonitorTimeout) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
