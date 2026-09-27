#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonIgnoreAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JsonIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::JsonIgnoreAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonIgnoreAttribute::*)()>(&::Meta::WitAi::Json::JsonIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonIgnoreAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Json::JsonIgnoreAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonIgnoreAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::JsonIgnoreAttribute* Meta::WitAi::Json::JsonIgnoreAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonIgnoreAttribute*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JsonIgnoreAttribute::JsonIgnoreAttribute()   {
}
