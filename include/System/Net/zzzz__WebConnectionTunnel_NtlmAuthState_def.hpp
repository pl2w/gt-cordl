#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel_NtlmAuthState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionTunnel_NtlmAuthState)
// Forward declare root types
namespace GlobalNamespace {
struct WebConnectionTunnel_NtlmAuthState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState, "System.Net", "WebConnectionTunnel/NtlmAuthState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebConnectionTunnel/NtlmAuthState
struct CORDL_TYPE WebConnectionTunnel_NtlmAuthState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebConnectionTunnel_NtlmAuthState_Unwrapped
enum struct __WebConnectionTunnel_NtlmAuthState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Challenge = static_cast<int32_t>(0x1),
__E_Response = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebConnectionTunnel_NtlmAuthState_Unwrapped () const noexcept {
return static_cast<__WebConnectionTunnel_NtlmAuthState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebConnectionTunnel_NtlmAuthState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebConnectionTunnel_NtlmAuthState(int32_t  value__) noexcept;

/// @brief Field Challenge value: I32(1)
static ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState const Challenge;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState const None;

/// @brief Field Response value: I32(2)
static ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState const Response;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
