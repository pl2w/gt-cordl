#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorsForDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_BitRegion_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorListener_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_StateChangeMonitorsForDevice)
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorListener;
}
namespace GlobalNamespace {
struct MemoryHelpers_BitRegion;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputManager_StateChangeMonitorsForDevice;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorsForDevice");
// Dependencies UnityEngine.InputSystem.DynamicBitfield, UnityEngine.InputSystem.InputManager::StateChangeMonitorListener, UnityEngine.InputSystem.Utilities.MemoryHelpers::BitRegion
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/StateChangeMonitorsForDevice
struct CORDL_TYPE InputManager_StateChangeMonitorsForDevice {
public:
// Declarations
 __declspec(property(get=get_count)) int32_t  count;

/// @brief Method Add, addr 0xafb6918, size 0x168, virtual false, abstract: false, final false
inline void Add(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) ;

/// @brief Method Clear, addr 0xafb6cec, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CompactArrays, addr 0xafb6d4c, size 0x68, virtual false, abstract: false, final false
inline void CompactArrays() ;

/// @brief Method Remove, addr 0xafb6af4, size 0xb4, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, bool  deferRemoval) ;

/// @brief Method RemoveAt, addr 0xafb6c40, size 0xac, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  i) ;

/// @brief Method SortMonitorsByIndex, addr 0xafb6db4, size 0x170, virtual false, abstract: false, final false
inline void SortMonitorsByIndex() ;

/// @brief Method get_count, addr 0xafb6910, size 0x8, virtual false, abstract: false, final false
inline int32_t get_count() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputManager_StateChangeMonitorsForDevice() ;

// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::GlobalNamespace::MemoryHelpers_BitRegion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "listeners", ty: "::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorListener>", modifiers: "", def_value: None, comment: None }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: None, comment: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputManager_StateChangeMonitorsForDevice(::ArrayW<::GlobalNamespace::MemoryHelpers_BitRegion>  memoryRegions, ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorListener>  listeners, ::UnityEngine::InputSystem::DynamicBitfield  signalled, bool  needToUpdateOrderingOfMonitors, bool  needToCompactArrays) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field memoryRegions, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MemoryHelpers_BitRegion>  memoryRegions;

/// @brief Field listeners, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorListener>  listeners;

/// @brief Field signalled, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputSystem::DynamicBitfield  signalled;

/// @brief Field needToUpdateOrderingOfMonitors, offset: 0x30, size: 0x1, def value: None
 bool  needToUpdateOrderingOfMonitors;

/// @brief Field needToCompactArrays, offset: 0x31, size: 0x1, def value: None
 bool  needToCompactArrays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, memoryRegions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, listeners) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, signalled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, needToUpdateOrderingOfMonitors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice, needToCompactArrays) == 0x31, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManager_StateChangeMonitorsForDevice) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
