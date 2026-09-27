#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::*)()>(&::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0xacf16b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xacf2030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "expectedSecWebSocketAccept", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_foundUpgrade_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_foundConnection_5__3", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_foundSecWebSocketAccept_5__4", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_subprotocol_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::StringW  expectedSecWebSocketAccept, ::System::Net::WebSockets::ClientWebSocketOptions*  options, bool  _foundUpgrade_5__2, bool  _foundConnection_5__3, bool  _foundSecWebSocketAccept_5__4, ::StringW  _subprotocol_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->stream = stream;
this->cancellationToken = cancellationToken;
this->expectedSecWebSocketAccept = expectedSecWebSocketAccept;
this->options = options;
this->_foundUpgrade_5__2 = _foundUpgrade_5__2;
this->_foundConnection_5__3 = _foundConnection_5__3;
this->_foundSecWebSocketAccept_5__4 = _foundSecWebSocketAccept_5__4;
this->_subprotocol_5__5 = _subprotocol_5__5;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30()   {
}
