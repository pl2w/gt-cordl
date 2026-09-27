#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/BindableVariableTaskState_1.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableTaskState_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::get_task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>>(),
                        {"get_task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::_ctor(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*  bindableVariable, T  awaitState, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindableVariable, awaitState, cancellationToken);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::Cancelled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>>(),
                        {"Cancelled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::Await(T  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>>(),
                        {"Await", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
// Ctor Parameters [CppParam { name: "m_Tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AwaitState", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BindableVariable", ty: "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::BindableVariableTaskState_1(::System::Threading::Tasks::TaskCompletionSource_1<T>*  m_Tcs, T  m_AwaitState, ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*  m_BindableVariable) noexcept  {
this->m_Tcs = m_Tcs;
this->m_AwaitState = m_AwaitState;
this->m_BindableVariable = m_BindableVariable;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1<T>::BindableVariableTaskState_1()   {
}
