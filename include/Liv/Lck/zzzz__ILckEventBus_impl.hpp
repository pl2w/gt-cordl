#pragma once
// IWYU pragma private; include "Liv/Lck/ILckEventBus.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
inline void Liv::Lck::ILckEventBus::AddListener(::System::Action_1<T>*  listener)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Liv::Lck::ILckEventBus*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template<typename T>
inline void Liv::Lck::ILckEventBus::RemoveListener(::System::Action_1<T>*  listener)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Liv::Lck::ILckEventBus*>(), 1}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template<typename T>
inline void Liv::Lck::ILckEventBus::Trigger(T  eventData)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Liv::Lck::ILckEventBus*>(), 2}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
