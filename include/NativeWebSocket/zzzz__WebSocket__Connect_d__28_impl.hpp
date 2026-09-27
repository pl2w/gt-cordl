#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket__Connect_d__28.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocket__Connect_d__28_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WebSocket__Connect_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__Connect_d__28::*)()>(&::GlobalNamespace::WebSocket__Connect_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x5f36b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Connect_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WebSocket__Connect_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WebSocket__Connect_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WebSocket__Connect_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f37444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Connect_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WebSocket__Connect_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Connect_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WebSocket__Connect_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WebSocket__Connect_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WebSocket__Connect_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WebSocket__Connect_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::NativeWebSocket::WebSocket*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebSocket__Connect_d__28::WebSocket__Connect_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::NativeWebSocket::WebSocket*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebSocket__Connect_d__28::WebSocket__Connect_d__28()   {
}
