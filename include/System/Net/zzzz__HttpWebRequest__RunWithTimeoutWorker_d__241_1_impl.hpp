#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest__RunWithTimeoutWorker_d__241_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Net/zzzz__HttpWebRequest__RunWithTimeoutWorker_d__241_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
inline void GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "abort", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aborted", ty: "::System::Func_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::HttpWebRequest__RunWithTimeoutWorker_d__241_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::Tasks::Task_1<T>*  workerTask, int32_t  timeout, ::System::Threading::CancellationTokenSource*  cts, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->workerTask = workerTask;
this->timeout = timeout;
this->cts = cts;
this->abort = abort;
this->aborted = aborted;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1<T>::HttpWebRequest__RunWithTimeoutWorker_d__241_1()   {
}
