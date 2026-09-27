#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomMatchmakingFusion__CreateRoom_d__11.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomCreationOptions_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion__CreateRoom_d__11_def.hpp"
#include "Fusion/zzzz__StartGameResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomMatchmakingFusion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::*)()>(&::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x9f5b198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f5b73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "options", ty: "::GlobalNamespace::CustomMatchmaking_RoomCreationOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sessionName_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::CustomMatchmakingFusion__CreateRoom_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion>  __4__this, ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options, ::StringW  _sessionName_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->options = options;
this->_sessionName_5__2 = _sessionName_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMatchmakingFusion__CreateRoom_d__11::CustomMatchmakingFusion__CreateRoom_d__11()   {
}
