#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream__ReadAllAsync_d__48.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__WebResponseStream__ReadAllAsync_d__48_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::*)()>(&::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::MoveNext)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0xacc6b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xacc769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeoutCts_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::WebResponseStream__ReadAllAsync_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebResponseStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, bool  resending, ::System::Net::WebCompletionSource*  _completion_5__2, ::System::Threading::CancellationTokenSource*  _timeoutCts_5__3, ::System::Threading::Tasks::Task*  _timeoutTask_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->resending = resending;
this->_completion_5__2 = _completion_5__2;
this->_timeoutCts_5__3 = _timeoutCts_5__3;
this->_timeoutTask_5__4 = _timeoutTask_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48::WebResponseStream__ReadAllAsync_d__48()   {
}
