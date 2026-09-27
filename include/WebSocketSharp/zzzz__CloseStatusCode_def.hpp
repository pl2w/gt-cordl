#pragma once
// IWYU pragma private; include "WebSocketSharp/CloseStatusCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloseStatusCode)
// Forward declare root types
namespace WebSocketSharp {
struct CloseStatusCode;
}
// Write type traits
MARK_VAL_T(::WebSocketSharp::CloseStatusCode);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::CloseStatusCode, "WebSocketSharp", "CloseStatusCode");
// Dependencies 
namespace WebSocketSharp {
// Is value type: true
// CS Name: WebSocketSharp.CloseStatusCode
struct CORDL_TYPE CloseStatusCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __CloseStatusCode_Unwrapped
enum struct __CloseStatusCode_Unwrapped : uint16_t {
__E_Normal = static_cast<uint16_t>(0x3e8u),
__E_Away = static_cast<uint16_t>(0x3e9u),
__E_ProtocolError = static_cast<uint16_t>(0x3eau),
__E_UnsupportedData = static_cast<uint16_t>(0x3ebu),
__E_Undefined = static_cast<uint16_t>(0x3ecu),
__E_NoStatus = static_cast<uint16_t>(0x3edu),
__E_Abnormal = static_cast<uint16_t>(0x3eeu),
__E_InvalidData = static_cast<uint16_t>(0x3efu),
__E_PolicyViolation = static_cast<uint16_t>(0x3f0u),
__E_TooBig = static_cast<uint16_t>(0x3f1u),
__E_MandatoryExtension = static_cast<uint16_t>(0x3f2u),
__E_ServerError = static_cast<uint16_t>(0x3f3u),
__E_TlsHandshakeFailure = static_cast<uint16_t>(0x3f7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CloseStatusCode_Unwrapped () const noexcept {
return static_cast<__CloseStatusCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CloseStatusCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr CloseStatusCode(uint16_t  value__) noexcept;

/// @brief Field Abnormal value: U16(1006)
static ::WebSocketSharp::CloseStatusCode const Abnormal;

/// @brief Field Away value: U16(1001)
static ::WebSocketSharp::CloseStatusCode const Away;

/// @brief Field InvalidData value: U16(1007)
static ::WebSocketSharp::CloseStatusCode const InvalidData;

/// @brief Field MandatoryExtension value: U16(1010)
static ::WebSocketSharp::CloseStatusCode const MandatoryExtension;

/// @brief Field NoStatus value: U16(1005)
static ::WebSocketSharp::CloseStatusCode const NoStatus;

/// @brief Field Normal value: U16(1000)
static ::WebSocketSharp::CloseStatusCode const Normal;

/// @brief Field PolicyViolation value: U16(1008)
static ::WebSocketSharp::CloseStatusCode const PolicyViolation;

/// @brief Field ProtocolError value: U16(1002)
static ::WebSocketSharp::CloseStatusCode const ProtocolError;

/// @brief Field ServerError value: U16(1011)
static ::WebSocketSharp::CloseStatusCode const ServerError;

/// @brief Field TlsHandshakeFailure value: U16(1015)
static ::WebSocketSharp::CloseStatusCode const TlsHandshakeFailure;

/// @brief Field TooBig value: U16(1009)
static ::WebSocketSharp::CloseStatusCode const TooBig;

/// @brief Field Undefined value: U16(1004)
static ::WebSocketSharp::CloseStatusCode const Undefined;

/// @brief Field UnsupportedData value: U16(1003)
static ::WebSocketSharp::CloseStatusCode const UnsupportedData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::CloseStatusCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::CloseStatusCode) == 0x2, "Size mismatch!");

} // namespace end def WebSocketSharp
