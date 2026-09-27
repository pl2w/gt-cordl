#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::*)()>(&::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0xacea4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaceac64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_finalCts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::CancellationTokenSource*  _finalCts_5__2, ::System::Threading::CancellationTokenRegistration  __7__wrap2, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_finalCts_5__2 = _finalCts_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63::ManagedWebSocket__WaitForServerToCloseConnectionAsync_d__63()   {
}
