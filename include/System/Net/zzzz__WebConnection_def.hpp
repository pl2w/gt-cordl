#pragma once
// IWYU pragma private; include "System/Net/WebConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnection)
namespace GlobalNamespace {
struct WebConnection__Connect_d__16;
}
namespace GlobalNamespace {
struct WebConnection__CreateStream_d__18;
}
namespace GlobalNamespace {
struct WebConnection__InitConnection_d__19;
}
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class WebConnection___c;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebConnection___c;
}
// Write type traits
MARK_REF_T(::System::Net::WebConnection*);
MARK_REF_T(::System::Net::WebConnection___c*);
DEFINE_IL2CPP_CLASS(::System::Net::WebConnection*, "System.Net", "WebConnection");
DEFINE_IL2CPP_CLASS(::System::Net::WebConnection___c*, "System.Net", "WebConnection/<>c");
// Dependencies System.DateTime, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnection
class CORDL_TYPE WebConnection : public ::System::Object {
public:
// Declarations
using _Connect_d__16 = ::GlobalNamespace::WebConnection__Connect_d__16;

using _CreateStream_d__18 = ::GlobalNamespace::WebConnection__CreateStream_d__18;

using _InitConnection_d__19 = ::GlobalNamespace::WebConnection__InitConnection_d__19;

using __c = ::System::Net::WebConnection___c;

 __declspec(property(get=get_Busy)) bool  Busy;

 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_IdleSince)) ::System::DateTime  IdleSince;

 __declspec(property(get=get_NtlmAuthenticated, put=set_NtlmAuthenticated)) bool  NtlmAuthenticated;

 __declspec(property(get=get_NtlmCredential, put=set_NtlmCredential)) ::System::Net::NetworkCredential*  NtlmCredential;

 __declspec(property(get=get_ServicePoint)) ::System::Net::ServicePoint*  ServicePoint;

 __declspec(property(get=get_UnsafeAuthenticatedConnectionSharing, put=set_UnsafeAuthenticatedConnectionSharing)) bool  UnsafeAuthenticatedConnectionSharing;

/// @brief Field <ServicePoint>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServicePoint_k__BackingField, put=__cordl_internal_set__ServicePoint_k__BackingField)) ::System::Net::ServicePoint*  _ServicePoint_k__BackingField;

/// @brief Field ID, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) int32_t  _cordl_ID;

/// @brief Field currentOperation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOperation, put=__cordl_internal_set_currentOperation)) ::System::Net::WebOperation*  currentOperation;

/// @brief Field disposed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) int32_t  disposed;

/// @brief Field idleSince, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleSince, put=__cordl_internal_set_idleSince)) ::System::DateTime  idleSince;

/// @brief Field monoTlsStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_monoTlsStream, put=__cordl_internal_set_monoTlsStream)) ::Mono::Net::Security::MonoTlsStream*  monoTlsStream;

/// @brief Field networkStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkStream, put=__cordl_internal_set_networkStream)) ::System::IO::Stream*  networkStream;

/// @brief Field ntlm_authenticated, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_ntlm_authenticated, put=__cordl_internal_set_ntlm_authenticated)) bool  ntlm_authenticated;

/// @brief Field ntlm_credentials, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ntlm_credentials, put=__cordl_internal_set_ntlm_credentials)) ::System::Net::NetworkCredential*  ntlm_credentials;

/// @brief Field socket, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_socket, put=__cordl_internal_set_socket)) ::System::Net::Sockets::Socket*  socket;

/// @brief Field tunnel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tunnel, put=__cordl_internal_set_tunnel)) ::System::Net::WebConnectionTunnel*  tunnel;

/// @brief Field unsafe_sharing, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_unsafe_sharing, put=__cordl_internal_set_unsafe_sharing)) bool  unsafe_sharing;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CanReuse, addr 0xacb7d8c, size 0x30, virtual false, abstract: false, final false
inline bool CanReuse() ;

/// @brief Method CanReuseConnection, addr 0xacb39ec, size 0x448, virtual false, abstract: false, final false
inline bool CanReuseConnection(::System::Net::WebOperation*  operation) ;

/// @brief Method CheckReusable, addr 0xacb7dbc, size 0x9c, virtual false, abstract: false, final false
inline bool CheckReusable() ;

/// @brief Method Close, addr 0xacb898c, size 0xcc, virtual false, abstract: false, final false
inline void Close(bool  reset) ;

/// @brief Method CloseSocket, addr 0xacb8a58, size 0x2ec, virtual false, abstract: false, final false
inline void CloseSocket() ;

/// [AsyncStateMachine(typeof(System.Net.WebConnection::<Connect>d__16))]
/// @brief Method Connect, addr 0xacb7e58, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Connect(::System::Net::WebOperation*  operation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Continue, addr 0xacb27a0, size 0x174, virtual false, abstract: false, final false
inline bool Continue(::System::Net::WebOperation*  next) ;

/// [AsyncStateMachine(typeof(System.Net.WebConnection::<CreateStream>d__18))]
/// @brief Method CreateStream, addr 0xacb7f70, size 0x15c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CreateStream(::System::Net::WebOperation*  operation, bool  reused, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Conditional("MONO_WEB_DEBUG")]
/// @brief Method Debug, addr 0xacb7d88, size 0x4, virtual false, abstract: false, final false
static inline void Debug(::StringW  message) ;

/// [Conditional("MONO_WEB_DEBUG")]
/// @brief Method Debug, addr 0xacb7d84, size 0x4, virtual false, abstract: false, final false
static inline void Debug(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Dispose, addr 0xacb3640, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xacb9094, size 0x38, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetException, addr 0xacb8218, size 0x17c, virtual false, abstract: false, final false
static inline ::System::Net::WebException* GetException(::System::Net::WebExceptionStatus  status, ::System::Exception*  error) ;

/// [AsyncStateMachine(typeof(System.Net.WebConnection::<InitConnection>d__19))]
/// @brief Method InitConnection, addr 0xacb80cc, size 0x14c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* InitConnection(::System::Net::WebOperation*  operation, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::WebConnection* New_ctor(::System::Net::ServicePoint*  sPoint) ;

/// @brief Method PrepareSharingNtlm, addr 0xacb8574, size 0x318, virtual false, abstract: false, final false
inline bool PrepareSharingNtlm(::System::Net::WebOperation*  operation) ;

/// @brief Method ReadLine, addr 0xacb8394, size 0x1e0, virtual false, abstract: false, final false
static inline bool ReadLine(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  start, int32_t  max, ::by_ref<::StringW>  output) ;

/// @brief Method Reset, addr 0xacb888c, size 0xd8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetNtlm, addr 0xacb8964, size 0x28, virtual false, abstract: false, final false
inline void ResetNtlm() ;

/// @brief Method StartOperation, addr 0xacb3e34, size 0x204, virtual false, abstract: false, final false
inline bool StartOperation(::System::Net::WebOperation*  operation, bool  reused) ;

constexpr ::System::Net::ServicePoint* const& __cordl_internal_get__ServicePoint_k__BackingField() const;

constexpr ::System::Net::ServicePoint*& __cordl_internal_get__ServicePoint_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

constexpr int32_t& __cordl_internal_get__cordl_ID() ;

constexpr ::System::Net::WebOperation* const& __cordl_internal_get_currentOperation() const;

constexpr ::System::Net::WebOperation*& __cordl_internal_get_currentOperation() ;

constexpr int32_t const& __cordl_internal_get_disposed() const;

constexpr int32_t& __cordl_internal_get_disposed() ;

constexpr ::System::DateTime const& __cordl_internal_get_idleSince() const;

constexpr ::System::DateTime& __cordl_internal_get_idleSince() ;

constexpr ::Mono::Net::Security::MonoTlsStream* const& __cordl_internal_get_monoTlsStream() const;

constexpr ::Mono::Net::Security::MonoTlsStream*& __cordl_internal_get_monoTlsStream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_networkStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_networkStream() ;

constexpr bool const& __cordl_internal_get_ntlm_authenticated() const;

constexpr bool& __cordl_internal_get_ntlm_authenticated() ;

constexpr ::System::Net::NetworkCredential* const& __cordl_internal_get_ntlm_credentials() const;

constexpr ::System::Net::NetworkCredential*& __cordl_internal_get_ntlm_credentials() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_socket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_socket() ;

constexpr ::System::Net::WebConnectionTunnel* const& __cordl_internal_get_tunnel() const;

constexpr ::System::Net::WebConnectionTunnel*& __cordl_internal_get_tunnel() ;

constexpr bool const& __cordl_internal_get_unsafe_sharing() const;

constexpr bool& __cordl_internal_get_unsafe_sharing() ;

constexpr void __cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value) ;

constexpr void __cordl_internal_set__cordl_ID(int32_t  value) ;

constexpr void __cordl_internal_set_currentOperation(::System::Net::WebOperation*  value) ;

constexpr void __cordl_internal_set_disposed(int32_t  value) ;

constexpr void __cordl_internal_set_idleSince(::System::DateTime  value) ;

constexpr void __cordl_internal_set_monoTlsStream(::Mono::Net::Security::MonoTlsStream*  value) ;

constexpr void __cordl_internal_set_networkStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_ntlm_authenticated(bool  value) ;

constexpr void __cordl_internal_set_ntlm_credentials(::System::Net::NetworkCredential*  value) ;

constexpr void __cordl_internal_set_socket(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_tunnel(::System::Net::WebConnectionTunnel*  value) ;

constexpr void __cordl_internal_set_unsafe_sharing(bool  value) ;

/// @brief Method .ctor, addr 0xacb4038, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Net::ServicePoint*  sPoint) ;

/// @brief Method get_Busy, addr 0xacb8d44, size 0x10, virtual false, abstract: false, final false
inline bool get_Busy() ;

/// @brief Method get_Closed, addr 0xacb3648, size 0x10, virtual false, abstract: false, final false
inline bool get_Closed() ;

/// @brief Method get_IdleSince, addr 0xacb8d54, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_IdleSince() ;

/// @brief Method get_NtlmAuthenticated, addr 0xacb90cc, size 0x8, virtual false, abstract: false, final false
inline bool get_NtlmAuthenticated() ;

/// @brief Method get_NtlmCredential, addr 0xacb90dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::NetworkCredential* get_NtlmCredential() ;

/// [CompilerGenerated]
/// @brief Method get_ServicePoint, addr 0xacb7d7c, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* get_ServicePoint() ;

/// @brief Method get_UnsafeAuthenticatedConnectionSharing, addr 0xacb90ec, size 0x8, virtual false, abstract: false, final false
inline bool get_UnsafeAuthenticatedConnectionSharing() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_NtlmAuthenticated, addr 0xacb90d4, size 0x8, virtual false, abstract: false, final false
inline void set_NtlmAuthenticated(bool  value) ;

/// @brief Method set_NtlmCredential, addr 0xacb90e4, size 0x8, virtual false, abstract: false, final false
inline void set_NtlmCredential(::System::Net::NetworkCredential*  value) ;

/// @brief Method set_UnsafeAuthenticatedConnectionSharing, addr 0xacb90f4, size 0x8, virtual false, abstract: false, final false
inline void set_UnsafeAuthenticatedConnectionSharing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebConnection(WebConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebConnection(WebConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10738};

/// @brief Field ntlm_credentials, offset: 0x10, size: 0x8, def value: None
 ::System::Net::NetworkCredential*  ___ntlm_credentials;

/// @brief Field ntlm_authenticated, offset: 0x18, size: 0x1, def value: None
 bool  ___ntlm_authenticated;

/// @brief Field unsafe_sharing, offset: 0x19, size: 0x1, def value: None
 bool  ___unsafe_sharing;

/// @brief Field networkStream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Stream*  ___networkStream;

/// @brief Field socket, offset: 0x28, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___socket;

/// @brief Field monoTlsStream, offset: 0x30, size: 0x8, def value: None
 ::Mono::Net::Security::MonoTlsStream*  ___monoTlsStream;

/// @brief Field tunnel, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebConnectionTunnel*  ___tunnel;

/// @brief Field disposed, offset: 0x40, size: 0x4, def value: None
 int32_t  ___disposed;

/// [CompilerGenerated]
/// @brief Field <ServicePoint>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Net::ServicePoint*  ____ServicePoint_k__BackingField;

/// @brief Field ID, offset: 0x50, size: 0x4, def value: None
 int32_t  ____cordl_ID;

/// @brief Field idleSince, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ___idleSince;

/// @brief Field currentOperation, offset: 0x60, size: 0x8, def value: None
 ::System::Net::WebOperation*  ___currentOperation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnection, ___ntlm_credentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___ntlm_authenticated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___unsafe_sharing) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___networkStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___socket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___monoTlsStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___tunnel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___disposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ____ServicePoint_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ____cordl_ID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___idleSince) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnection, ___currentOperation) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebConnection) == 0x68, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnection/<>c
class CORDL_TYPE WebConnection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::WebConnection___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  __9__16_0;

/// @brief Field <>9__16_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_1, put=setStaticF___9__16_1)) ::System::Action_1<::System::IAsyncResult*>*  __9__16_1;

static inline ::System::Net::WebConnection___c* New_ctor() ;

/// @brief Method <Connect>b__16_0, addr 0xacb916c, size 0xa0, virtual false, abstract: false, final false
inline ::System::IAsyncResult* _Connect_b__16_0(::System::Net::IPEndPoint*  targetEndPoint, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method <Connect>b__16_1, addr 0xacb920c, size 0xf4, virtual false, abstract: false, final false
inline void _Connect_b__16_1(::System::IAsyncResult*  asyncResult) ;

/// @brief Method .ctor, addr 0xacb9164, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebConnection___c* getStaticF___9() ;

static inline ::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* getStaticF___9__16_0() ;

static inline ::System::Action_1<::System::IAsyncResult*>* getStaticF___9__16_1() ;

static inline void setStaticF___9(::System::Net::WebConnection___c*  value) ;

static inline void setStaticF___9__16_0(::System::Func_4<::System::Net::IPEndPoint*,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value) ;

static inline void setStaticF___9__16_1(::System::Action_1<::System::IAsyncResult*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebConnection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebConnection___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebConnection___c(WebConnection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebConnection___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebConnection___c(WebConnection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebConnection___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net
