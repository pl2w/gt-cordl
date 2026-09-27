#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__SendCloseFrameAsync_d__69.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket__SendCloseFrameAsync_d__69_def.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::*)()>(&::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0xacebc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xacec510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "closeStatusDescription", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::ManagedWebSocket__SendCloseFrameAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  closeStatusDescription, ::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t>  _buffer_5__2, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->closeStatusDescription = closeStatusDescription;
this->closeStatus = closeStatus;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_buffer_5__2 = _buffer_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket__SendCloseFrameAsync_d__69::ManagedWebSocket__SendCloseFrameAsync_d__69()   {
}
