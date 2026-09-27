#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Button.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_Button)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_Button;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Button);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_Button, "", "OVRInput/Button");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Button
struct CORDL_TYPE OVRInput_Button {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_Button_Unwrapped
enum struct __OVRInput_Button_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_One = static_cast<int32_t>(0x1),
__E_Two = static_cast<int32_t>(0x2),
__E_Three = static_cast<int32_t>(0x4),
__E_Four = static_cast<int32_t>(0x8),
__E_Start = static_cast<int32_t>(0x100),
__E_Back = static_cast<int32_t>(0x200),
__E_PrimaryShoulder = static_cast<int32_t>(0x1000),
__E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
__E_PrimaryHandTrigger = static_cast<int32_t>(0x4000),
__E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
__E_PrimaryThumbstickUp = static_cast<int32_t>(0x10000),
__E_PrimaryThumbstickDown = static_cast<int32_t>(0x20000),
__E_PrimaryThumbstickLeft = static_cast<int32_t>(0x40000),
__E_PrimaryThumbstickRight = static_cast<int32_t>(0x80000),
__E_PrimaryTouchpad = static_cast<int32_t>(0x400),
__E_SecondaryShoulder = static_cast<int32_t>(0x100000),
__E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
__E_SecondaryHandTrigger = static_cast<int32_t>(0x400000),
__E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
__E_SecondaryThumbstickUp = static_cast<int32_t>(0x1000000),
__E_SecondaryThumbstickDown = static_cast<int32_t>(0x2000000),
__E_SecondaryThumbstickLeft = static_cast<int32_t>(0x4000000),
__E_SecondaryThumbstickRight = static_cast<int32_t>(0x8000000),
__E_SecondaryTouchpad = static_cast<int32_t>(0x800),
__E_DpadUp = static_cast<int32_t>(0x10),
__E_DpadDown = static_cast<int32_t>(0x20),
__E_DpadLeft = static_cast<int32_t>(0x40),
__E_DpadRight = static_cast<int32_t>(0x80),
__E_Up = static_cast<int32_t>(0x10000000),
__E_Down = static_cast<int32_t>(0x20000000),
__E_Left = static_cast<int32_t>(0x40000000),
__E_Right = static_cast<int32_t>(0x80000000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_Button_Unwrapped () const noexcept {
return static_cast<__OVRInput_Button_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_Button() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_Button(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_Button const Any;

/// @brief Field Back value: I32(512)
static ::GlobalNamespace::OVRInput_Button const Back;

/// @brief Field Down value: I32(536870912)
static ::GlobalNamespace::OVRInput_Button const Down;

/// @brief Field DpadDown value: I32(32)
static ::GlobalNamespace::OVRInput_Button const DpadDown;

/// @brief Field DpadLeft value: I32(64)
static ::GlobalNamespace::OVRInput_Button const DpadLeft;

/// @brief Field DpadRight value: I32(128)
static ::GlobalNamespace::OVRInput_Button const DpadRight;

/// @brief Field DpadUp value: I32(16)
static ::GlobalNamespace::OVRInput_Button const DpadUp;

/// @brief Field Four value: I32(8)
static ::GlobalNamespace::OVRInput_Button const Four;

/// @brief Field Left value: I32(1073741824)
static ::GlobalNamespace::OVRInput_Button const Left;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_Button const None;

/// @brief Field One value: I32(1)
static ::GlobalNamespace::OVRInput_Button const One;

/// @brief Field PrimaryHandTrigger value: I32(16384)
static ::GlobalNamespace::OVRInput_Button const PrimaryHandTrigger;

/// @brief Field PrimaryIndexTrigger value: I32(8192)
static ::GlobalNamespace::OVRInput_Button const PrimaryIndexTrigger;

/// @brief Field PrimaryShoulder value: I32(4096)
static ::GlobalNamespace::OVRInput_Button const PrimaryShoulder;

/// @brief Field PrimaryThumbstick value: I32(32768)
static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstick;

/// @brief Field PrimaryThumbstickDown value: I32(131072)
static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickDown;

/// @brief Field PrimaryThumbstickLeft value: I32(262144)
static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickLeft;

/// @brief Field PrimaryThumbstickRight value: I32(524288)
static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickRight;

/// @brief Field PrimaryThumbstickUp value: I32(65536)
static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickUp;

/// @brief Field PrimaryTouchpad value: I32(1024)
static ::GlobalNamespace::OVRInput_Button const PrimaryTouchpad;

/// @brief Field Right value: I32(-2147483648)
static ::GlobalNamespace::OVRInput_Button const Right;

/// @brief Field SecondaryHandTrigger value: I32(4194304)
static ::GlobalNamespace::OVRInput_Button const SecondaryHandTrigger;

/// @brief Field SecondaryIndexTrigger value: I32(2097152)
static ::GlobalNamespace::OVRInput_Button const SecondaryIndexTrigger;

/// @brief Field SecondaryShoulder value: I32(1048576)
static ::GlobalNamespace::OVRInput_Button const SecondaryShoulder;

/// @brief Field SecondaryThumbstick value: I32(8388608)
static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstick;

/// @brief Field SecondaryThumbstickDown value: I32(33554432)
static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickDown;

/// @brief Field SecondaryThumbstickLeft value: I32(67108864)
static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickLeft;

/// @brief Field SecondaryThumbstickRight value: I32(134217728)
static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickRight;

/// @brief Field SecondaryThumbstickUp value: I32(16777216)
static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickUp;

/// @brief Field SecondaryTouchpad value: I32(2048)
static ::GlobalNamespace::OVRInput_Button const SecondaryTouchpad;

/// @brief Field Start value: I32(256)
static ::GlobalNamespace::OVRInput_Button const Start;

/// @brief Field Three value: I32(4)
static ::GlobalNamespace::OVRInput_Button const Three;

/// @brief Field Two value: I32(2)
static ::GlobalNamespace::OVRInput_Button const Two;

/// @brief Field Up value: I32(268435456)
static ::GlobalNamespace::OVRInput_Button const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11930};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Button, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_Button) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
