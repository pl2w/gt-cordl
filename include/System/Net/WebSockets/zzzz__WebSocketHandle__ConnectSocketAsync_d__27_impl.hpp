#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle__ConnectSocketAsync_d__27.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ConnectSocketAsync_d__27_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::*)()>(&::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xc18;
  constexpr static std::size_t addrs = 0xacf0a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xacf1618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::WebSocketHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<::System::Net::IPAddress*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::ArrayW<::System::Net::IPAddress*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_socket_5__4", ty: "::System::Net::Sockets::Socket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::WebSocketHandle__ConnectSocketAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Sockets::Socket*>  __t__builder, ::StringW  host, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::WebSocketHandle*  __4__this, int32_t  port, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<::System::Net::IPAddress*>>  __u__1, ::ArrayW<::System::Net::IPAddress*>  __7__wrap1, int32_t  __7__wrap2, ::System::Net::Sockets::Socket*  _socket_5__4, ::System::Threading::CancellationTokenRegistration  __7__wrap4, ::System::Threading::CancellationTokenRegistration  __7__wrap5, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->host = host;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->port = port;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->_socket_5__4 = _socket_5__4;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocketHandle__ConnectSocketAsync_d__27::WebSocketHandle__ConnectSocketAsync_d__27()   {
}
