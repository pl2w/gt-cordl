#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__Timeout_d__13_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskExtensions__Timeout_d__13_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
template<typename T>
inline void GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeout", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "delayType", ty: "::Cysharp::Threading::Tasks::DelayType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeoutCheckTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "taskCancellationTokenSource", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_delayCancellationTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,::System::ValueTuple_2<bool,T>,bool>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::UniTaskExtensions__Timeout_d__13_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource, ::System::Threading::CancellationTokenSource*  _delayCancellationTokenSource_5__2, ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,::System::ValueTuple_2<bool,T>,bool>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->timeout = timeout;
this->delayType = delayType;
this->timeoutCheckTiming = timeoutCheckTiming;
this->task = task;
this->taskCancellationTokenSource = taskCancellationTokenSource;
this->_delayCancellationTokenSource_5__2 = _delayCancellationTokenSource_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>::UniTaskExtensions__Timeout_d__13_1()   {
}
