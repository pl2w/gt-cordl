#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_StateChangeMonitorListener)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorListener;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManager_StateChangeMonitorListener);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManager_StateChangeMonitorListener, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorListener");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorListener
struct CORDL_TYPE InputManager_StateChangeMonitorListener {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorListener() ;

// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None, comment: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputManager_StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field control, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Field monitor, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor;

/// @brief Field monitorIndex, offset: 0x10, size: 0x8, def value: None
 int64_t  monitorIndex;

/// @brief Field groupIndex, offset: 0x18, size: 0x4, def value: None
 uint32_t  groupIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorListener, control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorListener, monitor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorListener, monitorIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorListener, groupIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManager_StateChangeMonitorListener) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
