#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealEmailError.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealEmailError_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealEmailScreen_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailError.ShowAgeAppealEmailErrorScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailError::*)(bool, int32_t, ::StringW)>(&::GlobalNamespace::KIDUI_AgeAppealEmailError::ShowAgeAppealEmailErrorScreen)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a4ed54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {"ShowAgeAppealEmailErrorScreen", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailError.onBackPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailError::*)()>(&::GlobalNamespace::KIDUI_AgeAppealEmailError::onBackPressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a4f8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {"onBackPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealEmailError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealEmailError::*)()>(&::GlobalNamespace::KIDUI_AgeAppealEmailError::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get__ageAppealEmailScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealEmailScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen> const& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get__ageAppealEmailScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealEmailScreen;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_set__ageAppealEmailScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageAppealEmailScreen = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get__emailText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get__emailText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailText;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_set__emailText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailText = value;
}
constexpr bool& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get_hasChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasChallenge;
}
constexpr bool const& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get_hasChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasChallenge;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_set_hasChallenge(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasChallenge = value;
}
constexpr int32_t& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get_newAge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAge;
}
constexpr int32_t const& GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_get_newAge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newAge;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealEmailError::__cordl_internal_set_newAge(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newAge = value;
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailError::ShowAgeAppealEmailErrorScreen(bool  hasChallenge, int32_t  newAge, ::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {"ShowAgeAppealEmailErrorScreen", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasChallenge, newAge, email);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailError::onBackPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {"onBackPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealEmailError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealEmailError*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_AgeAppealEmailError* GlobalNamespace::KIDUI_AgeAppealEmailError::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_AgeAppealEmailError*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_AgeAppealEmailError::KIDUI_AgeAppealEmailError()   {
}
