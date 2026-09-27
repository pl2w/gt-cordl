#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_ErrorScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ErrorScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SetupScreen_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ErrorScreen.ShowErrorScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ErrorScreen::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::KIDUI_ErrorScreen::ShowErrorScreen)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a53440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"ShowErrorScreen", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ErrorScreen.OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ErrorScreen::*)()>(&::GlobalNamespace::KIDUI_ErrorScreen::OnClose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a56544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ErrorScreen.OnQuitGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ErrorScreen::*)()>(&::GlobalNamespace::KIDUI_ErrorScreen::OnQuitGame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a5657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnQuitGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ErrorScreen.OnBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ErrorScreen::*)()>(&::GlobalNamespace::KIDUI_ErrorScreen::OnBack)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a565cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ErrorScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ErrorScreen::*)()>(&::GlobalNamespace::KIDUI_ErrorScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a56600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__titleTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__titleTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleTxt;
}
constexpr void GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_set__titleTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__emailTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__emailTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailTxt;
}
constexpr void GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_set__emailTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__errorTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__errorTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorTxt;
}
constexpr void GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_set__errorTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorTxt = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__mainScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__mainScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr void GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__setupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_get__setupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupScreen;
}
constexpr void GlobalNamespace::KIDUI_ErrorScreen::__cordl_internal_set__setupScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupScreen = value;
}
inline void GlobalNamespace::KIDUI_ErrorScreen::ShowErrorScreen(::StringW  title, ::StringW  email, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"ShowErrorScreen", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, email, errorMessage);
}
inline void GlobalNamespace::KIDUI_ErrorScreen::OnClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ErrorScreen::OnQuitGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnQuitGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ErrorScreen::OnBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {"OnBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ErrorScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ErrorScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_ErrorScreen* GlobalNamespace::KIDUI_ErrorScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_ErrorScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_ErrorScreen::KIDUI_ErrorScreen()   {
}
