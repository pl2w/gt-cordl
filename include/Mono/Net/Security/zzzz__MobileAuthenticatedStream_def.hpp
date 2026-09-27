#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_Operation_def.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileAuthenticatedStream)
namespace GlobalNamespace {
struct MobileAuthenticatedStream_OperationType;
}
namespace GlobalNamespace {
struct MobileAuthenticatedStream_Operation;
}
namespace GlobalNamespace {
struct MobileAuthenticatedStream__InnerRead_d__66;
}
namespace GlobalNamespace {
struct MobileAuthenticatedStream__InnerWrite_d__67;
}
namespace GlobalNamespace {
struct MobileAuthenticatedStream__ProcessAuthentication_d__48;
}
namespace GlobalNamespace {
struct MobileAuthenticatedStream__StartOperation_d__57;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream___c__DisplayClass66_0;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
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
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream___c__DisplayClass66_0;
}
// Write type traits
MARK_REF_T(::Mono::Net::Security::MobileAuthenticatedStream*);
MARK_REF_T(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*);
DEFINE_IL2CPP_CLASS(::Mono::Net::Security::MobileAuthenticatedStream*, "Mono.Net.Security", "MobileAuthenticatedStream");
DEFINE_IL2CPP_CLASS(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0*, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
// Dependencies Mono.Net.Security.MobileAuthenticatedStream::Operation, System.Net.Security.AuthenticatedStream
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MobileAuthenticatedStream
class CORDL_TYPE MobileAuthenticatedStream : public ::System::Net::Security::AuthenticatedStream {
public:
// Declarations
using Operation = ::GlobalNamespace::MobileAuthenticatedStream_Operation;

using OperationType = ::GlobalNamespace::MobileAuthenticatedStream_OperationType;

using _InnerRead_d__66 = ::GlobalNamespace::MobileAuthenticatedStream__InnerRead_d__66;

using _InnerWrite_d__67 = ::GlobalNamespace::MobileAuthenticatedStream__InnerWrite_d__67;

using _ProcessAuthentication_d__48 = ::GlobalNamespace::MobileAuthenticatedStream__ProcessAuthentication_d__48;

using _StartOperation_d__57 = ::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57;

using __c__DisplayClass66_0 = ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_InternalLocalCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  InternalLocalCertificate;

 __declspec(property(get=get_IsAuthenticated)) bool  IsAuthenticated;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_LocalCertificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  LocalCertificate;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_Provider)) ::Mono::Net::Security::MobileTlsProvider*  Provider;

 __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) int32_t  ReadTimeout;

 __declspec(property(get=get_Settings)) ::Mono::Security::Interface::MonoTlsSettings*  Settings;

 __declspec(property(get=get_SslStream)) ::System::Net::Security::SslStream*  SslStream;

 __declspec(property(get=get_TargetHost, put=set_TargetHost)) ::StringW  TargetHost;

 __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) int32_t  WriteTimeout;

/// @brief Field <Provider>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Provider_k__BackingField, put=__cordl_internal_set__Provider_k__BackingField)) ::Mono::Net::Security::MobileTlsProvider*  _Provider_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings_k__BackingField, put=__cordl_internal_set__Settings_k__BackingField)) ::Mono::Security::Interface::MonoTlsSettings*  _Settings_k__BackingField;

/// @brief Field <SslStream>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SslStream_k__BackingField, put=__cordl_internal_set__SslStream_k__BackingField)) ::System::Net::Security::SslStream*  _SslStream_k__BackingField;

/// @brief Field <TargetHost>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TargetHost_k__BackingField, put=__cordl_internal_set__TargetHost_k__BackingField)) ::StringW  _TargetHost_k__BackingField;

/// @brief Field ID, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) int32_t  _cordl_ID;

/// @brief Field asyncHandshakeRequest, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncHandshakeRequest, put=__cordl_internal_set_asyncHandshakeRequest)) ::Mono::Net::Security::AsyncProtocolRequest*  asyncHandshakeRequest;

/// @brief Field asyncReadRequest, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncReadRequest, put=__cordl_internal_set_asyncReadRequest)) ::Mono::Net::Security::AsyncProtocolRequest*  asyncReadRequest;

/// @brief Field asyncWriteRequest, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncWriteRequest, put=__cordl_internal_set_asyncWriteRequest)) ::Mono::Net::Security::AsyncProtocolRequest*  asyncWriteRequest;

/// @brief Field closeRequested, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeRequested, put=__cordl_internal_set_closeRequested)) int32_t  closeRequested;

/// @brief Field ioLock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ioLock, put=__cordl_internal_set_ioLock)) ::System::Object*  ioLock;

/// @brief Field lastException, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastException, put=__cordl_internal_set_lastException)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  lastException;

/// @brief Field nextId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextId, put=setStaticF_nextId)) int32_t  nextId;

/// @brief Field operation, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_operation, put=__cordl_internal_set_operation)) ::GlobalNamespace::MobileAuthenticatedStream_Operation  operation;

/// @brief Field readBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_readBuffer, put=__cordl_internal_set_readBuffer)) ::Mono::Net::Security::BufferOffsetSize2*  readBuffer;

/// @brief Field shutdown, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_shutdown, put=__cordl_internal_set_shutdown)) bool  shutdown;

/// @brief Field uniqueNameInteger, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uniqueNameInteger, put=setStaticF_uniqueNameInteger)) int32_t  uniqueNameInteger;

/// @brief Field writeBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeBuffer, put=__cordl_internal_set_writeBuffer)) ::Mono::Net::Security::BufferOffsetSize2*  writeBuffer;

/// @brief Field xobileTlsContext, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_xobileTlsContext, put=__cordl_internal_set_xobileTlsContext)) ::Mono::Net::Security::MobileTlsContext*  xobileTlsContext;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AuthenticateAsClient, addr 0xa8d7ab8, size 0x1d8, virtual false, abstract: false, final false
inline void AuthenticateAsClient(::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates, ::System::Security::Authentication::SslProtocols  enabledSslProtocols, bool  checkCertificateRevocation) ;

/// @brief Method AuthenticateAsClientAsync, addr 0xa8d8060, size 0x11c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates, ::System::Security::Authentication::SslProtocols  enabledSslProtocols, bool  checkCertificateRevocation) ;

/// @brief Method AuthenticateAsServer, addr 0xa8d7e1c, size 0x1d8, virtual false, abstract: false, final false
inline void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate*  serverCertificate, bool  clientCertificateRequired, ::System::Security::Authentication::SslProtocols  enabledSslProtocols, bool  checkCertificateRevocation) ;

/// @brief Method CheckThrow, addr 0xa8d77e4, size 0xc0, virtual false, abstract: false, final false
inline void CheckThrow(bool  authSuccessCheck, bool  shutdownCheck) ;

/// @brief Method CreateContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions*  options) ;

/// @brief Method Dispose, addr 0xa8d88f8, size 0x1d0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa8d8b38, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetIOException, addr 0xa8d78a4, size 0x17c, virtual false, abstract: false, final false
static inline ::System::Exception* GetIOException(::System::Exception*  e, ::StringW  message) ;

/// @brief Method GetInternalError, addr 0xa8d7a20, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* GetInternalError() ;

/// @brief Method GetInvalidNestedCallException, addr 0xa8d7a6c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Exception* GetInvalidNestedCallException() ;

/// @brief Method GetSSPIException, addr 0xa8d5704, size 0x194, virtual false, abstract: false, final false
static inline ::System::Exception* GetSSPIException(::System::Exception*  e) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.MobileAuthenticatedStream::<InnerRead>d__66))]
/// @brief Method InnerRead, addr 0xa8d5de0, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* InnerRead(bool  sync, int32_t  requestedSize, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>d__67))]
/// @brief Method InnerWrite, addr 0xa8d5898, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InnerWrite(bool  sync, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InternalRead, addr 0xa8d85a4, size 0x170, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,bool> InternalRead(::Mono::Net::Security::AsyncProtocolRequest*  asyncRequest, ::Mono::Net::Security::BufferOffsetSize*  internalBuffer, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method InternalRead, addr 0xa8d22e0, size 0x100, virtual false, abstract: false, final false
inline int32_t InternalRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<bool>  outWantMore) ;

/// @brief Method InternalWrite, addr 0xa8d8714, size 0xf8, virtual false, abstract: false, final false
inline bool InternalWrite(::Mono::Net::Security::AsyncProtocolRequest*  asyncRequest, ::Mono::Net::Security::BufferOffsetSize2*  internalBuffer, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method InternalWrite, addr 0xa8d1df8, size 0x1c4, virtual false, abstract: false, final false
inline bool InternalWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

static inline ::Mono::Net::Security::MobileAuthenticatedStream* New_ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.MobileAuthenticatedStream::<ProcessAuthentication>d__48))]
/// @brief Method ProcessAuthentication, addr 0xa8d7cfc, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessAuthentication(bool  runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions*  options, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ProcessHandshake, addr 0xa8d5fc0, size 0x398, virtual false, abstract: false, final false
inline ::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus  status, bool  renegotiate) ;

/// @brief Method ProcessRead, addr 0xa8d64dc, size 0x150, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,bool> ProcessRead(::Mono::Net::Security::BufferOffsetSize*  userBuffer) ;

/// @brief Method ProcessWrite, addr 0xa8d66a8, size 0x150, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,bool> ProcessWrite(::Mono::Net::Security::BufferOffsetSize*  userBuffer) ;

/// @brief Method Read, addr 0xa8d817c, size 0xe0, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync, addr 0xa8d847c, size 0x94, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0xa8d8d38, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetException, addr 0xa8d50c4, size 0x40, virtual false, abstract: false, final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(::System::Exception*  e) ;

/// @brief Method SetLength, addr 0xa8d8d70, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.MobileAuthenticatedStream::<StartOperation>d__57))]
/// @brief Method StartOperation, addr 0xa8d825c, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* StartOperation(::GlobalNamespace::MobileAuthenticatedStream_OperationType  type, ::Mono::Net::Security::AsyncProtocolRequest*  asyncRequest, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Write, addr 0xa8d83b0, size 0xcc, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xa8d8510, size 0x94, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method <InnerWrite>b__67_0, addr 0xa8d8f9c, size 0x34, virtual false, abstract: false, final false
inline void _InnerWrite_b__67_0() ;

constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get__Provider_k__BackingField() const;

constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get__Provider_k__BackingField() ;

constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get__Settings_k__BackingField() const;

constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get__Settings_k__BackingField() ;

constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get__SslStream_k__BackingField() const;

constexpr ::System::Net::Security::SslStream*& __cordl_internal_get__SslStream_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TargetHost_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TargetHost_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

constexpr int32_t& __cordl_internal_get__cordl_ID() ;

constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncHandshakeRequest() const;

constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncHandshakeRequest() ;

constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncReadRequest() const;

constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncReadRequest() ;

constexpr ::Mono::Net::Security::AsyncProtocolRequest* const& __cordl_internal_get_asyncWriteRequest() const;

constexpr ::Mono::Net::Security::AsyncProtocolRequest*& __cordl_internal_get_asyncWriteRequest() ;

constexpr int32_t const& __cordl_internal_get_closeRequested() const;

constexpr int32_t& __cordl_internal_get_closeRequested() ;

constexpr ::System::Object* const& __cordl_internal_get_ioLock() const;

constexpr ::System::Object*& __cordl_internal_get_ioLock() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_lastException() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_lastException() ;

constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation const& __cordl_internal_get_operation() const;

constexpr ::GlobalNamespace::MobileAuthenticatedStream_Operation& __cordl_internal_get_operation() ;

constexpr ::Mono::Net::Security::BufferOffsetSize2* const& __cordl_internal_get_readBuffer() const;

constexpr ::Mono::Net::Security::BufferOffsetSize2*& __cordl_internal_get_readBuffer() ;

constexpr bool const& __cordl_internal_get_shutdown() const;

constexpr bool& __cordl_internal_get_shutdown() ;

constexpr ::Mono::Net::Security::BufferOffsetSize2* const& __cordl_internal_get_writeBuffer() const;

constexpr ::Mono::Net::Security::BufferOffsetSize2*& __cordl_internal_get_writeBuffer() ;

constexpr ::Mono::Net::Security::MobileTlsContext* const& __cordl_internal_get_xobileTlsContext() const;

constexpr ::Mono::Net::Security::MobileTlsContext*& __cordl_internal_get_xobileTlsContext() ;

constexpr void __cordl_internal_set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider*  value) ;

constexpr void __cordl_internal_set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings*  value) ;

constexpr void __cordl_internal_set__SslStream_k__BackingField(::System::Net::Security::SslStream*  value) ;

constexpr void __cordl_internal_set__TargetHost_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__cordl_ID(int32_t  value) ;

constexpr void __cordl_internal_set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest*  value) ;

constexpr void __cordl_internal_set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest*  value) ;

constexpr void __cordl_internal_set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest*  value) ;

constexpr void __cordl_internal_set_closeRequested(int32_t  value) ;

constexpr void __cordl_internal_set_ioLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set_operation(::GlobalNamespace::MobileAuthenticatedStream_Operation  value) ;

constexpr void __cordl_internal_set_readBuffer(::Mono::Net::Security::BufferOffsetSize2*  value) ;

constexpr void __cordl_internal_set_shutdown(bool  value) ;

constexpr void __cordl_internal_set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2*  value) ;

constexpr void __cordl_internal_set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext*  value) ;

/// @brief Method .ctor, addr 0xa8d3c8c, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider) ;

static inline int32_t getStaticF_nextId() ;

static inline int32_t getStaticF_uniqueNameInteger() ;

/// @brief Method get_CanRead, addr 0xa8d8d90, size 0x44, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa8d8e54, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout, addr 0xa8d8dd4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite, addr 0xa8d8df0, size 0x64, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_InternalLocalCertificate, addr 0xa8d8c34, size 0x104, virtual true, abstract: false, final true
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate() ;

/// @brief Method get_IsAuthenticated, addr 0xa8d880c, size 0xec, virtual true, abstract: false, final false
inline bool get_IsAuthenticated() ;

/// @brief Method get_Length, addr 0xa8d8e5c, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_LocalCertificate, addr 0xa8d8b58, size 0xdc, virtual true, abstract: false, final true
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate() ;

/// @brief Method get_Position, addr 0xa8d8e78, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_Provider, addr 0xa8d77cc, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Net::Security::MobileTlsProvider* get_Provider() ;

/// @brief Method get_ReadTimeout, addr 0xa8d8ed0, size 0x20, virtual true, abstract: false, final false
inline int32_t get_ReadTimeout() ;

/// [CompilerGenerated]
/// @brief Method get_Settings, addr 0xa8d77c4, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::Interface::MonoTlsSettings* get_Settings() ;

/// [CompilerGenerated]
/// @brief Method get_SslStream, addr 0xa8d77bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Net::Security::SslStream* get_SslStream() ;

/// [CompilerGenerated]
/// @brief Method get_TargetHost, addr 0xa8d77d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TargetHost() ;

/// @brief Method get_WriteTimeout, addr 0xa8d8f10, size 0x20, virtual true, abstract: false, final false
inline int32_t get_WriteTimeout() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_nextId(int32_t  value) ;

static inline void setStaticF_uniqueNameInteger(int32_t  value) ;

/// @brief Method set_Position, addr 0xa8d8e98, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// @brief Method set_ReadTimeout, addr 0xa8d8ef0, size 0x20, virtual true, abstract: false, final false
inline void set_ReadTimeout(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TargetHost, addr 0xa8d77dc, size 0x8, virtual false, abstract: false, final false
inline void set_TargetHost(::StringW  value) ;

/// @brief Method set_WriteTimeout, addr 0xa8d8f30, size 0x20, virtual true, abstract: false, final false
inline void set_WriteTimeout(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MobileAuthenticatedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MobileAuthenticatedStream(MobileAuthenticatedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MobileAuthenticatedStream(MobileAuthenticatedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9888};

/// @brief Field xobileTlsContext, offset: 0x38, size: 0x8, def value: None
 ::Mono::Net::Security::MobileTlsContext*  ___xobileTlsContext;

/// @brief Field lastException, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___lastException;

/// @brief Field asyncHandshakeRequest, offset: 0x48, size: 0x8, def value: None
 ::Mono::Net::Security::AsyncProtocolRequest*  ___asyncHandshakeRequest;

/// @brief Field asyncReadRequest, offset: 0x50, size: 0x8, def value: None
 ::Mono::Net::Security::AsyncProtocolRequest*  ___asyncReadRequest;

/// @brief Field asyncWriteRequest, offset: 0x58, size: 0x8, def value: None
 ::Mono::Net::Security::AsyncProtocolRequest*  ___asyncWriteRequest;

/// @brief Field readBuffer, offset: 0x60, size: 0x8, def value: None
 ::Mono::Net::Security::BufferOffsetSize2*  ___readBuffer;

/// @brief Field writeBuffer, offset: 0x68, size: 0x8, def value: None
 ::Mono::Net::Security::BufferOffsetSize2*  ___writeBuffer;

/// @brief Field ioLock, offset: 0x70, size: 0x8, def value: None
 ::System::Object*  ___ioLock;

/// @brief Field closeRequested, offset: 0x78, size: 0x4, def value: None
 int32_t  ___closeRequested;

/// @brief Field shutdown, offset: 0x7c, size: 0x1, def value: None
 bool  ___shutdown;

/// @brief Field operation, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::MobileAuthenticatedStream_Operation  ___operation;

/// [CompilerGenerated]
/// @brief Field <SslStream>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Net::Security::SslStream*  ____SslStream_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Settings>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsSettings*  ____Settings_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Provider>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::Mono::Net::Security::MobileTlsProvider*  ____Provider_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TargetHost>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____TargetHost_k__BackingField;

/// @brief Field ID, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____cordl_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___xobileTlsContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___lastException) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncHandshakeRequest) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncReadRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___asyncWriteRequest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___readBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___writeBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___ioLock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___closeRequested) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___shutdown) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ___operation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____SslStream_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____Settings_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____Provider_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____TargetHost_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream, ____cordl_ID) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream) == 0xb0, "Size mismatch!");

} // namespace end def Mono::Net::Security
// [CompilerGenerated]
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0
class CORDL_TYPE MobileAuthenticatedStream___c__DisplayClass66_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mono::Net::Security::MobileAuthenticatedStream*  __4__this;

/// @brief Field len, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

static inline ::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0* New_ctor() ;

/// @brief Method <InnerRead>b__0, addr 0xa8da1c8, size 0x48, virtual false, abstract: false, final false
inline int32_t _InnerRead_b__0() ;

constexpr ::Mono::Net::Security::MobileAuthenticatedStream* const& __cordl_internal_get___4__this() const;

constexpr ::Mono::Net::Security::MobileAuthenticatedStream*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr void __cordl_internal_set___4__this(::Mono::Net::Security::MobileAuthenticatedStream*  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

/// @brief Method .ctor, addr 0xa8da1c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MobileAuthenticatedStream___c__DisplayClass66_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream___c__DisplayClass66_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MobileAuthenticatedStream___c__DisplayClass66_0(MobileAuthenticatedStream___c__DisplayClass66_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream___c__DisplayClass66_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MobileAuthenticatedStream___c__DisplayClass66_0(MobileAuthenticatedStream___c__DisplayClass66_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9885};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Mono::Net::Security::MobileAuthenticatedStream*  _____4__this;

/// @brief Field len, offset: 0x18, size: 0x4, def value: None
 int32_t  ___len;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0, ___len) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream___c__DisplayClass66_0) == 0x20, "Size mismatch!");

} // namespace end def Mono::Net::Security
