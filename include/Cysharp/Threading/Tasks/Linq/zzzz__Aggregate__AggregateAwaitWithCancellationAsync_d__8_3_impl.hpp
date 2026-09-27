#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Aggregate__AggregateAwaitWithCancellationAsync_d__8_3.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitWithCancellationAsync_d__8_3_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TAccumulate,typename TResult>
inline void GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline void GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TAccumulate,typename TResult>
constexpr  GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource,typename TAccumulate,typename TResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "seed", ty: "TAccumulate", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "accumulator", ty: "::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resultSelector", ty: "::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e_5__2", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "TResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_value_5__6", ty: "TAccumulate", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<TAccumulate>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::UniTask_1_Awaiter<TResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource,typename TAccumulate,typename TResult>
constexpr ::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TResult>  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, TResult  __7__wrap4, TAccumulate  _value_5__6, ::GlobalNamespace::UniTask_1_Awaiter<TAccumulate>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__2, ::GlobalNamespace::UniTask_1_Awaiter<TResult>  __u__3, ::GlobalNamespace::UniTask_Awaiter  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->source = source;
this->cancellationToken = cancellationToken;
this->seed = seed;
this->accumulator = accumulator;
this->resultSelector = resultSelector;
this->_e_5__2 = _e_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_value_5__6 = _value_5__6;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
// Ctor Parameters []
template<typename TSource,typename TAccumulate,typename TResult>
constexpr ::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource,TAccumulate,TResult>::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3()   {
}
