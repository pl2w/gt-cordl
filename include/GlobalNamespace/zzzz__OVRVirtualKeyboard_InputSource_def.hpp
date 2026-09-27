#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_InputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard_InputSource)
// Forward declare root types
namespace GlobalNamespace {
struct OVRVirtualKeyboard_InputSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_InputSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboard_InputSource, "", "OVRVirtualKeyboard/InputSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InputSource
struct CORDL_TYPE OVRVirtualKeyboard_InputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRVirtualKeyboard_InputSource_Unwrapped
enum struct __OVRVirtualKeyboard_InputSource_Unwrapped : int32_t {
__E_ControllerLeft = static_cast<int32_t>(0x0),
__E_ControllerRight = static_cast<int32_t>(0x1),
__E_HandLeft = static_cast<int32_t>(0x2),
__E_HandRight = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRVirtualKeyboard_InputSource_Unwrapped () const noexcept {
return static_cast<__OVRVirtualKeyboard_InputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRVirtualKeyboard_InputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRVirtualKeyboard_InputSource(int32_t  value__) noexcept;

/// @brief Field ControllerLeft value: I32(0)
static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerLeft;

/// @brief Field ControllerRight value: I32(1)
static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerRight;

/// @brief Field HandLeft value: I32(2)
static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandLeft;

/// @brief Field HandRight value: I32(3)
static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InputSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboard_InputSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
