#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle__ConnectAsyncCore_d__26.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle__ConnectAsyncCore_d__26_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::*)()>(&::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::MoveNext)> {
  constexpr static std::size_t size = 0xbd4;
  constexpr static std::size_t addrs = 0xacefa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xacf0998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::WebSocketHandle*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_secKeyAndSecWebSocketAccept_5__4", ty: "::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sslStream_5__5", ty: "::System::Net::Security::SslStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::WebSocketHandle__ConnectAsyncCore_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::WebSocketHandle*  __4__this, ::System::Uri*  uri, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::System::Threading::CancellationTokenRegistration  _registration_5__2, ::System::IO::Stream*  _stream_5__3, ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  _secKeyAndSecWebSocketAccept_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>  __u__1, ::System::Net::Security::SslStream*  _sslStream_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->uri = uri;
this->options = options;
this->_registration_5__2 = _registration_5__2;
this->_stream_5__3 = _stream_5__3;
this->_secKeyAndSecWebSocketAccept_5__4 = _secKeyAndSecWebSocketAccept_5__4;
this->__u__1 = __u__1;
this->_sslStream_5__5 = _sslStream_5__5;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26::WebSocketHandle__ConnectAsyncCore_d__26()   {
}
