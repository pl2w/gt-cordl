#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_DeviceSubType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputController_DeviceSubType)
// Forward declare root types
namespace GlobalNamespace {
struct XInputController_DeviceSubType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XInputController_DeviceSubType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XInputController_DeviceSubType, "UnityEngine.InputSystem.XInput", "XInputController/DeviceSubType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XInput.XInputController/DeviceSubType
struct CORDL_TYPE XInputController_DeviceSubType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputController_DeviceSubType_Unwrapped
enum struct __XInputController_DeviceSubType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
__E_Wheel = static_cast<int32_t>(0x2),
__E_ArcadeStick = static_cast<int32_t>(0x3),
__E_FlightStick = static_cast<int32_t>(0x4),
__E_DancePad = static_cast<int32_t>(0x5),
__E_Guitar = static_cast<int32_t>(0x6),
__E_GuitarAlternate = static_cast<int32_t>(0x7),
__E_DrumKit = static_cast<int32_t>(0x8),
__E_GuitarBass = static_cast<int32_t>(0xb),
__E_ArcadePad = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputController_DeviceSubType_Unwrapped () const noexcept {
return static_cast<__XInputController_DeviceSubType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputController_DeviceSubType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XInputController_DeviceSubType(int32_t  value__) noexcept;

/// @brief Field ArcadePad value: I32(19)
static ::GlobalNamespace::XInputController_DeviceSubType const ArcadePad;

/// @brief Field ArcadeStick value: I32(3)
static ::GlobalNamespace::XInputController_DeviceSubType const ArcadeStick;

/// @brief Field DancePad value: I32(5)
static ::GlobalNamespace::XInputController_DeviceSubType const DancePad;

/// @brief Field DrumKit value: I32(8)
static ::GlobalNamespace::XInputController_DeviceSubType const DrumKit;

/// @brief Field FlightStick value: I32(4)
static ::GlobalNamespace::XInputController_DeviceSubType const FlightStick;

/// @brief Field Gamepad value: I32(1)
static ::GlobalNamespace::XInputController_DeviceSubType const Gamepad;

/// @brief Field Guitar value: I32(6)
static ::GlobalNamespace::XInputController_DeviceSubType const Guitar;

/// @brief Field GuitarAlternate value: I32(7)
static ::GlobalNamespace::XInputController_DeviceSubType const GuitarAlternate;

/// @brief Field GuitarBass value: I32(11)
static ::GlobalNamespace::XInputController_DeviceSubType const GuitarBass;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::XInputController_DeviceSubType const Unknown;

/// @brief Field Wheel value: I32(2)
static ::GlobalNamespace::XInputController_DeviceSubType const Wheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XInputController_DeviceSubType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XInputController_DeviceSubType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
