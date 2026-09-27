#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JSONParseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JSONParseException_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::JSONParseException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JSONParseException::*)(::StringW)>(&::Meta::WitAi::Json::JSONParseException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e45168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JSONParseException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Json::JSONParseException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JSONParseException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Meta::WitAi::Json::JSONParseException* Meta::WitAi::Json::JSONParseException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JSONParseException*>(message));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JSONParseException::JSONParseException()   {
}
