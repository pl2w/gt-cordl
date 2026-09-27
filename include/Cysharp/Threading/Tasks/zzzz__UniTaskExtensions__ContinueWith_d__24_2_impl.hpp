#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__ContinueWith_d__24_2.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions__ContinueWith_d__24_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename T,typename TR>
inline void GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T,typename TR>
inline void GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T,typename TR>
constexpr  GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T,typename TR>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "continuationFunction", ty: "::System::Func_2<T,TR>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Func_2<T,TR>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T,typename TR>
constexpr ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::UniTaskExtensions__ContinueWith_d__24_2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TR>  __t__builder, ::System::Func_2<T,TR>*  continuationFunction, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Func_2<T,TR>*  __7__wrap1, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->continuationFunction = continuationFunction;
this->task = task;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T,typename TR>
constexpr ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T,TR>::UniTaskExtensions__ContinueWith_d__24_2()   {
}
