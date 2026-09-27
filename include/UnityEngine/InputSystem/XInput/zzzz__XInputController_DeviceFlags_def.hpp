#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_DeviceFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputController_DeviceFlags)
// Forward declare root types
namespace GlobalNamespace {
struct XInputController_DeviceFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XInputController_DeviceFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XInputController_DeviceFlags, "UnityEngine.InputSystem.XInput", "XInputController/DeviceFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceFlags
struct CORDL_TYPE XInputController_DeviceFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputController_DeviceFlags_Unwrapped
enum struct __XInputController_DeviceFlags_Unwrapped : int32_t {
__E_ForceFeedbackSupported = static_cast<int32_t>(0x1),
__E_Wireless = static_cast<int32_t>(0x2),
__E_VoiceSupported = static_cast<int32_t>(0x4),
__E_PluginModulesSupported = static_cast<int32_t>(0x8),
__E_NoNavigation = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputController_DeviceFlags_Unwrapped () const noexcept {
return static_cast<__XInputController_DeviceFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputController_DeviceFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XInputController_DeviceFlags(int32_t  value__) noexcept;

/// @brief Field ForceFeedbackSupported value: I32(1)
static ::GlobalNamespace::XInputController_DeviceFlags const ForceFeedbackSupported;

/// @brief Field NoNavigation value: I32(16)
static ::GlobalNamespace::XInputController_DeviceFlags const NoNavigation;

/// @brief Field PluginModulesSupported value: I32(8)
static ::GlobalNamespace::XInputController_DeviceFlags const PluginModulesSupported;

/// @brief Field VoiceSupported value: I32(4)
static ::GlobalNamespace::XInputController_DeviceFlags const VoiceSupported;

/// @brief Field Wireless value: I32(2)
static ::GlobalNamespace::XInputController_DeviceFlags const Wireless;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XInputController_DeviceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XInputController_DeviceFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
