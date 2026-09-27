#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketCloseCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketCloseCode)
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
struct WebSocketCloseCode;
}
// Write type traits
MARK_VAL_T(::Meta::Net::NativeWebSocket::WebSocketCloseCode);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketCloseCode, "Meta.Net.NativeWebSocket", "WebSocketCloseCode");
// Dependencies 
namespace Meta::Net::NativeWebSocket {
// Is value type: true
// CS Name: Meta.Net.NativeWebSocket.WebSocketCloseCode
struct CORDL_TYPE WebSocketCloseCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebSocketCloseCode_Unwrapped
enum struct __WebSocketCloseCode_Unwrapped : int32_t {
__E_NotSet = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x3e8),
__E_Away = static_cast<int32_t>(0x3e9),
__E_ProtocolError = static_cast<int32_t>(0x3ea),
__E_UnsupportedData = static_cast<int32_t>(0x3eb),
__E_Undefined = static_cast<int32_t>(0x3ec),
__E_NoStatus = static_cast<int32_t>(0x3ed),
__E_Abnormal = static_cast<int32_t>(0x3ee),
__E_InvalidData = static_cast<int32_t>(0x3ef),
__E_PolicyViolation = static_cast<int32_t>(0x3f0),
__E_TooBig = static_cast<int32_t>(0x3f1),
__E_MandatoryExtension = static_cast<int32_t>(0x3f2),
__E_ServerError = static_cast<int32_t>(0x3f3),
__E_TlsHandshakeFailure = static_cast<int32_t>(0x3f7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebSocketCloseCode_Unwrapped () const noexcept {
return static_cast<__WebSocketCloseCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketCloseCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketCloseCode(int32_t  value__) noexcept;

/// @brief Field Abnormal value: I32(1006)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const Abnormal;

/// @brief Field Away value: I32(1001)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const Away;

/// @brief Field InvalidData value: I32(1007)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const InvalidData;

/// @brief Field MandatoryExtension value: I32(1010)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const MandatoryExtension;

/// @brief Field NoStatus value: I32(1005)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const NoStatus;

/// @brief Field Normal value: I32(1000)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const Normal;

/// @brief Field NotSet value: I32(0)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const NotSet;

/// @brief Field PolicyViolation value: I32(1008)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const PolicyViolation;

/// @brief Field ProtocolError value: I32(1002)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const ProtocolError;

/// @brief Field ServerError value: I32(1011)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const ServerError;

/// @brief Field TlsHandshakeFailure value: I32(1015)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const TlsHandshakeFailure;

/// @brief Field TooBig value: I32(1009)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const TooBig;

/// @brief Field Undefined value: I32(1004)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const Undefined;

/// @brief Field UnsupportedData value: I32(1003)
static ::Meta::Net::NativeWebSocket::WebSocketCloseCode const UnsupportedData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Net::NativeWebSocket::WebSocketCloseCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketCloseCode) == 0x4, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
