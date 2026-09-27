#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking__OnColocationSessionFound_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRColocationSession_Data_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMatchmaking__OnColocationSessionFound_d__18)
namespace Meta::XR::MultiplayerBlocks::Shared {
class LocalMatchmaking;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalMatchmaking__OnColocationSessionFound_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<OnColocationSessionFound>d__18");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, Meta.XR.MultiplayerBlocks.Shared.MatchInfo, OVRColocationSession::Data, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<OnColocationSessionFound>d__18
struct CORDL_TYPE LocalMatchmaking__OnColocationSessionFound_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f6fcf8, size 0x388, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f70080, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalMatchmaking__OnColocationSessionFound_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::OVRColocationSession_Data", modifiers: "", def_value: None, comment: None }, CppParam { name: "_matchInfo_5__2", ty: "::Meta::XR::MultiplayerBlocks::Shared::MatchInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }]
constexpr LocalMatchmaking__OnColocationSessionFound_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>  __4__this, ::GlobalNamespace::OVRColocationSession_Data  data, ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo  _matchInfo_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>  __4__this;

/// @brief Field data, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::OVRColocationSession_Data  data;

/// @brief Field <matchInfo>5__2, offset: 0x48, size: 0x18, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo  _matchInfo_5__2;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, _matchInfo_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18, __u__1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalMatchmaking__OnColocationSessionFound_d__18) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
