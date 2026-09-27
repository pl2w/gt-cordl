#pragma once
// IWYU pragma private; include "GlobalNamespace/Localization_DebugScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Localization_DebugScreen_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Localization_DebugScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Localization_DebugScreen::*)()>(&::GlobalNamespace::Localization_DebugScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a68dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Localization_DebugScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Localization_DebugScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Localization_DebugScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Localization_DebugScreen* GlobalNamespace::Localization_DebugScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Localization_DebugScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Localization_DebugScreen::Localization_DebugScreen()   {
}
