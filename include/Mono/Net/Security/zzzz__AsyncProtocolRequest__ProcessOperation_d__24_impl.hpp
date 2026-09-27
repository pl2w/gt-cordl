#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest__ProcessOperation_d__24.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest__ProcessOperation_d__24_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::*)()>(&::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0xa8d5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa8d59a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_status_5__2", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_newStatus_5__3", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::AsyncProtocolRequest__ProcessOperation_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::Mono::Net::Security::AsyncOperationStatus  _status_5__2, ::Mono::Net::Security::AsyncOperationStatus  _newStatus_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->_status_5__2 = _status_5__2;
this->_newStatus_5__3 = _newStatus_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24::AsyncProtocolRequest__ProcessOperation_d__24()   {
}
