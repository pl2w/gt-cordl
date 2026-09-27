#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking__OnColocationSessionFound_d__18.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_Data_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking__OnColocationSessionFound_d__18_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__LocalMatchmaking_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::*)()>(&::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x9f6fcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f70080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::OVRColocationSession_Data", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_matchInfo_5__2", ty: "::Meta::XR::MultiplayerBlocks::Shared::MatchInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::LocalMatchmaking__OnColocationSessionFound_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>  __4__this, ::GlobalNamespace::OVRColocationSession_Data  data, ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo  _matchInfo_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->data = data;
this->_matchInfo_5__2 = _matchInfo_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18::LocalMatchmaking__OnColocationSessionFound_d__18()   {
}
