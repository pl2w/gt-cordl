#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PublicAPIAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__PublicAPIAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::PublicAPIAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PublicAPIAttribute::*)()>(&::JetBrains::Annotations::PublicAPIAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb560640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::PublicAPIAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::PublicAPIAttribute* JetBrains::Annotations::PublicAPIAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::PublicAPIAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::PublicAPIAttribute::PublicAPIAttribute()   {
}
