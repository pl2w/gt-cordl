#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/QueueOperator`1__Queue__ConsumeAll_d__10.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator`1__Queue__ConsumeAll_d__10_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
inline void GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TSource>
inline void GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource>
constexpr  GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TSource>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "writer", ty: "::Cysharp::Threading::Tasks::ChannelWriter_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enumerator", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "self", ty: "::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSource>
constexpr ::GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::_Queue_QueueOperator_1__ConsumeAll_d__10(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::ChannelWriter_1<TSource>*  writer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator, ::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*  self, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->writer = writer;
this->enumerator = enumerator;
this->self = self;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TSource>
constexpr ::GlobalNamespace::_Queue_QueueOperator_1__ConsumeAll_d__10<TSource>::_Queue_QueueOperator_1__ConsumeAll_d__10()   {
}
