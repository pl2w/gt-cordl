#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocket__ConnectAsyncCore_d__16.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket__ConnectAsyncCore_d__16_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::*)()>(&::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xacedc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xacee1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ClientWebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::ClientWebSocket__ConnectAsyncCore_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ClientWebSocket*  __4__this, ::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->uri = uri;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16::ClientWebSocket__ConnectAsyncCore_d__16()   {
}
