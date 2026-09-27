#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_ConfirmScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ConfirmScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AnimatedEllipsis_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ConfirmScreen__OnBackPressed_d__17_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ConfirmScreen__OnConfirmPressed_d__16_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ConfirmScreen__ShowErrorScreen_d__19_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_EmailSuccess_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ErrorScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SetupScreen_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::Awake)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5a5191c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a51be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.OnEmailSubmitted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_ConfirmScreen::OnEmailSubmitted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a51c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnEmailSubmitted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.OnConfirmPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::OnConfirmPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a51c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.OnBackPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::OnBackPressed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a51d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnBackPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.NotifyOfResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)(bool)>(&::GlobalNamespace::KIDUI_ConfirmScreen::NotifyOfResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a51dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"NotifyOfResult", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.ShowErrorScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_ConfirmScreen::ShowErrorScreen)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a51ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"ShowErrorScreen", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a51e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_ConfirmScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_ConfirmScreen::*)()>(&::GlobalNamespace::KIDUI_ConfirmScreen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a51ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__emailToConfirmTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailToConfirmTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__emailToConfirmTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailToConfirmTxt;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__emailToConfirmTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailToConfirmTxt = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__mainScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__mainScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__setupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__setupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupScreen;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__setupScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__errorScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__errorScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorScreen;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__errorScreen(::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__successScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____successScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__successScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____successScreen;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__successScreen(::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____successScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__animatedEllipsis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__animatedEllipsis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatedEllipsis = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__confirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__confirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmButton = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__backButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__backButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__backButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backButton = value;
}
constexpr int32_t& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__minimumDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumDelay;
}
constexpr int32_t const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__minimumDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumDelay;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__minimumDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minimumDelay = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__submittedEmailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submittedEmailAddress;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__submittedEmailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submittedEmailAddress;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__submittedEmailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____submittedEmailAddress = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
constexpr bool& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__hasCompletedSendEmailRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCompletedSendEmailRequest;
}
constexpr bool const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__hasCompletedSendEmailRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCompletedSendEmailRequest;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__hasCompletedSendEmailRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasCompletedSendEmailRequest = value;
}
constexpr bool& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__emailRequestResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailRequestResult;
}
constexpr bool const& GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_get__emailRequestResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailRequestResult;
}
constexpr void GlobalNamespace::KIDUI_ConfirmScreen::__cordl_internal_set__emailRequestResult(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailRequestResult = value;
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::OnEmailSubmitted(::StringW  emailAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnEmailSubmitted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emailAddress);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::OnConfirmPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::OnBackPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnBackPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::NotifyOfResult(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"NotifyOfResult", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::ShowErrorScreen(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"ShowErrorScreen", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_ConfirmScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_ConfirmScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_ConfirmScreen* GlobalNamespace::KIDUI_ConfirmScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_ConfirmScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_ConfirmScreen::KIDUI_ConfirmScreen()   {
}
