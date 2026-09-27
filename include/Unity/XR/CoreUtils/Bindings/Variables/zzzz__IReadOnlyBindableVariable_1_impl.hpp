#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/IReadOnlyBindableVariable_1.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__IEventBinding_def.hpp"
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::Subscribe(::System::Action_1<T>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(this, ___internal_method, callback);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::SubscribeAndUpdate(::System::Action_1<T>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(this, ___internal_method, callback);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::Unsubscribe(::System::Action_1<T>*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename T>
inline T Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline int32_t Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::get_BindingCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::ValueEquals(T  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::Task(::System::Func_2<T,bool>*  awaitPredicate, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, awaitPredicate, token);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>::Task(T  awaitState, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, awaitState, token);
}
