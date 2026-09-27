#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__WaitForStateCheck_d__62.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemPUN__WaitForStateCheck_d__62)
namespace GlobalNamespace {
struct NetworkSystemPUN_InternalState;
}
namespace GlobalNamespace {
class NetworkSystemPUN;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemPUN__WaitForStateCheck_d__62;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, "", "NetworkSystemPUN/<WaitForStateCheck>d__62");
// [CompilerGenerated]
// Dependencies NetworkSystemPUN::InternalState, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemPUN/<WaitForStateCheck>d__62
struct CORDL_TYPE NetworkSystemPUN__WaitForStateCheck_d__62 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570d164, size 0x2e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570d444, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemPUN__WaitForStateCheck_d__62() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: None, comment: None }, CppParam { name: "desiredStates", ty: "::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_token_5__2", ty: "::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemPUN__WaitForStateCheck_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates, float_t  timeout, ::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken>  _token_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this;

/// @brief Field desiredStates, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetworkSystemPUN_InternalState>  desiredStates;

/// @brief Field timeout, offset: 0x30, size: 0x4, def value: None
 float_t  timeout;

/// @brief Field <token>5__2, offset: 0x38, size: 0x10, def value: None
 ::System::ValueTuple_2<::System::Threading::CancellationTokenSource*,::System::Threading::CancellationToken>  _token_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, desiredStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, timeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, _token_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN__WaitForStateCheck_d__62) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
