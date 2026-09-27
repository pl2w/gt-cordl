#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomStrings.hpp"
#include "GlobalNamespace/zzzz__RandomContainer_1_impl.hpp"
#include "GlobalNamespace/zzzz__RandomStrings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomStrings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomStrings::*)()>(&::GlobalNamespace::RandomStrings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ac25d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomStrings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RandomStrings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomStrings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomStrings* GlobalNamespace::RandomStrings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomStrings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomStrings::RandomStrings()   {
}
