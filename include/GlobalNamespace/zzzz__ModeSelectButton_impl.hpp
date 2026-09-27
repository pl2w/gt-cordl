#pragma once
// IWYU pragma private; include "GlobalNamespace/ModeSelectButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__ModeSelectButton_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownTextDate_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_def.hpp"
#include "GlobalNamespace/zzzz__PartyGameModeWarning_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.get_WarningScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PartyGameModeWarning> (::GlobalNamespace::ModeSelectButton::*)()>(&::GlobalNamespace::ModeSelectButton::get_WarningScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"get_WarningScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.set_WarningScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)(::GlobalNamespace::PartyGameModeWarning*)>(&::GlobalNamespace::ModeSelectButton::set_WarningScreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"set_WarningScreen", {}, {::i2c::type_of<::GlobalNamespace::PartyGameModeWarning*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)()>(&::GlobalNamespace::ModeSelectButton::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5968e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                    {::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)()>(&::GlobalNamespace::ModeSelectButton::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5968f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)(bool)>(&::GlobalNamespace::ModeSelectButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5969060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                    {::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.OnGameModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)(::StringW)>(&::GlobalNamespace::ModeSelectButton::OnGameModeChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5969118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"OnGameModeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.SetInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)(::StringW, ::StringW, bool, ::GameObjectScheduling::CountdownTextDate*)>(&::GlobalNamespace::ModeSelectButton::SetInfo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5969190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"SetInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GameObjectScheduling::CountdownTextDate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton.HideNewAndLimitedTimeInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)()>(&::GlobalNamespace::ModeSelectButton::HideNewAndLimitedTimeInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59692c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"HideNewAndLimitedTimeInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModeSelectButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModeSelectButton::*)()>(&::GlobalNamespace::ModeSelectButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5969304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ModeSelectButton::__cordl_internal_get_gameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr ::StringW const& GlobalNamespace::ModeSelectButton::__cordl_internal_get_gameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameMode;
}
constexpr void GlobalNamespace::ModeSelectButton::__cordl_internal_set_gameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameMode = value;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& GlobalNamespace::ModeSelectButton::__cordl_internal_get_warningScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningScreen;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& GlobalNamespace::ModeSelectButton::__cordl_internal_get_warningScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningScreen;
}
constexpr void GlobalNamespace::ModeSelectButton::__cordl_internal_set_warningScreen(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningScreen = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::ModeSelectButton::__cordl_internal_get_gameModeTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::ModeSelectButton::__cordl_internal_get_gameModeTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeTitle;
}
constexpr void GlobalNamespace::ModeSelectButton::__cordl_internal_set_gameModeTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeTitle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ModeSelectButton::__cordl_internal_get_newModeSplash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newModeSplash;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ModeSelectButton::__cordl_internal_get_newModeSplash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newModeSplash;
}
constexpr void GlobalNamespace::ModeSelectButton::__cordl_internal_set_newModeSplash(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newModeSplash = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GlobalNamespace::ModeSelectButton::__cordl_internal_get_limitedCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedCountdown;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GlobalNamespace::ModeSelectButton::__cordl_internal_get_limitedCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedCountdown;
}
constexpr void GlobalNamespace::ModeSelectButton::__cordl_internal_set_limitedCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitedCountdown = value;
}
inline ::UnityW<::GlobalNamespace::PartyGameModeWarning> GlobalNamespace::ModeSelectButton::get_WarningScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"get_WarningScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PartyGameModeWarning>>(this, ___internal_method);
}
inline void GlobalNamespace::ModeSelectButton::set_WarningScreen(::GlobalNamespace::PartyGameModeWarning*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"set_WarningScreen", {}, {::i2c::type_of<::GlobalNamespace::PartyGameModeWarning*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ModeSelectButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModeSelectButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModeSelectButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::ModeSelectButton::OnGameModeChanged(::StringW  newGameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"OnGameModeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameMode);
}
inline void GlobalNamespace::ModeSelectButton::SetInfo(::StringW  Mode, ::StringW  ModeTitle, bool  NewMode, ::GameObjectScheduling::CountdownTextDate*  CountdownTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"SetInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GameObjectScheduling::CountdownTextDate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Mode, ModeTitle, NewMode, CountdownTo);
}
inline void GlobalNamespace::ModeSelectButton::HideNewAndLimitedTimeInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {"HideNewAndLimitedTimeInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModeSelectButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModeSelectButton* GlobalNamespace::ModeSelectButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModeSelectButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModeSelectButton::ModeSelectButton()   {
}
