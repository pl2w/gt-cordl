#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketCloseStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketCloseStatus)
// Forward declare root types
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::WebSockets::WebSocketCloseStatus);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketCloseStatus, "System.Net.WebSockets", "WebSocketCloseStatus");
// Dependencies 
namespace System::Net::WebSockets {
// Is value type: true
// CS Name: System.Net.WebSockets.WebSocketCloseStatus
struct CORDL_TYPE WebSocketCloseStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebSocketCloseStatus_Unwrapped
enum struct __WebSocketCloseStatus_Unwrapped : int32_t {
__E_NormalClosure = static_cast<int32_t>(0x3e8),
__E_EndpointUnavailable = static_cast<int32_t>(0x3e9),
__E_ProtocolError = static_cast<int32_t>(0x3ea),
__E_InvalidMessageType = static_cast<int32_t>(0x3eb),
__E_Empty = static_cast<int32_t>(0x3ed),
__E_InvalidPayloadData = static_cast<int32_t>(0x3ef),
__E_PolicyViolation = static_cast<int32_t>(0x3f0),
__E_MessageTooBig = static_cast<int32_t>(0x3f1),
__E_MandatoryExtension = static_cast<int32_t>(0x3f2),
__E_InternalServerError = static_cast<int32_t>(0x3f3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebSocketCloseStatus_Unwrapped () const noexcept {
return static_cast<__WebSocketCloseStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketCloseStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketCloseStatus(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(1005)
static ::System::Net::WebSockets::WebSocketCloseStatus const Empty;

/// @brief Field EndpointUnavailable value: I32(1001)
static ::System::Net::WebSockets::WebSocketCloseStatus const EndpointUnavailable;

/// @brief Field InternalServerError value: I32(1011)
static ::System::Net::WebSockets::WebSocketCloseStatus const InternalServerError;

/// @brief Field InvalidMessageType value: I32(1003)
static ::System::Net::WebSockets::WebSocketCloseStatus const InvalidMessageType;

/// @brief Field InvalidPayloadData value: I32(1007)
static ::System::Net::WebSockets::WebSocketCloseStatus const InvalidPayloadData;

/// @brief Field MandatoryExtension value: I32(1010)
static ::System::Net::WebSockets::WebSocketCloseStatus const MandatoryExtension;

/// @brief Field MessageTooBig value: I32(1009)
static ::System::Net::WebSockets::WebSocketCloseStatus const MessageTooBig;

/// @brief Field NormalClosure value: I32(1000)
static ::System::Net::WebSockets::WebSocketCloseStatus const NormalClosure;

/// @brief Field PolicyViolation value: I32(1008)
static ::System::Net::WebSockets::WebSocketCloseStatus const PolicyViolation;

/// @brief Field ProtocolError value: I32(1002)
static ::System::Net::WebSockets::WebSocketCloseStatus const ProtocolError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketCloseStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketCloseStatus) == 0x4, "Size mismatch!");

} // namespace end def System::Net::WebSockets
