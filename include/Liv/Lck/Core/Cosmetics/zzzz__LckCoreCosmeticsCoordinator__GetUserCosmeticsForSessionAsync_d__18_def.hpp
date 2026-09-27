#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18)
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator;
}
namespace Liv::Lck::Core::Cosmetics {
class LckCoreCosmeticsCoordinator___c__DisplayClass18_0;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, "Liv.Lck.Core.Cosmetics", "LckCoreCosmeticsCoordinator/<GetUserCosmeticsForSessionAsync>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Core.Cosmetics.LckCoreCosmeticsCoordinator/<GetUserCosmeticsForSessionAsync>d__18
struct CORDL_TYPE LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d04514, size 0x578, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d04a8c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerIds", ty: "::System::Collections::Generic::IEnumerable_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<bool>*>  __t__builder, ::StringW  sessionId, ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  __4__this, ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*  __8__1, ::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::Core::Result_1<bool>*>  __t__builder;

/// @brief Field sessionId, offset: 0x20, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator*  __4__this;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::LckCoreCosmeticsCoordinator___c__DisplayClass18_0*  __8__1;

/// @brief Field playerIds, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, sessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, playerIds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCoreCosmeticsCoordinator__GetUserCosmeticsForSessionAsync_d__18) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
