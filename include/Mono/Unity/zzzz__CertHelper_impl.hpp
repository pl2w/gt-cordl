#pragma once
// IWYU pragma private; include "Mono/Unity/CertHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__CertHelper_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_errorstate_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_unitytls_x509list_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificatesToNativeChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa8cdd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::CertHelper*>(),
                        {"AddCertificatesToNativeChain", {}, {::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_errorstate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::CertHelper.AddCertificateToNativeChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UnityTls_unitytls_x509list*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::GlobalNamespace::UnityTls_unitytls_errorstate*)>(&::Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa8cdeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::CertHelper*>(),
                        {"AddCertificateToNativeChain", {}, {::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_errorstate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Unity::CertHelper::AddCertificatesToNativeChain(::GlobalNamespace::UnityTls_unitytls_x509list*  nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  certificates, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::CertHelper*>(),
                        {"AddCertificatesToNativeChain", {}, {::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_errorstate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeCertificateChain, certificates, errorState);
}
inline void Mono::Unity::CertHelper::AddCertificateToNativeChain(::GlobalNamespace::UnityTls_unitytls_x509list*  nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::GlobalNamespace::UnityTls_unitytls_errorstate*  errorState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Unity::CertHelper*>(),
                        {"AddCertificateToNativeChain", {}, {::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_x509list*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::GlobalNamespace::UnityTls_unitytls_errorstate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeCertificateChain, certificate, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::CertHelper::CertHelper()   {
}
