#pragma once
// IWYU pragma private; include "System/Net/HttpConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpConnection_InputState_def.hpp"
#include "System/Net/zzzz__HttpConnection_LineState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpConnection)
namespace GlobalNamespace {
struct HttpConnection_InputState;
}
namespace GlobalNamespace {
struct HttpConnection_LineState;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::Net {
class RequestStream;
}
namespace System::Net {
class ResponseStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class Timer;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HttpConnection;
}
// Write type traits
MARK_REF_T(::System::Net::HttpConnection*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpConnection*, "System.Net", "HttpConnection");
// Dependencies System.Net.HttpConnection::InputState, System.Net.HttpConnection::LineState, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpConnection
class CORDL_TYPE HttpConnection : public ::System::Object {
public:
// Declarations
using InputState = ::GlobalNamespace::HttpConnection_InputState;

using LineState = ::GlobalNamespace::HttpConnection_LineState;

 __declspec(property(get=get_ClientCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  ClientCertificate;

 __declspec(property(get=get_ClientCertificateErrors)) ::ArrayW<int32_t>  ClientCertificateErrors;

 __declspec(property(get=get_IsClosed)) bool  IsClosed;

 __declspec(property(get=get_IsSecure)) bool  IsSecure;

 __declspec(property(get=get_LocalEndPoint)) ::System::Net::IPEndPoint*  LocalEndPoint;

 __declspec(property(get=get_Prefix, put=set_Prefix)) ::System::Net::ListenerPrefix*  Prefix;

 __declspec(property(get=get_RemoteEndPoint)) ::System::Net::IPEndPoint*  RemoteEndPoint;

 __declspec(property(get=get_Reuses)) int32_t  Reuses;

 __declspec(property(get=get_SslStream)) ::System::Net::Security::SslStream*  SslStream;

/// @brief Field buffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field cert, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cert, put=__cordl_internal_set_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert;

/// @brief Field chunked, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_chunked, put=__cordl_internal_set_chunked)) bool  chunked;

/// @brief Field client_cert, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_client_cert, put=__cordl_internal_set_client_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  client_cert;

/// @brief Field client_cert_errors, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_client_cert_errors, put=__cordl_internal_set_client_cert_errors)) ::ArrayW<int32_t>  client_cert_errors;

/// @brief Field context, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::System::Net::HttpListenerContext*  context;

/// @brief Field context_bound, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_context_bound, put=__cordl_internal_set_context_bound)) bool  context_bound;

/// @brief Field current_line, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_current_line, put=__cordl_internal_set_current_line)) ::System::Text::StringBuilder*  current_line;

/// @brief Field epl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_epl, put=__cordl_internal_set_epl)) ::System::Net::EndPointListener*  epl;

/// @brief Field i_stream, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_i_stream, put=__cordl_internal_set_i_stream)) ::System::Net::RequestStream*  i_stream;

/// @brief Field input_state, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_input_state, put=__cordl_internal_set_input_state)) ::GlobalNamespace::HttpConnection_InputState  input_state;

/// @brief Field last_listener, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_last_listener, put=__cordl_internal_set_last_listener)) ::System::Net::HttpListener*  last_listener;

/// @brief Field line_state, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_line_state, put=__cordl_internal_set_line_state)) ::GlobalNamespace::HttpConnection_LineState  line_state;

/// @brief Field local_ep, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_local_ep, put=__cordl_internal_set_local_ep)) ::System::Net::IPEndPoint*  local_ep;

/// @brief Field ms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ms, put=__cordl_internal_set_ms)) ::System::IO::MemoryStream*  ms;

/// @brief Field o_stream, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_o_stream, put=__cordl_internal_set_o_stream)) ::System::Net::ResponseStream*  o_stream;

/// @brief Field onread_cb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onread_cb, put=setStaticF_onread_cb)) ::System::AsyncCallback*  onread_cb;

/// @brief Field position, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) int32_t  position;

/// @brief Field prefix, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefix, put=__cordl_internal_set_prefix)) ::System::Net::ListenerPrefix*  prefix;

/// @brief Field reuses, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_reuses, put=__cordl_internal_set_reuses)) int32_t  reuses;

/// @brief Field s_timeout, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_s_timeout, put=__cordl_internal_set_s_timeout)) int32_t  s_timeout;

/// @brief Field secure, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_secure, put=__cordl_internal_set_secure)) bool  secure;

/// @brief Field sock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sock, put=__cordl_internal_set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Field ssl_stream, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ssl_stream, put=__cordl_internal_set_ssl_stream)) ::System::Net::Security::SslStream*  ssl_stream;

/// @brief Field stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Field timer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::System::Threading::Timer*  timer;

/// @brief Method BeginReadRequest, addr 0xac91d7c, size 0x1b8, virtual false, abstract: false, final false
inline void BeginReadRequest() ;

/// @brief Method Close, addr 0xac9728c, size 0x8, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Close, addr 0xac933bc, size 0x2bc, virtual false, abstract: false, final false
inline void Close(bool  force_close) ;

/// @brief Method CloseSocket, addr 0xac96600, size 0x154, virtual false, abstract: false, final false
inline void CloseSocket() ;

/// @brief Method GetRequestStream, addr 0xac96784, size 0x168, virtual false, abstract: false, final false
inline ::System::Net::RequestStream* GetRequestStream(bool  chunked, int64_t  contentlength) ;

/// @brief Method GetResponseStream, addr 0xac968ec, size 0xd8, virtual false, abstract: false, final false
inline ::System::Net::ResponseStream* GetResponseStream() ;

/// @brief Method Init, addr 0xac9635c, size 0xe4, virtual false, abstract: false, final false
inline void Init() ;

static inline ::System::Net::HttpConnection* New_ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

/// @brief Method OnRead, addr 0xac969c4, size 0xd4, virtual false, abstract: false, final false
static inline void OnRead(::System::IAsyncResult*  ares) ;

/// @brief Method OnReadInternal, addr 0xac96a98, size 0x354, virtual false, abstract: false, final false
inline void OnReadInternal(::System::IAsyncResult*  ares) ;

/// @brief Method OnTimeout, addr 0xac965e8, size 0x18, virtual false, abstract: false, final false
inline void OnTimeout(::System::Object*  unused) ;

/// @brief Method ProcessInput, addr 0xac96e08, size 0x2d8, virtual false, abstract: false, final false
inline bool ProcessInput(::System::IO::MemoryStream*  ms) ;

/// @brief Method ReadLine, addr 0xac97108, size 0x184, virtual false, abstract: false, final false
inline ::StringW ReadLine(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  len, ::by_ref<int32_t>  used) ;

/// @brief Method RemoveConnection, addr 0xac970e0, size 0x28, virtual false, abstract: false, final false
inline void RemoveConnection() ;

/// @brief Method SendError, addr 0xac96dec, size 0x1c, virtual false, abstract: false, final false
inline void SendError() ;

/// @brief Method SendError, addr 0xac8c8cc, size 0x1dc, virtual false, abstract: false, final false
inline void SendError(::StringW  msg, int32_t  status) ;

/// @brief Method Unbind, addr 0xac96754, size 0x30, virtual false, abstract: false, final false
inline void Unbind() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_cert() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_cert() ;

constexpr bool const& __cordl_internal_get_chunked() const;

constexpr bool& __cordl_internal_get_chunked() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_client_cert() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_client_cert() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_client_cert_errors() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_client_cert_errors() ;

constexpr ::System::Net::HttpListenerContext* const& __cordl_internal_get_context() const;

constexpr ::System::Net::HttpListenerContext*& __cordl_internal_get_context() ;

constexpr bool const& __cordl_internal_get_context_bound() const;

constexpr bool& __cordl_internal_get_context_bound() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_current_line() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_current_line() ;

constexpr ::System::Net::EndPointListener* const& __cordl_internal_get_epl() const;

constexpr ::System::Net::EndPointListener*& __cordl_internal_get_epl() ;

constexpr ::System::Net::RequestStream* const& __cordl_internal_get_i_stream() const;

constexpr ::System::Net::RequestStream*& __cordl_internal_get_i_stream() ;

constexpr ::GlobalNamespace::HttpConnection_InputState const& __cordl_internal_get_input_state() const;

constexpr ::GlobalNamespace::HttpConnection_InputState& __cordl_internal_get_input_state() ;

constexpr ::System::Net::HttpListener* const& __cordl_internal_get_last_listener() const;

constexpr ::System::Net::HttpListener*& __cordl_internal_get_last_listener() ;

constexpr ::GlobalNamespace::HttpConnection_LineState const& __cordl_internal_get_line_state() const;

constexpr ::GlobalNamespace::HttpConnection_LineState& __cordl_internal_get_line_state() ;

constexpr ::System::Net::IPEndPoint* const& __cordl_internal_get_local_ep() const;

constexpr ::System::Net::IPEndPoint*& __cordl_internal_get_local_ep() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_ms() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_ms() ;

constexpr ::System::Net::ResponseStream* const& __cordl_internal_get_o_stream() const;

constexpr ::System::Net::ResponseStream*& __cordl_internal_get_o_stream() ;

constexpr int32_t const& __cordl_internal_get_position() const;

constexpr int32_t& __cordl_internal_get_position() ;

constexpr ::System::Net::ListenerPrefix* const& __cordl_internal_get_prefix() const;

constexpr ::System::Net::ListenerPrefix*& __cordl_internal_get_prefix() ;

constexpr int32_t const& __cordl_internal_get_reuses() const;

constexpr int32_t& __cordl_internal_get_reuses() ;

constexpr int32_t const& __cordl_internal_get_s_timeout() const;

constexpr int32_t& __cordl_internal_get_s_timeout() ;

constexpr bool const& __cordl_internal_get_secure() const;

constexpr bool& __cordl_internal_get_secure() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_sock() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_sock() ;

constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get_ssl_stream() const;

constexpr ::System::Net::Security::SslStream*& __cordl_internal_get_ssl_stream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr ::System::Threading::Timer* const& __cordl_internal_get_timer() const;

constexpr ::System::Threading::Timer*& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

constexpr void __cordl_internal_set_chunked(bool  value) ;

constexpr void __cordl_internal_set_client_cert(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value) ;

constexpr void __cordl_internal_set_client_cert_errors(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_context(::System::Net::HttpListenerContext*  value) ;

constexpr void __cordl_internal_set_context_bound(bool  value) ;

constexpr void __cordl_internal_set_current_line(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_epl(::System::Net::EndPointListener*  value) ;

constexpr void __cordl_internal_set_i_stream(::System::Net::RequestStream*  value) ;

constexpr void __cordl_internal_set_input_state(::GlobalNamespace::HttpConnection_InputState  value) ;

constexpr void __cordl_internal_set_last_listener(::System::Net::HttpListener*  value) ;

constexpr void __cordl_internal_set_line_state(::GlobalNamespace::HttpConnection_LineState  value) ;

constexpr void __cordl_internal_set_local_ep(::System::Net::IPEndPoint*  value) ;

constexpr void __cordl_internal_set_ms(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_o_stream(::System::Net::ResponseStream*  value) ;

constexpr void __cordl_internal_set_position(int32_t  value) ;

constexpr void __cordl_internal_set_prefix(::System::Net::ListenerPrefix*  value) ;

constexpr void __cordl_internal_set_reuses(int32_t  value) ;

constexpr void __cordl_internal_set_s_timeout(int32_t  value) ;

constexpr void __cordl_internal_set_secure(bool  value) ;

constexpr void __cordl_internal_set_sock(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_ssl_stream(::System::Net::Security::SslStream*  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_timer(::System::Threading::Timer*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__24_0, addr 0xac97334, size 0x108, virtual false, abstract: false, final false
inline bool __ctor_b__24_0(::System::Object*  t, ::System::Security::Cryptography::X509Certificates::X509Certificate*  c, ::System::Security::Cryptography::X509Certificates::X509Chain*  ch, ::System::Net::Security::SslPolicyErrors  e) ;

/// @brief Method .ctor, addr 0xac91ad4, size 0x2a8, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

static inline ::System::AsyncCallback* getStaticF_onread_cb() ;

/// @brief Method get_ClientCertificate, addr 0xac96450, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_ClientCertificate() ;

/// @brief Method get_ClientCertificateErrors, addr 0xac96448, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_ClientCertificateErrors() ;

/// @brief Method get_IsClosed, addr 0xac96458, size 0x10, virtual false, abstract: false, final false
inline bool get_IsClosed() ;

/// @brief Method get_IsSecure, addr 0xac965d0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSecure() ;

/// @brief Method get_LocalEndPoint, addr 0xac96470, size 0xd8, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_LocalEndPoint() ;

/// @brief Method get_Prefix, addr 0xac965d8, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ListenerPrefix* get_Prefix() ;

/// @brief Method get_RemoteEndPoint, addr 0xac96548, size 0x88, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_RemoteEndPoint() ;

/// @brief Method get_Reuses, addr 0xac96468, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Reuses() ;

/// @brief Method get_SslStream, addr 0xac96440, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Security::SslStream* get_SslStream() ;

static inline void setStaticF_onread_cb(::System::AsyncCallback*  value) ;

/// @brief Method set_Prefix, addr 0xac965e0, size 0x8, virtual false, abstract: false, final false
inline void set_Prefix(::System::Net::ListenerPrefix*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpConnection(HttpConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpConnection(HttpConnection const& ) = delete;

/// @brief Field BufferSize offset 0xffffffff size 0x4
static constexpr int32_t  BufferSize{static_cast<int32_t>(0x2000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10678};

/// @brief Field sock, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___sock;

/// @brief Field stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field epl, offset: 0x20, size: 0x8, def value: None
 ::System::Net::EndPointListener*  ___epl;

/// @brief Field ms, offset: 0x28, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___ms;

/// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field context, offset: 0x38, size: 0x8, def value: None
 ::System::Net::HttpListenerContext*  ___context;

/// @brief Field current_line, offset: 0x40, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___current_line;

/// @brief Field prefix, offset: 0x48, size: 0x8, def value: None
 ::System::Net::ListenerPrefix*  ___prefix;

/// @brief Field i_stream, offset: 0x50, size: 0x8, def value: None
 ::System::Net::RequestStream*  ___i_stream;

/// @brief Field o_stream, offset: 0x58, size: 0x8, def value: None
 ::System::Net::ResponseStream*  ___o_stream;

/// @brief Field chunked, offset: 0x60, size: 0x1, def value: None
 bool  ___chunked;

/// @brief Field reuses, offset: 0x64, size: 0x4, def value: None
 int32_t  ___reuses;

/// @brief Field context_bound, offset: 0x68, size: 0x1, def value: None
 bool  ___context_bound;

/// @brief Field secure, offset: 0x69, size: 0x1, def value: None
 bool  ___secure;

/// @brief Field cert, offset: 0x70, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate*  ___cert;

/// @brief Field s_timeout, offset: 0x78, size: 0x4, def value: None
 int32_t  ___s_timeout;

/// @brief Field timer, offset: 0x80, size: 0x8, def value: None
 ::System::Threading::Timer*  ___timer;

/// @brief Field local_ep, offset: 0x88, size: 0x8, def value: None
 ::System::Net::IPEndPoint*  ___local_ep;

/// @brief Field last_listener, offset: 0x90, size: 0x8, def value: None
 ::System::Net::HttpListener*  ___last_listener;

/// @brief Field client_cert_errors, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___client_cert_errors;

/// @brief Field client_cert, offset: 0xa0, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate2*  ___client_cert;

/// @brief Field ssl_stream, offset: 0xa8, size: 0x8, def value: None
 ::System::Net::Security::SslStream*  ___ssl_stream;

/// @brief Field input_state, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::HttpConnection_InputState  ___input_state;

/// @brief Field line_state, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::HttpConnection_LineState  ___line_state;

/// @brief Field position, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpConnection, ___sock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___epl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___ms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___context) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___current_line) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___prefix) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___i_stream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___o_stream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___chunked) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___reuses) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___context_bound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___secure) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___cert) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___s_timeout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___timer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___local_ep) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___last_listener) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___client_cert_errors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___client_cert) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___ssl_stream) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___input_state) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___line_state) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpConnection, ___position) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpConnection) == 0xc0, "Size mismatch!");

} // namespace end def System::Net
