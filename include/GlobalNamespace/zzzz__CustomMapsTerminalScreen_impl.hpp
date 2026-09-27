#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminalScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapsKeyboard_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalScreen.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalScreen::*)()>(&::GlobalNamespace::CustomMapsTerminalScreen::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalScreen.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalScreen::*)()>(&::GlobalNamespace::CustomMapsTerminalScreen::Show)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a05670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalScreen.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalScreen::*)()>(&::GlobalNamespace::CustomMapsTerminalScreen::Hide)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a05778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalScreen.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalScreen::*)(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding)>(&::GlobalNamespace::CustomMapsTerminalScreen::PressButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a099b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalScreen::*)()>(&::GlobalNamespace::CustomMapsTerminalScreen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a06844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_terminalKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalKeyboard;
}
constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard> const& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_terminalKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalKeyboard;
}
constexpr void GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_set_terminalKeyboard(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalKeyboard = value;
}
constexpr float_t& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_activationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_activationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr void GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_set_activationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTime = value;
}
constexpr float_t& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_showTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_get_showTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTime;
}
constexpr void GlobalNamespace::CustomMapsTerminalScreen::__cordl_internal_set_showTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showTime = value;
}
inline void GlobalNamespace::CustomMapsTerminalScreen::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalScreen::Show()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalScreen::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalScreen::PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  pressedButton)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedButton);
}
inline void GlobalNamespace::CustomMapsTerminalScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsTerminalScreen* GlobalNamespace::CustomMapsTerminalScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsTerminalScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsTerminalScreen::CustomMapsTerminalScreen()   {
}
