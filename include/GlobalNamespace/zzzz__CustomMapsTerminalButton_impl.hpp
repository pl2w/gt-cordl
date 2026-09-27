#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminalButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalButton::*)()>(&::GlobalNamespace::CustomMapsTerminalButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a099b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomMapsTerminalButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsTerminalButton* GlobalNamespace::CustomMapsTerminalButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsTerminalButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsTerminalButton::CustomMapsTerminalButton()   {
}
