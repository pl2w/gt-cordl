#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_impl.hpp"
#include "GorillaNetworking/zzzz__JoinType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::*)()>(&::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::MoveNext)> {
  constexpr static std::size_t size = 0xb34;
  constexpr static std::size_t addrs = 0x5c94ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c95a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::PhotonNetworkController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roomJoinType", ty: "::GorillaNetworking::JoinType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::System::Action_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_connectToRoomTask_5__2", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this, ::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _connectToRoomTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->roomID = roomID;
this->roomJoinType = roomJoinType;
this->callback = callback;
this->_connectToRoomTask_5__2 = _connectToRoomTask_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81()   {
}
