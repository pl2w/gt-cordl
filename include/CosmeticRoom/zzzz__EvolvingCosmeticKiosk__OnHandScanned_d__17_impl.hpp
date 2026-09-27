#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKiosk__OnHandScanned_d__17.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk__OnHandScanned_d__17_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::*)()>(&::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c4d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c4d878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "player", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::EvolvingCosmeticKiosk__OnHandScanned_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::NetPlayer*  player, ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->player = player;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EvolvingCosmeticKiosk__OnHandScanned_d__17::EvolvingCosmeticKiosk__OnHandScanned_d__17()   {
}
