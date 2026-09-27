#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS5.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__PKCS5_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::PKCS5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS5::*)()>(&::Mono::Security::X509::PKCS5::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0dce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS5*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::PKCS5::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS5*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::PKCS5* Mono::Security::X509::PKCS5::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS5*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::PKCS5::PKCS5()   {
}
