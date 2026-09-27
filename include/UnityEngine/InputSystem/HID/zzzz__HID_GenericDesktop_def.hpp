#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_GenericDesktop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_GenericDesktop)
// Forward declare root types
namespace GlobalNamespace {
struct HID_GenericDesktop;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_GenericDesktop);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_GenericDesktop, "UnityEngine.InputSystem.HID", "HID/GenericDesktop");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/GenericDesktop
struct CORDL_TYPE HID_GenericDesktop {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_GenericDesktop_Unwrapped
enum struct __HID_GenericDesktop_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Pointer = static_cast<int32_t>(0x1),
__E_Mouse = static_cast<int32_t>(0x2),
__E_Joystick = static_cast<int32_t>(0x4),
__E_Gamepad = static_cast<int32_t>(0x5),
__E_Keyboard = static_cast<int32_t>(0x6),
__E_Keypad = static_cast<int32_t>(0x7),
__E_MultiAxisController = static_cast<int32_t>(0x8),
__E_TabletPCControls = static_cast<int32_t>(0x9),
__E_AssistiveControl = static_cast<int32_t>(0xa),
__E_X = static_cast<int32_t>(0x30),
__E_Y = static_cast<int32_t>(0x31),
__E_Z = static_cast<int32_t>(0x32),
__E_Rx = static_cast<int32_t>(0x33),
__E_Ry = static_cast<int32_t>(0x34),
__E_Rz = static_cast<int32_t>(0x35),
__E_Slider = static_cast<int32_t>(0x36),
__E_Dial = static_cast<int32_t>(0x37),
__E_Wheel = static_cast<int32_t>(0x38),
__E_HatSwitch = static_cast<int32_t>(0x39),
__E_CountedBuffer = static_cast<int32_t>(0x3a),
__E_ByteCount = static_cast<int32_t>(0x3b),
__E_MotionWakeup = static_cast<int32_t>(0x3c),
__E_Start = static_cast<int32_t>(0x3d),
__E_Select = static_cast<int32_t>(0x3e),
__E_Vx = static_cast<int32_t>(0x40),
__E_Vy = static_cast<int32_t>(0x41),
__E_Vz = static_cast<int32_t>(0x42),
__E_Vbrx = static_cast<int32_t>(0x43),
__E_Vbry = static_cast<int32_t>(0x44),
__E_Vbrz = static_cast<int32_t>(0x45),
__E_Vno = static_cast<int32_t>(0x46),
__E_FeatureNotification = static_cast<int32_t>(0x47),
__E_ResolutionMultiplier = static_cast<int32_t>(0x48),
__E_SystemControl = static_cast<int32_t>(0x80),
__E_SystemPowerDown = static_cast<int32_t>(0x81),
__E_SystemSleep = static_cast<int32_t>(0x82),
__E_SystemWakeUp = static_cast<int32_t>(0x83),
__E_SystemContextMenu = static_cast<int32_t>(0x84),
__E_SystemMainMenu = static_cast<int32_t>(0x85),
__E_SystemAppMenu = static_cast<int32_t>(0x86),
__E_SystemMenuHelp = static_cast<int32_t>(0x87),
__E_SystemMenuExit = static_cast<int32_t>(0x88),
__E_SystemMenuSelect = static_cast<int32_t>(0x89),
__E_SystemMenuRight = static_cast<int32_t>(0x8a),
__E_SystemMenuLeft = static_cast<int32_t>(0x8b),
__E_SystemMenuUp = static_cast<int32_t>(0x8c),
__E_SystemMenuDown = static_cast<int32_t>(0x8d),
__E_SystemColdRestart = static_cast<int32_t>(0x8e),
__E_SystemWarmRestart = static_cast<int32_t>(0x8f),
__E_DpadUp = static_cast<int32_t>(0x90),
__E_DpadDown = static_cast<int32_t>(0x91),
__E_DpadRight = static_cast<int32_t>(0x92),
__E_DpadLeft = static_cast<int32_t>(0x93),
__E_SystemDock = static_cast<int32_t>(0xa0),
__E_SystemUndock = static_cast<int32_t>(0xa1),
__E_SystemSetup = static_cast<int32_t>(0xa2),
__E_SystemBreak = static_cast<int32_t>(0xa3),
__E_SystemDebuggerBreak = static_cast<int32_t>(0xa4),
__E_ApplicationBreak = static_cast<int32_t>(0xa5),
__E_ApplicationDebuggerBreak = static_cast<int32_t>(0xa6),
__E_SystemSpeakerMute = static_cast<int32_t>(0xa7),
__E_SystemHibernate = static_cast<int32_t>(0xa8),
__E_SystemDisplayInvert = static_cast<int32_t>(0xb0),
__E_SystemDisplayInternal = static_cast<int32_t>(0xb1),
__E_SystemDisplayExternal = static_cast<int32_t>(0xb2),
__E_SystemDisplayBoth = static_cast<int32_t>(0xb3),
__E_SystemDisplayDual = static_cast<int32_t>(0xb4),
__E_SystemDisplayToggleIntExt = static_cast<int32_t>(0xb5),
__E_SystemDisplaySwapPrimarySecondary = static_cast<int32_t>(0xb6),
__E_SystemDisplayLCDAutoScale = static_cast<int32_t>(0xb7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_GenericDesktop_Unwrapped () const noexcept {
return static_cast<__HID_GenericDesktop_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_GenericDesktop() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_GenericDesktop(int32_t  value__) noexcept;

/// @brief Field ApplicationBreak value: I32(165)
static ::GlobalNamespace::HID_GenericDesktop const ApplicationBreak;

/// @brief Field ApplicationDebuggerBreak value: I32(166)
static ::GlobalNamespace::HID_GenericDesktop const ApplicationDebuggerBreak;

/// @brief Field AssistiveControl value: I32(10)
static ::GlobalNamespace::HID_GenericDesktop const AssistiveControl;

/// @brief Field ByteCount value: I32(59)
static ::GlobalNamespace::HID_GenericDesktop const ByteCount;

/// @brief Field CountedBuffer value: I32(58)
static ::GlobalNamespace::HID_GenericDesktop const CountedBuffer;

/// @brief Field Dial value: I32(55)
static ::GlobalNamespace::HID_GenericDesktop const Dial;

/// @brief Field DpadDown value: I32(145)
static ::GlobalNamespace::HID_GenericDesktop const DpadDown;

/// @brief Field DpadLeft value: I32(147)
static ::GlobalNamespace::HID_GenericDesktop const DpadLeft;

/// @brief Field DpadRight value: I32(146)
static ::GlobalNamespace::HID_GenericDesktop const DpadRight;

/// @brief Field DpadUp value: I32(144)
static ::GlobalNamespace::HID_GenericDesktop const DpadUp;

/// @brief Field FeatureNotification value: I32(71)
static ::GlobalNamespace::HID_GenericDesktop const FeatureNotification;

/// @brief Field Gamepad value: I32(5)
static ::GlobalNamespace::HID_GenericDesktop const Gamepad;

/// @brief Field HatSwitch value: I32(57)
static ::GlobalNamespace::HID_GenericDesktop const HatSwitch;

/// @brief Field Joystick value: I32(4)
static ::GlobalNamespace::HID_GenericDesktop const Joystick;

/// @brief Field Keyboard value: I32(6)
static ::GlobalNamespace::HID_GenericDesktop const Keyboard;

/// @brief Field Keypad value: I32(7)
static ::GlobalNamespace::HID_GenericDesktop const Keypad;

/// @brief Field MotionWakeup value: I32(60)
static ::GlobalNamespace::HID_GenericDesktop const MotionWakeup;

/// @brief Field Mouse value: I32(2)
static ::GlobalNamespace::HID_GenericDesktop const Mouse;

/// @brief Field MultiAxisController value: I32(8)
static ::GlobalNamespace::HID_GenericDesktop const MultiAxisController;

/// @brief Field Pointer value: I32(1)
static ::GlobalNamespace::HID_GenericDesktop const Pointer;

/// @brief Field ResolutionMultiplier value: I32(72)
static ::GlobalNamespace::HID_GenericDesktop const ResolutionMultiplier;

/// @brief Field Rx value: I32(51)
static ::GlobalNamespace::HID_GenericDesktop const Rx;

/// @brief Field Ry value: I32(52)
static ::GlobalNamespace::HID_GenericDesktop const Ry;

/// @brief Field Rz value: I32(53)
static ::GlobalNamespace::HID_GenericDesktop const Rz;

/// @brief Field Select value: I32(62)
static ::GlobalNamespace::HID_GenericDesktop const Select;

/// @brief Field Slider value: I32(54)
static ::GlobalNamespace::HID_GenericDesktop const Slider;

/// @brief Field Start value: I32(61)
static ::GlobalNamespace::HID_GenericDesktop const Start;

/// @brief Field SystemAppMenu value: I32(134)
static ::GlobalNamespace::HID_GenericDesktop const SystemAppMenu;

/// @brief Field SystemBreak value: I32(163)
static ::GlobalNamespace::HID_GenericDesktop const SystemBreak;

/// @brief Field SystemColdRestart value: I32(142)
static ::GlobalNamespace::HID_GenericDesktop const SystemColdRestart;

/// @brief Field SystemContextMenu value: I32(132)
static ::GlobalNamespace::HID_GenericDesktop const SystemContextMenu;

/// @brief Field SystemControl value: I32(128)
static ::GlobalNamespace::HID_GenericDesktop const SystemControl;

/// @brief Field SystemDebuggerBreak value: I32(164)
static ::GlobalNamespace::HID_GenericDesktop const SystemDebuggerBreak;

/// @brief Field SystemDisplayBoth value: I32(179)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayBoth;

/// @brief Field SystemDisplayDual value: I32(180)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayDual;

/// @brief Field SystemDisplayExternal value: I32(178)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayExternal;

/// @brief Field SystemDisplayInternal value: I32(177)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayInternal;

/// @brief Field SystemDisplayInvert value: I32(176)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayInvert;

/// @brief Field SystemDisplayLCDAutoScale value: I32(183)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayLCDAutoScale;

/// @brief Field SystemDisplaySwapPrimarySecondary value: I32(182)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplaySwapPrimarySecondary;

/// @brief Field SystemDisplayToggleIntExt value: I32(181)
static ::GlobalNamespace::HID_GenericDesktop const SystemDisplayToggleIntExt;

/// @brief Field SystemDock value: I32(160)
static ::GlobalNamespace::HID_GenericDesktop const SystemDock;

/// @brief Field SystemHibernate value: I32(168)
static ::GlobalNamespace::HID_GenericDesktop const SystemHibernate;

/// @brief Field SystemMainMenu value: I32(133)
static ::GlobalNamespace::HID_GenericDesktop const SystemMainMenu;

/// @brief Field SystemMenuDown value: I32(141)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuDown;

/// @brief Field SystemMenuExit value: I32(136)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuExit;

/// @brief Field SystemMenuHelp value: I32(135)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuHelp;

/// @brief Field SystemMenuLeft value: I32(139)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuLeft;

/// @brief Field SystemMenuRight value: I32(138)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuRight;

/// @brief Field SystemMenuSelect value: I32(137)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuSelect;

/// @brief Field SystemMenuUp value: I32(140)
static ::GlobalNamespace::HID_GenericDesktop const SystemMenuUp;

/// @brief Field SystemPowerDown value: I32(129)
static ::GlobalNamespace::HID_GenericDesktop const SystemPowerDown;

/// @brief Field SystemSetup value: I32(162)
static ::GlobalNamespace::HID_GenericDesktop const SystemSetup;

/// @brief Field SystemSleep value: I32(130)
static ::GlobalNamespace::HID_GenericDesktop const SystemSleep;

/// @brief Field SystemSpeakerMute value: I32(167)
static ::GlobalNamespace::HID_GenericDesktop const SystemSpeakerMute;

/// @brief Field SystemUndock value: I32(161)
static ::GlobalNamespace::HID_GenericDesktop const SystemUndock;

/// @brief Field SystemWakeUp value: I32(131)
static ::GlobalNamespace::HID_GenericDesktop const SystemWakeUp;

/// @brief Field SystemWarmRestart value: I32(143)
static ::GlobalNamespace::HID_GenericDesktop const SystemWarmRestart;

/// @brief Field TabletPCControls value: I32(9)
static ::GlobalNamespace::HID_GenericDesktop const TabletPCControls;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::HID_GenericDesktop const Undefined;

/// @brief Field Vbrx value: I32(67)
static ::GlobalNamespace::HID_GenericDesktop const Vbrx;

/// @brief Field Vbry value: I32(68)
static ::GlobalNamespace::HID_GenericDesktop const Vbry;

/// @brief Field Vbrz value: I32(69)
static ::GlobalNamespace::HID_GenericDesktop const Vbrz;

/// @brief Field Vno value: I32(70)
static ::GlobalNamespace::HID_GenericDesktop const Vno;

/// @brief Field Vx value: I32(64)
static ::GlobalNamespace::HID_GenericDesktop const Vx;

/// @brief Field Vy value: I32(65)
static ::GlobalNamespace::HID_GenericDesktop const Vy;

/// @brief Field Vz value: I32(66)
static ::GlobalNamespace::HID_GenericDesktop const Vz;

/// @brief Field Wheel value: I32(56)
static ::GlobalNamespace::HID_GenericDesktop const Wheel;

/// @brief Field X value: I32(48)
static ::GlobalNamespace::HID_GenericDesktop const X;

/// @brief Field Y value: I32(49)
static ::GlobalNamespace::HID_GenericDesktop const Y;

/// @brief Field Z value: I32(50)
static ::GlobalNamespace::HID_GenericDesktop const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13623};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_GenericDesktop, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_GenericDesktop) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
