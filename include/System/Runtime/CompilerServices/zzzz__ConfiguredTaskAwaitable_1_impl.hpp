#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<typename TResult>
inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::_ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<TResult>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task, continueOnCapturedContext);
}
template<typename TResult>
inline ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1(::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter) noexcept  {
this->m_configuredTaskAwaiter = m_configuredTaskAwaiter;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>::ConfiguredTaskAwaitable_1()   {
}
