#pragma once
// IWYU pragma private; include "Fusion/NetworkDeserializeMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkDeserializeMethodAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkDeserializeMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkDeserializeMethodAttribute::*)()>(&::Fusion::NetworkDeserializeMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDeserializeMethodAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkDeserializeMethodAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDeserializeMethodAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkDeserializeMethodAttribute* Fusion::NetworkDeserializeMethodAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkDeserializeMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkDeserializeMethodAttribute::NetworkDeserializeMethodAttribute()   {
}
