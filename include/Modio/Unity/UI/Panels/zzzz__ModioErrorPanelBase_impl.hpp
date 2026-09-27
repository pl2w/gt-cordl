#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioErrorPanelBase.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase__MonitorTaskThenOpenPanelIfError_d__14_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioErrorPanelBase_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)(::Modio::Error*)>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x9fa4c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)(::StringW)>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9fa7ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*, ::ArrayW<::System::Object*>)>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9fa7ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.CancelPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::CancelPressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fa8028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.MonitorTaskThenOpenPanelIfError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)(::System::Threading::Tasks::Task_1<::Modio::Error*>*)>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::MonitorTaskThenOpenPanelIfError)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9fa8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"MonitorTaskThenOpenPanelIfError", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::Modio::Error*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase.InvokeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::InvokeAction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fa8158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"InvokeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase::*)()>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa8184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__titleLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__titleLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__titleLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleLocalised = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCode;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCode;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__errorCode(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorCode = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorCodeLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCodeLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorCodeLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorCodeLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__errorCodeLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorCodeLocalised = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorMessageLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessageLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorMessageLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessageLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__errorMessageLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorMessageLocalised = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__showWhenActionProvided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showWhenActionProvided;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__showWhenActionProvided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showWhenActionProvided;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__showWhenActionProvided(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showWhenActionProvided = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__actionMessageLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMessageLocalised;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__actionMessageLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionMessageLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__actionMessageLocalised(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionMessageLocalised = value;
}
constexpr ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorMessageResponses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessageResponses;
}
constexpr ::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*> const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__errorMessageResponses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorMessageResponses;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__errorMessageResponses(::ArrayW<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorMessageResponses = value;
}
constexpr ::System::Action*& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr ::System::Action* const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__action(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____action = value;
}
constexpr bool& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__useLocalizedActionPrompt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalizedActionPrompt;
}
constexpr bool const& Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_get__useLocalizedActionPrompt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLocalizedActionPrompt;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase::__cordl_internal_set__useLocalizedActionPrompt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLocalizedActionPrompt = value;
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::OpenPanel(::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*  response, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, args);
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::CancelPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Panels::ModioErrorPanelBase::MonitorTaskThenOpenPanelIfError(::System::Threading::Tasks::Task_1<::Modio::Error*>*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"MonitorTaskThenOpenPanelIfError", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::Modio::Error*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task);
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::InvokeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {"InvokeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioErrorPanelBase* Modio::Unity::UI::Panels::ModioErrorPanelBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioErrorPanelBase*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioErrorPanelBase::ModioErrorPanelBase()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::*)()>(&::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa818c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_errorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_errorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCode;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_errorCode(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCode = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_apiCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiCode;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_apiCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiCode;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_apiCode(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiCode = value;
}
constexpr ::StringW& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_windowTitleLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowTitleLocalised;
}
constexpr ::StringW const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_windowTitleLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowTitleLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_windowTitleLocalised(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowTitleLocalised = value;
}
constexpr ::StringW& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_windowMessageLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowMessageLocalised;
}
constexpr ::StringW const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_windowMessageLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowMessageLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_windowMessageLocalised(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowMessageLocalised = value;
}
constexpr ::StringW& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_actionPromptLocalised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionPromptLocalised;
}
constexpr ::StringW const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_actionPromptLocalised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionPromptLocalised;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_actionPromptLocalised(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionPromptLocalised = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_onActionPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActionPressed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_get_onActionPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActionPressed;
}
constexpr void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::__cordl_internal_set_onActionPressed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onActionPressed = value;
}
inline void Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse* Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioErrorPanelBase_ErrorMessageResponse::ModioErrorPanelBase_ErrorMessageResponse()   {
}
