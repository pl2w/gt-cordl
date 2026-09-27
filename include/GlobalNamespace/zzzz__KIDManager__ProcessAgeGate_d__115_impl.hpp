#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__ProcessAgeGate_d__115.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__ProcessAgeGate_d__115_def.hpp"
#include "GlobalNamespace/zzzz__GetPlayerData_Data_def.hpp"
#include "GlobalNamespace/zzzz__VerifyAgeData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDManager__ProcessAgeGate_d__115.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::*)()>(&::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x5a35b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__ProcessAgeGate_d__115>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDManager__ProcessAgeGate_d__115.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a36308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__ProcessAgeGate_d__115>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDManager__ProcessAgeGate_d__115::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__ProcessAgeGate_d__115>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDManager__ProcessAgeGate_d__115::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__ProcessAgeGate_d__115>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDManager__ProcessAgeGate_d__115::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__ProcessAgeGate_d__115::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::VerifyAgeData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_verifyResponse_5__2", ty: "::GlobalNamespace::VerifyAgeData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::VerifyAgeData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::KIDManager__ProcessAgeGate_d__115(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::VerifyAgeData*>  __t__builder, ::GlobalNamespace::VerifyAgeData*  _verifyResponse_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::VerifyAgeData*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetPlayerData_Data*>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->_verifyResponse_5__2 = _verifyResponse_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDManager__ProcessAgeGate_d__115::KIDManager__ProcessAgeGate_d__115()   {
}
