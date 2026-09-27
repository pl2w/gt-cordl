#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomLocalizedStrings.hpp"
#include "GlobalNamespace/zzzz__RandomContainer_1_impl.hpp"
#include "GlobalNamespace/zzzz__RandomLocalizedStrings_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomLocalizedStrings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomLocalizedStrings::*)()>(&::GlobalNamespace::RandomLocalizedStrings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ac2588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalizedStrings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RandomLocalizedStrings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalizedStrings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomLocalizedStrings* GlobalNamespace::RandomLocalizedStrings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomLocalizedStrings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomLocalizedStrings::RandomLocalizedStrings()   {
}
