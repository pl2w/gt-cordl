#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_RawButton)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_RawButton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_RawButton);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_RawButton, "", "OVRInput/RawButton");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawButton
struct CORDL_TYPE OVRInput_RawButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_RawButton_Unwrapped
enum struct __OVRInput_RawButton_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_X = static_cast<int32_t>(0x100),
__E_Y = static_cast<int32_t>(0x200),
__E_Start = static_cast<int32_t>(0x100000),
__E_Back = static_cast<int32_t>(0x200000),
__E_LShoulder = static_cast<int32_t>(0x800),
__E_LIndexTrigger = static_cast<int32_t>(0x10000000),
__E_LHandTrigger = static_cast<int32_t>(0x20000000),
__E_LThumbstick = static_cast<int32_t>(0x400),
__E_LThumbstickUp = static_cast<int32_t>(0x10),
__E_LThumbstickDown = static_cast<int32_t>(0x20),
__E_LThumbstickLeft = static_cast<int32_t>(0x40),
__E_LThumbstickRight = static_cast<int32_t>(0x80),
__E_LTouchpad = static_cast<int32_t>(0x40000000),
__E_RShoulder = static_cast<int32_t>(0x8),
__E_RIndexTrigger = static_cast<int32_t>(0x4000000),
__E_RHandTrigger = static_cast<int32_t>(0x8000000),
__E_RThumbstick = static_cast<int32_t>(0x4),
__E_RThumbstickUp = static_cast<int32_t>(0x1000),
__E_RThumbstickDown = static_cast<int32_t>(0x2000),
__E_RThumbstickLeft = static_cast<int32_t>(0x4000),
__E_RThumbstickRight = static_cast<int32_t>(0x8000),
__E_RTouchpad = static_cast<int32_t>(0x80000000),
__E_DpadUp = static_cast<int32_t>(0x10000),
__E_DpadDown = static_cast<int32_t>(0x20000),
__E_DpadLeft = static_cast<int32_t>(0x40000),
__E_DpadRight = static_cast<int32_t>(0x80000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_RawButton_Unwrapped () const noexcept {
return static_cast<__OVRInput_RawButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_RawButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_RawButton(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::GlobalNamespace::OVRInput_RawButton const A;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_RawButton const Any;

/// @brief Field B value: I32(2)
static ::GlobalNamespace::OVRInput_RawButton const B;

/// @brief Field Back value: I32(2097152)
static ::GlobalNamespace::OVRInput_RawButton const Back;

/// @brief Field DpadDown value: I32(131072)
static ::GlobalNamespace::OVRInput_RawButton const DpadDown;

/// @brief Field DpadLeft value: I32(262144)
static ::GlobalNamespace::OVRInput_RawButton const DpadLeft;

/// @brief Field DpadRight value: I32(524288)
static ::GlobalNamespace::OVRInput_RawButton const DpadRight;

/// @brief Field DpadUp value: I32(65536)
static ::GlobalNamespace::OVRInput_RawButton const DpadUp;

/// @brief Field LHandTrigger value: I32(536870912)
static ::GlobalNamespace::OVRInput_RawButton const LHandTrigger;

/// @brief Field LIndexTrigger value: I32(268435456)
static ::GlobalNamespace::OVRInput_RawButton const LIndexTrigger;

/// @brief Field LShoulder value: I32(2048)
static ::GlobalNamespace::OVRInput_RawButton const LShoulder;

/// @brief Field LThumbstick value: I32(1024)
static ::GlobalNamespace::OVRInput_RawButton const LThumbstick;

/// @brief Field LThumbstickDown value: I32(32)
static ::GlobalNamespace::OVRInput_RawButton const LThumbstickDown;

/// @brief Field LThumbstickLeft value: I32(64)
static ::GlobalNamespace::OVRInput_RawButton const LThumbstickLeft;

/// @brief Field LThumbstickRight value: I32(128)
static ::GlobalNamespace::OVRInput_RawButton const LThumbstickRight;

/// @brief Field LThumbstickUp value: I32(16)
static ::GlobalNamespace::OVRInput_RawButton const LThumbstickUp;

/// @brief Field LTouchpad value: I32(1073741824)
static ::GlobalNamespace::OVRInput_RawButton const LTouchpad;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_RawButton const None;

/// @brief Field RHandTrigger value: I32(134217728)
static ::GlobalNamespace::OVRInput_RawButton const RHandTrigger;

/// @brief Field RIndexTrigger value: I32(67108864)
static ::GlobalNamespace::OVRInput_RawButton const RIndexTrigger;

/// @brief Field RShoulder value: I32(8)
static ::GlobalNamespace::OVRInput_RawButton const RShoulder;

/// @brief Field RThumbstick value: I32(4)
static ::GlobalNamespace::OVRInput_RawButton const RThumbstick;

/// @brief Field RThumbstickDown value: I32(8192)
static ::GlobalNamespace::OVRInput_RawButton const RThumbstickDown;

/// @brief Field RThumbstickLeft value: I32(16384)
static ::GlobalNamespace::OVRInput_RawButton const RThumbstickLeft;

/// @brief Field RThumbstickRight value: I32(32768)
static ::GlobalNamespace::OVRInput_RawButton const RThumbstickRight;

/// @brief Field RThumbstickUp value: I32(4096)
static ::GlobalNamespace::OVRInput_RawButton const RThumbstickUp;

/// @brief Field RTouchpad value: I32(-2147483648)
static ::GlobalNamespace::OVRInput_RawButton const RTouchpad;

/// @brief Field Start value: I32(1048576)
static ::GlobalNamespace::OVRInput_RawButton const Start;

/// @brief Field X value: I32(256)
static ::GlobalNamespace::OVRInput_RawButton const X;

/// @brief Field Y value: I32(512)
static ::GlobalNamespace::OVRInput_RawButton const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawButton, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_RawButton) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
