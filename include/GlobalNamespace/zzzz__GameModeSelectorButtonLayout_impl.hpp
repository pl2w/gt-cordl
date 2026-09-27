#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSelectorButtonLayout.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSelectorButtonLayout_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSelectorButtonLayout__SetupButtons_d__9_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__ModeSelectButton_def.hpp"
#include "GlobalNamespace/zzzz__PartyGameModeWarning_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectorButtonLayout.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectorButtonLayout::*)()>(&::GlobalNamespace::GameModeSelectorButtonLayout::OnEnable)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5705f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectorButtonLayout.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectorButtonLayout::*)()>(&::GlobalNamespace::GameModeSelectorButtonLayout::OnDisable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5706110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectorButtonLayout.SetupButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectorButtonLayout::*)()>(&::GlobalNamespace::GameModeSelectorButtonLayout::SetupButtons)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x570629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectorButtonLayout._OnPressedSuperToggleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectorButtonLayout::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::GameModeSelectorButtonLayout::_OnPressedSuperToggleButton)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5706340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"_OnPressedSuperToggleButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectorButtonLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectorButtonLayout::*)()>(&::GlobalNamespace::GameModeSelectorButtonLayout::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5706700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_superToggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superToggleButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_superToggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superToggleButton;
}
constexpr void GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_set_superToggleButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___superToggleButton = value;
}
constexpr ::UnityW<::GlobalNamespace::ModeSelectButton>& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_pf_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pf_button;
}
constexpr ::UnityW<::GlobalNamespace::ModeSelectButton> const& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_pf_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pf_button;
}
constexpr void GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_set_pf_button(::UnityW<::GlobalNamespace::ModeSelectButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pf_button = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_warningScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningScreen;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_warningScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningScreen;
}
constexpr void GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_set_warningScreen(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningScreen = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_currentButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>* const& GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_get_currentButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentButtons;
}
constexpr void GlobalNamespace::GameModeSelectorButtonLayout::__cordl_internal_set_currentButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentButtons = value;
}
inline void GlobalNamespace::GameModeSelectorButtonLayout::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSelectorButtonLayout::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSelectorButtonLayout::SetupButtons()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSelectorButtonLayout::_OnPressedSuperToggleButton(::GlobalNamespace::GorillaPressableButton*  btn, bool  isLeftHandPress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {"_OnPressedSuperToggleButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btn, isLeftHandPress);
}
inline void GlobalNamespace::GameModeSelectorButtonLayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectorButtonLayout*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModeSelectorButtonLayout* GlobalNamespace::GameModeSelectorButtonLayout::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSelectorButtonLayout*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSelectorButtonLayout::GameModeSelectorButtonLayout()   {
}
