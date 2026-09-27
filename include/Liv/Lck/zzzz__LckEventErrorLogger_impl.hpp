#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventErrorLogger.hpp"
#include "Liv/Lck/zzzz__ILckResult_impl.hpp"
#include "Liv/Lck/zzzz__LckEvents_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckEventErrorLogger_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__LckEventErrorLogger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckEventErrorLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEventErrorLogger::*)(::Liv::Lck::ILckEventBus*, ::System::Action_1<::Liv::Lck::ILckResult*>*)>(&::Liv::Lck::LckEventErrorLogger::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9ce12d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::System::Action_1<::Liv::Lck::ILckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckEventErrorLogger.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEventErrorLogger::*)()>(&::Liv::Lck::LckEventErrorLogger::Dispose)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9ce138c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckEventErrorLogger::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::System::Action_1<::Liv::Lck::ILckResult*>*& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__logAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logAction;
}
constexpr ::System::Action_1<::Liv::Lck::ILckResult*>* const& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__logAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logAction;
}
constexpr void Liv::Lck::LckEventErrorLogger::__cordl_internal_set__logAction(::System::Action_1<::Liv::Lck::ILckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logAction = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__subscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& Liv::Lck::LckEventErrorLogger::__cordl_internal_get__subscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions;
}
constexpr void Liv::Lck::LckEventErrorLogger::__cordl_internal_set__subscriptions(::System::Collections::Generic::List_1<::System::IDisposable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscriptions = value;
}
inline void Liv::Lck::LckEventErrorLogger::_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<::Liv::Lck::ILckResult*>*  logAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::System::Action_1<::Liv::Lck::ILckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus, logAction);
}
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void Liv::Lck::LckEventErrorLogger::Monitor()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                    {"Monitor", {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TResult>
requires(::cordl_internals::type_constraint<TEvent, ::Liv::Lck::LckEvents_IEventWithResult_1<TResult>*> && ::cordl_internals::type_constraint<TResult, ::Liv::Lck::ILckResult*>)
inline void Liv::Lck::LckEventErrorLogger::OnEventReceived(TEvent  evt)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                    {"OnEventReceived", {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<TEvent>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEvent>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Liv::Lck::LckEventErrorLogger::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckEventErrorLogger* Liv::Lck::LckEventErrorLogger::New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<::Liv::Lck::ILckResult*>*  logAction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEventErrorLogger*>(eventBus, logAction));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckEventErrorLogger::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckEventErrorLogger::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckEventErrorLogger::LckEventErrorLogger()   {
}
template<typename TEvent>
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
template<typename TEvent>
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
template<typename TEvent>
constexpr void Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
template<typename TEvent>
constexpr ::System::Action_1<TEvent>*& Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
template<typename TEvent>
constexpr ::System::Action_1<TEvent>* const& Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
template<typename TEvent>
constexpr void Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::__cordl_internal_set__callback(::System::Action_1<TEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callback = value;
}
template<typename TEvent>
inline void Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<TEvent>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::System::Action_1<TEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus, callback);
}
template<typename TEvent>
inline void Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent>
inline ::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>* Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Action_1<TEvent>*  callback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>*>(eventBus, callback));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TEvent>
constexpr  Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TEvent>
constexpr ::System::IDisposable* Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TEvent>
constexpr ::Liv::Lck::LckEventErrorLogger_EventSubscription_1<TEvent>::LckEventErrorLogger_EventSubscription_1()   {
}
