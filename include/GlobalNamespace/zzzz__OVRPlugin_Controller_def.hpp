#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Controller)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Controller;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Controller);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Controller, "", "OVRPlugin/Controller");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Controller
struct CORDL_TYPE OVRPlugin_Controller {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Controller_Unwrapped
enum struct __OVRPlugin_Controller_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LTouch = static_cast<int32_t>(0x1),
__E_RTouch = static_cast<int32_t>(0x2),
__E_Touch = static_cast<int32_t>(0x3),
__E_Remote = static_cast<int32_t>(0x4),
__E_Gamepad = static_cast<int32_t>(0x10),
__E_LHand = static_cast<int32_t>(0x20),
__E_RHand = static_cast<int32_t>(0x40),
__E_Hands = static_cast<int32_t>(0x60),
__E_Active = static_cast<int32_t>(0x80000000),
__E_All = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Controller_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Controller_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Controller() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Controller(int32_t  value__) noexcept;

/// @brief Field Active value: I32(-2147483648)
static ::GlobalNamespace::OVRPlugin_Controller const Active;

/// @brief Field All value: I32(-1)
static ::GlobalNamespace::OVRPlugin_Controller const All;

/// @brief Field Gamepad value: I32(16)
static ::GlobalNamespace::OVRPlugin_Controller const Gamepad;

/// @brief Field Hands value: I32(96)
static ::GlobalNamespace::OVRPlugin_Controller const Hands;

/// @brief Field LHand value: I32(32)
static ::GlobalNamespace::OVRPlugin_Controller const LHand;

/// @brief Field LTouch value: I32(1)
static ::GlobalNamespace::OVRPlugin_Controller const LTouch;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_Controller const None;

/// @brief Field RHand value: I32(64)
static ::GlobalNamespace::OVRPlugin_Controller const RHand;

/// @brief Field RTouch value: I32(2)
static ::GlobalNamespace::OVRPlugin_Controller const RTouch;

/// @brief Field Remote value: I32(4)
static ::GlobalNamespace::OVRPlugin_Controller const Remote;

/// @brief Field Touch value: I32(3)
static ::GlobalNamespace::OVRPlugin_Controller const Touch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Controller, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Controller) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
