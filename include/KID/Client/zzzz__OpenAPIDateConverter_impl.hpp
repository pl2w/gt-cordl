#pragma once
// IWYU pragma private; include "KID/Client/OpenAPIDateConverter.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IsoDateTimeConverter_impl.hpp"
#include "KID/Client/zzzz__OpenAPIDateConverter_def.hpp"
//  Writing Method size for method: ::KID::Client::OpenAPIDateConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Client::OpenAPIDateConverter::*)()>(&::KID::Client::OpenAPIDateConverter::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cdb39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Client::OpenAPIDateConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void KID::Client::OpenAPIDateConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Client::OpenAPIDateConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::KID::Client::OpenAPIDateConverter* KID::Client::OpenAPIDateConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Client::OpenAPIDateConverter*>());
}
// Ctor Parameters []
constexpr ::KID::Client::OpenAPIDateConverter::OpenAPIDateConverter()   {
}
