#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardInputSource)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource, "", "OVRPlugin/VirtualKeyboardInputSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardInputSource
struct CORDL_TYPE OVRPlugin_VirtualKeyboardInputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_VirtualKeyboardInputSource_Unwrapped
enum struct __OVRPlugin_VirtualKeyboardInputSource_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_ControllerRayLeft = static_cast<int32_t>(0x1),
__E_ControllerRayRight = static_cast<int32_t>(0x2),
__E_HandRayLeft = static_cast<int32_t>(0x3),
__E_HandRayRight = static_cast<int32_t>(0x4),
__E_ControllerDirectLeft = static_cast<int32_t>(0x5),
__E_ControllerDirectRight = static_cast<int32_t>(0x6),
__E_HandDirectIndexTipLeft = static_cast<int32_t>(0x7),
__E_HandDirectIndexTipRight = static_cast<int32_t>(0x8),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_VirtualKeyboardInputSource_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_VirtualKeyboardInputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardInputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardInputSource(int32_t  value__) noexcept;

/// @brief Field ControllerDirectLeft value: I32(5)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const ControllerDirectLeft;

/// @brief Field ControllerDirectRight value: I32(6)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const ControllerDirectRight;

/// @brief Field ControllerRayLeft value: I32(1)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const ControllerRayLeft;

/// @brief Field ControllerRayRight value: I32(2)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const ControllerRayRight;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const EnumSize;

/// @brief Field HandDirectIndexTipLeft value: I32(7)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const HandDirectIndexTipLeft;

/// @brief Field HandDirectIndexTipRight value: I32(8)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const HandDirectIndexTipRight;

/// @brief Field HandRayLeft value: I32(3)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const HandRayLeft;

/// @brief Field HandRayRight value: I32(4)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const HandRayRight;

/// @brief Field Invalid value: I32(0)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource const Invalid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
