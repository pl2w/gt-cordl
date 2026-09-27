#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::*)()>(&::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x9f75b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f76134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shareAndLocalizeParams", ty: "::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->shareAndLocalizeParams = shareAndLocalizeParams;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28()   {
}
