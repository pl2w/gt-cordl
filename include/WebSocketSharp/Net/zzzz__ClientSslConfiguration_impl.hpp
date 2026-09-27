#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/ClientSslConfiguration.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__ClientSslConfiguration_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::ClientSslConfiguration::*)(::StringW)>(&::WebSocketSharp::Net::ClientSslConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb98b3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_CheckCertificateRevocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_CheckCertificateRevocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_CheckCertificateRevocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_ClientCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_ClientCertificateSelectionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::LocalCertificateSelectionCallback* (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb98b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ClientCertificateSelectionCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_EnabledSslProtocols
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::SslProtocols (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_EnabledSslProtocols", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_ServerCertificateValidationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_ServerCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb98b534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.get_TargetHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::ClientSslConfiguration::*)()>(&::WebSocketSharp::Net::ClientSslConfiguration::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_TargetHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.defaultSelectClientCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(&::WebSocketSharp::Net::ClientSslConfiguration::defaultSelectClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"defaultSelectClientCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::ClientSslConfiguration.defaultValidateServerCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&::WebSocketSharp::Net::ClientSslConfiguration::defaultValidateServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"defaultValidateServerCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__checkCertRevocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkCertRevocation;
}
constexpr bool const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__checkCertRevocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkCertRevocation;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__checkCertRevocation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkCertRevocation = value;
}
constexpr ::System::Net::Security::LocalCertificateSelectionCallback*& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__clientCertSelectionCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCertSelectionCallback;
}
constexpr ::System::Net::Security::LocalCertificateSelectionCallback* const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__clientCertSelectionCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCertSelectionCallback;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__clientCertSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientCertSelectionCallback = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__clientCerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCerts;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__clientCerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientCerts;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__clientCerts(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientCerts = value;
}
constexpr ::System::Security::Authentication::SslProtocols& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__enabledSslProtocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledSslProtocols;
}
constexpr ::System::Security::Authentication::SslProtocols const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__enabledSslProtocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledSslProtocols;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__enabledSslProtocols(::System::Security::Authentication::SslProtocols  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabledSslProtocols = value;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__serverCertValidationCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverCertValidationCallback;
}
constexpr ::System::Net::Security::RemoteCertificateValidationCallback* const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__serverCertValidationCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverCertValidationCallback;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__serverCertValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverCertValidationCallback = value;
}
constexpr ::StringW& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__targetHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHost;
}
constexpr ::StringW const& WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_get__targetHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetHost;
}
constexpr void WebSocketSharp::Net::ClientSslConfiguration::__cordl_internal_set__targetHost(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetHost = value;
}
inline void WebSocketSharp::Net::ClientSslConfiguration::_ctor(::StringW  targetHost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetHost);
}
inline bool WebSocketSharp::Net::ClientSslConfiguration::get_CheckCertificateRevocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_CheckCertificateRevocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* WebSocketSharp::Net::ClientSslConfiguration::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ClientCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, ___internal_method);
}
inline ::System::Net::Security::LocalCertificateSelectionCallback* WebSocketSharp::Net::ClientSslConfiguration::get_ClientCertificateSelectionCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ClientCertificateSelectionCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::LocalCertificateSelectionCallback*>(this, ___internal_method);
}
inline ::System::Security::Authentication::SslProtocols WebSocketSharp::Net::ClientSslConfiguration::get_EnabledSslProtocols()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_EnabledSslProtocols", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols>(this, ___internal_method);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* WebSocketSharp::Net::ClientSslConfiguration::get_ServerCertificateValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_ServerCertificateValidationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::ClientSslConfiguration::get_TargetHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"get_TargetHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* WebSocketSharp::Net::ClientSslConfiguration::defaultSelectClientCertificate(::System::Object*  sender, ::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate*  serverCertificate, ::ArrayW<::StringW>  acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"defaultSelectClientCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(nullptr, ___internal_method, sender, targetHost, clientCertificates, serverCertificate, acceptableIssuers);
}
inline bool WebSocketSharp::Net::ClientSslConfiguration::defaultValidateServerCertificate(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::ClientSslConfiguration*>(),
                        {"defaultValidateServerCertificate", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
inline ::WebSocketSharp::Net::ClientSslConfiguration* WebSocketSharp::Net::ClientSslConfiguration::New_ctor(::StringW  targetHost)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::ClientSslConfiguration*>(targetHost));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::ClientSslConfiguration::ClientSslConfiguration()   {
}
