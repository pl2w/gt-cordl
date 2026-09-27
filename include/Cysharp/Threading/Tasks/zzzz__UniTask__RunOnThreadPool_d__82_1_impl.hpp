#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask__RunOnThreadPool_d__82_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToThreadPoolAwaitable_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask__RunOnThreadPool_d__82_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "configureAwait", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "func", ty: "::System::Func_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::YieldAwaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::UniTask__RunOnThreadPool_d__82_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, bool  configureAwait, ::System::Func_1<T>*  func, ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter  __u__1, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, T  __7__wrap3, ::GlobalNamespace::YieldAwaitable_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->configureAwait = configureAwait;
this->func = func;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>::UniTask__RunOnThreadPool_d__82_1()   {
}
