#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::*)()>(&::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x9f745d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f74b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_successfullyAlignedToAnchor_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anchor_5__4", ty: "::Meta::XR::MultiplayerBlocks::Colocation::Anchor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this, bool  _successfullyAlignedToAnchor_5__2, ::GlobalNamespace::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>  __7__wrap2, ::Meta::XR::MultiplayerBlocks::Colocation::Anchor  _anchor_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_successfullyAlignedToAnchor_5__2 = _successfullyAlignedToAnchor_5__2;
this->__7__wrap2 = __7__wrap2;
this->_anchor_5__4 = _anchor_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19()   {
}
