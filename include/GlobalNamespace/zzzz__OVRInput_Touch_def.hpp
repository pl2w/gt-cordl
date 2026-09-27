#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Touch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_Touch)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_Touch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Touch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_Touch, "", "OVRInput/Touch");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Touch
struct CORDL_TYPE OVRInput_Touch {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_Touch_Unwrapped
enum struct __OVRInput_Touch_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_One = static_cast<int32_t>(0x1),
__E_Two = static_cast<int32_t>(0x2),
__E_Three = static_cast<int32_t>(0x4),
__E_Four = static_cast<int32_t>(0x8),
__E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
__E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
__E_PrimaryThumbRest = static_cast<int32_t>(0x1000),
__E_PrimaryTouchpad = static_cast<int32_t>(0x400),
__E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
__E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
__E_SecondaryThumbRest = static_cast<int32_t>(0x100000),
__E_SecondaryTouchpad = static_cast<int32_t>(0x800),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_Touch_Unwrapped () const noexcept {
return static_cast<__OVRInput_Touch_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_Touch() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_Touch(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_Touch const Any;

/// @brief Field Four value: I32(8)
static ::GlobalNamespace::OVRInput_Touch const Four;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_Touch const None;

/// @brief Field One value: I32(1)
static ::GlobalNamespace::OVRInput_Touch const One;

/// @brief Field PrimaryIndexTrigger value: I32(8192)
static ::GlobalNamespace::OVRInput_Touch const PrimaryIndexTrigger;

/// @brief Field PrimaryThumbRest value: I32(4096)
static ::GlobalNamespace::OVRInput_Touch const PrimaryThumbRest;

/// @brief Field PrimaryThumbstick value: I32(32768)
static ::GlobalNamespace::OVRInput_Touch const PrimaryThumbstick;

/// @brief Field PrimaryTouchpad value: I32(1024)
static ::GlobalNamespace::OVRInput_Touch const PrimaryTouchpad;

/// @brief Field SecondaryIndexTrigger value: I32(2097152)
static ::GlobalNamespace::OVRInput_Touch const SecondaryIndexTrigger;

/// @brief Field SecondaryThumbRest value: I32(1048576)
static ::GlobalNamespace::OVRInput_Touch const SecondaryThumbRest;

/// @brief Field SecondaryThumbstick value: I32(8388608)
static ::GlobalNamespace::OVRInput_Touch const SecondaryThumbstick;

/// @brief Field SecondaryTouchpad value: I32(2048)
static ::GlobalNamespace::OVRInput_Touch const SecondaryTouchpad;

/// @brief Field Three value: I32(4)
static ::GlobalNamespace::OVRInput_Touch const Three;

/// @brief Field Two value: I32(2)
static ::GlobalNamespace::OVRInput_Touch const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11932};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Touch, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_Touch) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
