#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource`1__WaitForCompletion_d__15.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource`1__WaitForCompletion_d__15_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::WebCompletionSource_1__WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Net::WebCompletionSource_1<T>*  __4__this, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1__WaitForCompletion_d__15<T>::WebCompletionSource_1__WaitForCompletion_d__15()   {
}
