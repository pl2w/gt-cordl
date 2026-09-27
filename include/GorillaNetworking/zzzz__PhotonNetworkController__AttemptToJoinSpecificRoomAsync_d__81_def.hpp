#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GorillaNetworking/zzzz__JoinType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81)
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, "GorillaNetworking", "PhotonNetworkController/<AttemptToJoinSpecificRoomAsync>d__81");
// [CompilerGenerated]
// Dependencies GorillaNetworking.JoinType, NetJoinResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.PhotonNetworkController/<AttemptToJoinSpecificRoomAsync>d__81
struct CORDL_TYPE PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c94ee4, size 0xb34, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c95a18, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::PhotonNetworkController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomJoinType", ty: "::GorillaNetworking::JoinType", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_connectToRoomTask_5__2", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }]
constexpr PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this, ::StringW  roomID, ::GorillaNetworking::JoinType  roomJoinType, ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback, ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _connectToRoomTask_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this;

/// @brief Field roomID, offset: 0x28, size: 0x8, def value: None
 ::StringW  roomID;

/// @brief Field roomJoinType, offset: 0x30, size: 0x4, def value: None
 ::GorillaNetworking::JoinType  roomJoinType;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::NetJoinResult>*  callback;

/// @brief Field <connectToRoomTask>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::NetJoinResult>*  _connectToRoomTask_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, roomID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, roomJoinType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, _connectToRoomTask_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81, __u__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinSpecificRoomAsync_d__81) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
