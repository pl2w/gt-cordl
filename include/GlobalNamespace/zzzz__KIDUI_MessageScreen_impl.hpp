#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MessageScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MessageScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MessageScreen.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MessageScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_MessageScreen::Show)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a5abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"Show", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MessageScreen.OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MessageScreen::*)()>(&::GlobalNamespace::KIDUI_MessageScreen::OnClose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a5ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"OnClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MessageScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MessageScreen::*)()>(&::GlobalNamespace::KIDUI_MessageScreen::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a5ac88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MessageScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MessageScreen::*)()>(&::GlobalNamespace::KIDUI_MessageScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_get__mainScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_get__mainScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr void GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreen = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_get__errorTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_get__errorTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorTxt;
}
constexpr void GlobalNamespace::KIDUI_MessageScreen::__cordl_internal_set__errorTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorTxt = value;
}
inline void GlobalNamespace::KIDUI_MessageScreen::Show(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"Show", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline void GlobalNamespace::KIDUI_MessageScreen::OnClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"OnClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MessageScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MessageScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MessageScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_MessageScreen* GlobalNamespace::KIDUI_MessageScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_MessageScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_MessageScreen::KIDUI_MessageScreen()   {
}
