#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealEmailScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealEmailScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealEmailConfirmation_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailScreen.ShowAgeAppealEmailScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailScreen::*)(bool, int32_t)>(&::GlobalNamespace::KIDUI_AgeAppealEmailScreen::ShowAgeAppealEmailScreen)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5a4da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"ShowAgeAppealEmailScreen", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailScreen.OnInputChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnInputChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a4dd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnInputChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailScreen.OnConfirmPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnConfirmPressed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a4ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a4df28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealEmailScreen::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a4df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__confirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__confirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmButton = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__confirmationScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation> const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__confirmationScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationScreen;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set__confirmationScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmationScreen = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__enterEmailText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterEmailText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__enterEmailText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterEmailText;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set__enterEmailText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enterEmailText = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__emailText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailText;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__emailText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailText;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set__emailText(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__parentPermissionNotice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentPermissionNotice;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get__parentPermissionNotice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentPermissionNotice;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set__parentPermissionNotice(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentPermissionNotice = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_PARENT_EMAIL_DESCRIPTION()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PARENT_EMAIL_DESCRIPTION;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_PARENT_EMAIL_DESCRIPTION() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PARENT_EMAIL_DESCRIPTION;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set_PARENT_EMAIL_DESCRIPTION(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PARENT_EMAIL_DESCRIPTION = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_VERIFY_AGE_EMAIL_DESCRIPTION()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VERIFY_AGE_EMAIL_DESCRIPTION;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_VERIFY_AGE_EMAIL_DESCRIPTION() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VERIFY_AGE_EMAIL_DESCRIPTION;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set_VERIFY_AGE_EMAIL_DESCRIPTION(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VERIFY_AGE_EMAIL_DESCRIPTION = value;
}
constexpr bool& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_hasChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasChallenge;
}
constexpr bool const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_hasChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasChallenge;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set_hasChallenge(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasChallenge = value;
}
constexpr int32_t& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_newAgeToAppeal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAgeToAppeal;
}
constexpr int32_t const& GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_get_newAgeToAppeal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAgeToAppeal;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailScreen::__cordl_internal_set_newAgeToAppeal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newAgeToAppeal = value;
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailScreen::ShowAgeAppealEmailScreen(bool  receivedChallenge, int32_t  newAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"ShowAgeAppealEmailScreen", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivedChallenge, newAge);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnInputChanged(::StringW  newVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnInputChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVal);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnConfirmPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_AgeAppealEmailScreen* GlobalNamespace::KIDUI_AgeAppealEmailScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_AgeAppealEmailScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_AgeAppealEmailScreen::KIDUI_AgeAppealEmailScreen()   {
}
