#pragma once
// IWYU pragma private; include "System/Net/DefaultCertificatePolicy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__DefaultCertificatePolicy_def.hpp"
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::System::Net::DefaultCertificatePolicy.CheckValidationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DefaultCertificatePolicy::*)(::System::Net::ServicePoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Net::WebRequest*, int32_t)>(&::System::Net::DefaultCertificatePolicy::CheckValidationResult)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac8cf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DefaultCertificatePolicy*>(),
                        {"CheckValidationResult", {}, {::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DefaultCertificatePolicy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DefaultCertificatePolicy::*)()>(&::System::Net::DefaultCertificatePolicy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac8d004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DefaultCertificatePolicy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Net::DefaultCertificatePolicy::CheckValidationResult(::System::Net::ServicePoint*  point, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Net::WebRequest*  request, int32_t  certificateProblem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DefaultCertificatePolicy*>(),
                        {"CheckValidationResult", {}, {::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, certificate, request, certificateProblem);
}
inline void System::Net::DefaultCertificatePolicy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DefaultCertificatePolicy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::DefaultCertificatePolicy* System::Net::DefaultCertificatePolicy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DefaultCertificatePolicy*>());
}
/// @brief Convert operator to "::System::Net::ICertificatePolicy"
constexpr  System::Net::DefaultCertificatePolicy::operator ::System::Net::ICertificatePolicy*() noexcept {
return static_cast<::System::Net::ICertificatePolicy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICertificatePolicy"
constexpr ::System::Net::ICertificatePolicy* System::Net::DefaultCertificatePolicy::i___System__Net__ICertificatePolicy() noexcept {
return static_cast<::System::Net::ICertificatePolicy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::DefaultCertificatePolicy::DefaultCertificatePolicy()   {
}
