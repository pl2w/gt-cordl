#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket__Receive_d__37.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseCode_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocket__Receive_d__37_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocket__Receive_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__Receive_d__37::*)()>(&::GlobalNamespace::WebSocket__Receive_d__37::MoveNext)> {
  constexpr static std::size_t size = 0xf38;
  constexpr static std::size_t addrs = 0x5f378d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Receive_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocket__Receive_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__Receive_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocket__Receive_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f38810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Receive_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocket__Receive_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Receive_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocket__Receive_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Receive_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocket__Receive_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocket__Receive_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::NativeWebSocket::WebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_closeCode_5__2", ty: "::NativeWebSocket::WebSocketCloseCode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__3", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_result_5__6", ty: "::System::Net::WebSockets::WebSocketReceiveResult*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ms_5__7", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebSockets::WebSocketReceiveResult*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocket__Receive_d__37::WebSocket__Receive_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::NativeWebSocket::WebSocket*  __4__this, ::NativeWebSocket::WebSocketCloseCode  _closeCode_5__2, ::System::ArraySegment_1<uint8_t>  _buffer_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::Net::WebSockets::WebSocketReceiveResult*  _result_5__6, ::System::IO::MemoryStream*  _ms_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebSockets::WebSocketReceiveResult*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3, ::System::Object*  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_closeCode_5__2 = _closeCode_5__2;
this->_buffer_5__3 = _buffer_5__3;
this->__u__1 = __u__1;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_result_5__6 = _result_5__6;
this->_ms_5__7 = _ms_5__7;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocket__Receive_d__37::WebSocket__Receive_d__37()   {
}
