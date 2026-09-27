#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions__WaitAsync_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAsyncExtensions__WaitAsync_d__33)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityAsyncExtensions__WaitAsync_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/<WaitAsync>d__33");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.PlayerLoopTiming, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter, System.Threading.CancellationToken, Unity.Jobs.JobHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/<WaitAsync>d__33
struct CORDL_TYPE UnityAsyncExtensions__WaitAsync_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xae319e8, size 0x284, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae31c6c, size 0x4, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions__WaitAsync_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "waitTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UnityAsyncExtensions__WaitAsync_d__33(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::Unity::Jobs::JobHandle  jobHandle, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::YieldAwaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field waitTiming, offset: 0x18, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming;

/// @brief Field jobHandle, offset: 0x20, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::YieldAwaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, waitTiming) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, jobHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
