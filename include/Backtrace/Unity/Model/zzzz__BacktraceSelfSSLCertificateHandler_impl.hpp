#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceSelfSSLCertificateHandler.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceSelfSSLCertificateHandler_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler.ValidateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::*)(::ArrayW<uint8_t>)>(&::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::ValidateCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::*)()>(&::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1266c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::setStaticF_PUB_KEY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "PUB_KEY", ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(std::forward<::StringW>(value));
}
inline ::StringW Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::getStaticF_PUB_KEY()  {
return ::cordl_internals::getStaticField<::StringW, "PUB_KEY", ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>();
}
inline bool Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::ValidateCertificate(::ArrayW<uint8_t>  certificateData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, certificateData);
}
inline void Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler* Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler::BacktraceSelfSSLCertificateHandler()   {
}
