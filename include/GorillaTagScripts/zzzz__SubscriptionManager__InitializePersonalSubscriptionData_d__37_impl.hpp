#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager__InitializePersonalSubscriptionData_d__37.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager__InitializePersonalSubscriptionData_d__37_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::*)()>(&::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x1238;
  constexpr static std::size_t addrs = 0x5bd6b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bd7d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_requestBody_5__2", ty: "::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_retryCount_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_request_5__4", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::SubscriptionManager__InitializePersonalSubscriptionData_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*  _requestBody_5__2, int32_t  _retryCount_5__3, ::GlobalNamespace::Awaitable_Awaiter  __u__1, ::UnityEngine::Networking::UnityWebRequest*  _request_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->_requestBody_5__2 = _requestBody_5__2;
this->_retryCount_5__3 = _retryCount_5__3;
this->__u__1 = __u__1;
this->_request_5__4 = _request_5__4;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionManager__InitializePersonalSubscriptionData_d__37::SubscriptionManager__InitializePersonalSubscriptionData_d__37()   {
}
