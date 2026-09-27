#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_UsagePage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_UsagePage)
// Forward declare root types
namespace GlobalNamespace {
struct HID_UsagePage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_UsagePage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_UsagePage, "UnityEngine.InputSystem.HID", "HID/UsagePage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/UsagePage
struct CORDL_TYPE HID_UsagePage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_UsagePage_Unwrapped
enum struct __HID_UsagePage_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_GenericDesktop = static_cast<int32_t>(0x1),
__E_Simulation = static_cast<int32_t>(0x2),
__E_VRControls = static_cast<int32_t>(0x3),
__E_SportControls = static_cast<int32_t>(0x4),
__E_GameControls = static_cast<int32_t>(0x5),
__E_GenericDeviceControls = static_cast<int32_t>(0x6),
__E_Keyboard = static_cast<int32_t>(0x7),
__E_LEDs = static_cast<int32_t>(0x8),
__E_Button = static_cast<int32_t>(0x9),
__E_Ordinal = static_cast<int32_t>(0xa),
__E_Telephony = static_cast<int32_t>(0xb),
__E_Consumer = static_cast<int32_t>(0xc),
__E_Digitizer = static_cast<int32_t>(0xd),
__E_PID = static_cast<int32_t>(0xf),
__E_Unicode = static_cast<int32_t>(0x10),
__E_AlphanumericDisplay = static_cast<int32_t>(0x14),
__E_MedicalInstruments = static_cast<int32_t>(0x40),
__E_Monitor = static_cast<int32_t>(0x80),
__E_Power = static_cast<int32_t>(0x84),
__E_BarCodeScanner = static_cast<int32_t>(0x8c),
__E_MagneticStripeReader = static_cast<int32_t>(0x8e),
__E_Camera = static_cast<int32_t>(0x90),
__E_Arcade = static_cast<int32_t>(0x91),
__E_VendorDefined = static_cast<int32_t>(0xff00),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_UsagePage_Unwrapped () const noexcept {
return static_cast<__HID_UsagePage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_UsagePage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_UsagePage(int32_t  value__) noexcept;

/// @brief Field AlphanumericDisplay value: I32(20)
static ::GlobalNamespace::HID_UsagePage const AlphanumericDisplay;

/// @brief Field Arcade value: I32(145)
static ::GlobalNamespace::HID_UsagePage const Arcade;

/// @brief Field BarCodeScanner value: I32(140)
static ::GlobalNamespace::HID_UsagePage const BarCodeScanner;

/// @brief Field Button value: I32(9)
static ::GlobalNamespace::HID_UsagePage const Button;

/// @brief Field Camera value: I32(144)
static ::GlobalNamespace::HID_UsagePage const Camera;

/// @brief Field Consumer value: I32(12)
static ::GlobalNamespace::HID_UsagePage const Consumer;

/// @brief Field Digitizer value: I32(13)
static ::GlobalNamespace::HID_UsagePage const Digitizer;

/// @brief Field GameControls value: I32(5)
static ::GlobalNamespace::HID_UsagePage const GameControls;

/// @brief Field GenericDesktop value: I32(1)
static ::GlobalNamespace::HID_UsagePage const GenericDesktop;

/// @brief Field GenericDeviceControls value: I32(6)
static ::GlobalNamespace::HID_UsagePage const GenericDeviceControls;

/// @brief Field Keyboard value: I32(7)
static ::GlobalNamespace::HID_UsagePage const Keyboard;

/// @brief Field LEDs value: I32(8)
static ::GlobalNamespace::HID_UsagePage const LEDs;

/// @brief Field MagneticStripeReader value: I32(142)
static ::GlobalNamespace::HID_UsagePage const MagneticStripeReader;

/// @brief Field MedicalInstruments value: I32(64)
static ::GlobalNamespace::HID_UsagePage const MedicalInstruments;

/// @brief Field Monitor value: I32(128)
static ::GlobalNamespace::HID_UsagePage const Monitor;

/// @brief Field Ordinal value: I32(10)
static ::GlobalNamespace::HID_UsagePage const Ordinal;

/// @brief Field PID value: I32(15)
static ::GlobalNamespace::HID_UsagePage const PID;

/// @brief Field Power value: I32(132)
static ::GlobalNamespace::HID_UsagePage const Power;

/// @brief Field Simulation value: I32(2)
static ::GlobalNamespace::HID_UsagePage const Simulation;

/// @brief Field SportControls value: I32(4)
static ::GlobalNamespace::HID_UsagePage const SportControls;

/// @brief Field Telephony value: I32(11)
static ::GlobalNamespace::HID_UsagePage const Telephony;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::HID_UsagePage const Undefined;

/// @brief Field Unicode value: I32(16)
static ::GlobalNamespace::HID_UsagePage const Unicode;

/// @brief Field VRControls value: I32(3)
static ::GlobalNamespace::HID_UsagePage const VRControls;

/// @brief Field VendorDefined value: I32(65280)
static ::GlobalNamespace::HID_UsagePage const VendorDefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_UsagePage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_UsagePage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
