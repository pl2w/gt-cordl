#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_RestrictedAccessScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_RestrictedAccessScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeAppeal_def.hpp"
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_RestrictedAccessScreen.ShowRestrictedAccessScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_RestrictedAccessScreen::*)(::System::Nullable_1<::GlobalNamespace::SessionStatus>)>(&::GlobalNamespace::KIDUI_RestrictedAccessScreen::ShowRestrictedAccessScreen)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"ShowRestrictedAccessScreen", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::SessionStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_RestrictedAccessScreen.OnChangeAgePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_RestrictedAccessScreen::*)()>(&::GlobalNamespace::KIDUI_RestrictedAccessScreen::OnChangeAgePressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a5acb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"OnChangeAgePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_RestrictedAccessScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_RestrictedAccessScreen::*)()>(&::GlobalNamespace::KIDUI_RestrictedAccessScreen::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a5ad04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_RestrictedAccessScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_RestrictedAccessScreen::*)()>(&::GlobalNamespace::KIDUI_RestrictedAccessScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5ad2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDAgeAppeal>& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__ageAppealScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDAgeAppeal> const& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__ageAppealScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageAppealScreen;
}
constexpr void GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_set__ageAppealScreen(::UnityW<::GlobalNamespace::KIDAgeAppeal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageAppealScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__pendingStatusIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingStatusIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__pendingStatusIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingStatusIndicator;
}
constexpr void GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_set__pendingStatusIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingStatusIndicator = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__prohibitedStatusIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prohibitedStatusIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_get__prohibitedStatusIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prohibitedStatusIndicator;
}
constexpr void GlobalNamespace::KIDUI_RestrictedAccessScreen::__cordl_internal_set__prohibitedStatusIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prohibitedStatusIndicator = value;
}
inline void GlobalNamespace::KIDUI_RestrictedAccessScreen::ShowRestrictedAccessScreen(::System::Nullable_1<::GlobalNamespace::SessionStatus>  sessionStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"ShowRestrictedAccessScreen", {}, {::i2c::type_of<::System::Nullable_1<::GlobalNamespace::SessionStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionStatus);
}
inline void GlobalNamespace::KIDUI_RestrictedAccessScreen::OnChangeAgePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"OnChangeAgePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_RestrictedAccessScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_RestrictedAccessScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_RestrictedAccessScreen* GlobalNamespace::KIDUI_RestrictedAccessScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_RestrictedAccessScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_RestrictedAccessScreen::KIDUI_RestrictedAccessScreen()   {
}
