#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_ControllerInHandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_ControllerInHandState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_ControllerInHandState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_ControllerInHandState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_ControllerInHandState, "", "OVRInput/ControllerInHandState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/ControllerInHandState
struct CORDL_TYPE OVRInput_ControllerInHandState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_ControllerInHandState_Unwrapped
enum struct __OVRInput_ControllerInHandState_Unwrapped : int32_t {
__E_NoHand = static_cast<int32_t>(0x0),
__E_ControllerInHand = static_cast<int32_t>(0x1),
__E_ControllerNotInHand = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_ControllerInHandState_Unwrapped () const noexcept {
return static_cast<__OVRInput_ControllerInHandState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_ControllerInHandState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_ControllerInHandState(int32_t  value__) noexcept;

/// @brief Field ControllerInHand value: I32(1)
static ::GlobalNamespace::OVRInput_ControllerInHandState const ControllerInHand;

/// @brief Field ControllerNotInHand value: I32(2)
static ::GlobalNamespace::OVRInput_ControllerInHandState const ControllerNotInHand;

/// @brief Field NoHand value: I32(0)
static ::GlobalNamespace::OVRInput_ControllerInHandState const NoHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_ControllerInHandState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_ControllerInHandState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
