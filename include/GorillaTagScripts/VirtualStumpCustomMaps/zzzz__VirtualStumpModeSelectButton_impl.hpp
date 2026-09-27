#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpModeSelectButton.hpp"
#include "GlobalNamespace/zzzz__ModeSelectButton_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpModeSelectButton_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::*)(bool)>(&::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5bee7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5beea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton* GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton::VirtualStumpModeSelectButton()   {
}
