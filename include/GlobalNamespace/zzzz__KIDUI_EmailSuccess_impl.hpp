#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_EmailSuccess.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_EmailSuccess_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_EmailSuccess.ShowSuccessScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_EmailSuccess::*)(::StringW)>(&::GlobalNamespace::KIDUI_EmailSuccess::ShowSuccessScreen)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5a52ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"ShowSuccessScreen", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_EmailSuccess.ShowSuccessScreenAppeal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_EmailSuccess::*)(::StringW)>(&::GlobalNamespace::KIDUI_EmailSuccess::ShowSuccessScreenAppeal)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5a4e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"ShowSuccessScreenAppeal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_EmailSuccess.OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_EmailSuccess::*)()>(&::GlobalNamespace::KIDUI_EmailSuccess::OnClose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a56414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"OnClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_EmailSuccess.OnCloseGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_EmailSuccess::*)()>(&::GlobalNamespace::KIDUI_EmailSuccess::OnCloseGame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a564ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"OnCloseGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_EmailSuccess._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_EmailSuccess::*)()>(&::GlobalNamespace::KIDUI_EmailSuccess::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5653c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_get__emailTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_get__emailTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailTxt;
}
constexpr void GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_set__emailTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailTxt = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_get__mainScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_get__mainScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr void GlobalNamespace::KIDUI_EmailSuccess::__cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreen = value;
}
inline void GlobalNamespace::KIDUI_EmailSuccess::ShowSuccessScreen(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"ShowSuccessScreen", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email);
}
inline void GlobalNamespace::KIDUI_EmailSuccess::ShowSuccessScreenAppeal(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"ShowSuccessScreenAppeal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email);
}
inline void GlobalNamespace::KIDUI_EmailSuccess::OnClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"OnClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_EmailSuccess::OnCloseGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {"OnCloseGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_EmailSuccess::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_EmailSuccess*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_EmailSuccess* GlobalNamespace::KIDUI_EmailSuccess::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_EmailSuccess*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_EmailSuccess::KIDUI_EmailSuccess()   {
}
