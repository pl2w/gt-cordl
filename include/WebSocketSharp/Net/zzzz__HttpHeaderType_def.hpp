#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpHeaderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaderType)
// Forward declare root types
namespace WebSocketSharp::Net {
struct HttpHeaderType;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::Net::HttpHeaderType);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::HttpHeaderType, "WebSocketSharp.Net", "HttpHeaderType");
// [Flags]
// Dependencies 
namespace WebSocketSharp::Net {
// Is value type: true
// CS Name: WebSocketSharp.Net.HttpHeaderType
struct CORDL_TYPE HttpHeaderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpHeaderType_Unwrapped
enum struct __HttpHeaderType_Unwrapped : int32_t {
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Request = static_cast<int32_t>(0x1),
__E_Response = static_cast<int32_t>(0x2),
__E_Restricted = static_cast<int32_t>(0x4),
__E_MultiValue = static_cast<int32_t>(0x8),
__E_MultiValueInRequest = static_cast<int32_t>(0x10),
__E_MultiValueInResponse = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpHeaderType_Unwrapped () const noexcept {
return static_cast<__HttpHeaderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpHeaderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpHeaderType(int32_t  value__) noexcept;

/// @brief Field MultiValue value: I32(8)
static ::WebSocketSharp::Net::HttpHeaderType const MultiValue;

/// @brief Field MultiValueInRequest value: I32(16)
static ::WebSocketSharp::Net::HttpHeaderType const MultiValueInRequest;

/// @brief Field MultiValueInResponse value: I32(32)
static ::WebSocketSharp::Net::HttpHeaderType const MultiValueInResponse;

/// @brief Field Request value: I32(1)
static ::WebSocketSharp::Net::HttpHeaderType const Request;

/// @brief Field Response value: I32(2)
static ::WebSocketSharp::Net::HttpHeaderType const Response;

/// @brief Field Restricted value: I32(4)
static ::WebSocketSharp::Net::HttpHeaderType const Restricted;

/// @brief Field Unspecified value: I32(0)
static ::WebSocketSharp::Net::HttpHeaderType const Unspecified;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::HttpHeaderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::HttpHeaderType) == 0x4, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
