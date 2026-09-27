#pragma once
// IWYU pragma private; include "GlobalNamespace/PreGameMessage.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage_def.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage__ShowMessageWithAwait_d__20_def.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage__WaitForCompletion_d__23_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::OnEnable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a42258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::OnDisable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a42390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.ShowMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)(::StringW, ::StringW, ::StringW, ::System::Action*, float_t, float_t)>(&::GlobalNamespace::PreGameMessage::ShowMessage)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a424e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.ShowMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Action*, ::System::Action*, float_t)>(&::GlobalNamespace::PreGameMessage::ShowMessage)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a42634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.ShowMessageWithAwait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PreGameMessage::*)(::StringW, ::StringW, ::StringW, ::System::Action*, float_t, float_t)>(&::GlobalNamespace::PreGameMessage::ShowMessageWithAwait)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a42834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessageWithAwait", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.UpdateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)(::StringW, ::StringW)>(&::GlobalNamespace::PreGameMessage::UpdateMessage)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a42984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"UpdateMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.CloseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::CloseMessage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a42a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"CloseMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.WaitForCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::WaitForCompletion)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a42a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"WaitForCompletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.PostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::PostUpdate)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5a42b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"PostUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.OnConfirmedPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::OnConfirmedPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a42f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnConfirmedPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage.OnAlternativePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::OnAlternativePressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a42f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnAlternativePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage::*)()>(&::GlobalNamespace::PreGameMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a42fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PreGameMessage::__cordl_internal_get__uiParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__uiParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiParent;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__uiParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiParent = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageTitleTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageTitleTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageTitleTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageTitleTxt;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__messageTitleTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageTitleTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageBodyTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageBodyTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageBodyTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageBodyTxt;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__messageBodyTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageBodyTxt = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PreGameMessage::__cordl_internal_get__confirmButtonRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButtonRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__confirmButtonRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButtonRoot;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__confirmButtonRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmButtonRoot = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PreGameMessage::__cordl_internal_get__multiButtonRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiButtonRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__multiButtonRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiButtonRoot;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__multiButtonRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiButtonRoot = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageConfirmationTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageConfirmationTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageConfirmationTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageConfirmationTxt;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__messageConfirmationTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageConfirmationTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageAlternativeConfirmationTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageAlternativeConfirmationTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageAlternativeConfirmationTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageAlternativeConfirmationTxt;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__messageAlternativeConfirmationTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageAlternativeConfirmationTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageAlternativeButtonTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageAlternativeButtonTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::PreGameMessage::__cordl_internal_get__messageAlternativeButtonTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageAlternativeButtonTxt;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__messageAlternativeButtonTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageAlternativeButtonTxt = value;
}
constexpr ::System::Action*& GlobalNamespace::PreGameMessage::__cordl_internal_get__confirmationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationAction;
}
constexpr ::System::Action* const& GlobalNamespace::PreGameMessage::__cordl_internal_get__confirmationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationAction;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__confirmationAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmationAction = value;
}
constexpr ::System::Action*& GlobalNamespace::PreGameMessage::__cordl_internal_get__alternativeAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternativeAction;
}
constexpr ::System::Action* const& GlobalNamespace::PreGameMessage::__cordl_internal_get__alternativeAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternativeAction;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__alternativeAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternativeAction = value;
}
constexpr bool& GlobalNamespace::PreGameMessage::__cordl_internal_get__hasCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCompleted;
}
constexpr bool const& GlobalNamespace::PreGameMessage::__cordl_internal_get__hasCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCompleted;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set__hasCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasCompleted = value;
}
constexpr float_t& GlobalNamespace::PreGameMessage::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& GlobalNamespace::PreGameMessage::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr float_t& GlobalNamespace::PreGameMessage::__cordl_internal_get_holdTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdTime;
}
constexpr float_t const& GlobalNamespace::PreGameMessage::__cordl_internal_get_holdTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdTime;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set_holdTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdTime = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBar;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBar;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set_progressBar(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBar = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBarL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarL;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBarL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarL;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set_progressBarL(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBarL = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBarR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarR;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::PreGameMessage::__cordl_internal_get_progressBarR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressBarR;
}
constexpr void GlobalNamespace::PreGameMessage::__cordl_internal_set_progressBarR(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressBarR = value;
}
inline void GlobalNamespace::PreGameMessage::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::ShowMessage(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmation, ::System::Action*  onConfirmationAction, float_t  bodyFontSize, float_t  buttonHideTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageTitle, messageBody, messageConfirmation, onConfirmationAction, bodyFontSize, buttonHideTimer);
}
inline void GlobalNamespace::PreGameMessage::ShowMessage(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmationButton, ::StringW  messageAlternativeButton, ::System::Action*  onConfirmationAction, ::System::Action*  onAlternativeAction, float_t  bodyFontSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageTitle, messageBody, messageConfirmationButton, messageAlternativeButton, onConfirmationAction, onAlternativeAction, bodyFontSize);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PreGameMessage::ShowMessageWithAwait(::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmation, ::System::Action*  onConfirmationAction, float_t  bodyFontSize, float_t  buttonHideTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"ShowMessageWithAwait", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, messageTitle, messageBody, messageConfirmation, onConfirmationAction, bodyFontSize, buttonHideTimer);
}
inline void GlobalNamespace::PreGameMessage::UpdateMessage(::StringW  newMessageBody, ::StringW  newConfirmButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"UpdateMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMessageBody, newConfirmButton);
}
inline void GlobalNamespace::PreGameMessage::CloseMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"CloseMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PreGameMessage::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"WaitForCompletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::PostUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"PostUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::OnConfirmedPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnConfirmedPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::OnAlternativePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {"OnAlternativePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PreGameMessage* GlobalNamespace::PreGameMessage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PreGameMessage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreGameMessage::PreGameMessage()   {
}
