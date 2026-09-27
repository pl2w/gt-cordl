#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/BindableVariableTaskPredicate_1.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableTaskPredicate_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::_ctor(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*  bindableVariable, ::System::Func_2<T,bool>*  awaitPredicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), ::i2c::type_of<::System::Func_2<T,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindableVariable, awaitPredicate, cancellationToken);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::Cancelled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>(),
                        {"Cancelled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::Await(T  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>(),
                        {"Await", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
// Ctor Parameters [CppParam { name: "m_Tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AwaitPredicate", ty: "::System::Func_2<T,bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BindableVariable", ty: "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::BindableVariableTaskPredicate_1(::System::Threading::Tasks::TaskCompletionSource_1<T>*  m_Tcs, ::System::Func_2<T,bool>*  m_AwaitPredicate, ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*  m_BindableVariable) noexcept  {
this->m_Tcs = m_Tcs;
this->m_AwaitPredicate = m_AwaitPredicate;
this->m_BindableVariable = m_BindableVariable;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::BindableVariableTaskPredicate_1()   {
}
