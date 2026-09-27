#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/LocalMatchmaking__StartAsHost_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMatchmaking__StartAsHost_d__14)
namespace Meta::XR::MultiplayerBlocks::Shared {
class LocalMatchmaking;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalMatchmaking__StartAsHost_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, "Meta.XR.MultiplayerBlocks.Shared", "LocalMatchmaking/<StartAsHost>d__14");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::RoomOperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking/<StartAsHost>d__14
struct CORDL_TYPE LocalMatchmaking__StartAsHost_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f708b4, size 0x458, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f70d0c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalMatchmaking__StartAsHost_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>", modifiers: "", def_value: None, comment: None }]
constexpr LocalMatchmaking__StartAsHost_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::LocalMatchmaking>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalMatchmaking__StartAsHost_d__14) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
