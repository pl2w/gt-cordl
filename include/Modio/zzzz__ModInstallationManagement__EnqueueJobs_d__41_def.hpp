#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement__EnqueueJobs_d__41.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement__EnqueueJobs_d__41)
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModInstallationManagement__EnqueueJobs_d__41;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, "Modio", "ModInstallationManagement/<EnqueueJobs>d__41");
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/<EnqueueJobs>d__41
struct CORDL_TYPE ModInstallationManagement__EnqueueJobs_d__41 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa01345c, size 0x1254, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0146b0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement__EnqueueJobs_d__41() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::ArrayW<::Modio::Mods::ModId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }]
constexpr ModInstallationManagement__EnqueueJobs_d__41(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::ArrayW<::Modio::Mods::ModId>  __7__wrap1, int32_t  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>7__wrap1, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::ModId>  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x28, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, __7__wrap1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, __7__wrap2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
