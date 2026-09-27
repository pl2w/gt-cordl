#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager__ProcessATMState_d__56.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager__ProcessATMState_d__56_def.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_def.hpp"
#include "GorillaNetworking/Store/zzzz__ATM_UI_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager__ProcessATMState_d__56.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::*)()>(&::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::MoveNext)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0x577e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager__ProcessATMState_d__56>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ATM_Manager__ProcessATMState_d__56.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x577ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager__ProcessATMState_d__56>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ATM_Manager__ProcessATMState_d__56::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager__ProcessATMState_d__56>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ATM_Manager__ProcessATMState_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ATM_Manager__ProcessATMState_d__56>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ATM_Manager__ProcessATMState_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ATM_Manager__ProcessATMState_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ATM_Manager>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currencyButton", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atm_ui", ty: "::UnityW<::GorillaNetworking::Store::ATM_UI>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::ATM_Manager__ProcessATMState_d__56(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ATM_Manager>  __4__this, ::StringW  currencyButton, ::UnityW<::GorillaNetworking::Store::ATM_UI>  atm_ui, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->currencyButton = currencyButton;
this->atm_ui = atm_ui;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ATM_Manager__ProcessATMState_d__56::ATM_Manager__ProcessATMState_d__56()   {
}
