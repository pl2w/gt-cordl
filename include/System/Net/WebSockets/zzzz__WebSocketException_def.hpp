#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketException)
namespace System::Net::WebSockets {
struct WebSocketError;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketException;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocketException*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketException*, "System.Net.WebSockets", "WebSocketException");
// Dependencies System.ComponentModel.Win32Exception, System.Net.WebSockets.WebSocketError
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketException
class CORDL_TYPE WebSocketException : public ::System::ComponentModel::Win32Exception {
public:
// Declarations
 __declspec(property(get=get_ErrorCode)) int32_t  ErrorCode;

/// @brief Field _webSocketErrorCode, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__webSocketErrorCode, put=__cordl_internal_set__webSocketErrorCode)) ::System::Net::WebSockets::WebSocketError  _webSocketErrorCode;

/// @brief Method GetErrorMessage, addr 0xacf2814, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW GetErrorMessage(::System::Net::WebSockets::WebSocketError  error) ;

/// @brief Method GetObjectData, addr 0xacf2a04, size 0xb8, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor() ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::System::Net::WebSockets::WebSocketError  error) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::System::Net::WebSockets::WebSocketError  error, ::System::Exception*  innerException) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::System::Net::WebSockets::WebSocketError  error, ::StringW  message) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::System::Net::WebSockets::WebSocketError  error, ::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::StringW  message) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(int32_t  nativeError) ;

static inline ::System::Net::WebSockets::WebSocketException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method SetErrorCodeOnError, addr 0xacf29ec, size 0x10, virtual false, abstract: false, final false
inline void SetErrorCodeOnError(int32_t  nativeError) ;

/// @brief Method Succeeded, addr 0xacf29e0, size 0xc, virtual false, abstract: false, final false
static inline bool Succeeded(int32_t  hr) ;

constexpr ::System::Net::WebSockets::WebSocketError const& __cordl_internal_get__webSocketErrorCode() const;

constexpr ::System::Net::WebSockets::WebSocketError& __cordl_internal_get__webSocketErrorCode() ;

constexpr void __cordl_internal_set__webSocketErrorCode(::System::Net::WebSockets::WebSocketError  value) ;

/// @brief Method .ctor, addr 0xacf2770, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xace7dd8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebSockets::WebSocketError  error) ;

/// @brief Method .ctor, addr 0xace6bcc, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebSockets::WebSocketError  error, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xacecb30, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebSockets::WebSocketError  error, ::StringW  message) ;

/// @brief Method .ctor, addr 0xacf29b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebSockets::WebSocketError  error, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xacef6c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xacf0990, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xacf27d0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  nativeError) ;

/// @brief Method .ctor, addr 0xacf29fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_ErrorCode, addr 0xacf2abc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ErrorCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketException(WebSocketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketException(WebSocketException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10920};

/// @brief Field _webSocketErrorCode, offset: 0x90, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketError  ____webSocketErrorCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketException, ____webSocketErrorCode) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketException) == 0x98, "Size mismatch!");

} // namespace end def System::Net::WebSockets
