#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__HandleReceivedPingPongAsync_d__64.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__HandleReceivedPingPongAsync_d__64_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::*)()>(&::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0xaceaccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaceb200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "header", ty: "::GlobalNamespace::ManagedWebSocket_MessageHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::ManagedWebSocket__HandleReceivedPingPongAsync_d__64(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->header = header;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64::ManagedWebSocket__HandleReceivedPingPongAsync_d__64()   {
}
