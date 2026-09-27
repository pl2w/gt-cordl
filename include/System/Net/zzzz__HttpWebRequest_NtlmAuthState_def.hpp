#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest_NtlmAuthState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest_NtlmAuthState)
// Forward declare root types
namespace GlobalNamespace {
struct HttpWebRequest_NtlmAuthState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpWebRequest_NtlmAuthState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpWebRequest_NtlmAuthState, "System.Net", "HttpWebRequest/NtlmAuthState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/NtlmAuthState
struct CORDL_TYPE HttpWebRequest_NtlmAuthState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpWebRequest_NtlmAuthState_Unwrapped
enum struct __HttpWebRequest_NtlmAuthState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Challenge = static_cast<int32_t>(0x1),
__E_Response = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpWebRequest_NtlmAuthState_Unwrapped () const noexcept {
return static_cast<__HttpWebRequest_NtlmAuthState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest_NtlmAuthState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest_NtlmAuthState(int32_t  value__) noexcept;

/// @brief Field Challenge value: I32(1)
static ::GlobalNamespace::HttpWebRequest_NtlmAuthState const Challenge;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HttpWebRequest_NtlmAuthState const None;

/// @brief Field Response value: I32(2)
static ::GlobalNamespace::HttpWebRequest_NtlmAuthState const Response;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10691};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpWebRequest_NtlmAuthState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpWebRequest_NtlmAuthState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
