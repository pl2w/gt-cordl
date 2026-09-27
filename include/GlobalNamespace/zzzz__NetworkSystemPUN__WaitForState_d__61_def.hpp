#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__WaitForState_d__61.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN__WaitForState_d__61)
namespace GlobalNamespace {
struct NetworkSystemPUN_InternalState;
}
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN__WaitForState_d__61;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, "", "NetworkSystemPUN/<WaitForState>d__61");
// [CompilerGenerated]
// Dependencies NetworkSystemPUN::InternalState, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/<WaitForState>d__61
struct CORDL_TYPE NetworkSystemPUN__WaitForState_d__61 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570cbbc, size 0x540, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570d0fc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN__WaitForState_d__61() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ct", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "desiredStates", ty: "::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeoutTime_5__2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN__WaitForState_d__61(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, float_t  timeout, ::System::Threading::CancellationToken  ct, ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, float_t  _timeoutTime_5__2, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field timeout, offset: 0x20, size: 0x4, def value: None
 float_t  timeout;

/// @brief Field ct, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ct;

/// @brief Field desiredStates, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this;

/// @brief Field <timeoutTime>5__2, offset: 0x40, size: 0x4, def value: None
 float_t  _timeoutTime_5__2;

/// @brief Field <>u__1, offset: 0x44, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, timeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, ct) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, desiredStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, _timeoutTime_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61, __u__1) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN__WaitForState_d__61) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
