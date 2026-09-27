#pragma once
// IWYU pragma private; include "PlayFab/Internal/HttpRequestState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequestState)
// Forward declare root types
namespace PlayFab::Internal {
struct HttpRequestState;
}
// Write type traits
MARK_VAL_T(::PlayFab::Internal::HttpRequestState);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::HttpRequestState, "PlayFab.Internal", "HttpRequestState");
// Dependencies 
namespace PlayFab::Internal {
// Is value type: true
// CS Name: PlayFab.Internal.HttpRequestState
struct CORDL_TYPE HttpRequestState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpRequestState_Unwrapped
enum struct __HttpRequestState_Unwrapped : int32_t {
__E_Sent = static_cast<int32_t>(0x0),
__E_Received = static_cast<int32_t>(0x1),
__E_Idle = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpRequestState_Unwrapped () const noexcept {
return static_cast<__HttpRequestState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpRequestState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpRequestState(int32_t  value__) noexcept;

/// @brief Field Error value: I32(3)
static ::PlayFab::Internal::HttpRequestState const Error;

/// @brief Field Idle value: I32(2)
static ::PlayFab::Internal::HttpRequestState const Idle;

/// @brief Field Received value: I32(1)
static ::PlayFab::Internal::HttpRequestState const Received;

/// @brief Field Sent value: I32(0)
static ::PlayFab::Internal::HttpRequestState const Sent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::HttpRequestState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::HttpRequestState) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::Internal
