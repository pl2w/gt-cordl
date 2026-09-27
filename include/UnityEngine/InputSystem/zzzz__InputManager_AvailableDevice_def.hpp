#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_AvailableDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputManager_AvailableDevice)
// Forward declare root types
namespace GlobalNamespace {
struct InputManager_AvailableDevice;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputManager_AvailableDevice);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputManager_AvailableDevice, "UnityEngine.InputSystem", "InputManager/AvailableDevice");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputManager/AvailableDevice
struct CORDL_TYPE InputManager_AvailableDevice {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputManager_AvailableDevice() ;

// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputManager_AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, int32_t  deviceId, bool  isNative, bool  isRemoved) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field description, offset: 0x0, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

/// @brief Field deviceId, offset: 0x38, size: 0x4, def value: None
 int32_t  deviceId;

/// @brief Field isNative, offset: 0x3c, size: 0x1, def value: None
 bool  isNative;

/// @brief Field isRemoved, offset: 0x3d, size: 0x1, def value: None
 bool  isRemoved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputManager_AvailableDevice, description) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_AvailableDevice, deviceId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_AvailableDevice, isNative) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputManager_AvailableDevice, isRemoved) == 0x3d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputManager_AvailableDevice) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
