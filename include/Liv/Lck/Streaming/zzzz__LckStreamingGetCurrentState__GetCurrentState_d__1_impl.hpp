#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingGetCurrentState__GetCurrentState_d__1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingGetCurrentState__GetCurrentState_d__1_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::*)()>(&::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x9d398a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d3a098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controller", ty: "::UnityW<::Liv::Lck::Streaming::LckStreamingController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::LckStreamingGetCurrentState__GetCurrentState_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  controller, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->controller = controller;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckStreamingGetCurrentState__GetCurrentState_d__1::LckStreamingGetCurrentState__GetCurrentState_d__1()   {
}
