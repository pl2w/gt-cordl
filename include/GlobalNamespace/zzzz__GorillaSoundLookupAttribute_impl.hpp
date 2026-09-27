#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSoundLookupAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSoundLookupAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSoundLookupAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSoundLookupAttribute::*)()>(&::GlobalNamespace::GorillaSoundLookupAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5675620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSoundLookupAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaSoundLookupAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSoundLookupAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSoundLookupAttribute* GlobalNamespace::GorillaSoundLookupAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSoundLookupAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSoundLookupAttribute::GorillaSoundLookupAttribute()   {
}
