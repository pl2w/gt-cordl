#pragma once
// IWYU pragma private; include "System/Net/HttpConnection_InputState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpConnection_InputState)
// Forward declare root types
namespace GlobalNamespace {
struct HttpConnection_InputState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpConnection_InputState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpConnection_InputState, "System.Net", "HttpConnection/InputState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpConnection/InputState
struct CORDL_TYPE HttpConnection_InputState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpConnection_InputState_Unwrapped
enum struct __HttpConnection_InputState_Unwrapped : int32_t {
__E_RequestLine = static_cast<int32_t>(0x0),
__E_Headers = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpConnection_InputState_Unwrapped () const noexcept {
return static_cast<__HttpConnection_InputState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpConnection_InputState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpConnection_InputState(int32_t  value__) noexcept;

/// @brief Field Headers value: I32(1)
static ::GlobalNamespace::HttpConnection_InputState const Headers;

/// @brief Field RequestLine value: I32(0)
static ::GlobalNamespace::HttpConnection_InputState const RequestLine;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10676};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpConnection_InputState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpConnection_InputState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
