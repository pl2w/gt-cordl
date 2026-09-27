#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__JoinFriendsRoom_d__63.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion__JoinFriendsRoom_d__63_def.hpp"
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
#include "PlayFab/ClientModels/zzzz__SharedGroupDataRecord_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::*)()>(&::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::MoveNext)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0x56e47b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56e5908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keyToFollow", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shufflerToFollow", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actorIDToFollow", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_foundFriend_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_searchStartTime_5__3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeToSpendSearching_5__4", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dummyData_5__5", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_roomID_5__7", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_regionIndex_5__8", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ConnectToRoomTask_5__9", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::NetworkSystemFusion__JoinFriendsRoom_d__63(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, ::StringW  keyToFollow, ::StringW  userID, ::GlobalNamespace::NetworkSystemFusion___c__DisplayClass63_0*  __8__1, ::StringW  shufflerToFollow, int32_t  actorIDToFollow, bool  _foundFriend_5__2, float_t  _searchStartTime_5__3, float_t  _timeToSpendSearching_5__4, ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  _dummyData_5__5, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>  __7__wrap5, ::StringW  _roomID_5__7, int32_t  _regionIndex_5__8, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _ConnectToRoomTask_5__9, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->keyToFollow = keyToFollow;
this->userID = userID;
this->__8__1 = __8__1;
this->shufflerToFollow = shufflerToFollow;
this->actorIDToFollow = actorIDToFollow;
this->_foundFriend_5__2 = _foundFriend_5__2;
this->_searchStartTime_5__3 = _searchStartTime_5__3;
this->_timeToSpendSearching_5__4 = _timeToSpendSearching_5__4;
this->_dummyData_5__5 = _dummyData_5__5;
this->__u__1 = __u__1;
this->__7__wrap5 = __7__wrap5;
this->_roomID_5__7 = _roomID_5__7;
this->_regionIndex_5__8 = _regionIndex_5__8;
this->_ConnectToRoomTask_5__9 = _ConnectToRoomTask_5__9;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion__JoinFriendsRoom_d__63::NetworkSystemFusion__JoinFriendsRoom_d__63()   {
}
