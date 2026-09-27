#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDElementFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_HIDElementFlags)
// Forward declare root types
namespace GlobalNamespace {
struct HID_HIDElementFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_HIDElementFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_HIDElementFlags, "UnityEngine.InputSystem.HID", "HID/HIDElementFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDElementFlags
struct CORDL_TYPE HID_HIDElementFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_HIDElementFlags_Unwrapped
enum struct __HID_HIDElementFlags_Unwrapped : int32_t {
__E_Constant = static_cast<int32_t>(0x1),
__E_Variable = static_cast<int32_t>(0x2),
__E_Relative = static_cast<int32_t>(0x4),
__E_Wrap = static_cast<int32_t>(0x8),
__E_NonLinear = static_cast<int32_t>(0x10),
__E_NoPreferred = static_cast<int32_t>(0x20),
__E_NullState = static_cast<int32_t>(0x40),
__E_Volatile = static_cast<int32_t>(0x80),
__E_BufferedBytes = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_HIDElementFlags_Unwrapped () const noexcept {
return static_cast<__HID_HIDElementFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDElementFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_HIDElementFlags(int32_t  value__) noexcept;

/// @brief Field BufferedBytes value: I32(256)
static ::GlobalNamespace::HID_HIDElementFlags const BufferedBytes;

/// @brief Field Constant value: I32(1)
static ::GlobalNamespace::HID_HIDElementFlags const Constant;

/// @brief Field NoPreferred value: I32(32)
static ::GlobalNamespace::HID_HIDElementFlags const NoPreferred;

/// @brief Field NonLinear value: I32(16)
static ::GlobalNamespace::HID_HIDElementFlags const NonLinear;

/// @brief Field NullState value: I32(64)
static ::GlobalNamespace::HID_HIDElementFlags const NullState;

/// @brief Field Relative value: I32(4)
static ::GlobalNamespace::HID_HIDElementFlags const Relative;

/// @brief Field Variable value: I32(2)
static ::GlobalNamespace::HID_HIDElementFlags const Variable;

/// @brief Field Volatile value: I32(128)
static ::GlobalNamespace::HID_HIDElementFlags const Volatile;

/// @brief Field Wrap value: I32(8)
static ::GlobalNamespace::HID_HIDElementFlags const Wrap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_HIDElementFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_HIDElementFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
