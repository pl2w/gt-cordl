#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry_DynamicCallbackList.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_DynamicCallbackList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList (*)(::UnityEngine::UIElements::TrickleDown)>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::Create)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb8904f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)()>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb890634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"GetCallbackListForWriting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.GetCallbackListForReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)()>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb890730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"GetCallbackListForReading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.UnregisterCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)(int64_t, ::System::Delegate*)>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb890748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"UnregisterCallback", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::VisualElement*)>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::Invoke)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb8908a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"Invoke", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)()>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::BeginInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb890ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"BeginInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::*)()>(&::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::EndInvoke)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xb890ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"EndInvoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::Create(::UnityEngine::UIElements::TrickleDown  useTrickleDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(nullptr, ___internal_method, useTrickleDown);
}
inline ::UnityEngine::UIElements::EventCallbackList* GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForWriting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"GetCallbackListForWriting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackList* GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::GetCallbackListForReading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"GetCallbackListForReading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(*this, ___internal_method);
}
inline bool GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::UnregisterCallback(int64_t  eventTypeId, /* [NotNull] */ ::System::Delegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"UnregisterCallback", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, eventTypeId, callback);
}
inline void GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::Invoke(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::BaseVisualElementPanel*  panel, ::UnityEngine::UIElements::VisualElement*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"Invoke", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, evt, panel, target);
}
inline void GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::BeginInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"BeginInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::EndInvoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>(),
                        {"EndInvoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_UseTrickleDown", ty: "::UnityEngine::UIElements::TrickleDown", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Callbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TemporaryCallbacks", ty: "::UnityEngine::UIElements::EventCallbackList*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UnregisteredCallbacksDuringInvoke", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_IsInvoking", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::EventCallbackRegistry_DynamicCallbackList(::UnityEngine::UIElements::TrickleDown  m_UseTrickleDown, ::UnityEngine::UIElements::EventCallbackList*  m_Callbacks, ::UnityEngine::UIElements::EventCallbackList*  m_TemporaryCallbacks, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*  m_UnregisteredCallbacksDuringInvoke, int32_t  m_IsInvoking) noexcept  {
this->m_UseTrickleDown = m_UseTrickleDown;
this->m_Callbacks = m_Callbacks;
this->m_TemporaryCallbacks = m_TemporaryCallbacks;
this->m_UnregisteredCallbacksDuringInvoke = m_UnregisteredCallbacksDuringInvoke;
this->m_IsInvoking = m_IsInvoking;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList::EventCallbackRegistry_DynamicCallbackList()   {
}
