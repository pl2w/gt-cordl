#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket__HandleQueue_d__34.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocket__HandleQueue_d__34_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocket__HandleQueue_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__HandleQueue_d__34::*)()>(&::GlobalNamespace::WebSocket__HandleQueue_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5f374ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__HandleQueue_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocket__HandleQueue_d__34.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__HandleQueue_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocket__HandleQueue_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f37870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__HandleQueue_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocket__HandleQueue_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__HandleQueue_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocket__HandleQueue_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__HandleQueue_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocket__HandleQueue_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocket__HandleQueue_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::NativeWebSocket::WebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "queue", ty: "::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageType", ty: "::System::Net::WebSockets::WebSocketMessageType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocket__HandleQueue_d__34::WebSocket__HandleQueue_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::NativeWebSocket::WebSocket*  __4__this, ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->queue = queue;
this->messageType = messageType;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocket__HandleQueue_d__34::WebSocket__HandleQueue_d__34()   {
}
