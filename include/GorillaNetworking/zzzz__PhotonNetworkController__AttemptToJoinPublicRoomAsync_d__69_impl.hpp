#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_impl.hpp"
#include "GorillaNetworking/zzzz__JoinType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::*)()>(&::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0xca4;
  constexpr static std::size_t addrs = 0x5c93a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c948ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::PhotonNetworkController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triggeredTrigger", ty: "::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomJoinType", ty: "::GorillaNetworking::JoinType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filterSubscribed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "additionalCustomProperties", ty: "::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_desiredGameMode_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this, ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, bool  filterSubscribed, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, ::StringW  _desiredGameMode_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->triggeredTrigger = triggeredTrigger;
this->roomJoinType = roomJoinType;
this->filterSubscribed = filterSubscribed;
this->additionalCustomProperties = additionalCustomProperties;
this->_desiredGameMode_5__2 = _desiredGameMode_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69()   {
}
