#pragma once
// IWYU pragma private; include "Fusion/WeaverGeneratedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__WeaverGeneratedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::WeaverGeneratedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::WeaverGeneratedAttribute::*)()>(&::Fusion::WeaverGeneratedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f704f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WeaverGeneratedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::WeaverGeneratedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WeaverGeneratedAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::WeaverGeneratedAttribute* Fusion::WeaverGeneratedAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::WeaverGeneratedAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::WeaverGeneratedAttribute::WeaverGeneratedAttribute()   {
}
