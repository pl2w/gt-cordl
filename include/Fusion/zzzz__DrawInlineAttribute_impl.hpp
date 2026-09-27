#pragma once
// IWYU pragma private; include "Fusion/DrawInlineAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__DrawInlineAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::DrawInlineAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DrawInlineAttribute::*)()>(&::Fusion::DrawInlineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawInlineAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::DrawInlineAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DrawInlineAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::DrawInlineAttribute* Fusion::DrawInlineAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DrawInlineAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::DrawInlineAttribute::DrawInlineAttribute()   {
}
