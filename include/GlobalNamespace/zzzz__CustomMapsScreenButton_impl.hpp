#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsScreenButton.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenButton_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)()>(&::GlobalNamespace::CustomMapsScreenButton::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a048b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton.SetButtonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)(::StringW)>(&::GlobalNamespace::CustomMapsScreenButton::SetButtonText)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a049f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {"SetButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton.SetButtonActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)(bool)>(&::GlobalNamespace::CustomMapsScreenButton::SetButtonActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a04990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {"SetButtonActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton.PressButtonColourUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)()>(&::GlobalNamespace::CustomMapsScreenButton::PressButtonColourUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a04a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)()>(&::GlobalNamespace::CustomMapsScreenButton::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a04b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsScreenButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsScreenButton::*)()>(&::GlobalNamespace::CustomMapsScreenButton::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a04b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_bttnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bttnText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_bttnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bttnText;
}
constexpr void GlobalNamespace::CustomMapsScreenButton::__cordl_internal_set_bttnText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bttnText = value;
}
constexpr bool& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_isToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isToggle;
}
constexpr bool const& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_isToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isToggle;
}
constexpr void GlobalNamespace::CustomMapsScreenButton::__cordl_internal_set_isToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isToggle = value;
}
constexpr bool& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::CustomMapsScreenButton::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::CustomMapsScreenButton::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
inline void GlobalNamespace::CustomMapsScreenButton::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenButton::SetButtonText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {"SetButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::CustomMapsScreenButton::SetButtonActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {"SetButtonActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::CustomMapsScreenButton::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenButton::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsScreenButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsScreenButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsScreenButton* GlobalNamespace::CustomMapsScreenButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsScreenButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsScreenButton::CustomMapsScreenButton()   {
}
