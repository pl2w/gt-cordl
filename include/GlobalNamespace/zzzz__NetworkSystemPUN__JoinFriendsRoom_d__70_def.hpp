#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__JoinFriendsRoom_d__70.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN__JoinFriendsRoom_d__70)
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace GlobalNamespace {
class NetworkSystemPUN___c__DisplayClass70_0;
}
namespace PlayFab::ClientModels {
class SharedGroupDataRecord;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN__JoinFriendsRoom_d__70;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, "", "NetworkSystemPUN/<JoinFriendsRoom>d__70");
// [CompilerGenerated]
// Dependencies NetJoinResult, System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/<JoinFriendsRoom>d__70
struct CORDL_TYPE NetworkSystemPUN__JoinFriendsRoom_d__70 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570928c, size 0xff8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570a284, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN__JoinFriendsRoom_d__70() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: None, comment: None }, CppParam { name: "keyToFollow", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "shufflerToFollow", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "actorIDToFollow", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_foundFriend_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_searchStartTime_5__3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeToSpendSearching_5__4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dummyData_5__5", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_failedToJoinFriend_5__6", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap6", ty: "::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_roomID_5__8", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_regionIndex_5__9", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ConnectToRoomTask_5__10", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN__JoinFriendsRoom_d__70(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, ::StringW  keyToFollow, ::StringW  userID, ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*  __8__1, ::StringW  shufflerToFollow, int32_t  actorIDToFollow, bool  _foundFriend_5__2, float_t  _searchStartTime_5__3, float_t  _timeToSpendSearching_5__4, ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  _dummyData_5__5, bool  _failedToJoinFriend_5__6, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>  __7__wrap6, ::StringW  _roomID_5__8, int32_t  _regionIndex_5__9, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _ConnectToRoomTask_5__10, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this;

/// @brief Field keyToFollow, offset: 0x28, size: 0x8, def value: None
 ::StringW  keyToFollow;

/// @brief Field userID, offset: 0x30, size: 0x8, def value: None
 ::StringW  userID;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::NetworkSystemPUN___c__DisplayClass70_0*  __8__1;

/// @brief Field shufflerToFollow, offset: 0x40, size: 0x8, def value: None
 ::StringW  shufflerToFollow;

/// @brief Field actorIDToFollow, offset: 0x48, size: 0x4, def value: None
 int32_t  actorIDToFollow;

/// @brief Field <foundFriend>5__2, offset: 0x4c, size: 0x1, def value: None
 bool  _foundFriend_5__2;

/// @brief Field <searchStartTime>5__3, offset: 0x50, size: 0x4, def value: None
 float_t  _searchStartTime_5__3;

/// @brief Field <timeToSpendSearching>5__4, offset: 0x54, size: 0x4, def value: None
 float_t  _timeToSpendSearching_5__4;

/// @brief Field <dummyData>5__5, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  _dummyData_5__5;

/// @brief Field <failedToJoinFriend>5__6, offset: 0x60, size: 0x1, def value: None
 bool  _failedToJoinFriend_5__6;

/// @brief Field <>u__1, offset: 0x61, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Field <>7__wrap6, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>  __7__wrap6;

/// @brief Field <roomID>5__8, offset: 0x90, size: 0x8, def value: None
 ::StringW  _roomID_5__8;

/// @brief Field <regionIndex>5__9, offset: 0x98, size: 0x4, def value: None
 int32_t  _regionIndex_5__9;

/// @brief Field <ConnectToRoomTask>5__10, offset: 0xa0, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _ConnectToRoomTask_5__10;

/// @brief Field <>u__2, offset: 0xa8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0xb0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, keyToFollow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, userID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, shufflerToFollow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, actorIDToFollow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _foundFriend_5__2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _searchStartTime_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _timeToSpendSearching_5__4) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _dummyData_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _failedToJoinFriend_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __u__1) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __7__wrap6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _roomID_5__8) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _regionIndex_5__9) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, _ConnectToRoomTask_5__10) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __u__2) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70, __u__3) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN__JoinFriendsRoom_d__70) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
