#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_KeyboardPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard_KeyboardPosition)
// Forward declare root types
namespace GlobalNamespace {
struct OVRVirtualKeyboard_KeyboardPosition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, "", "OVRVirtualKeyboard/KeyboardPosition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/KeyboardPosition
struct CORDL_TYPE OVRVirtualKeyboard_KeyboardPosition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped
enum struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped : int32_t {
__E_Far = static_cast<int32_t>(0x0),
__E_Near = static_cast<int32_t>(0x1),
__E_Direct = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRVirtualKeyboard_KeyboardPosition_Unwrapped () const noexcept {
return static_cast<__OVRVirtualKeyboard_KeyboardPosition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRVirtualKeyboard_KeyboardPosition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRVirtualKeyboard_KeyboardPosition(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(2)
static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Custom;

/// @brief Field Direct value: I32(1)
static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Direct;

/// @brief Field Far value: I32(0)
static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Far;

/// @brief Field Near value: I32(1)
static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Near;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
