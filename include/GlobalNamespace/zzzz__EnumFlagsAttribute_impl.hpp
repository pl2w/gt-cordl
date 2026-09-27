#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumFlagsAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__EnumFlagsAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnumFlagsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnumFlagsAttribute::*)()>(&::GlobalNamespace::EnumFlagsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b07c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnumFlagsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnumFlagsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnumFlagsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnumFlagsAttribute* GlobalNamespace::EnumFlagsAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnumFlagsAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnumFlagsAttribute::EnumFlagsAttribute()   {
}
