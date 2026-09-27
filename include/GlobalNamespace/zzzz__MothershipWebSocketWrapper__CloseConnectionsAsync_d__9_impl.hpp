#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketWrapper__CloseConnectionsAsync_d__9.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper__CloseConnectionsAsync_d__9_def.hpp"
#include "GlobalNamespace/zzzz__ActiveWebSocket_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::*)()>(&::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x53c3e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x53c43e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MothershipWebSocketWrapper*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::ActiveWebSocket*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::MothershipWebSocketWrapper*  __4__this, ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::ActiveWebSocket*>  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9::MothershipWebSocketWrapper__CloseConnectionsAsync_d__9()   {
}
