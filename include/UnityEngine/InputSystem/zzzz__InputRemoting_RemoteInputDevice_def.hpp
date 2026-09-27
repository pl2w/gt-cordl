#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_RemoteInputDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_RemoteInputDevice)
// Forward declare root types
namespace GlobalNamespace {
struct InputRemoting_RemoteInputDevice;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputRemoting_RemoteInputDevice);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputRemoting_RemoteInputDevice, "UnityEngine.InputSystem", "InputRemoting/RemoteInputDevice");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoteInputDevice
struct CORDL_TYPE InputRemoting_RemoteInputDevice {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_RemoteInputDevice() ;

// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None, comment: None }]
constexpr InputRemoting_RemoteInputDevice(int32_t  remoteId, int32_t  localId, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field remoteId, offset: 0x0, size: 0x4, def value: None
 int32_t  remoteId;

/// @brief Field localId, offset: 0x4, size: 0x4, def value: None
 int32_t  localId;

/// @brief Field description, offset: 0x8, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteInputDevice, remoteId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteInputDevice, localId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputRemoting_RemoteInputDevice, description) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputRemoting_RemoteInputDevice) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
