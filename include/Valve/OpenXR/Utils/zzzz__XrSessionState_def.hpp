#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/XrSessionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSessionState)
// Forward declare root types
namespace Valve::OpenXR::Utils {
struct XrSessionState;
}
// Write type traits
MARK_VAL_T(::Valve::OpenXR::Utils::XrSessionState);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::XrSessionState, "Valve.OpenXR.Utils", "XrSessionState");
// Dependencies 
namespace Valve::OpenXR::Utils {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.XrSessionState
struct CORDL_TYPE XrSessionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XrSessionState_Unwrapped
enum struct __XrSessionState_Unwrapped : int32_t {
__E_XR_SESSION_STATE_UNKNOWN = static_cast<int32_t>(0x0),
__E_XR_SESSION_STATE_IDLE = static_cast<int32_t>(0x1),
__E_XR_SESSION_STATE_READY = static_cast<int32_t>(0x2),
__E_XR_SESSION_STATE_SYNCHRONIZED = static_cast<int32_t>(0x3),
__E_XR_SESSION_STATE_VISIBLE = static_cast<int32_t>(0x4),
__E_XR_SESSION_STATE_FOCUSED = static_cast<int32_t>(0x5),
__E_XR_SESSION_STATE_STOPPING = static_cast<int32_t>(0x6),
__E_XR_SESSION_STATE_LOSS_PENDING = static_cast<int32_t>(0x7),
__E_XR_SESSION_STATE_EXITING = static_cast<int32_t>(0x8),
__E_XR_SESSION_STATE_MAX_ENUM = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrSessionState_Unwrapped () const noexcept {
return static_cast<__XrSessionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XrSessionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XrSessionState(int32_t  value__) noexcept;

/// @brief Field XR_SESSION_STATE_EXITING value: I32(8)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_EXITING;

/// @brief Field XR_SESSION_STATE_FOCUSED value: I32(5)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_FOCUSED;

/// @brief Field XR_SESSION_STATE_IDLE value: I32(1)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_IDLE;

/// @brief Field XR_SESSION_STATE_LOSS_PENDING value: I32(7)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_LOSS_PENDING;

/// @brief Field XR_SESSION_STATE_MAX_ENUM value: I32(2147483647)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_MAX_ENUM;

/// @brief Field XR_SESSION_STATE_READY value: I32(2)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_READY;

/// @brief Field XR_SESSION_STATE_STOPPING value: I32(6)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_STOPPING;

/// @brief Field XR_SESSION_STATE_SYNCHRONIZED value: I32(3)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_SYNCHRONIZED;

/// @brief Field XR_SESSION_STATE_UNKNOWN value: I32(0)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_UNKNOWN;

/// @brief Field XR_SESSION_STATE_VISIBLE value: I32(4)
static ::Valve::OpenXR::Utils::XrSessionState const XR_SESSION_STATE_VISIBLE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31836};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::XrSessionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::XrSessionState) == 0x4, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
