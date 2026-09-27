#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkSystemFusion;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, "", "NetworkSystemFusion/<AwaitJoiningPlayerClientReady>d__101");
// [CompilerGenerated]
// Dependencies Fusion.PlayerRef, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemFusion/<AwaitJoiningPlayerClientReady>d__101
struct CORDL_TYPE NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56e1540, size 0x690, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56e1eb4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemFusion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "player", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "_joiningPlayer_5__2", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this, ::Fusion::PlayerRef  player, ::GlobalNamespace::NetPlayer*  _joiningPlayer_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemFusion>  __4__this;

/// @brief Field player, offset: 0x28, size: 0x4, def value: None
 ::Fusion::PlayerRef  player;

/// @brief Field <joiningPlayer>5__2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  _joiningPlayer_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, player) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, _joiningPlayer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemFusion__AwaitJoiningPlayerClientReady_d__101) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
