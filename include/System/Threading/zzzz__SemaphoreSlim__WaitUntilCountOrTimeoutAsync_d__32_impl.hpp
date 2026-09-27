#pragma once
// IWYU pragma private; include "System/Threading/SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Threading/zzzz__SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::*)()>(&::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x8c4;
  constexpr static std::size_t addrs = 0xa3498c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa34a18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "asyncWaiter", ty: "::System::Threading::SemaphoreSlim_TaskNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::SemaphoreSlim_TaskNode*  asyncWaiter, int32_t  millisecondsTimeout, ::System::Threading::SemaphoreSlim*  __4__this, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Object*  __7__wrap2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->asyncWaiter = asyncWaiter;
this->millisecondsTimeout = millisecondsTimeout;
this->__4__this = __4__this;
this->_cts_5__2 = _cts_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32()   {
}
