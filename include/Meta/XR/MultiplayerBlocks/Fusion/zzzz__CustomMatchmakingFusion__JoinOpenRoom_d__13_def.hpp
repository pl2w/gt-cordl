#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomMatchmakingFusion__JoinOpenRoom_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmakingFusion__JoinOpenRoom_d__13)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class SessionInfo;
}
namespace Fusion {
class StartGameResult;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class CustomMatchmakingFusion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMatchmakingFusion__JoinOpenRoom_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, "Meta.XR.MultiplayerBlocks.Fusion", "CustomMatchmakingFusion/<JoinOpenRoom>d__13");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion/<JoinOpenRoom>d__13
struct CORDL_TYPE CustomMatchmakingFusion__JoinOpenRoom_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f5bea0, size 0x9a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f5c848, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmakingFusion__JoinOpenRoom_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lobbyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_runner_5__2", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_session_5__3", ty: "::Fusion::SessionInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMatchmakingFusion__JoinOpenRoom_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion>  __4__this, ::StringW  lobbyName, ::UnityW<::Fusion::NetworkRunner>  _runner_5__2, ::Fusion::SessionInfo*  _session_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::CustomMatchmakingFusion>  __4__this;

/// @brief Field lobbyName, offset: 0x28, size: 0x8, def value: None
 ::StringW  lobbyName;

/// @brief Field <runner>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  _runner_5__2;

/// @brief Field <session>5__3, offset: 0x38, size: 0x8, def value: None
 ::Fusion::SessionInfo*  _session_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Fusion::StartGameResult*>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, lobbyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, _runner_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, _session_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMatchmakingFusion__JoinOpenRoom_d__13) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
