#pragma once
// IWYU pragma private; include "GorillaNetworking/PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetJoinResult_def.hpp"
#include "GorillaNetworking/zzzz__JoinType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69)
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, "GorillaNetworking", "PhotonNetworkController/<AttemptToJoinPublicRoomAsync>d__69");
// [CompilerGenerated]
// Dependencies GorillaNetworking.JoinType, NetJoinResult, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.PhotonNetworkController/<AttemptToJoinPublicRoomAsync>d__69
struct CORDL_TYPE PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c93a24, size 0xca4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c948ac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::PhotonNetworkController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triggeredTrigger", ty: "::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomJoinType", ty: "::GorillaNetworking::JoinType", modifiers: "", def_value: None, comment: None }, CppParam { name: "filterSubscribed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "additionalCustomProperties", ty: "::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_desiredGameMode_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>", modifiers: "", def_value: None, comment: None }]
constexpr PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this, ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  triggeredTrigger, ::GorillaNetworking::JoinType  roomJoinType, bool  filterSubscribed, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties, ::StringW  _desiredGameMode_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  __4__this;

/// @brief Field triggeredTrigger, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  triggeredTrigger;

/// @brief Field roomJoinType, offset: 0x38, size: 0x4, def value: None
 ::GorillaNetworking::JoinType  roomJoinType;

/// @brief Field filterSubscribed, offset: 0x3c, size: 0x1, def value: None
 bool  filterSubscribed;

/// @brief Field additionalCustomProperties, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW,::StringW>>*  additionalCustomProperties;

/// @brief Field <desiredGameMode>5__2, offset: 0x48, size: 0x8, def value: None
 ::StringW  _desiredGameMode_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NetJoinResult>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, triggeredTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, roomJoinType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, filterSubscribed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, additionalCustomProperties) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, _desiredGameMode_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonNetworkController__AttemptToJoinPublicRoomAsync_d__69) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
