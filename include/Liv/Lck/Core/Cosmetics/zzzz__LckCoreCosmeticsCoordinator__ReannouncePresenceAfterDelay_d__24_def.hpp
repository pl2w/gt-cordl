#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24)
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator/<ReannouncePresenceAfterDelay>d__24");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.TimeSpan
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator/<ReannouncePresenceAfterDelay>d__24
struct CORDL_TYPE LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d04b08, size 0x518, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d05020, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "reannounceDelay", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::TimeSpan  reannounceDelay, ::System::Threading::CancellationToken  cancellationToken, ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field reannounceDelay, offset: 0x20, size: 0x8, def value: None
 ::System::TimeSpan  reannounceDelay;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, reannounceDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCoreCosmeticsCoordinator__ReannouncePresenceAfterDelay_d__24) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
