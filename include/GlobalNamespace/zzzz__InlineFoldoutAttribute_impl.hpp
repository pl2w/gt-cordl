#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineFoldoutAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__InlineFoldoutAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InlineFoldoutAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InlineFoldoutAttribute::*)()>(&::GlobalNamespace::InlineFoldoutAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56466e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InlineFoldoutAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InlineFoldoutAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InlineFoldoutAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InlineFoldoutAttribute* GlobalNamespace::InlineFoldoutAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InlineFoldoutAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InlineFoldoutAttribute::InlineFoldoutAttribute()   {
}
