#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventForwarder_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckEventForwarder_2_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TEvent,typename TResult>
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
template<typename TEvent,typename TResult>
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
template<typename TEvent,typename TResult>
constexpr void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
template<typename TEvent,typename TResult>
constexpr ::System::Func_2<TEvent,TResult>*& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
template<typename TEvent,typename TResult>
constexpr ::System::Func_2<TEvent,TResult>* const& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
template<typename TEvent,typename TResult>
constexpr void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_set__selector(::System::Func_2<TEvent,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
template<typename TEvent,typename TResult>
constexpr ::System::Action_1<TResult>*& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__forwardingAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardingAction;
}
template<typename TEvent,typename TResult>
constexpr ::System::Action_1<TResult>* const& Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_get__forwardingAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardingAction;
}
template<typename TEvent,typename TResult>
constexpr void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::__cordl_internal_set__forwardingAction(::System::Action_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardingAction = value;
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  forwardingAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventForwarder_2<TEvent,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::System::Func_2<TEvent,TResult>*>(), ::i2c::type_of<::System::Action_1<TResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus, selector, forwardingAction);
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::OnEventReceived(TEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventForwarder_2<TEvent,TResult>*>(),
                        {"OnEventReceived", {}, {::i2c::type_of<TEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template<typename TEvent,typename TResult>
inline void Liv::Lck::LckEventForwarder_2<TEvent,TResult>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventForwarder_2<TEvent,TResult>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEvent,typename TResult>
inline ::Liv::Lck::LckEventForwarder_2<TEvent,TResult>* Liv::Lck::LckEventForwarder_2<TEvent,TResult>::New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::System::Func_2<TEvent,TResult>*  selector, ::System::Action_1<TResult>*  forwardingAction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEventForwarder_2<TEvent,TResult>*>(eventBus, selector, forwardingAction));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TEvent,typename TResult>
constexpr  Liv::Lck::LckEventForwarder_2<TEvent,TResult>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TEvent,typename TResult>
constexpr ::System::IDisposable* Liv::Lck::LckEventForwarder_2<TEvent,TResult>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TEvent,typename TResult>
constexpr ::Liv::Lck::LckEventForwarder_2<TEvent,TResult>::LckEventForwarder_2()   {
}
