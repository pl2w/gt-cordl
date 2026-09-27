#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/ClientSslConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClientSslConfiguration)
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net::Security {
struct SslPolicyErrors;
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
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
class Object;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class ClientSslConfiguration;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::ClientSslConfiguration*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::ClientSslConfiguration*, "WebSocketSharp.Net", "ClientSslConfiguration");
// Dependencies System.Object, System.Security.Authentication.SslProtocols
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.ClientSslConfiguration
class CORDL_TYPE ClientSslConfiguration : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CheckCertificateRevocation)) bool  CheckCertificateRevocation;

 __declspec(property(get=get_ClientCertificateSelectionCallback)) ::System::Net::Security::LocalCertificateSelectionCallback*  ClientCertificateSelectionCallback;

 __declspec(property(get=get_ClientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ClientCertificates;

 __declspec(property(get=get_EnabledSslProtocols)) ::System::Security::Authentication::SslProtocols  EnabledSslProtocols;

 __declspec(property(get=get_ServerCertificateValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  ServerCertificateValidationCallback;

 __declspec(property(get=get_TargetHost)) ::StringW  TargetHost;

/// @brief Field _checkCertRevocation, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__checkCertRevocation, put=__cordl_internal_set__checkCertRevocation)) bool  _checkCertRevocation;

/// @brief Field _clientCertSelectionCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientCertSelectionCallback, put=__cordl_internal_set__clientCertSelectionCallback)) ::System::Net::Security::LocalCertificateSelectionCallback*  _clientCertSelectionCallback;

/// @brief Field _clientCerts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientCerts, put=__cordl_internal_set__clientCerts)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  _clientCerts;

/// @brief Field _enabledSslProtocols, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__enabledSslProtocols, put=__cordl_internal_set__enabledSslProtocols)) ::System::Security::Authentication::SslProtocols  _enabledSslProtocols;

/// @brief Field _serverCertValidationCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverCertValidationCallback, put=__cordl_internal_set__serverCertValidationCallback)) ::System::Net::Security::RemoteCertificateValidationCallback*  _serverCertValidationCallback;

/// @brief Field _targetHost, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetHost, put=__cordl_internal_set__targetHost)) ::StringW  _targetHost;

static inline ::WebSocketSharp::Net::ClientSslConfiguration* New_ctor(::StringW  targetHost) ;

constexpr bool const& __cordl_internal_get__checkCertRevocation() const;

constexpr bool& __cordl_internal_get__checkCertRevocation() ;

constexpr ::System::Net::Security::LocalCertificateSelectionCallback* const& __cordl_internal_get__clientCertSelectionCallback() const;

constexpr ::System::Net::Security::LocalCertificateSelectionCallback*& __cordl_internal_get__clientCertSelectionCallback() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get__clientCerts() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get__clientCerts() ;

constexpr ::System::Security::Authentication::SslProtocols const& __cordl_internal_get__enabledSslProtocols() const;

constexpr ::System::Security::Authentication::SslProtocols& __cordl_internal_get__enabledSslProtocols() ;

constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& __cordl_internal_get__serverCertValidationCallback() const;

constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get__serverCertValidationCallback() ;

constexpr ::StringW const& __cordl_internal_get__targetHost() const;

constexpr ::StringW& __cordl_internal_get__targetHost() ;

constexpr void __cordl_internal_set__checkCertRevocation(bool  value) ;

constexpr void __cordl_internal_set__clientCertSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback*  value) ;

constexpr void __cordl_internal_set__clientCerts(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols  value) ;

constexpr void __cordl_internal_set__serverCertValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

constexpr void __cordl_internal_set__targetHost(::StringW  value) ;

/// @brief Method .ctor, addr 0xb98b3bc, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::StringW  targetHost) ;

/// @brief Method defaultSelectClientCertificate, addr 0xb98b5c8, size 0x8, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* defaultSelectClientCertificate(::System::Object*  sender, ::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate*  serverCertificate, ::ArrayW<::StringW>  acceptableIssuers) ;

/// @brief Method defaultValidateServerCertificate, addr 0xb98b5d0, size 0x8, virtual false, abstract: false, final false
static inline bool defaultValidateServerCertificate(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

/// @brief Method get_CheckCertificateRevocation, addr 0xb98b490, size 0x8, virtual false, abstract: false, final false
inline bool get_CheckCertificateRevocation() ;

/// @brief Method get_ClientCertificateSelectionCallback, addr 0xb98b4a0, size 0x8c, virtual false, abstract: false, final false
inline ::System::Net::Security::LocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback() ;

/// @brief Method get_ClientCertificates, addr 0xb98b498, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates() ;

/// @brief Method get_EnabledSslProtocols, addr 0xb98b52c, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method get_ServerCertificateValidationCallback, addr 0xb98b534, size 0x8c, virtual false, abstract: false, final false
inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback() ;

/// @brief Method get_TargetHost, addr 0xb98b5c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TargetHost() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientSslConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientSslConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientSslConfiguration(ClientSslConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientSslConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientSslConfiguration(ClientSslConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30371};

/// @brief Field _checkCertRevocation, offset: 0x10, size: 0x1, def value: None
 bool  ____checkCertRevocation;

/// @brief Field _clientCertSelectionCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Security::LocalCertificateSelectionCallback*  ____clientCertSelectionCallback;

/// @brief Field _clientCerts, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ____clientCerts;

/// @brief Field _enabledSslProtocols, offset: 0x28, size: 0x4, def value: None
 ::System::Security::Authentication::SslProtocols  ____enabledSslProtocols;

/// @brief Field _serverCertValidationCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Security::RemoteCertificateValidationCallback*  ____serverCertValidationCallback;

/// @brief Field _targetHost, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____targetHost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____checkCertRevocation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____clientCertSelectionCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____clientCerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____enabledSslProtocols) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____serverCertValidationCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::ClientSslConfiguration, ____targetHost) == 0x38, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::ClientSslConfiguration) == 0x40, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
