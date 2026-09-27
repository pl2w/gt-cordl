#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskObservableExtensions__Fire_d__3_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskObservableExtensions__Fire_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__AsyncSubject_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subject", ty: "::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::UniTaskObservableExtensions__Fire_d__3_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  subject, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->subject = subject;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniTaskObservableExtensions__Fire_d__3_1<T>::UniTaskObservableExtensions__Fire_d__3_1()   {
}
