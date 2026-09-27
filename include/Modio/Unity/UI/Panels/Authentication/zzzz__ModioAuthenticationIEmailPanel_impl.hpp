#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationIEmailPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationIEmailPanel_def.hpp"
#include "Modio/Authentication/zzzz__IEmailCodePrompter_def.hpp"
#include "Modio/Authentication/zzzz__ModioEmailAuthService_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationIEmailPanel__AuthenticationRequest_d__9_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationIEmailPanel__OnPressSubmitEmail_d__6_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationIEmailPanel__ShowCodePrompt_d__10_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnGainedFocus)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fadc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.OnPressSubmitEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnPressSubmitEmail)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fadcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnPressSubmitEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.OnPressIHaveCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnPressIHaveCode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fadd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnPressIHaveCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.OnCodeEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)(::StringW)>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnCodeEntered)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fade28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnCodeEntered", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.AuthenticationRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)(::StringW, ::System::Threading::Tasks::Task_1<::Modio::Error*>*)>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::AuthenticationRequest)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fade4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"AuthenticationRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::Modio::Error*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel.ShowCodePrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::ShowCodePrompt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fadf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"ShowCodePrompt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fae05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__emailField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__emailField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailField;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_set__emailField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailField = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_set__onError(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onError = value;
}
constexpr ::Modio::Authentication::ModioEmailAuthService*& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__authService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authService;
}
constexpr ::Modio::Authentication::ModioEmailAuthService* const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__authService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authService;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_set__authService(::Modio::Authentication::ModioEmailAuthService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authService = value;
}
constexpr bool& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__isCodeEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCodeEntered;
}
constexpr bool const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__isCodeEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCodeEntered;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_set__isCodeEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCodeEntered = value;
}
constexpr ::StringW& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__authCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authCode;
}
constexpr ::StringW const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_get__authCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authCode;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::__cordl_internal_set__authCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authCode = value;
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnPressSubmitEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnPressSubmitEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnPressIHaveCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnPressIHaveCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::OnCodeEntered(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"OnCodeEntered", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::AuthenticationRequest(::StringW  email, ::System::Threading::Tasks::Task_1<::Modio::Error*>*  authMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"AuthenticationRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::Modio::Error*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, email, authMethod);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::ShowCodePrompt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {"ShowCodePrompt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*>());
}
/// @brief Convert operator to "::Modio::Authentication::IEmailCodePrompter"
constexpr  Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::operator ::Modio::Authentication::IEmailCodePrompter*() noexcept {
return static_cast<::Modio::Authentication::IEmailCodePrompter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IEmailCodePrompter"
constexpr ::Modio::Authentication::IEmailCodePrompter* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::i___Modio__Authentication__IEmailCodePrompter() noexcept {
return static_cast<::Modio::Authentication::IEmailCodePrompter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel::ModioAuthenticationIEmailPanel()   {
}
