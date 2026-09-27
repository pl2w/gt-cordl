#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking__CreateRoom_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomCreationOptions_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmaking__CreateRoom_d__26)
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMatchmaking__CreateRoom_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/<CreateRoom>d__26");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomCreationOptions, Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/<CreateRoom>d__26
struct CORDL_TYPE CustomMatchmaking__CreateRoom_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f6b510, size 0x3d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f6b8e8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmaking__CreateRoom_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::GlobalNamespace::CustomMatchmaking_RoomCreationOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMatchmaking__CreateRoom_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  __4__this, ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking>  __4__this;

/// @brief Field options, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
