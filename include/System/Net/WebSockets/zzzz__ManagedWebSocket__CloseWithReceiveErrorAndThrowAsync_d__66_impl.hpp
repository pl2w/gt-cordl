#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketError_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::*)()>(&::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xaceb268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaceb4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "error", ty: "::System::Net::WebSockets::WebSocketError", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::System::Net::WebSockets::WebSocketError  error, ::System::Exception*  innerException, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->closeStatus = closeStatus;
this->error = error;
this->innerException = innerException;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66::ManagedWebSocket__CloseWithReceiveErrorAndThrowAsync_d__66()   {
}
