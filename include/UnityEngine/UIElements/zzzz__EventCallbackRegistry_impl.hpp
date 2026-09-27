#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_DynamicCallbackList_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackRegistry_DynamicCallbackList_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetCallbackList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (*)(::UnityEngine::UIElements::EventCallbackList*)>(&::UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb89039c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"GetCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.ReleaseCallbackList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::EventCallbackList*)>(&::UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb890404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"ReleaseCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry.GetDynamicCallbackList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList> (::UnityEngine::UIElements::EventCallbackRegistry::*)(::UnityEngine::UIElements::TrickleDown)>(&::UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb89046c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"GetDynamicCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackRegistry::*)()>(&::UnityEngine::UIElements::EventCallbackRegistry::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb890480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TrickleDownCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrickleDownCallbacks;
}
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_TrickleDownCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrickleDownCallbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_TrickleDownCallbacks(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrickleDownCallbacks = value;
}
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_BubbleUpCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BubbleUpCallbacks;
}
constexpr ::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList const& UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_get_m_BubbleUpCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BubbleUpCallbacks;
}
constexpr void UnityEngine::UIElements::EventCallbackRegistry::__cordl_internal_set_m_BubbleUpCallbacks(::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BubbleUpCallbacks = value;
}
inline void UnityEngine::UIElements::EventCallbackRegistry::setStaticF_s_ListPool(::UnityEngine::UIElements::EventCallbackListPool*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool", ::UnityEngine::UIElements::EventCallbackRegistry*>(std::forward<::UnityEngine::UIElements::EventCallbackListPool*>(value));
}
inline ::UnityEngine::UIElements::EventCallbackListPool* UnityEngine::UIElements::EventCallbackRegistry::getStaticF_s_ListPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallbackListPool*, "s_ListPool", ::UnityEngine::UIElements::EventCallbackRegistry*>();
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackRegistry::GetCallbackList(::UnityEngine::UIElements::EventCallbackList*  initializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"GetCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(nullptr, ___internal_method, initializer);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::ReleaseCallbackList(::UnityEngine::UIElements::EventCallbackList*  toRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"ReleaseCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
inline ::by_ref<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList> UnityEngine::UIElements::EventCallbackRegistry::GetDynamicCallbackList(::UnityEngine::UIElements::TrickleDown  useTrickleDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {"GetDynamicCallbackList", {}, {::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::EventCallbackRegistry_DynamicCallbackList>>(this, ___internal_method, useTrickleDown);
}
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown, ::UnityEngine::UIElements::InvokePolicy  invokePolicy)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                    {"RegisterCallback", {::i2c::class_of<TEventType>()}, {::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, useTrickleDown, invokePolicy);
}
template<typename TEventType,typename TCallbackArgs>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline void UnityEngine::UIElements::EventCallbackRegistry::RegisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*  callback, TCallbackArgs  userArgs, ::UnityEngine::UIElements::TrickleDown  useTrickleDown, ::UnityEngine::UIElements::InvokePolicy  invokePolicy)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                    {"RegisterCallback", {::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>()}, {::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*>(), ::i2c::type_of<TCallbackArgs>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, userArgs, useTrickleDown, invokePolicy);
}
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_1<TEventType>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                    {"UnregisterCallback", {::i2c::class_of<TEventType>()}, {::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback, useTrickleDown);
}
template<typename TEventType,typename TCallbackArgs>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::UIElements::EventBase_1<TEventType>*> && ::cordl_internals::default_constructor_constraint<TEventType>)
inline bool UnityEngine::UIElements::EventCallbackRegistry::UnregisterCallback(/* [NotNull] */ ::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*  callback, ::UnityEngine::UIElements::TrickleDown  useTrickleDown)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                    {"UnregisterCallback", {::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>()}, {::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType,TCallbackArgs>*>(), ::i2c::type_of<::UnityEngine::UIElements::TrickleDown>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>(), ::i2c::class_of<TCallbackArgs>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callback, useTrickleDown);
}
inline void UnityEngine::UIElements::EventCallbackRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::EventCallbackRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackRegistry* UnityEngine::UIElements::EventCallbackRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackRegistry::EventCallbackRegistry()   {
}
