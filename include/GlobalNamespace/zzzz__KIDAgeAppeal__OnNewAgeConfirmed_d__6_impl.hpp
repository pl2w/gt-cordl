#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeAppeal__OnNewAgeConfirmed_d__6.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__KIDAgeAppeal__OnNewAgeConfirmed_d__6_def.hpp"
#include "GlobalNamespace/zzzz__AttemptAgeUpdateData_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeAppeal_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::*)()>(&::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x5a277b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a28080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::KIDAgeAppeal>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AttemptAgeUpdateData*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::KIDAgeAppeal__OnNewAgeConfirmed_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::KIDAgeAppeal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AttemptAgeUpdateData*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDAgeAppeal__OnNewAgeConfirmed_d__6::KIDAgeAppeal__OnNewAgeConfirmed_d__6()   {
}
