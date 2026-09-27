#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeAppeal.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDAgeAppeal_def.hpp"
#include "GlobalNamespace/zzzz__AgeSliderWithProgressBar_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeAppeal__OnNewAgeConfirmed_d__6_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealEmailScreen_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDAgeAppeal.ShowAgeAppealScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeAppeal::*)()>(&::GlobalNamespace::KIDAgeAppeal::ShowAgeAppealScreen)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a2764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {"ShowAgeAppealScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeAppeal.OnNewAgeConfirmed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeAppeal::*)()>(&::GlobalNamespace::KIDAgeAppeal::OnNewAgeConfirmed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a27704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {"OnNewAgeConfirmed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeAppeal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeAppeal::*)()>(&::GlobalNamespace::KIDAgeAppeal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a277ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageText;
}
constexpr void GlobalNamespace::KIDAgeAppeal::__cordl_internal_set__ageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageText = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageAppealEmailScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealEmailScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen> const& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageAppealEmailScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealEmailScreen;
}
constexpr void GlobalNamespace::KIDAgeAppeal::__cordl_internal_set__ageAppealEmailScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageAppealEmailScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__inputsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__inputsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputsContainer;
}
constexpr void GlobalNamespace::KIDAgeAppeal::__cordl_internal_set__inputsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputsContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__monkeLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monkeLoader;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__monkeLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monkeLoader;
}
constexpr void GlobalNamespace::KIDAgeAppeal::__cordl_internal_set__monkeLoader(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monkeLoader = value;
}
constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageSlider;
}
constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar> const& GlobalNamespace::KIDAgeAppeal::__cordl_internal_get__ageSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageSlider;
}
constexpr void GlobalNamespace::KIDAgeAppeal::__cordl_internal_set__ageSlider(::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageSlider = value;
}
inline void GlobalNamespace::KIDAgeAppeal::ShowAgeAppealScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {"ShowAgeAppealScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeAppeal::OnNewAgeConfirmed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {"OnNewAgeConfirmed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeAppeal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDAgeAppeal* GlobalNamespace::KIDAgeAppeal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDAgeAppeal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDAgeAppeal::KIDAgeAppeal()   {
}
