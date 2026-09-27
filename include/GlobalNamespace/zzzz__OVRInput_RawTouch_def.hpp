#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_RawTouch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_RawTouch)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_RawTouch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_RawTouch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_RawTouch, "", "OVRInput/RawTouch");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawTouch
struct CORDL_TYPE OVRInput_RawTouch {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_RawTouch_Unwrapped
enum struct __OVRInput_RawTouch_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_X = static_cast<int32_t>(0x100),
__E_Y = static_cast<int32_t>(0x200),
__E_LIndexTrigger = static_cast<int32_t>(0x1000),
__E_LThumbstick = static_cast<int32_t>(0x400),
__E_LThumbRest = static_cast<int32_t>(0x800),
__E_LTouchpad = static_cast<int32_t>(0x40000000),
__E_RIndexTrigger = static_cast<int32_t>(0x10),
__E_RThumbstick = static_cast<int32_t>(0x4),
__E_RThumbRest = static_cast<int32_t>(0x8),
__E_RTouchpad = static_cast<int32_t>(0x80000000),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_RawTouch_Unwrapped () const noexcept {
return static_cast<__OVRInput_RawTouch_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_RawTouch() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_RawTouch(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::GlobalNamespace::OVRInput_RawTouch const A;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_RawTouch const Any;

/// @brief Field B value: I32(2)
static ::GlobalNamespace::OVRInput_RawTouch const B;

/// @brief Field LIndexTrigger value: I32(4096)
static ::GlobalNamespace::OVRInput_RawTouch const LIndexTrigger;

/// @brief Field LThumbRest value: I32(2048)
static ::GlobalNamespace::OVRInput_RawTouch const LThumbRest;

/// @brief Field LThumbstick value: I32(1024)
static ::GlobalNamespace::OVRInput_RawTouch const LThumbstick;

/// @brief Field LTouchpad value: I32(1073741824)
static ::GlobalNamespace::OVRInput_RawTouch const LTouchpad;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_RawTouch const None;

/// @brief Field RIndexTrigger value: I32(16)
static ::GlobalNamespace::OVRInput_RawTouch const RIndexTrigger;

/// @brief Field RThumbRest value: I32(8)
static ::GlobalNamespace::OVRInput_RawTouch const RThumbRest;

/// @brief Field RThumbstick value: I32(4)
static ::GlobalNamespace::OVRInput_RawTouch const RThumbstick;

/// @brief Field RTouchpad value: I32(-2147483648)
static ::GlobalNamespace::OVRInput_RawTouch const RTouchpad;

/// @brief Field X value: I32(256)
static ::GlobalNamespace::OVRInput_RawTouch const X;

/// @brief Field Y value: I32(512)
static ::GlobalNamespace::OVRInput_RawTouch const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawTouch, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_RawTouch) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
