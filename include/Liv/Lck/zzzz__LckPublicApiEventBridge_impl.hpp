#pragma once
// IWYU pragma private; include "Liv/Lck/LckPublicApiEventBridge.hpp"
#include "Liv/Lck/zzzz__ILckResult_impl.hpp"
#include "Liv/Lck/zzzz__LckEvents_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckPublicApiEventBridge_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__LckPublicApiEventBridge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckPublicApiEventBridge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPublicApiEventBridge::*)(::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::LckPublicApiEventBridge::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ce1560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPublicApiEventBridge.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPublicApiEventBridge::*)()>(&::Liv::Lck::LckPublicApiEventBridge::Dispose)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9ce15fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckPublicApiEventBridge::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckPublicApiEventBridge::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckPublicApiEventBridge::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& Liv::Lck::LckPublicApiEventBridge::__cordl_internal_get__forwarders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwarders;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& Liv::Lck::LckPublicApiEventBridge::__cordl_internal_get__forwarders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwarders;
}
constexpr void Liv::Lck::LckPublicApiEventBridge::__cordl_internal_set__forwarders(::System::Collections::Generic::List_1<::System::IDisposable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwarders = value;
}
inline void Liv::Lck::LckPublicApiEventBridge::_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus);
}
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void Liv::Lck::LckPublicApiEventBridge::Forward(::System::Action_1<TResult>*  publicEventInvoker)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                    {"Forward", {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Action_1<TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicEventInvoker);
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckPublicApiEventBridge::Forward(::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  publicEventInvoker)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                    {"Forward", {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Func_2<TEvent,TResult>*>(), ::i2c::type_of<::System::Action_1<TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector, publicEventInvoker);
}
inline void Liv::Lck::LckPublicApiEventBridge::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckPublicApiEventBridge* Liv::Lck::LckPublicApiEventBridge::New_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPublicApiEventBridge*>(eventBus));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckPublicApiEventBridge::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckPublicApiEventBridge::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPublicApiEventBridge::LckPublicApiEventBridge()   {
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::setStaticF___9(::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*, "<>9", ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>(std::forward<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>(value));
}
template<typename TEvent,typename TResult>
inline ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>* Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*, "<>9", ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>();
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::setStaticF___9__3_0(::System::Func_2<TEvent,TResult>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TEvent,TResult>*, "<>9__3_0", ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>(std::forward<::System::Func_2<TEvent,TResult>*>(value));
}
template<typename TEvent,typename TResult>
inline ::System::Func_2<TEvent,TResult>* Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TEvent,TResult>*, "<>9__3_0", ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>();
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TResult>
inline TResult Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::_Forward_b__3_0(TEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>(),
                        {"<Forward>b__3_0", {}, {::i2c::type_of<TEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, evt);
}
template<typename TEvent,typename TResult>
inline ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>* Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>*>());
}
// Ctor Parameters []
template<typename TEvent,typename TResult>
constexpr ::Liv::Lck::LckPublicApiEventBridge___c__3_2<TEvent,TResult>::LckPublicApiEventBridge___c__3_2()   {
}
