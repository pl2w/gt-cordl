#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendBackendController_PrivacyState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FriendBackendController)
namespace GlobalNamespace {
class FriendBackendController_FriendIdResponse;
}
namespace GlobalNamespace {
class FriendBackendController_FriendLink;
}
namespace GlobalNamespace {
class FriendBackendController_FriendPresence;
}
namespace GlobalNamespace {
class FriendBackendController_FriendRequestRequest;
}
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsRequest;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsResponse;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsResult;
}
namespace GlobalNamespace {
struct FriendBackendController_PendingRequestStatus;
}
namespace GlobalNamespace {
struct FriendBackendController_PrivacyState;
}
namespace GlobalNamespace {
class FriendBackendController_RemoveFriendRequest;
}
namespace GlobalNamespace {
class FriendBackendController_SetPrivacyStateRequest;
}
namespace GlobalNamespace {
class FriendBackendController_SetPrivacyStateResponse;
}
namespace GlobalNamespace {
class FriendBackendController__SendAddFriendRequest_d__64;
}
namespace GlobalNamespace {
class FriendBackendController__SendGetFriendsRequest_d__57;
}
namespace GlobalNamespace {
class FriendBackendController__SendRemoveFriendRequest_d__67;
}
namespace GlobalNamespace {
class FriendBackendController__SendSetPrivacyStateRequest_d__61;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendBackendController;
}
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
class FriendBackendController_FriendIdResponse;
}
namespace GlobalNamespace {
class FriendBackendController_FriendLink;
}
namespace GlobalNamespace {
class FriendBackendController_FriendPresence;
}
namespace GlobalNamespace {
class FriendBackendController_FriendRequestRequest;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsRequest;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsResponse;
}
namespace GlobalNamespace {
class FriendBackendController_GetFriendsResult;
}
namespace GlobalNamespace {
class FriendBackendController_RemoveFriendRequest;
}
namespace GlobalNamespace {
class FriendBackendController_SetPrivacyStateRequest;
}
namespace GlobalNamespace {
class FriendBackendController_SetPrivacyStateResponse;
}
namespace GlobalNamespace {
class FriendBackendController__SendAddFriendRequest_d__64;
}
namespace GlobalNamespace {
class FriendBackendController__SendGetFriendsRequest_d__57;
}
namespace GlobalNamespace {
class FriendBackendController__SendRemoveFriendRequest_d__67;
}
namespace GlobalNamespace {
class FriendBackendController__SendSetPrivacyStateRequest_d__61;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendBackendController*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_Friend*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_FriendIdResponse*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_FriendLink*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_FriendPresence*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_FriendRequestRequest*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_GetFriendsRequest*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_GetFriendsResponse*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_GetFriendsResult*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*);
MARK_REF_T(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*);
MARK_REF_T(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*);
MARK_REF_T(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*);
MARK_REF_T(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*);
MARK_REF_T(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController*, "", "FriendBackendController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_Friend*, "", "FriendBackendController/Friend");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_FriendIdResponse*, "", "FriendBackendController/FriendIdResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_FriendLink*, "", "FriendBackendController/FriendLink");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_FriendPresence*, "", "FriendBackendController/FriendPresence");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_FriendRequestRequest*, "", "FriendBackendController/FriendRequestRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_GetFriendsRequest*, "", "FriendBackendController/GetFriendsRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_GetFriendsResponse*, "", "FriendBackendController/GetFriendsResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_GetFriendsResult*, "", "FriendBackendController/GetFriendsResult");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*, "", "FriendBackendController/RemoveFriendRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*, "", "FriendBackendController/SetPrivacyStateRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*, "", "FriendBackendController/SetPrivacyStateResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*, "", "FriendBackendController/<SendAddFriendRequest>d__64");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*, "", "FriendBackendController/<SendGetFriendsRequest>d__57");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*, "", "FriendBackendController/<SendRemoveFriendRequest>d__67");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*, "", "FriendBackendController/<SendSetPrivacyStateRequest>d__61");
// Dependencies FriendBackendController::PrivacyState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController
class CORDL_TYPE FriendBackendController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Friend = ::GlobalNamespace::FriendBackendController_Friend;

using FriendIdResponse = ::GlobalNamespace::FriendBackendController_FriendIdResponse;

using FriendLink = ::GlobalNamespace::FriendBackendController_FriendLink;

using FriendPresence = ::GlobalNamespace::FriendBackendController_FriendPresence;

using FriendRequestRequest = ::GlobalNamespace::FriendBackendController_FriendRequestRequest;

using GetFriendsRequest = ::GlobalNamespace::FriendBackendController_GetFriendsRequest;

using GetFriendsResponse = ::GlobalNamespace::FriendBackendController_GetFriendsResponse;

using GetFriendsResult = ::GlobalNamespace::FriendBackendController_GetFriendsResult;

using PendingRequestStatus = ::GlobalNamespace::FriendBackendController_PendingRequestStatus;

using PrivacyState = ::GlobalNamespace::FriendBackendController_PrivacyState;

using RemoveFriendRequest = ::GlobalNamespace::FriendBackendController_RemoveFriendRequest;

using SetPrivacyStateRequest = ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest;

using SetPrivacyStateResponse = ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse;

using _SendAddFriendRequest_d__64 = ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64;

using _SendGetFriendsRequest_d__57 = ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57;

using _SendRemoveFriendRequest_d__67 = ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67;

using _SendSetPrivacyStateRequest_d__61 = ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61;

 __declspec(property(get=get_FriendsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  FriendsList;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::FriendBackendController>  Instance;

 __declspec(property(get=get_MyPrivacyState)) ::GlobalNamespace::FriendBackendController_PrivacyState  MyPrivacyState;

/// @brief Field OnAddFriendComplete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAddFriendComplete, put=__cordl_internal_set_OnAddFriendComplete)) ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  OnAddFriendComplete;

/// @brief Field OnGetFriendsComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetFriendsComplete, put=__cordl_internal_set_OnGetFriendsComplete)) ::System::Action_1<bool>*  OnGetFriendsComplete;

/// @brief Field OnRemoveFriendComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRemoveFriendComplete, put=__cordl_internal_set_OnRemoveFriendComplete)) ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  OnRemoveFriendComplete;

/// @brief Field OnSetPrivacyStateComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSetPrivacyStateComplete, put=__cordl_internal_set_OnSetPrivacyStateComplete)) ::System::Action_1<bool>*  OnSetPrivacyStateComplete;

/// @brief Field addFriendInProgress, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_addFriendInProgress, put=__cordl_internal_set_addFriendInProgress)) bool  addFriendInProgress;

/// @brief Field addFriendRequestQueue, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_addFriendRequestQueue, put=__cordl_internal_set_addFriendRequestQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*  addFriendRequestQueue;

/// @brief Field addFriendRetryCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_addFriendRetryCount, put=__cordl_internal_set_addFriendRetryCount)) int32_t  addFriendRetryCount;

/// @brief Field addFriendTargetIdHash, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_addFriendTargetIdHash, put=__cordl_internal_set_addFriendTargetIdHash)) int32_t  addFriendTargetIdHash;

/// @brief Field addFriendTargetPlayer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_addFriendTargetPlayer, put=__cordl_internal_set_addFriendTargetPlayer)) ::GlobalNamespace::NetPlayer*  addFriendTargetPlayer;

/// @brief Field friendListIndexToRemoveFriend, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_friendListIndexToRemoveFriend, put=__cordl_internal_set_friendListIndexToRemoveFriend)) int32_t  friendListIndexToRemoveFriend;

/// @brief Field getFriendsInProgress, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_getFriendsInProgress, put=__cordl_internal_set_getFriendsInProgress)) bool  getFriendsInProgress;

/// @brief Field getFriendsRetryCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_getFriendsRetryCount, put=__cordl_internal_set_getFriendsRetryCount)) int32_t  getFriendsRetryCount;

/// @brief Field lastFriendsList, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastFriendsList, put=__cordl_internal_set_lastFriendsList)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  lastFriendsList;

/// @brief Field lastGetFriendsResponse, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastGetFriendsResponse, put=__cordl_internal_set_lastGetFriendsResponse)) ::GlobalNamespace::FriendBackendController_GetFriendsResponse*  lastGetFriendsResponse;

/// @brief Field lastPrivacyState, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPrivacyState, put=__cordl_internal_set_lastPrivacyState)) ::GlobalNamespace::FriendBackendController_PrivacyState  lastPrivacyState;

/// @brief Field lastPrivacyStateResponse, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPrivacyStateResponse, put=__cordl_internal_set_lastPrivacyStateResponse)) ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  lastPrivacyStateResponse;

/// @brief Field maxRetriesOnFail, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetriesOnFail, put=__cordl_internal_set_maxRetriesOnFail)) int32_t  maxRetriesOnFail;

/// @brief Field netPlayerIndexToAddFriend, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_netPlayerIndexToAddFriend, put=__cordl_internal_set_netPlayerIndexToAddFriend)) int32_t  netPlayerIndexToAddFriend;

/// @brief Field privacyStateToSet, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_privacyStateToSet, put=__cordl_internal_set_privacyStateToSet)) ::GlobalNamespace::FriendBackendController_PrivacyState  privacyStateToSet;

/// @brief Field removeFriendInProgress, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_removeFriendInProgress, put=__cordl_internal_set_removeFriendInProgress)) bool  removeFriendInProgress;

/// @brief Field removeFriendRequestQueue, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeFriendRequestQueue, put=__cordl_internal_set_removeFriendRequestQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*  removeFriendRequestQueue;

/// @brief Field removeFriendRetryCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_removeFriendRetryCount, put=__cordl_internal_set_removeFriendRetryCount)) int32_t  removeFriendRetryCount;

/// @brief Field removeFriendTarget, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeFriendTarget, put=__cordl_internal_set_removeFriendTarget)) ::GlobalNamespace::FriendBackendController_Friend*  removeFriendTarget;

/// @brief Field removeFriendTargetIdHash, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_removeFriendTargetIdHash, put=__cordl_internal_set_removeFriendTargetIdHash)) int32_t  removeFriendTargetIdHash;

/// @brief Field setPrivacyStateInProgress, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_setPrivacyStateInProgress, put=__cordl_internal_set_setPrivacyStateInProgress)) bool  setPrivacyStateInProgress;

/// @brief Field setPrivacyStateQueue, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_setPrivacyStateQueue, put=__cordl_internal_set_setPrivacyStateQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*  setPrivacyStateQueue;

/// @brief Field setPrivacyStateRetryCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_setPrivacyStateRetryCount, put=__cordl_internal_set_setPrivacyStateRetryCount)) int32_t  setPrivacyStateRetryCount;

/// @brief Field setPrivacyStateState, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setPrivacyStateState, put=__cordl_internal_set_setPrivacyStateState)) ::GlobalNamespace::FriendBackendController_PrivacyState  setPrivacyStateState;

/// @brief Method AddFriend, addr 0x5a9e8d8, size 0x154, virtual false, abstract: false, final false
inline void AddFriend(::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method AddFriendComplete, addr 0x5a9f8c0, size 0xbc, virtual false, abstract: false, final false
inline void AddFriendComplete(/* [CanBeNull] */ bool  success) ;

/// @brief Method AddFriendInternal, addr 0x5a9ea2c, size 0x1d0, virtual false, abstract: false, final false
inline void AddFriendInternal() ;

/// @brief Method Awake, addr 0x5a9ef08, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateTestFriends, addr 0x5a9f36c, size 0x290, virtual false, abstract: false, final false
inline void CreateTestFriends() ;

/// @brief Method GetFriends, addr 0x5a9e594, size 0x18, virtual false, abstract: false, final false
inline void GetFriends() ;

/// @brief Method GetFriendsComplete, addr 0x5a9f0f8, size 0x274, virtual false, abstract: false, final false
inline void GetFriendsComplete(/* [CanBeNull] */ ::GlobalNamespace::FriendBackendController_GetFriendsResponse*  response) ;

/// @brief Method GetFriendsInternal, addr 0x5a9e5ac, size 0x140, virtual false, abstract: false, final false
inline void GetFriendsInternal() ;

/// @brief Method LogNetPlayersInRoom, addr 0x5a9fb54, size 0x368, virtual false, abstract: false, final false
inline void LogNetPlayersInRoom() ;

static inline ::GlobalNamespace::FriendBackendController* New_ctor() ;

/// @brief Method RemoveFriend, addr 0x5a9ebfc, size 0x150, virtual false, abstract: false, final false
inline void RemoveFriend(::GlobalNamespace::FriendBackendController_Friend*  target) ;

/// @brief Method RemoveFriendComplete, addr 0x5a9fa98, size 0xbc, virtual false, abstract: false, final false
inline void RemoveFriendComplete(/* [CanBeNull] */ bool  success) ;

/// @brief Method RemoveFriendInternal, addr 0x5a9ed4c, size 0x1bc, virtual false, abstract: false, final false
inline void RemoveFriendInternal() ;

/// [IteratorStateMachine(typeof(FriendBackendController::<SendAddFriendRequest>d__64))]
/// @brief Method SendAddFriendRequest, addr 0x5a9f7fc, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendAddFriendRequest(::GlobalNamespace::FriendBackendController_FriendRequestRequest*  data, ::System::Action_1<bool>*  callback) ;

/// [IteratorStateMachine(typeof(FriendBackendController::<SendGetFriendsRequest>d__57))]
/// @brief Method SendGetFriendsRequest, addr 0x5a9f034, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendGetFriendsRequest(::GlobalNamespace::FriendBackendController_GetFriendsRequest*  data, ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  callback) ;

/// [IteratorStateMachine(typeof(FriendBackendController::<SendRemoveFriendRequest>d__67))]
/// @brief Method SendRemoveFriendRequest, addr 0x5a9f9d4, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendRemoveFriendRequest(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  data, ::System::Action_1<bool>*  callback) ;

/// [IteratorStateMachine(typeof(FriendBackendController::<SendSetPrivacyStateRequest>d__61))]
/// @brief Method SendSetPrivacyStateRequest, addr 0x5a9f614, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendSetPrivacyStateRequest(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  data, ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  callback) ;

/// @brief Method SetPrivacyState, addr 0x5a9e6ec, size 0x7c, virtual false, abstract: false, final false
inline void SetPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  state) ;

/// @brief Method SetPrivacyStateComplete, addr 0x5a9f6d8, size 0xcc, virtual false, abstract: false, final false
inline void SetPrivacyStateComplete(/* [CanBeNull] */ ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  response) ;

/// @brief Method SetPrivacyStateInternal, addr 0x5a9e768, size 0x170, virtual false, abstract: false, final false
inline void SetPrivacyStateInternal() ;

/// @brief Method TestAddFriend, addr 0x5a9febc, size 0x168, virtual false, abstract: false, final false
inline void TestAddFriend() ;

/// @brief Method TestAddFriendCompleteCallback, addr 0x5aa0024, size 0x88, virtual false, abstract: false, final false
inline void TestAddFriendCompleteCallback(::GlobalNamespace::NetPlayer*  player, bool  success) ;

/// @brief Method TestGetFriends, addr 0x5aa0238, size 0xd0, virtual false, abstract: false, final false
inline void TestGetFriends() ;

/// @brief Method TestGetFriendsCompleteCallback, addr 0x5aa0308, size 0x430, virtual false, abstract: false, final false
inline void TestGetFriendsCompleteCallback(bool  success) ;

/// @brief Method TestRemoveFriend, addr 0x5aa00ac, size 0x104, virtual false, abstract: false, final false
inline void TestRemoveFriend() ;

/// @brief Method TestRemoveFriendCompleteCallback, addr 0x5aa01b0, size 0x88, virtual false, abstract: false, final false
inline void TestRemoveFriendCompleteCallback(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, bool  success) ;

/// @brief Method TestSetPrivacyState, addr 0x5aa0738, size 0xb4, virtual false, abstract: false, final false
inline void TestSetPrivacyState() ;

/// @brief Method TestSetPrivacyStateCompleteCallback, addr 0x5aa07ec, size 0x110, virtual false, abstract: false, final false
inline void TestSetPrivacyStateCompleteCallback(bool  success) ;

constexpr ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>* const& __cordl_internal_get_OnAddFriendComplete() const;

constexpr ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*& __cordl_internal_get_OnAddFriendComplete() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnGetFriendsComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnGetFriendsComplete() ;

constexpr ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>* const& __cordl_internal_get_OnRemoveFriendComplete() const;

constexpr ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*& __cordl_internal_get_OnRemoveFriendComplete() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnSetPrivacyStateComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnSetPrivacyStateComplete() ;

constexpr bool const& __cordl_internal_get_addFriendInProgress() const;

constexpr bool& __cordl_internal_get_addFriendInProgress() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>* const& __cordl_internal_get_addFriendRequestQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*& __cordl_internal_get_addFriendRequestQueue() ;

constexpr int32_t const& __cordl_internal_get_addFriendRetryCount() const;

constexpr int32_t& __cordl_internal_get_addFriendRetryCount() ;

constexpr int32_t const& __cordl_internal_get_addFriendTargetIdHash() const;

constexpr int32_t& __cordl_internal_get_addFriendTargetIdHash() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_addFriendTargetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_addFriendTargetPlayer() ;

constexpr int32_t const& __cordl_internal_get_friendListIndexToRemoveFriend() const;

constexpr int32_t& __cordl_internal_get_friendListIndexToRemoveFriend() ;

constexpr bool const& __cordl_internal_get_getFriendsInProgress() const;

constexpr bool& __cordl_internal_get_getFriendsInProgress() ;

constexpr int32_t const& __cordl_internal_get_getFriendsRetryCount() const;

constexpr int32_t& __cordl_internal_get_getFriendsRetryCount() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* const& __cordl_internal_get_lastFriendsList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*& __cordl_internal_get_lastFriendsList() ;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResponse* const& __cordl_internal_get_lastGetFriendsResponse() const;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResponse*& __cordl_internal_get_lastGetFriendsResponse() ;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& __cordl_internal_get_lastPrivacyState() const;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& __cordl_internal_get_lastPrivacyState() ;

constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* const& __cordl_internal_get_lastPrivacyStateResponse() const;

constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*& __cordl_internal_get_lastPrivacyStateResponse() ;

constexpr int32_t const& __cordl_internal_get_maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get_maxRetriesOnFail() ;

constexpr int32_t const& __cordl_internal_get_netPlayerIndexToAddFriend() const;

constexpr int32_t& __cordl_internal_get_netPlayerIndexToAddFriend() ;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& __cordl_internal_get_privacyStateToSet() const;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& __cordl_internal_get_privacyStateToSet() ;

constexpr bool const& __cordl_internal_get_removeFriendInProgress() const;

constexpr bool& __cordl_internal_get_removeFriendInProgress() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>* const& __cordl_internal_get_removeFriendRequestQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*& __cordl_internal_get_removeFriendRequestQueue() ;

constexpr int32_t const& __cordl_internal_get_removeFriendRetryCount() const;

constexpr int32_t& __cordl_internal_get_removeFriendRetryCount() ;

constexpr ::GlobalNamespace::FriendBackendController_Friend* const& __cordl_internal_get_removeFriendTarget() const;

constexpr ::GlobalNamespace::FriendBackendController_Friend*& __cordl_internal_get_removeFriendTarget() ;

constexpr int32_t const& __cordl_internal_get_removeFriendTargetIdHash() const;

constexpr int32_t& __cordl_internal_get_removeFriendTargetIdHash() ;

constexpr bool const& __cordl_internal_get_setPrivacyStateInProgress() const;

constexpr bool& __cordl_internal_get_setPrivacyStateInProgress() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>* const& __cordl_internal_get_setPrivacyStateQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*& __cordl_internal_get_setPrivacyStateQueue() ;

constexpr int32_t const& __cordl_internal_get_setPrivacyStateRetryCount() const;

constexpr int32_t& __cordl_internal_get_setPrivacyStateRetryCount() ;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& __cordl_internal_get_setPrivacyStateState() const;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& __cordl_internal_get_setPrivacyStateState() ;

constexpr void __cordl_internal_set_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value) ;

constexpr void __cordl_internal_set_OnGetFriendsComplete(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value) ;

constexpr void __cordl_internal_set_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_addFriendInProgress(bool  value) ;

constexpr void __cordl_internal_set_addFriendRequestQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*  value) ;

constexpr void __cordl_internal_set_addFriendRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_addFriendTargetIdHash(int32_t  value) ;

constexpr void __cordl_internal_set_addFriendTargetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_friendListIndexToRemoveFriend(int32_t  value) ;

constexpr void __cordl_internal_set_getFriendsInProgress(bool  value) ;

constexpr void __cordl_internal_set_getFriendsRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_lastFriendsList(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value) ;

constexpr void __cordl_internal_set_lastGetFriendsResponse(::GlobalNamespace::FriendBackendController_GetFriendsResponse*  value) ;

constexpr void __cordl_internal_set_lastPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  value) ;

constexpr void __cordl_internal_set_lastPrivacyStateResponse(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  value) ;

constexpr void __cordl_internal_set_maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set_netPlayerIndexToAddFriend(int32_t  value) ;

constexpr void __cordl_internal_set_privacyStateToSet(::GlobalNamespace::FriendBackendController_PrivacyState  value) ;

constexpr void __cordl_internal_set_removeFriendInProgress(bool  value) ;

constexpr void __cordl_internal_set_removeFriendRequestQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*  value) ;

constexpr void __cordl_internal_set_removeFriendRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_removeFriendTarget(::GlobalNamespace::FriendBackendController_Friend*  value) ;

constexpr void __cordl_internal_set_removeFriendTargetIdHash(int32_t  value) ;

constexpr void __cordl_internal_set_setPrivacyStateInProgress(bool  value) ;

constexpr void __cordl_internal_set_setPrivacyStateQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*  value) ;

constexpr void __cordl_internal_set_setPrivacyStateRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_setPrivacyStateState(::GlobalNamespace::FriendBackendController_PrivacyState  value) ;

/// @brief Method .ctor, addr 0x5aa08fc, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAddFriendComplete, addr 0x5a9e2c4, size 0xb0, virtual false, abstract: false, final false
inline void add_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetFriendsComplete, addr 0x5a9e004, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetFriendsComplete(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRemoveFriendComplete, addr 0x5a9e424, size 0xb0, virtual false, abstract: false, final false
inline void add_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSetPrivacyStateComplete, addr 0x5a9e164, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value) ;

static inline ::UnityW<::GlobalNamespace::FriendBackendController> getStaticF_Instance() ;

/// @brief Method get_FriendsList, addr 0x5a9e584, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* get_FriendsList() ;

/// @brief Method get_MyPrivacyState, addr 0x5a9e58c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FriendBackendController_PrivacyState get_MyPrivacyState() ;

/// [CompilerGenerated]
/// @brief Method remove_OnAddFriendComplete, addr 0x5a9e374, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetFriendsComplete, addr 0x5a9e0b4, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetFriendsComplete(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRemoveFriendComplete, addr 0x5a9e4d4, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSetPrivacyStateComplete, addr 0x5a9e214, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value) ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::FriendBackendController>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController(FriendBackendController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController(FriendBackendController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3260};

/// [CompilerGenerated]
/// @brief Field OnGetFriendsComplete, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnGetFriendsComplete;

/// [CompilerGenerated]
/// @brief Field OnSetPrivacyStateComplete, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnSetPrivacyStateComplete;

/// [CompilerGenerated]
/// @brief Field OnAddFriendComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  ___OnAddFriendComplete;

/// [CompilerGenerated]
/// @brief Field OnRemoveFriendComplete, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  ___OnRemoveFriendComplete;

/// @brief Field maxRetriesOnFail, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxRetriesOnFail;

/// @brief Field getFriendsRetryCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___getFriendsRetryCount;

/// @brief Field setPrivacyStateRetryCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___setPrivacyStateRetryCount;

/// @brief Field addFriendRetryCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___addFriendRetryCount;

/// @brief Field removeFriendRetryCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___removeFriendRetryCount;

/// @brief Field getFriendsInProgress, offset: 0x54, size: 0x1, def value: None
 bool  ___getFriendsInProgress;

/// @brief Field lastGetFriendsResponse, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_GetFriendsResponse*  ___lastGetFriendsResponse;

/// @brief Field lastFriendsList, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  ___lastFriendsList;

/// @brief Field setPrivacyStateInProgress, offset: 0x68, size: 0x1, def value: None
 bool  ___setPrivacyStateInProgress;

/// @brief Field setPrivacyStateState, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::FriendBackendController_PrivacyState  ___setPrivacyStateState;

/// @brief Field lastPrivacyStateResponse, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  ___lastPrivacyStateResponse;

/// @brief Field setPrivacyStateQueue, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*  ___setPrivacyStateQueue;

/// @brief Field lastPrivacyState, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::FriendBackendController_PrivacyState  ___lastPrivacyState;

/// @brief Field addFriendInProgress, offset: 0x84, size: 0x1, def value: None
 bool  ___addFriendInProgress;

/// @brief Field addFriendTargetIdHash, offset: 0x88, size: 0x4, def value: None
 int32_t  ___addFriendTargetIdHash;

/// @brief Field addFriendTargetPlayer, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___addFriendTargetPlayer;

/// @brief Field addFriendRequestQueue, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*  ___addFriendRequestQueue;

/// @brief Field removeFriendInProgress, offset: 0xa0, size: 0x1, def value: None
 bool  ___removeFriendInProgress;

/// @brief Field removeFriendTargetIdHash, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___removeFriendTargetIdHash;

/// @brief Field removeFriendTarget, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_Friend*  ___removeFriendTarget;

/// @brief Field removeFriendRequestQueue, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*  ___removeFriendRequestQueue;

/// [SerializeField]
/// @brief Field netPlayerIndexToAddFriend, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___netPlayerIndexToAddFriend;

/// [SerializeField]
/// @brief Field friendListIndexToRemoveFriend, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___friendListIndexToRemoveFriend;

/// [SerializeField]
/// @brief Field privacyStateToSet, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::FriendBackendController_PrivacyState  ___privacyStateToSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___OnGetFriendsComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___OnSetPrivacyStateComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___OnAddFriendComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___OnRemoveFriendComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___maxRetriesOnFail) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___getFriendsRetryCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___setPrivacyStateRetryCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___addFriendRetryCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___removeFriendRetryCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___getFriendsInProgress) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___lastGetFriendsResponse) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___lastFriendsList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___setPrivacyStateInProgress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___setPrivacyStateState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___lastPrivacyStateResponse) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___setPrivacyStateQueue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___lastPrivacyState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___addFriendInProgress) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___addFriendTargetIdHash) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___addFriendTargetPlayer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___addFriendRequestQueue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___removeFriendInProgress) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___removeFriendTargetIdHash) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___removeFriendTarget) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___removeFriendRequestQueue) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___netPlayerIndexToAddFriend) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___friendListIndexToRemoveFriend) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController, ___privacyStateToSet) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/<SendSetPrivacyStateRequest>d__61
class CORDL_TYPE FriendBackendController__SendSetPrivacyStateRequest_d__61 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FriendBackendController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5aa1b4c, size 0x478, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5aa1fc4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5aa1fcc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5aa2004, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5aa1b48, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a9f6b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController__SendSetPrivacyStateRequest_d__61() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendSetPrivacyStateRequest_d__61", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController__SendSetPrivacyStateRequest_d__61(FriendBackendController__SendSetPrivacyStateRequest_d__61 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendSetPrivacyStateRequest_d__61", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController__SendSetPrivacyStateRequest_d__61(FriendBackendController__SendSetPrivacyStateRequest_d__61 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3259};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendBackendController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/<SendRemoveFriendRequest>d__67
class CORDL_TYPE FriendBackendController__SendRemoveFriendRequest_d__67 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FriendBackendController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<bool>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5aa16e8, size 0x418, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5aa1b00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5aa1b08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5aa1b40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5aa16e4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::FriendBackendController_RemoveFriendRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::FriendBackendController_RemoveFriendRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a9fa70, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController__SendRemoveFriendRequest_d__67() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendRemoveFriendRequest_d__67", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController__SendRemoveFriendRequest_d__67(FriendBackendController__SendRemoveFriendRequest_d__67 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendRemoveFriendRequest_d__67", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController__SendRemoveFriendRequest_d__67(FriendBackendController__SendRemoveFriendRequest_d__67 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3258};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendBackendController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/<SendGetFriendsRequest>d__57
class CORDL_TYPE FriendBackendController__SendGetFriendsRequest_d__57 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FriendBackendController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::FriendBackendController_GetFriendsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5aa1228, size 0x474, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5aa169c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5aa16a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5aa16dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5aa1224, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::FriendBackendController_GetFriendsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a9f0d0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController__SendGetFriendsRequest_d__57() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendGetFriendsRequest_d__57", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController__SendGetFriendsRequest_d__57(FriendBackendController__SendGetFriendsRequest_d__57 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendGetFriendsRequest_d__57", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController__SendGetFriendsRequest_d__57(FriendBackendController__SendGetFriendsRequest_d__57 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3257};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_GetFriendsRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendBackendController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/<SendAddFriendRequest>d__64
class CORDL_TYPE FriendBackendController__SendAddFriendRequest_d__64 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FriendBackendController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<bool>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::FriendBackendController_FriendRequestRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5aa0db4, size 0x428, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5aa11dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5aa11e4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5aa121c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5aa0db0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::FriendBackendController_FriendRequestRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::FriendBackendController_FriendRequestRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::FriendBackendController_FriendRequestRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a9f898, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController__SendAddFriendRequest_d__64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendAddFriendRequest_d__64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController__SendAddFriendRequest_d__64(FriendBackendController__SendAddFriendRequest_d__64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController__SendAddFriendRequest_d__64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController__SendAddFriendRequest_d__64(FriendBackendController__SendAddFriendRequest_d__64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3256};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_FriendRequestRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FriendBackendController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/RemoveFriendRequest
class CORDL_TYPE FriendBackendController_RemoveFriendRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FriendFriendLinkId, put=set_FriendFriendLinkId)) ::StringW  FriendFriendLinkId;

 __declspec(property(get=get_MothershipId, put=set_MothershipId)) ::StringW  MothershipId;

 __declspec(property(get=get_MothershipToken, put=set_MothershipToken)) ::StringW  MothershipToken;

 __declspec(property(get=get_MyFriendLinkId, put=set_MyFriendLinkId)) ::StringW  MyFriendLinkId;

 __declspec(property(get=get_PlayFabId, put=set_PlayFabId)) ::StringW  PlayFabId;

 __declspec(property(get=get_PlayFabTicket, put=set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field <FriendFriendLinkId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__FriendFriendLinkId_k__BackingField, put=__cordl_internal_set__FriendFriendLinkId_k__BackingField)) ::StringW  _FriendFriendLinkId_k__BackingField;

/// @brief Field <MothershipId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipId_k__BackingField, put=__cordl_internal_set__MothershipId_k__BackingField)) ::StringW  _MothershipId_k__BackingField;

/// @brief Field <MothershipToken>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipToken_k__BackingField, put=__cordl_internal_set__MothershipToken_k__BackingField)) ::StringW  _MothershipToken_k__BackingField;

/// @brief Field <MyFriendLinkId>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__MyFriendLinkId_k__BackingField, put=__cordl_internal_set__MyFriendLinkId_k__BackingField)) ::StringW  _MyFriendLinkId_k__BackingField;

/// @brief Field <PlayFabId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabId_k__BackingField, put=__cordl_internal_set__PlayFabId_k__BackingField)) ::StringW  _PlayFabId_k__BackingField;

/// @brief Field <PlayFabTicket>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabTicket_k__BackingField, put=__cordl_internal_set__PlayFabTicket_k__BackingField)) ::StringW  _PlayFabTicket_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_RemoveFriendRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__FriendFriendLinkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FriendFriendLinkId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MothershipId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MothershipToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipToken_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MyFriendLinkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MyFriendLinkId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabTicket_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabTicket_k__BackingField() ;

constexpr void __cordl_internal_set__FriendFriendLinkId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MothershipId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MothershipToken_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MyFriendLinkId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9f97c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FriendFriendLinkId, addr 0x5aa0da0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FriendFriendLinkId() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipId, addr 0x5aa0d60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipId() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipToken, addr 0x5aa0d80, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipToken() ;

/// [CompilerGenerated]
/// @brief Method get_MyFriendLinkId, addr 0x5aa0d90, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MyFriendLinkId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabId, addr 0x5aa0d50, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabTicket, addr 0x5aa0d70, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabTicket() ;

/// [CompilerGenerated]
/// @brief Method set_FriendFriendLinkId, addr 0x5aa0da8, size 0x8, virtual false, abstract: false, final false
inline void set_FriendFriendLinkId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MothershipId, addr 0x5aa0d68, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MothershipToken, addr 0x5aa0d88, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipToken(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyFriendLinkId, addr 0x5aa0d98, size 0x8, virtual false, abstract: false, final false
inline void set_MyFriendLinkId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabId, addr 0x5aa0d58, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabTicket, addr 0x5aa0d78, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabTicket(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_RemoveFriendRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_RemoveFriendRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_RemoveFriendRequest(FriendBackendController_RemoveFriendRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_RemoveFriendRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_RemoveFriendRequest(FriendBackendController_RemoveFriendRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3253};

/// [CompilerGenerated]
/// @brief Field <PlayFabId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PlayFabId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____MothershipId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayFabTicket>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____PlayFabTicket_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipToken>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____MothershipToken_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MyFriendLinkId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____MyFriendLinkId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FriendFriendLinkId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____FriendFriendLinkId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____PlayFabId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____MothershipId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____PlayFabTicket_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____MothershipToken_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____MyFriendLinkId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest, ____FriendFriendLinkId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_RemoveFriendRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/SetPrivacyStateResponse
class CORDL_TYPE FriendBackendController_SetPrivacyStateResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int32_t  StatusCode;

/// @brief Field <Error>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <StatusCode>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__StatusCode_k__BackingField, put=__cordl_internal_set__StatusCode_k__BackingField)) int32_t  _StatusCode_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aa0d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x5aa0d38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_StatusCode, addr 0x5aa0d28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StatusCode() ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x5aa0d40, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusCode, addr 0x5aa0d30, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_SetPrivacyStateResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_SetPrivacyStateResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_SetPrivacyStateResponse(FriendBackendController_SetPrivacyStateResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_SetPrivacyStateResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_SetPrivacyStateResponse(FriendBackendController_SetPrivacyStateResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3252};

/// [CompilerGenerated]
/// @brief Field <StatusCode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____StatusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse, ____StatusCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse, ____Error_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/SetPrivacyStateRequest
class CORDL_TYPE FriendBackendController_SetPrivacyStateRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PlayFabId, put=set_PlayFabId)) ::StringW  PlayFabId;

 __declspec(property(get=get_PlayFabTicket, put=set_PlayFabTicket)) ::StringW  PlayFabTicket;

 __declspec(property(get=get_PrivacyState, put=set_PrivacyState)) ::StringW  PrivacyState;

/// @brief Field <PlayFabId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabId_k__BackingField, put=__cordl_internal_set__PlayFabId_k__BackingField)) ::StringW  _PlayFabId_k__BackingField;

/// @brief Field <PlayFabTicket>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabTicket_k__BackingField, put=__cordl_internal_set__PlayFabTicket_k__BackingField)) ::StringW  _PlayFabTicket_k__BackingField;

/// @brief Field <PrivacyState>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__PrivacyState_k__BackingField, put=__cordl_internal_set__PrivacyState_k__BackingField)) ::StringW  _PrivacyState_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabTicket_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabTicket_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PrivacyState_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PrivacyState_k__BackingField() ;

constexpr void __cordl_internal_set__PlayFabId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PrivacyState_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9f60c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabId, addr 0x5aa0cf8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabTicket, addr 0x5aa0d08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabTicket() ;

/// [CompilerGenerated]
/// @brief Method get_PrivacyState, addr 0x5aa0d18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PrivacyState() ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabId, addr 0x5aa0d00, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabTicket, addr 0x5aa0d10, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabTicket(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PrivacyState, addr 0x5aa0d20, size 0x8, virtual false, abstract: false, final false
inline void set_PrivacyState(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_SetPrivacyStateRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_SetPrivacyStateRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_SetPrivacyStateRequest(FriendBackendController_SetPrivacyStateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_SetPrivacyStateRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_SetPrivacyStateRequest(FriendBackendController_SetPrivacyStateRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3251};

/// [CompilerGenerated]
/// @brief Field <PlayFabId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PlayFabId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayFabTicket>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____PlayFabTicket_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PrivacyState>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____PrivacyState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest, ____PlayFabId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest, ____PlayFabTicket_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest, ____PrivacyState_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FriendBackendController::PrivacyState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/GetFriendsResult
class CORDL_TYPE FriendBackendController_GetFriendsResult : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Friends, put=set_Friends)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  Friends;

 __declspec(property(get=get_MyPrivacyState, put=set_MyPrivacyState)) ::GlobalNamespace::FriendBackendController_PrivacyState  MyPrivacyState;

/// @brief Field <Friends>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Friends_k__BackingField, put=__cordl_internal_set__Friends_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  _Friends_k__BackingField;

/// @brief Field <MyPrivacyState>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MyPrivacyState_k__BackingField, put=__cordl_internal_set__MyPrivacyState_k__BackingField)) ::GlobalNamespace::FriendBackendController_PrivacyState  _MyPrivacyState_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_GetFriendsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* const& __cordl_internal_get__Friends_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*& __cordl_internal_get__Friends_k__BackingField() ;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& __cordl_internal_get__MyPrivacyState_k__BackingField() const;

constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& __cordl_internal_get__MyPrivacyState_k__BackingField() ;

constexpr void __cordl_internal_set__Friends_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value) ;

constexpr void __cordl_internal_set__MyPrivacyState_k__BackingField(::GlobalNamespace::FriendBackendController_PrivacyState  value) ;

/// @brief Method .ctor, addr 0x5aa0cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Friends, addr 0x5aa0cd0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* get_Friends() ;

/// [CompilerGenerated]
/// @brief Method get_MyPrivacyState, addr 0x5aa0ce0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FriendBackendController_PrivacyState get_MyPrivacyState() ;

/// [CompilerGenerated]
/// @brief Method set_Friends, addr 0x5aa0cd8, size 0x8, virtual false, abstract: false, final false
inline void set_Friends(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyPrivacyState, addr 0x5aa0ce8, size 0x8, virtual false, abstract: false, final false
inline void set_MyPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_GetFriendsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_GetFriendsResult(FriendBackendController_GetFriendsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_GetFriendsResult(FriendBackendController_GetFriendsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3250};

/// [CompilerGenerated]
/// @brief Field <Friends>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  ____Friends_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MyPrivacyState>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::FriendBackendController_PrivacyState  ____MyPrivacyState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsResult, ____Friends_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsResult, ____MyPrivacyState_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_GetFriendsResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/GetFriendsResponse
class CORDL_TYPE FriendBackendController_GetFriendsResponse : public ::System::Object {
public:
// Declarations
/// @brief [Nullable(2)]
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

/// @brief [CanBeNull]
 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::FriendBackendController_GetFriendsResult*  Result;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int32_t  StatusCode;

/// @brief Field <Error>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <Result>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::GlobalNamespace::FriendBackendController_GetFriendsResult*  _Result_k__BackingField;

/// @brief Field <StatusCode>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__StatusCode_k__BackingField, put=__cordl_internal_set__StatusCode_k__BackingField)) int32_t  _StatusCode_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_GetFriendsResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResult* const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResult*& __cordl_internal_get__Result_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Result_k__BackingField(::GlobalNamespace::FriendBackendController_GetFriendsResult*  value) ;

constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aa0cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x5aa0cb8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x5aa0c98, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FriendBackendController_GetFriendsResult* get_Result() ;

/// [CompilerGenerated]
/// @brief Method get_StatusCode, addr 0x5aa0ca8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StatusCode() ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x5aa0cc0, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0x5aa0ca0, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::FriendBackendController_GetFriendsResult*  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusCode, addr 0x5aa0cb0, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_GetFriendsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_GetFriendsResponse(FriendBackendController_GetFriendsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_GetFriendsResponse(FriendBackendController_GetFriendsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3249};

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_GetFriendsResult*  ____Result_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StatusCode>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____StatusCode_k__BackingField;

/// [Nullable(2)]
/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsResponse, ____Result_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsResponse, ____StatusCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsResponse, ____Error_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_GetFriendsResponse) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/GetFriendsRequest
class CORDL_TYPE FriendBackendController_GetFriendsRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MothershipId, put=set_MothershipId)) ::StringW  MothershipId;

 __declspec(property(get=get_MothershipToken, put=set_MothershipToken)) ::StringW  MothershipToken;

 __declspec(property(get=get_PlayFabId, put=set_PlayFabId)) ::StringW  PlayFabId;

 __declspec(property(get=get_PlayFabTicket, put=set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field <MothershipId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipId_k__BackingField, put=__cordl_internal_set__MothershipId_k__BackingField)) ::StringW  _MothershipId_k__BackingField;

/// @brief Field <MothershipToken>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipToken_k__BackingField, put=__cordl_internal_set__MothershipToken_k__BackingField)) ::StringW  _MothershipToken_k__BackingField;

/// @brief Field <PlayFabId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabId_k__BackingField, put=__cordl_internal_set__PlayFabId_k__BackingField)) ::StringW  _PlayFabId_k__BackingField;

/// @brief Field <PlayFabTicket>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabTicket_k__BackingField, put=__cordl_internal_set__PlayFabTicket_k__BackingField)) ::StringW  _PlayFabTicket_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_GetFriendsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__MothershipId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MothershipToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipToken_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabTicket_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabTicket_k__BackingField() ;

constexpr void __cordl_internal_set__MothershipId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MothershipToken_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9efdc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipId, addr 0x5aa0c68, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipId() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipToken, addr 0x5aa0c78, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipToken() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabId, addr 0x5aa0c58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabTicket, addr 0x5aa0c88, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabTicket() ;

/// [CompilerGenerated]
/// @brief Method set_MothershipId, addr 0x5aa0c70, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MothershipToken, addr 0x5aa0c80, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipToken(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabId, addr 0x5aa0c60, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabTicket, addr 0x5aa0c90, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabTicket(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_GetFriendsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_GetFriendsRequest(FriendBackendController_GetFriendsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_GetFriendsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_GetFriendsRequest(FriendBackendController_GetFriendsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3248};

/// [CompilerGenerated]
/// @brief Field <PlayFabId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PlayFabId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____MothershipId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipToken>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____MothershipToken_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayFabTicket>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____PlayFabTicket_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsRequest, ____PlayFabId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsRequest, ____MothershipId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsRequest, ____MothershipToken_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_GetFriendsRequest, ____PlayFabTicket_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_GetFriendsRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/FriendRequestRequest
class CORDL_TYPE FriendBackendController_FriendRequestRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FriendFriendLinkId, put=set_FriendFriendLinkId)) ::StringW  FriendFriendLinkId;

 __declspec(property(get=get_MothershipId, put=set_MothershipId)) ::StringW  MothershipId;

 __declspec(property(get=get_MothershipToken, put=set_MothershipToken)) ::StringW  MothershipToken;

 __declspec(property(get=get_MyFriendLinkId, put=set_MyFriendLinkId)) ::StringW  MyFriendLinkId;

 __declspec(property(get=get_PlayFabId, put=set_PlayFabId)) ::StringW  PlayFabId;

 __declspec(property(get=get_PlayFabTicket, put=set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field <FriendFriendLinkId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__FriendFriendLinkId_k__BackingField, put=__cordl_internal_set__FriendFriendLinkId_k__BackingField)) ::StringW  _FriendFriendLinkId_k__BackingField;

/// @brief Field <MothershipId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipId_k__BackingField, put=__cordl_internal_set__MothershipId_k__BackingField)) ::StringW  _MothershipId_k__BackingField;

/// @brief Field <MothershipToken>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipToken_k__BackingField, put=__cordl_internal_set__MothershipToken_k__BackingField)) ::StringW  _MothershipToken_k__BackingField;

/// @brief Field <MyFriendLinkId>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__MyFriendLinkId_k__BackingField, put=__cordl_internal_set__MyFriendLinkId_k__BackingField)) ::StringW  _MyFriendLinkId_k__BackingField;

/// @brief Field <PlayFabId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabId_k__BackingField, put=__cordl_internal_set__PlayFabId_k__BackingField)) ::StringW  _PlayFabId_k__BackingField;

/// @brief Field <PlayFabTicket>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabTicket_k__BackingField, put=__cordl_internal_set__PlayFabTicket_k__BackingField)) ::StringW  _PlayFabTicket_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_FriendRequestRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__FriendFriendLinkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FriendFriendLinkId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MothershipId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MothershipToken_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipToken_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MyFriendLinkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MyFriendLinkId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabTicket_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabTicket_k__BackingField() ;

constexpr void __cordl_internal_set__FriendFriendLinkId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MothershipId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MothershipToken_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MyFriendLinkId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9f7a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FriendFriendLinkId, addr 0x5aa0c48, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FriendFriendLinkId() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipId, addr 0x5aa0c08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipId() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipToken, addr 0x5aa0c28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipToken() ;

/// [CompilerGenerated]
/// @brief Method get_MyFriendLinkId, addr 0x5aa0c38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MyFriendLinkId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabId, addr 0x5aa0bf8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabTicket, addr 0x5aa0c18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabTicket() ;

/// [CompilerGenerated]
/// @brief Method set_FriendFriendLinkId, addr 0x5aa0c50, size 0x8, virtual false, abstract: false, final false
inline void set_FriendFriendLinkId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MothershipId, addr 0x5aa0c10, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MothershipToken, addr 0x5aa0c30, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipToken(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyFriendLinkId, addr 0x5aa0c40, size 0x8, virtual false, abstract: false, final false
inline void set_MyFriendLinkId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabId, addr 0x5aa0c00, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabTicket, addr 0x5aa0c20, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabTicket(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_FriendRequestRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendRequestRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_FriendRequestRequest(FriendBackendController_FriendRequestRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendRequestRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_FriendRequestRequest(FriendBackendController_FriendRequestRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3247};

/// [CompilerGenerated]
/// @brief Field <PlayFabId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PlayFabId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____MothershipId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlayFabTicket>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____PlayFabTicket_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipToken>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____MothershipToken_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MyFriendLinkId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____MyFriendLinkId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FriendFriendLinkId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____FriendFriendLinkId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____PlayFabId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____MothershipId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____PlayFabTicket_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____MothershipToken_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____MyFriendLinkId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendRequestRequest, ____FriendFriendLinkId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_FriendRequestRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/FriendIdResponse
class CORDL_TYPE FriendBackendController_FriendIdResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MothershipId, put=set_MothershipId)) ::StringW  MothershipId;

 __declspec(property(get=get_PlayFabId, put=set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field <MothershipId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MothershipId_k__BackingField, put=__cordl_internal_set__MothershipId_k__BackingField)) ::StringW  _MothershipId_k__BackingField;

/// @brief Field <PlayFabId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayFabId_k__BackingField, put=__cordl_internal_set__PlayFabId_k__BackingField)) ::StringW  _PlayFabId_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_FriendIdResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__MothershipId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MothershipId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlayFabId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlayFabId_k__BackingField() ;

constexpr void __cordl_internal_set__MothershipId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlayFabId_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5aa0ba0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_MothershipId, addr 0x5aa0b90, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MothershipId() ;

/// [CompilerGenerated]
/// @brief Method get_PlayFabId, addr 0x5aa0b80, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayFabId() ;

/// [CompilerGenerated]
/// @brief Method set_MothershipId, addr 0x5aa0b98, size 0x8, virtual false, abstract: false, final false
inline void set_MothershipId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlayFabId, addr 0x5aa0b88, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFabId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_FriendIdResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendIdResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_FriendIdResponse(FriendBackendController_FriendIdResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendIdResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_FriendIdResponse(FriendBackendController_FriendIdResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3246};

/// [CompilerGenerated]
/// @brief Field <PlayFabId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PlayFabId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MothershipId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____MothershipId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendIdResponse, ____PlayFabId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendIdResponse, ____MothershipId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_FriendIdResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/FriendLink
class CORDL_TYPE FriendBackendController_FriendLink : public ::System::Object {
public:
// Declarations
/// @brief Field <created>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__created_k__BackingField, put=__cordl_internal_set__created_k__BackingField)) ::System::DateTime  _created_k__BackingField;

/// @brief Field <friend_friendlink_id>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__friend_friendlink_id_k__BackingField, put=__cordl_internal_set__friend_friendlink_id_k__BackingField)) ::StringW  _friend_friendlink_id_k__BackingField;

/// @brief Field <friend_mothership_id>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__friend_mothership_id_k__BackingField, put=__cordl_internal_set__friend_mothership_id_k__BackingField)) ::StringW  _friend_mothership_id_k__BackingField;

/// @brief Field <friend_playfab_id>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__friend_playfab_id_k__BackingField, put=__cordl_internal_set__friend_playfab_id_k__BackingField)) ::StringW  _friend_playfab_id_k__BackingField;

/// @brief Field <my_friendlink_id>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__my_friendlink_id_k__BackingField, put=__cordl_internal_set__my_friendlink_id_k__BackingField)) ::StringW  _my_friendlink_id_k__BackingField;

/// @brief Field <my_mothership_id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__my_mothership_id_k__BackingField, put=__cordl_internal_set__my_mothership_id_k__BackingField)) ::StringW  _my_mothership_id_k__BackingField;

/// @brief Field <my_playfab_id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__my_playfab_id_k__BackingField, put=__cordl_internal_set__my_playfab_id_k__BackingField)) ::StringW  _my_playfab_id_k__BackingField;

 __declspec(property(get=get_created, put=set_created)) ::System::DateTime  created;

 __declspec(property(get=get_friend_friendlink_id, put=set_friend_friendlink_id)) ::StringW  friend_friendlink_id;

 __declspec(property(get=get_friend_mothership_id, put=set_friend_mothership_id)) ::StringW  friend_mothership_id;

 __declspec(property(get=get_friend_playfab_id, put=set_friend_playfab_id)) ::StringW  friend_playfab_id;

 __declspec(property(get=get_my_friendlink_id, put=set_my_friendlink_id)) ::StringW  my_friendlink_id;

 __declspec(property(get=get_my_mothership_id, put=set_my_mothership_id)) ::StringW  my_mothership_id;

 __declspec(property(get=get_my_playfab_id, put=set_my_playfab_id)) ::StringW  my_playfab_id;

static inline ::GlobalNamespace::FriendBackendController_FriendLink* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get__created_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__created_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__friend_friendlink_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__friend_friendlink_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__friend_mothership_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__friend_mothership_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__friend_playfab_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__friend_playfab_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__my_friendlink_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__my_friendlink_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__my_mothership_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__my_mothership_id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__my_playfab_id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__my_playfab_id_k__BackingField() ;

constexpr void __cordl_internal_set__created_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__friend_friendlink_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__friend_mothership_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__friend_playfab_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__my_friendlink_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__my_mothership_id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__my_playfab_id_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5aa0b78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_created, addr 0x5aa0b68, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_created() ;

/// [CompilerGenerated]
/// @brief Method get_friend_friendlink_id, addr 0x5aa0b58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_friend_friendlink_id() ;

/// [CompilerGenerated]
/// @brief Method get_friend_mothership_id, addr 0x5aa0b48, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_friend_mothership_id() ;

/// [CompilerGenerated]
/// @brief Method get_friend_playfab_id, addr 0x5aa0b38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_friend_playfab_id() ;

/// [CompilerGenerated]
/// @brief Method get_my_friendlink_id, addr 0x5aa0b28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_my_friendlink_id() ;

/// [CompilerGenerated]
/// @brief Method get_my_mothership_id, addr 0x5aa0b18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_my_mothership_id() ;

/// [CompilerGenerated]
/// @brief Method get_my_playfab_id, addr 0x5aa0b08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_my_playfab_id() ;

/// [CompilerGenerated]
/// @brief Method set_created, addr 0x5aa0b70, size 0x8, virtual false, abstract: false, final false
inline void set_created(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_friend_friendlink_id, addr 0x5aa0b60, size 0x8, virtual false, abstract: false, final false
inline void set_friend_friendlink_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_friend_mothership_id, addr 0x5aa0b50, size 0x8, virtual false, abstract: false, final false
inline void set_friend_mothership_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_friend_playfab_id, addr 0x5aa0b40, size 0x8, virtual false, abstract: false, final false
inline void set_friend_playfab_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_my_friendlink_id, addr 0x5aa0b30, size 0x8, virtual false, abstract: false, final false
inline void set_my_friendlink_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_my_mothership_id, addr 0x5aa0b20, size 0x8, virtual false, abstract: false, final false
inline void set_my_mothership_id(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_my_playfab_id, addr 0x5aa0b10, size 0x8, virtual false, abstract: false, final false
inline void set_my_playfab_id(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_FriendLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_FriendLink(FriendBackendController_FriendLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_FriendLink(FriendBackendController_FriendLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3245};

/// [CompilerGenerated]
/// @brief Field <my_playfab_id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____my_playfab_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <my_mothership_id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____my_mothership_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <my_friendlink_id>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____my_friendlink_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <friend_playfab_id>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____friend_playfab_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <friend_mothership_id>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____friend_mothership_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <friend_friendlink_id>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____friend_friendlink_id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <created>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ____created_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____my_playfab_id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____my_mothership_id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____my_friendlink_id_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____friend_playfab_id_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____friend_mothership_id_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____friend_friendlink_id_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendLink, ____created_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_FriendLink) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/FriendPresence
class CORDL_TYPE FriendBackendController_FriendPresence : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FriendLinkId, put=set_FriendLinkId)) ::StringW  FriendLinkId;

 __declspec(property(get=get_IsPublic, put=set_IsPublic)) ::System::Nullable_1<bool>  IsPublic;

 __declspec(property(get=get_Region, put=set_Region)) ::StringW  Region;

 __declspec(property(get=get_RoomId, put=set_RoomId)) ::StringW  RoomId;

 __declspec(property(get=get_UserName, put=set_UserName)) ::StringW  UserName;

 __declspec(property(get=get_Zone, put=set_Zone)) ::StringW  Zone;

/// @brief Field <FriendLinkId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__FriendLinkId_k__BackingField, put=__cordl_internal_set__FriendLinkId_k__BackingField)) ::StringW  _FriendLinkId_k__BackingField;

/// @brief Field <IsPublic>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__IsPublic_k__BackingField, put=__cordl_internal_set__IsPublic_k__BackingField)) ::System::Nullable_1<bool>  _IsPublic_k__BackingField;

/// @brief Field <Region>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Region_k__BackingField, put=__cordl_internal_set__Region_k__BackingField)) ::StringW  _Region_k__BackingField;

/// @brief Field <RoomId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomId_k__BackingField, put=__cordl_internal_set__RoomId_k__BackingField)) ::StringW  _RoomId_k__BackingField;

/// @brief Field <UserName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserName_k__BackingField, put=__cordl_internal_set__UserName_k__BackingField)) ::StringW  _UserName_k__BackingField;

/// @brief Field <Zone>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Zone_k__BackingField, put=__cordl_internal_set__Zone_k__BackingField)) ::StringW  _Zone_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_FriendPresence* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__FriendLinkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FriendLinkId_k__BackingField() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IsPublic_k__BackingField() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IsPublic_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Region_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RoomId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RoomId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Zone_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Zone_k__BackingField() ;

constexpr void __cordl_internal_set__FriendLinkId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsPublic_k__BackingField(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__Region_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RoomId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UserName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Zone_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9f5fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FriendLinkId, addr 0x5aa0aa8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FriendLinkId() ;

/// [CompilerGenerated]
/// @brief Method get_IsPublic, addr 0x5aa0af8, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_IsPublic() ;

/// [CompilerGenerated]
/// @brief Method get_Region, addr 0x5aa0ae8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Region() ;

/// [CompilerGenerated]
/// @brief Method get_RoomId, addr 0x5aa0ac8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RoomId() ;

/// [CompilerGenerated]
/// @brief Method get_UserName, addr 0x5aa0ab8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// [CompilerGenerated]
/// @brief Method get_Zone, addr 0x5aa0ad8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Zone() ;

/// [CompilerGenerated]
/// @brief Method set_FriendLinkId, addr 0x5aa0ab0, size 0x8, virtual false, abstract: false, final false
inline void set_FriendLinkId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsPublic, addr 0x5aa0b00, size 0x8, virtual false, abstract: false, final false
inline void set_IsPublic(::System::Nullable_1<bool>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Region, addr 0x5aa0af0, size 0x8, virtual false, abstract: false, final false
inline void set_Region(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomId, addr 0x5aa0ad0, size 0x8, virtual false, abstract: false, final false
inline void set_RoomId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserName, addr 0x5aa0ac0, size 0x8, virtual false, abstract: false, final false
inline void set_UserName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Zone, addr 0x5aa0ae0, size 0x8, virtual false, abstract: false, final false
inline void set_Zone(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_FriendPresence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendPresence", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_FriendPresence(FriendBackendController_FriendPresence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_FriendPresence", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_FriendPresence(FriendBackendController_FriendPresence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3244};

/// [CompilerGenerated]
/// @brief Field <FriendLinkId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____FriendLinkId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UserName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____UserName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RoomId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____RoomId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Zone>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Zone_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Region>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Region_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsPublic>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____IsPublic_k__BackingField;

/// @brief Size padding 0x40 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____FriendLinkId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____UserName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____RoomId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____Zone_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____Region_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_FriendPresence, ____IsPublic_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_FriendPresence) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendBackendController/Friend
class CORDL_TYPE FriendBackendController_Friend : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Created, put=set_Created)) ::System::DateTime  Created;

 __declspec(property(get=get_Presence, put=set_Presence)) ::GlobalNamespace::FriendBackendController_FriendPresence*  Presence;

/// @brief Field <Created>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Created_k__BackingField, put=__cordl_internal_set__Created_k__BackingField)) ::System::DateTime  _Created_k__BackingField;

/// @brief Field <Presence>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Presence_k__BackingField, put=__cordl_internal_set__Presence_k__BackingField)) ::GlobalNamespace::FriendBackendController_FriendPresence*  _Presence_k__BackingField;

static inline ::GlobalNamespace::FriendBackendController_Friend* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get__Created_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__Created_k__BackingField() ;

constexpr ::GlobalNamespace::FriendBackendController_FriendPresence* const& __cordl_internal_get__Presence_k__BackingField() const;

constexpr ::GlobalNamespace::FriendBackendController_FriendPresence*& __cordl_internal_get__Presence_k__BackingField() ;

constexpr void __cordl_internal_set__Created_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Presence_k__BackingField(::GlobalNamespace::FriendBackendController_FriendPresence*  value) ;

/// @brief Method .ctor, addr 0x5a9f604, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Created, addr 0x5aa0a98, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_Created() ;

/// [CompilerGenerated]
/// @brief Method get_Presence, addr 0x5aa0a88, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FriendBackendController_FriendPresence* get_Presence() ;

/// [CompilerGenerated]
/// @brief Method set_Created, addr 0x5aa0aa0, size 0x8, virtual false, abstract: false, final false
inline void set_Created(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Presence, addr 0x5aa0a90, size 0x8, virtual false, abstract: false, final false
inline void set_Presence(::GlobalNamespace::FriendBackendController_FriendPresence*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_Friend() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_Friend", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendBackendController_Friend(FriendBackendController_Friend && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendBackendController_Friend", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendBackendController_Friend(FriendBackendController_Friend const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3243};

/// [CompilerGenerated]
/// @brief Field <Presence>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::FriendBackendController_FriendPresence*  ____Presence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Created>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____Created_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_Friend, ____Presence_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendBackendController_Friend, ____Created_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_Friend) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
