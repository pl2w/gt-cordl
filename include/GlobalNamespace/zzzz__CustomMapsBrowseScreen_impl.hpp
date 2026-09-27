#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsBrowseScreen.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBrowseScreen_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsBrowseScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsBrowseScreen::*)()>(&::GlobalNamespace::CustomMapsBrowseScreen::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f55fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsBrowseScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomMapsBrowseScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsBrowseScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsBrowseScreen* GlobalNamespace::CustomMapsBrowseScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsBrowseScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsBrowseScreen::CustomMapsBrowseScreen()   {
}
