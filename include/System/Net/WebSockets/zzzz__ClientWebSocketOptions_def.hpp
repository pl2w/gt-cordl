#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocketOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientWebSocketOptions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class CookieContainer;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::ClientWebSocketOptions*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ClientWebSocketOptions*, "System.Net.WebSockets", "ClientWebSocketOptions");
// Dependencies System.ArraySegment`1<T>, System.Nullable`1<T>, System.Object, System.TimeSpan
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ClientWebSocketOptions
class CORDL_TYPE ClientWebSocketOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  Buffer;

 __declspec(property(get=get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(get=get_Cookies)) ::System::Net::CookieContainer*  Cookies;

 __declspec(property(get=get_KeepAliveInterval, put=set_KeepAliveInterval)) ::System::TimeSpan  KeepAliveInterval;

 __declspec(property(put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_ReceiveBufferSize)) int32_t  ReceiveBufferSize;

 __declspec(property(get=get_RequestHeaders)) ::System::Net::WebHeaderCollection*  RequestHeaders;

 __declspec(property(get=get_RequestedSubProtocols)) ::System::Collections::Generic::List_1<::StringW>*  RequestedSubProtocols;

 __declspec(property(get=get_SendBufferSize)) int32_t  SendBufferSize;

 __declspec(property(put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

/// @brief Field _buffer, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  _buffer;

/// @brief Field _clientCertificates, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientCertificates, put=__cordl_internal_set__clientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  _clientCertificates;

/// @brief Field _cookies, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cookies, put=__cordl_internal_set__cookies)) ::System::Net::CookieContainer*  _cookies;

/// @brief Field _isReadOnly, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isReadOnly, put=__cordl_internal_set__isReadOnly)) bool  _isReadOnly;

/// @brief Field _keepAliveInterval, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keepAliveInterval, put=__cordl_internal_set__keepAliveInterval)) ::System::TimeSpan  _keepAliveInterval;

/// @brief Field _proxy, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::System::Net::IWebProxy*  _proxy;

/// @brief Field _receiveBufferSize, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__receiveBufferSize, put=__cordl_internal_set__receiveBufferSize)) int32_t  _receiveBufferSize;

/// @brief Field _requestHeaders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestHeaders, put=__cordl_internal_set__requestHeaders)) ::System::Net::WebHeaderCollection*  _requestHeaders;

/// @brief Field _requestedSubProtocols, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestedSubProtocols, put=__cordl_internal_set__requestedSubProtocols)) ::System::Collections::Generic::List_1<::StringW>*  _requestedSubProtocols;

/// @brief Field _sendBufferSize, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__sendBufferSize, put=__cordl_internal_set__sendBufferSize)) int32_t  _sendBufferSize;

/// @brief Field _useDefaultCredentials, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__useDefaultCredentials, put=__cordl_internal_set__useDefaultCredentials)) bool  _useDefaultCredentials;

/// @brief Method AddSubProtocol, addr 0xacee3d4, size 0x248, virtual false, abstract: false, final false
inline void AddSubProtocol(::StringW  subProtocol) ;

static inline ::System::Net::WebSockets::ClientWebSocketOptions* New_ctor() ;

/// @brief Method SetRequestHeader, addr 0xacee28c, size 0x44, virtual false, abstract: false, final false
inline void SetRequestHeader(::StringW  headerName, ::StringW  headerValue) ;

/// @brief Method SetToReadOnly, addr 0xaced53c, size 0xc, virtual false, abstract: false, final false
inline void SetToReadOnly() ;

/// @brief Method ThrowIfReadOnly, addr 0xacee2d0, size 0x58, virtual false, abstract: false, final false
inline void ThrowIfReadOnly() ;

constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> const& __cordl_internal_get__buffer() const;

constexpr ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>& __cordl_internal_get__buffer() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__clientCertificates() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__clientCertificates() ;

constexpr ::System::Net::CookieContainer* const& __cordl_internal_get__cookies() const;

constexpr ::System::Net::CookieContainer*& __cordl_internal_get__cookies() ;

constexpr bool const& __cordl_internal_get__isReadOnly() const;

constexpr bool& __cordl_internal_get__isReadOnly() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__keepAliveInterval() const;

constexpr ::System::TimeSpan& __cordl_internal_get__keepAliveInterval() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get__proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy() ;

constexpr int32_t const& __cordl_internal_get__receiveBufferSize() const;

constexpr int32_t& __cordl_internal_get__receiveBufferSize() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__requestHeaders() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__requestHeaders() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__requestedSubProtocols() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__requestedSubProtocols() ;

constexpr int32_t const& __cordl_internal_get__sendBufferSize() const;

constexpr int32_t& __cordl_internal_get__sendBufferSize() ;

constexpr bool const& __cordl_internal_get__useDefaultCredentials() const;

constexpr bool& __cordl_internal_get__useDefaultCredentials() ;

constexpr void __cordl_internal_set__buffer(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  value) ;

constexpr void __cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set__cookies(::System::Net::CookieContainer*  value) ;

constexpr void __cordl_internal_set__isReadOnly(bool  value) ;

constexpr void __cordl_internal_set__keepAliveInterval(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set__receiveBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__requestHeaders(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__requestedSubProtocols(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__sendBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__useDefaultCredentials(bool  value) ;

/// @brief Method .ctor, addr 0xacecfac, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Buffer, addr 0xacee7d4, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::ArraySegment_1<uint8_t>> get_Buffer() ;

/// @brief Method get_ClientCertificates, addr 0xacee35c, size 0x70, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method get_Cookies, addr 0xacee3cc, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::CookieContainer* get_Cookies() ;

/// @brief Method get_KeepAliveInterval, addr 0xacee61c, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_KeepAliveInterval() ;

/// @brief Method get_ReceiveBufferSize, addr 0xacee7c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ReceiveBufferSize() ;

/// @brief Method get_RequestHeaders, addr 0xacee328, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_RequestHeaders() ;

/// @brief Method get_RequestedSubProtocols, addr 0xacee330, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_RequestedSubProtocols() ;

/// @brief Method get_SendBufferSize, addr 0xacee7cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SendBufferSize() ;

/// @brief Method set_KeepAliveInterval, addr 0xacee624, size 0x1a0, virtual false, abstract: false, final false
inline void set_KeepAliveInterval(::System::TimeSpan  value) ;

/// @brief Method set_Proxy, addr 0xaced07c, size 0x2c, virtual false, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xacee338, size 0x24, virtual false, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientWebSocketOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocketOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientWebSocketOptions(ClientWebSocketOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocketOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientWebSocketOptions(ClientWebSocketOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10908};

/// @brief Field _isReadOnly, offset: 0x10, size: 0x1, def value: None
 bool  ____isReadOnly;

/// @brief Field _requestedSubProtocols, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____requestedSubProtocols;

/// @brief Field _requestHeaders, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____requestHeaders;

/// @brief Field _keepAliveInterval, offset: 0x28, size: 0x8, def value: None
 ::System::TimeSpan  ____keepAliveInterval;

/// @brief Field _useDefaultCredentials, offset: 0x30, size: 0x1, def value: None
 bool  ____useDefaultCredentials;

/// @brief Field _proxy, offset: 0x38, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ____proxy;

/// @brief Field _clientCertificates, offset: 0x40, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ____clientCertificates;

/// @brief Field _cookies, offset: 0x48, size: 0x8, def value: None
 ::System::Net::CookieContainer*  ____cookies;

/// @brief Field _receiveBufferSize, offset: 0x50, size: 0x4, def value: None
 int32_t  ____receiveBufferSize;

/// @brief Field _sendBufferSize, offset: 0x54, size: 0x4, def value: None
 int32_t  ____sendBufferSize;

/// @brief Field _buffer, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  ____buffer;

/// @brief Size padding 0x70 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____isReadOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____requestedSubProtocols) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____requestHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____keepAliveInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____useDefaultCredentials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____proxy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____clientCertificates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____cookies) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____receiveBufferSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____sendBufferSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocketOptions, ____buffer) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::ClientWebSocketOptions) == 0x70, "Size mismatch!");

} // namespace end def System::Net::WebSockets
