#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminalControlButton.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalControlButton_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminal_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.get_IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::get_IsLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a94d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"get_IsLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.set_IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)(bool)>(&::GlobalNamespace::CustomMapsTerminalControlButton::set_IsLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a94dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"set_IsLocked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59a94e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.LockTerminalControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::LockTerminalControl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59a95d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"LockTerminalControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.UnlockTerminalControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::UnlockTerminalControl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"UnlockTerminalControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton.PressButtonColourUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::PressButtonColourUpdate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59a960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminalControlButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminalControlButton::*)()>(&::GlobalNamespace::CustomMapsTerminalControlButton::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59a9724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_bttnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bttnText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_bttnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bttnText;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_bttnText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bttnText = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedText;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedText;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_unlockedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedText = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedText;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedText;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_lockedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedText = value;
}
constexpr float_t& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedFontSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFontSize;
}
constexpr float_t const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedFontSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedFontSize;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_unlockedFontSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedFontSize = value;
}
constexpr float_t& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedFontSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedFontSize;
}
constexpr float_t const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedFontSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedFontSize;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_lockedFontSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedFontSize = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_unlockedTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTextColor;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_unlockedTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_lockedTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedTextColor;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_lockedTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedTextColor = value;
}
constexpr bool& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_isLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocked;
}
constexpr bool const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_isLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocked;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_isLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocked = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminal>& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_mapsTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapsTerminal;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminal> const& GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_get_mapsTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapsTerminal;
}
constexpr void GlobalNamespace::CustomMapsTerminalControlButton::__cordl_internal_set_mapsTerminal(::UnityW<::GlobalNamespace::CustomMapsTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapsTerminal = value;
}
inline bool GlobalNamespace::CustomMapsTerminalControlButton::get_IsLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"get_IsLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::set_IsLocked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"set_IsLocked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::LockTerminalControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"LockTerminalControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::UnlockTerminalControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {"UnlockTerminalControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminalControlButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminalControlButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsTerminalControlButton* GlobalNamespace::CustomMapsTerminalControlButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsTerminalControlButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsTerminalControlButton::CustomMapsTerminalControlButton()   {
}
