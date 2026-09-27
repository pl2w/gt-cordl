#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/FriendsMatchmaking__JoinRoom_d__25.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsMatchmaking__JoinRoom_d__25)
namespace Meta::XR::MultiplayerBlocks::Shared {
class FriendsMatchmaking;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct FriendsMatchmaking__JoinRoom_d__25;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, "Meta.XR.MultiplayerBlocks.Shared", "FriendsMatchmaking/<JoinRoom>d__25");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking/<JoinRoom>d__25
struct CORDL_TYPE FriendsMatchmaking__JoinRoom_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f6e330, size 0x2a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f6e5d8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FriendsMatchmaking__JoinRoom_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "roomPassword", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }]
constexpr FriendsMatchmaking__JoinRoom_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>  __4__this, ::StringW  roomId, ::StringW  roomPassword, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::FriendsMatchmaking>  __4__this;

/// @brief Field roomId, offset: 0x28, size: 0x8, def value: None
 ::StringW  roomId;

/// @brief Field roomPassword, offset: 0x30, size: 0x8, def value: None
 ::StringW  roomPassword;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, roomId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, roomPassword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendsMatchmaking__JoinRoom_d__25) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
