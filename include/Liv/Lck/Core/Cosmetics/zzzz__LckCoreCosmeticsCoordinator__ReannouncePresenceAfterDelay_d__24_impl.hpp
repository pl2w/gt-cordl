#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCoreCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::*)()>(&::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x9d04b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d05020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reannounceDelay", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::TimeSpan  reannounceDelay, ::System::Threading::CancellationToken  cancellationToken, ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->reannounceDelay = reannounceDelay;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24()   {
}
