#pragma once
// IWYU pragma private; include "Fusion/HideArrayElementLabelAttribute.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__HideArrayElementLabelAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::HideArrayElementLabelAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HideArrayElementLabelAttribute::*)()>(&::Fusion::HideArrayElementLabelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f3d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HideArrayElementLabelAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::HideArrayElementLabelAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HideArrayElementLabelAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HideArrayElementLabelAttribute* Fusion::HideArrayElementLabelAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HideArrayElementLabelAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::HideArrayElementLabelAttribute::HideArrayElementLabelAttribute()   {
}
