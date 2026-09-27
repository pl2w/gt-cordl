#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions_ToCoroutineEnumerator`1__RunTask_d__8.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions_ToCoroutineEnumerator`1__RunTask_d__8_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1<T>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->task = task;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8()   {
}
