#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream__StartOperation_d__57.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_OperationType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream__StartOperation_d__57_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::*)()>(&::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0xa8d9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa8da144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::MobileAuthenticatedStream_OperationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "asyncRequest", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::MobileAuthenticatedStream__StartOperation_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream*  __4__this, ::GlobalNamespace::MobileAuthenticatedStream_OperationType  type, ::Mono::Net::Security::AsyncProtocolRequest*  asyncRequest, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->type = type;
this->asyncRequest = asyncRequest;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileAuthenticatedStream__StartOperation_d__57::MobileAuthenticatedStream__StartOperation_d__57()   {
}
