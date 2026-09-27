#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningScreens.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WarningScreens_def.hpp"
#include "GlobalNamespace/zzzz__MessageBox_def.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_def.hpp"
#include "GlobalNamespace/zzzz__WarningScreens__StartOptInFollowUpScreenInternal_d__15_def.hpp"
#include "GlobalNamespace/zzzz__WarningScreens__StartOptInFollowUpScreen_d__17_def.hpp"
#include "GlobalNamespace/zzzz__WarningScreens__StartWarningScreenInternal_d__14_def.hpp"
#include "GlobalNamespace/zzzz__WarningScreens__StartWarningScreen_d__16_def.hpp"
#include "GlobalNamespace/zzzz__WarningScreens__WaitForResponse_d__18_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WarningScreens::*)()>(&::GlobalNamespace::WarningScreens::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a5bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.StartWarningScreenInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* (::GlobalNamespace::WarningScreens::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningScreens::StartWarningScreenInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a5be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartWarningScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.StartOptInFollowUpScreenInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* (::GlobalNamespace::WarningScreens::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningScreens::StartOptInFollowUpScreenInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a5bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartOptInFollowUpScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.StartWarningScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* (*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningScreens::StartWarningScreen)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a5c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartWarningScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.StartOptInFollowUpScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* (*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningScreens::StartOptInFollowUpScreen)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a5c178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartOptInFollowUpScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.WaitForResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::WarningScreens::WaitForResponse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a5c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"WaitForResponse", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WarningScreens::*)()>(&::GlobalNamespace::WarningScreens::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a5c358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.OnLeftButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WarningScreens::OnLeftButtonClicked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a5c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnLeftButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens.OnRightButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WarningScreens::OnRightButtonClicked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a5c3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnRightButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WarningScreens._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WarningScreens::*)()>(&::GlobalNamespace::WarningScreens::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5c478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MessageBox>& GlobalNamespace::WarningScreens::__cordl_internal_get__messageBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageBox;
}
constexpr ::UnityW<::GlobalNamespace::MessageBox> const& GlobalNamespace::WarningScreens::__cordl_internal_get__messageBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageBox;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__messageBox(::UnityW<::GlobalNamespace::MessageBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageBox = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::WarningScreens::__cordl_internal_get__imageContainerAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageContainerAfter;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::WarningScreens::__cordl_internal_get__imageContainerAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageContainerAfter;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__imageContainerAfter(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imageContainerAfter = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::WarningScreens::__cordl_internal_get__imageContainerBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageContainerBefore;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::WarningScreens::__cordl_internal_get__imageContainerBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageContainerBefore;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__imageContainerBefore(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imageContainerBefore = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::WarningScreens::__cordl_internal_get__withImageTextBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____withImageTextBefore;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::WarningScreens::__cordl_internal_get__withImageTextBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____withImageTextBefore;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__withImageTextBefore(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____withImageTextBefore = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::WarningScreens::__cordl_internal_get__withImageTextAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____withImageTextAfter;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::WarningScreens::__cordl_internal_get__withImageTextAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____withImageTextAfter;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__withImageTextAfter(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____withImageTextAfter = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::WarningScreens::__cordl_internal_get__noImageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noImageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::WarningScreens::__cordl_internal_get__noImageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noImageText;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__noImageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noImageText = value;
}
constexpr ::System::Action*& GlobalNamespace::WarningScreens::__cordl_internal_get__onLeftButtonPressedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLeftButtonPressedAction;
}
constexpr ::System::Action* const& GlobalNamespace::WarningScreens::__cordl_internal_get__onLeftButtonPressedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLeftButtonPressedAction;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__onLeftButtonPressedAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onLeftButtonPressedAction = value;
}
constexpr ::System::Action*& GlobalNamespace::WarningScreens::__cordl_internal_get__onRightButtonPressedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRightButtonPressedAction;
}
constexpr ::System::Action* const& GlobalNamespace::WarningScreens::__cordl_internal_get__onRightButtonPressedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRightButtonPressedAction;
}
constexpr void GlobalNamespace::WarningScreens::__cordl_internal_set__onRightButtonPressedAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRightButtonPressedAction = value;
}
inline void GlobalNamespace::WarningScreens::setStaticF__activeReference(::UnityW<::GlobalNamespace::WarningScreens>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::WarningScreens>, "_activeReference", ::GlobalNamespace::WarningScreens*>(std::forward<::UnityW<::GlobalNamespace::WarningScreens>>(value));
}
inline ::UnityW<::GlobalNamespace::WarningScreens> GlobalNamespace::WarningScreens::getStaticF__activeReference()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::WarningScreens>, "_activeReference", ::GlobalNamespace::WarningScreens*>();
}
inline void GlobalNamespace::WarningScreens::setStaticF__result(::GlobalNamespace::WarningButtonResult  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WarningButtonResult, "_result", ::GlobalNamespace::WarningScreens*>(std::forward<::GlobalNamespace::WarningButtonResult>(value));
}
inline ::GlobalNamespace::WarningButtonResult GlobalNamespace::WarningScreens::getStaticF__result()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WarningButtonResult, "_result", ::GlobalNamespace::WarningScreens*>();
}
inline void GlobalNamespace::WarningScreens::setStaticF__leftButtonResult(::GlobalNamespace::WarningButtonResult  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WarningButtonResult, "_leftButtonResult", ::GlobalNamespace::WarningScreens*>(std::forward<::GlobalNamespace::WarningButtonResult>(value));
}
inline ::GlobalNamespace::WarningButtonResult GlobalNamespace::WarningScreens::getStaticF__leftButtonResult()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WarningButtonResult, "_leftButtonResult", ::GlobalNamespace::WarningScreens*>();
}
inline void GlobalNamespace::WarningScreens::setStaticF__rightButtonResult(::GlobalNamespace::WarningButtonResult  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WarningButtonResult, "_rightButtonResult", ::GlobalNamespace::WarningScreens*>(std::forward<::GlobalNamespace::WarningButtonResult>(value));
}
inline ::GlobalNamespace::WarningButtonResult GlobalNamespace::WarningScreens::getStaticF__rightButtonResult()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WarningButtonResult, "_rightButtonResult", ::GlobalNamespace::WarningScreens*>();
}
inline void GlobalNamespace::WarningScreens::setStaticF__closedMessageBox(bool  value)  {
::cordl_internals::setStaticField<bool, "_closedMessageBox", ::GlobalNamespace::WarningScreens*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::WarningScreens::getStaticF__closedMessageBox()  {
return ::cordl_internals::getStaticField<bool, "_closedMessageBox", ::GlobalNamespace::WarningScreens*>();
}
inline void GlobalNamespace::WarningScreens::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* GlobalNamespace::WarningScreens::StartWarningScreenInternal(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartWarningScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* GlobalNamespace::WarningScreens::StartOptInFollowUpScreenInternal(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartOptInFollowUpScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* GlobalNamespace::WarningScreens::StartWarningScreen(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartWarningScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>*>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>* GlobalNamespace::WarningScreens::StartOptInFollowUpScreen(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"StartOptInFollowUpScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::WarningButtonResult>*>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::WarningScreens::WaitForResponse(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"WaitForResponse", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::WarningScreens::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WarningScreens::OnLeftButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnLeftButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WarningScreens::OnRightButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {"OnRightButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WarningScreens::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WarningScreens*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WarningScreens* GlobalNamespace::WarningScreens::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WarningScreens*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WarningScreens::WarningScreens()   {
}
