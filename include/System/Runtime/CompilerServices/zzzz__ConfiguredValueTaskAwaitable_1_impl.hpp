#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_1.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
template<typename TResult>
inline void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::_ctor(::System::Threading::Tasks::ValueTask_1<TResult>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask_1<TResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TResult>
inline ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<TResult> System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<TResult>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::ConfiguredValueTaskAwaitable_1(::System::Threading::Tasks::ValueTask_1<TResult>  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<TResult>::ConfiguredValueTaskAwaitable_1()   {
}
