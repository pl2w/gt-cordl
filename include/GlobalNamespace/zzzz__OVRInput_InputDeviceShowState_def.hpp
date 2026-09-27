#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_InputDeviceShowState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_InputDeviceShowState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_InputDeviceShowState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_InputDeviceShowState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_InputDeviceShowState, "", "OVRInput/InputDeviceShowState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/InputDeviceShowState
struct CORDL_TYPE OVRInput_InputDeviceShowState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_InputDeviceShowState_Unwrapped
enum struct __OVRInput_InputDeviceShowState_Unwrapped : int32_t {
__E_Always = static_cast<int32_t>(0x0),
__E_ControllerInHandOrNoHand = static_cast<int32_t>(0x1),
__E_ControllerInHand = static_cast<int32_t>(0x2),
__E_ControllerNotInHand = static_cast<int32_t>(0x3),
__E_NoHand = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_InputDeviceShowState_Unwrapped () const noexcept {
return static_cast<__OVRInput_InputDeviceShowState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_InputDeviceShowState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_InputDeviceShowState(int32_t  value__) noexcept;

/// @brief Field Always value: I32(0)
static ::GlobalNamespace::OVRInput_InputDeviceShowState const Always;

/// @brief Field ControllerInHand value: I32(2)
static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerInHand;

/// @brief Field ControllerInHandOrNoHand value: I32(1)
static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerInHandOrNoHand;

/// @brief Field ControllerNotInHand value: I32(3)
static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerNotInHand;

/// @brief Field NoHand value: I32(4)
static ::GlobalNamespace::OVRInput_InputDeviceShowState const NoHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_InputDeviceShowState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_InputDeviceShowState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
