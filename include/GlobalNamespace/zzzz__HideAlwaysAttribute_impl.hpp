#pragma once
// IWYU pragma private; include "GlobalNamespace/HideAlwaysAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__HideAlwaysAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HideAlwaysAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HideAlwaysAttribute::*)()>(&::GlobalNamespace::HideAlwaysAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1c374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HideAlwaysAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HideAlwaysAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HideAlwaysAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HideAlwaysAttribute* GlobalNamespace::HideAlwaysAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HideAlwaysAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HideAlwaysAttribute::HideAlwaysAttribute()   {
}
