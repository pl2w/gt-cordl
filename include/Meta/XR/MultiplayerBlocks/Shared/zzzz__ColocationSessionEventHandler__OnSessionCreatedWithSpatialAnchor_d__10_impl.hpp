#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::*)()>(&::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9f6853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f68ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>  __4__this, ::System::Guid  groupUuid, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->groupUuid = groupUuid;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10::ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor_d__10()   {
}
