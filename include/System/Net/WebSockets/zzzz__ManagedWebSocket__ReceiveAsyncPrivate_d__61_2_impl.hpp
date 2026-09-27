#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__ReceiveAsyncPrivate_d__61_2.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__ReceiveAsyncPrivate_d__61_2_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
inline void GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
constexpr  GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resultGetter", ty: "TWebSocketReceiveResultGetter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "payloadBuffer", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_header_5__3", ty: "::GlobalNamespace::ManagedWebSocket_MessageHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_totalBytesReceived_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
constexpr ::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, TWebSocketReceiveResultGetter  resultGetter, ::System::Memory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationTokenRegistration  _registration_5__2, ::GlobalNamespace::ManagedWebSocket_MessageHeader  _header_5__3, int32_t  _totalBytesReceived_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->resultGetter = resultGetter;
this->payloadBuffer = payloadBuffer;
this->_registration_5__2 = _registration_5__2;
this->_header_5__3 = _header_5__3;
this->_totalBytesReceived_5__4 = _totalBytesReceived_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
constexpr ::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2()   {
}
