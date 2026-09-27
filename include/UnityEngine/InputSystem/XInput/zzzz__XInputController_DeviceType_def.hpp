#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_DeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputController_DeviceType)
// Forward declare root types
namespace GlobalNamespace {
struct XInputController_DeviceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XInputController_DeviceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XInputController_DeviceType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceType
struct CORDL_TYPE XInputController_DeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputController_DeviceType_Unwrapped
enum struct __XInputController_DeviceType_Unwrapped : int32_t {
__E_Gamepad = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputController_DeviceType_Unwrapped () const noexcept {
return static_cast<__XInputController_DeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputController_DeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XInputController_DeviceType(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(0)
static ::GlobalNamespace::XInputController_DeviceType const Gamepad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XInputController_DeviceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XInputController_DeviceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
