#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_Capabilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceSubType_def.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XInputController_Capabilities)
// Forward declare root types
namespace GlobalNamespace {
struct XInputController_Capabilities;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XInputController_Capabilities);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XInputController_Capabilities, "UnityEngine.InputSystem.XInput", "XInputController/Capabilities");
// Dependencies UnityEngine.InputSystem.XInput.XInputController::DeviceFlags, UnityEngine.InputSystem.XInput.XInputController::DeviceSubType, UnityEngine.InputSystem.XInput.XInputController::DeviceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/Capabilities
struct CORDL_TYPE XInputController_Capabilities {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XInputController_Capabilities() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::XInputController_DeviceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "subType", ty: "::GlobalNamespace::XInputController_DeviceSubType", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::XInputController_DeviceFlags", modifiers: "", def_value: None, comment: None }]
constexpr XInputController_Capabilities(::GlobalNamespace::XInputController_DeviceType  type, ::GlobalNamespace::XInputController_DeviceSubType  subType, ::GlobalNamespace::XInputController_DeviceFlags  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::XInputController_DeviceType  type;

/// @brief Field subType, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::XInputController_DeviceSubType  subType;

/// @brief Field flags, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::XInputController_DeviceFlags  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XInputController_Capabilities, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XInputController_Capabilities, subType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XInputController_Capabilities, flags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XInputController_Capabilities) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
