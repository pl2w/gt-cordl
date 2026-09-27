#pragma once
// IWYU pragma private; include "System/Net/HttpListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListener)
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
class AuthenticationSchemeSelector;
}
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class HttpListenerPrefixCollection;
}
namespace System::Net {
class HttpListenerRequest;
}
namespace System::Net {
class HttpListenerTimeoutManager;
}
namespace System::Net {
class HttpListener_ExtendedProtectionSelector;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class ServiceNameStore;
}
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class HttpListener_ExtendedProtectionSelector;
}
// Write type traits
MARK_REF_T(::System::Net::HttpListener*);
MARK_REF_T(::System::Net::HttpListener_ExtendedProtectionSelector*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpListener*, "System.Net", "HttpListener");
DEFINE_IL2CPP_CLASS(::System::Net::HttpListener_ExtendedProtectionSelector*, "System.Net", "HttpListener/ExtendedProtectionSelector");
// Dependencies System.Net.AuthenticationSchemes, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListener
class CORDL_TYPE HttpListener : public ::System::Object {
public:
// Declarations
using ExtendedProtectionSelector = ::System::Net::HttpListener_ExtendedProtectionSelector;

 __declspec(property(get=get_AuthenticationSchemeSelectorDelegate, put=set_AuthenticationSchemeSelectorDelegate)) ::System::Net::AuthenticationSchemeSelector*  AuthenticationSchemeSelectorDelegate;

 __declspec(property(get=get_AuthenticationSchemes, put=set_AuthenticationSchemes)) ::System::Net::AuthenticationSchemes  AuthenticationSchemes;

 __declspec(property(get=get_DefaultServiceNames)) ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*  DefaultServiceNames;

/// @brief [MonoTODO("not used anywhere in the implementation")]
 __declspec(property(get=get_ExtendedProtectionPolicy, put=set_ExtendedProtectionPolicy)) ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  ExtendedProtectionPolicy;

 __declspec(property(get=get_ExtendedProtectionSelectorDelegate, put=set_ExtendedProtectionSelectorDelegate)) ::System::Net::HttpListener_ExtendedProtectionSelector*  ExtendedProtectionSelectorDelegate;

 __declspec(property(get=get_IgnoreWriteExceptions, put=set_IgnoreWriteExceptions)) bool  IgnoreWriteExceptions;

 __declspec(property(get=get_IsListening)) bool  IsListening;

 __declspec(property(get=get_Prefixes)) ::System::Net::HttpListenerPrefixCollection*  Prefixes;

 __declspec(property(get=get_Realm, put=set_Realm)) ::StringW  Realm;

/// @brief [MonoTODO]
 __declspec(property(get=get_TimeoutManager)) ::System::Net::HttpListenerTimeoutManager*  TimeoutManager;

/// @brief [MonoTODO("Support for NTLM needs some loving.")]
 __declspec(property(get=get_UnsafeConnectionNtlmAuthentication, put=set_UnsafeConnectionNtlmAuthentication)) bool  UnsafeConnectionNtlmAuthentication;

/// @brief Field _internalLock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalLock, put=__cordl_internal_set__internalLock)) ::System::Object*  _internalLock;

/// @brief Field auth_schemes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_auth_schemes, put=__cordl_internal_set_auth_schemes)) ::System::Net::AuthenticationSchemes  auth_schemes;

/// @brief Field auth_selector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_auth_selector, put=__cordl_internal_set_auth_selector)) ::System::Net::AuthenticationSchemeSelector*  auth_selector;

/// @brief Field certificate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificate, put=__cordl_internal_set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate;

/// @brief Field connections, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Hashtable*  connections;

/// @brief Field ctx_queue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ctx_queue, put=__cordl_internal_set_ctx_queue)) ::System::Collections::ArrayList*  ctx_queue;

/// @brief Field defaultServiceNames, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultServiceNames, put=__cordl_internal_set_defaultServiceNames)) ::System::Net::ServiceNameStore*  defaultServiceNames;

/// @brief Field disposed, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field extendedProtectionPolicy, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendedProtectionPolicy, put=__cordl_internal_set_extendedProtectionPolicy)) ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  extendedProtectionPolicy;

/// @brief Field extendedProtectionSelectorDelegate, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendedProtectionSelectorDelegate, put=__cordl_internal_set_extendedProtectionSelectorDelegate)) ::System::Net::HttpListener_ExtendedProtectionSelector*  extendedProtectionSelectorDelegate;

/// @brief Field ignore_write_exceptions, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignore_write_exceptions, put=__cordl_internal_set_ignore_write_exceptions)) bool  ignore_write_exceptions;

/// @brief Field listening, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_listening, put=__cordl_internal_set_listening)) bool  listening;

/// @brief Field prefixes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefixes, put=__cordl_internal_set_prefixes)) ::System::Net::HttpListenerPrefixCollection*  prefixes;

/// @brief Field realm, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_realm, put=__cordl_internal_set_realm)) ::StringW  realm;

/// @brief Field registry, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_registry, put=__cordl_internal_set_registry)) ::System::Collections::Hashtable*  registry;

/// @brief Field tlsProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tlsProvider, put=__cordl_internal_set_tlsProvider)) ::Mono::Security::Interface::MonoTlsProvider*  tlsProvider;

/// @brief Field tlsSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tlsSettings, put=__cordl_internal_set_tlsSettings)) ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings;

/// @brief Field unsafe_ntlm_auth, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_unsafe_ntlm_auth, put=__cordl_internal_set_unsafe_ntlm_auth)) bool  unsafe_ntlm_auth;

/// @brief Field wait_queue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_wait_queue, put=__cordl_internal_set_wait_queue)) ::System::Collections::ArrayList*  wait_queue;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Abort, addr 0xac98148, size 0x1c, virtual false, abstract: false, final false
inline void Abort() ;

/// @brief Method AddConnection, addr 0xac9a654, size 0x24, virtual false, abstract: false, final false
inline void AddConnection(::System::Net::HttpConnection*  cnc) ;

/// @brief Method BeginGetContext, addr 0xac98e4c, size 0x2a0, virtual false, abstract: false, final false
inline ::System::IAsyncResult* BeginGetContext(::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CheckDisposed, addr 0xac97d10, size 0x70, virtual false, abstract: false, final false
inline void CheckDisposed() ;

/// @brief Method Cleanup, addr 0xac98214, size 0xa2c, virtual false, abstract: false, final false
inline void Cleanup(bool  close_existing) ;

/// @brief Method Close, addr 0xac981dc, size 0x38, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Close, addr 0xac98164, size 0x78, virtual false, abstract: false, final false
inline void Close(bool  force) ;

/// @brief Method CreateSslStream, addr 0xac97aa4, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Net::Security::SslStream* CreateSslStream(::System::IO::Stream*  innerStream, bool  ownsStream, ::System::Net::Security::RemoteCertificateValidationCallback*  callback) ;

/// @brief Method EndGetContext, addr 0xac99790, size 0x2b4, virtual false, abstract: false, final false
inline ::System::Net::HttpListenerContext* EndGetContext(::System::IAsyncResult*  asyncResult) ;

/// @brief Method GetContext, addr 0xac99e14, size 0xf8, virtual false, abstract: false, final false
inline ::System::Net::HttpListenerContext* GetContext() ;

/// @brief Method GetContextAsync, addr 0xac9a01c, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::HttpListenerContext*>* GetContextAsync() ;

/// @brief Method GetContextFromQueue, addr 0xac99188, size 0xc4, virtual false, abstract: false, final false
inline ::System::Net::HttpListenerContext* GetContextFromQueue() ;

/// @brief Method LoadCertificateAndKey, addr 0xac97694, size 0x410, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(::System::Net::IPAddress*  addr, int32_t  port) ;

static inline ::System::Net::HttpListener* New_ctor() ;

static inline ::System::Net::HttpListener* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::Mono::Security::Interface::MonoTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings) ;

/// @brief Method RegisterContext, addr 0xac9a134, size 0x360, virtual false, abstract: false, final false
inline void RegisterContext(::System::Net::HttpListenerContext*  context) ;

/// @brief Method RemoveConnection, addr 0xac9a678, size 0x20, virtual false, abstract: false, final false
inline void RemoveConnection(::System::Net::HttpConnection*  cnc) ;

/// @brief Method SelectAuthenticationScheme, addr 0xac99cb0, size 0x30, virtual false, abstract: false, final false
inline ::System::Net::AuthenticationSchemes SelectAuthenticationScheme(::System::Net::HttpListenerContext*  context) ;

/// @brief Method Start, addr 0xac99f54, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0xac99fc8, size 0x20, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method System.IDisposable.Dispose, addr 0xac99fe8, size 0x34, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method UnregisterContext, addr 0xac9a49c, size 0x1b8, virtual false, abstract: false, final false
inline void UnregisterContext(::System::Net::HttpListenerContext*  context) ;

constexpr ::System::Object* const& __cordl_internal_get__internalLock() const;

constexpr ::System::Object*& __cordl_internal_get__internalLock() ;

constexpr ::System::Net::AuthenticationSchemes const& __cordl_internal_get_auth_schemes() const;

constexpr ::System::Net::AuthenticationSchemes& __cordl_internal_get_auth_schemes() ;

constexpr ::System::Net::AuthenticationSchemeSelector* const& __cordl_internal_get_auth_selector() const;

constexpr ::System::Net::AuthenticationSchemeSelector*& __cordl_internal_get_auth_selector() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* const& __cordl_internal_get_certificate() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& __cordl_internal_get_certificate() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_connections() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_ctx_queue() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_ctx_queue() ;

constexpr ::System::Net::ServiceNameStore* const& __cordl_internal_get_defaultServiceNames() const;

constexpr ::System::Net::ServiceNameStore*& __cordl_internal_get_defaultServiceNames() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* const& __cordl_internal_get_extendedProtectionPolicy() const;

constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*& __cordl_internal_get_extendedProtectionPolicy() ;

constexpr ::System::Net::HttpListener_ExtendedProtectionSelector* const& __cordl_internal_get_extendedProtectionSelectorDelegate() const;

constexpr ::System::Net::HttpListener_ExtendedProtectionSelector*& __cordl_internal_get_extendedProtectionSelectorDelegate() ;

constexpr bool const& __cordl_internal_get_ignore_write_exceptions() const;

constexpr bool& __cordl_internal_get_ignore_write_exceptions() ;

constexpr bool const& __cordl_internal_get_listening() const;

constexpr bool& __cordl_internal_get_listening() ;

constexpr ::System::Net::HttpListenerPrefixCollection* const& __cordl_internal_get_prefixes() const;

constexpr ::System::Net::HttpListenerPrefixCollection*& __cordl_internal_get_prefixes() ;

constexpr ::StringW const& __cordl_internal_get_realm() const;

constexpr ::StringW& __cordl_internal_get_realm() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_registry() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_registry() ;

constexpr ::Mono::Security::Interface::MonoTlsProvider* const& __cordl_internal_get_tlsProvider() const;

constexpr ::Mono::Security::Interface::MonoTlsProvider*& __cordl_internal_get_tlsProvider() ;

constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_tlsSettings() const;

constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_tlsSettings() ;

constexpr bool const& __cordl_internal_get_unsafe_ntlm_auth() const;

constexpr bool& __cordl_internal_get_unsafe_ntlm_auth() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_wait_queue() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_wait_queue() ;

constexpr void __cordl_internal_set__internalLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_auth_schemes(::System::Net::AuthenticationSchemes  value) ;

constexpr void __cordl_internal_set_auth_selector(::System::Net::AuthenticationSchemeSelector*  value) ;

constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

constexpr void __cordl_internal_set_connections(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_ctx_queue(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_defaultServiceNames(::System::Net::ServiceNameStore*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_extendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  value) ;

constexpr void __cordl_internal_set_extendedProtectionSelectorDelegate(::System::Net::HttpListener_ExtendedProtectionSelector*  value) ;

constexpr void __cordl_internal_set_ignore_write_exceptions(bool  value) ;

constexpr void __cordl_internal_set_listening(bool  value) ;

constexpr void __cordl_internal_set_prefixes(::System::Net::HttpListenerPrefixCollection*  value) ;

constexpr void __cordl_internal_set_realm(::StringW  value) ;

constexpr void __cordl_internal_set_registry(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_tlsProvider(::Mono::Security::Interface::MonoTlsProvider*  value) ;

constexpr void __cordl_internal_set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings*  value) ;

constexpr void __cordl_internal_set_unsafe_ntlm_auth(bool  value) ;

constexpr void __cordl_internal_set_wait_queue(::System::Collections::ArrayList*  value) ;

/// @brief Method .ctor, addr 0xac97498, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac9743c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::Mono::Security::Interface::MonoTlsProvider*  tlsProvider, ::Mono::Security::Interface::MonoTlsSettings*  tlsSettings) ;

/// @brief Method get_AuthenticationSchemeSelectorDelegate, addr 0xac97d80, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate() ;

/// @brief Method get_AuthenticationSchemes, addr 0xac97ce4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::AuthenticationSchemes get_AuthenticationSchemes() ;

/// @brief Method get_DefaultServiceNames, addr 0xac980d0, size 0x18, virtual false, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* get_DefaultServiceNames() ;

/// @brief Method get_ExtendedProtectionPolicy, addr 0xac97f44, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* get_ExtendedProtectionPolicy() ;

/// @brief Method get_ExtendedProtectionSelectorDelegate, addr 0xac97db4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::HttpListener_ExtendedProtectionSelector* get_ExtendedProtectionSelectorDelegate() ;

/// @brief Method get_IgnoreWriteExceptions, addr 0xac97eb8, size 0x8, virtual false, abstract: false, final false
inline bool get_IgnoreWriteExceptions() ;

/// @brief Method get_IsListening, addr 0xac97ee4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsListening() ;

/// @brief Method get_IsSupported, addr 0xac97eec, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsSupported() ;

/// @brief Method get_Prefixes, addr 0xac97ef4, size 0x18, virtual false, abstract: false, final false
inline ::System::Net::HttpListenerPrefixCollection* get_Prefixes() ;

/// @brief Method get_Realm, addr 0xac980e8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Realm() ;

/// @brief Method get_TimeoutManager, addr 0xac97f0c, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::HttpListenerTimeoutManager* get_TimeoutManager() ;

/// @brief Method get_UnsafeConnectionNtlmAuthentication, addr 0xac9811c, size 0x8, virtual false, abstract: false, final false
inline bool get_UnsafeConnectionNtlmAuthentication() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_AuthenticationSchemeSelectorDelegate, addr 0xac97d88, size 0x2c, virtual false, abstract: false, final false
inline void set_AuthenticationSchemeSelectorDelegate(::System::Net::AuthenticationSchemeSelector*  value) ;

/// @brief Method set_AuthenticationSchemes, addr 0xac97cec, size 0x24, virtual false, abstract: false, final false
inline void set_AuthenticationSchemes(::System::Net::AuthenticationSchemes  value) ;

/// @brief Method set_ExtendedProtectionPolicy, addr 0xac97f4c, size 0x184, virtual false, abstract: false, final false
inline void set_ExtendedProtectionPolicy(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  value) ;

/// @brief Method set_ExtendedProtectionSelectorDelegate, addr 0xac97dbc, size 0xfc, virtual false, abstract: false, final false
inline void set_ExtendedProtectionSelectorDelegate(::System::Net::HttpListener_ExtendedProtectionSelector*  value) ;

/// @brief Method set_IgnoreWriteExceptions, addr 0xac97ec0, size 0x24, virtual false, abstract: false, final false
inline void set_IgnoreWriteExceptions(bool  value) ;

/// @brief Method set_Realm, addr 0xac980f0, size 0x2c, virtual false, abstract: false, final false
inline void set_Realm(::StringW  value) ;

/// @brief Method set_UnsafeConnectionNtlmAuthentication, addr 0xac98124, size 0x24, virtual false, abstract: false, final false
inline void set_UnsafeConnectionNtlmAuthentication(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListener(HttpListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListener(HttpListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10680};

/// @brief Field tlsProvider, offset: 0x10, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsProvider*  ___tlsProvider;

/// @brief Field tlsSettings, offset: 0x18, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsSettings*  ___tlsSettings;

/// @brief Field certificate, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate*  ___certificate;

/// @brief Field auth_schemes, offset: 0x28, size: 0x4, def value: None
 ::System::Net::AuthenticationSchemes  ___auth_schemes;

/// @brief Field prefixes, offset: 0x30, size: 0x8, def value: None
 ::System::Net::HttpListenerPrefixCollection*  ___prefixes;

/// @brief Field auth_selector, offset: 0x38, size: 0x8, def value: None
 ::System::Net::AuthenticationSchemeSelector*  ___auth_selector;

/// @brief Field realm, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___realm;

/// @brief Field ignore_write_exceptions, offset: 0x48, size: 0x1, def value: None
 bool  ___ignore_write_exceptions;

/// @brief Field unsafe_ntlm_auth, offset: 0x49, size: 0x1, def value: None
 bool  ___unsafe_ntlm_auth;

/// @brief Field listening, offset: 0x4a, size: 0x1, def value: None
 bool  ___listening;

/// @brief Field disposed, offset: 0x4b, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field _internalLock, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____internalLock;

/// @brief Field registry, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___registry;

/// @brief Field ctx_queue, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___ctx_queue;

/// @brief Field wait_queue, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___wait_queue;

/// @brief Field connections, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___connections;

/// @brief Field defaultServiceNames, offset: 0x78, size: 0x8, def value: None
 ::System::Net::ServiceNameStore*  ___defaultServiceNames;

/// @brief Field extendedProtectionPolicy, offset: 0x80, size: 0x8, def value: None
 ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*  ___extendedProtectionPolicy;

/// @brief Field extendedProtectionSelectorDelegate, offset: 0x88, size: 0x8, def value: None
 ::System::Net::HttpListener_ExtendedProtectionSelector*  ___extendedProtectionSelectorDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpListener, ___tlsProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___tlsSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___certificate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___auth_schemes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___prefixes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___auth_selector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___realm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___ignore_write_exceptions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___unsafe_ntlm_auth) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___listening) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___disposed) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ____internalLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___registry) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___ctx_queue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___wait_queue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___connections) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___defaultServiceNames) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___extendedProtectionPolicy) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::HttpListener, ___extendedProtectionSelectorDelegate) == 0x88, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpListener) == 0x90, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpListener/ExtendedProtectionSelector
class CORDL_TYPE HttpListener_ExtendedProtectionSelector : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac9a75c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest*  request, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac9a77c, size 0xc, virtual true, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac9a748, size 0x14, virtual true, abstract: false, final false
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* Invoke(::System::Net::HttpListenerRequest*  request) ;

static inline ::System::Net::HttpListener_ExtendedProtectionSelector* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac9a698, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListener_ExtendedProtectionSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListener_ExtendedProtectionSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListener_ExtendedProtectionSelector(HttpListener_ExtendedProtectionSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListener_ExtendedProtectionSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListener_ExtendedProtectionSelector(HttpListener_ExtendedProtectionSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10679};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpListener_ExtendedProtectionSelector) == 0x80, "Size mismatch!");

} // namespace end def System::Net
