#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationPanel_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationPanel__AttemptSso_d__12_def.hpp"
#include "Modio/Unity/UI/Panels/Authentication/zzzz__ModioAuthenticationPanel__GetTermsAndShowPanel_d__10_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.get_ForceShowTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::get_ForceShowTermsOfUse)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9faee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"get_ForceShowTermsOfUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.set_ForceShowTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::set_ForceShowTermsOfUse)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9faeea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"set_ForceShowTermsOfUse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.OpenAuthFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OpenAuthFlow)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9fa51dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"OpenAuthFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OnDestroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9faeef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.OnPluginReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OnPluginReady)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9faefa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"OnPluginReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.GetTermsAndShowPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::GetTermsAndShowPanel)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9faf170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"GetTermsAndShowPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::LateUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9faf24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel.AttemptSso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)(bool)>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::AttemptSso)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9faf084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"AttemptSso", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::*)()>(&::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faf2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onError;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_set__onError(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onError = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__onOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onOffline;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__onOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onOffline;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_set__onOffline(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onOffline = value;
}
constexpr bool& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__fallbackToEmailAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackToEmailAuth;
}
constexpr bool const& Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_get__fallbackToEmailAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackToEmailAuth;
}
constexpr void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::__cordl_internal_set__fallbackToEmailAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackToEmailAuth = value;
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::setStaticF__ForceShowTermsOfUse_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<ForceShowTermsOfUse>k__BackingField", ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(std::forward<bool>(value));
}
inline bool Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::getStaticF__ForceShowTermsOfUse_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<ForceShowTermsOfUse>k__BackingField", ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>();
}
inline bool Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::get_ForceShowTermsOfUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"get_ForceShowTermsOfUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::set_ForceShowTermsOfUse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"set_ForceShowTermsOfUse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OpenAuthFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"OpenAuthFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::OnPluginReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"OnPluginReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::GetTermsAndShowPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"GetTermsAndShowPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::AttemptSso(bool  agreedToTerms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {"AttemptSso", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, agreedToTerms);
}
inline void Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel* Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel::ModioAuthenticationPanel()   {
}
