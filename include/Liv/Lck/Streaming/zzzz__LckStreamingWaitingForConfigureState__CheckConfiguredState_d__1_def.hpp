#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1)
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, "Liv.Lck.Streaming", "LckStreamingWaitingForConfigureState/<CheckConfiguredState>d__1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Streaming.LckStreamingWaitingForConfigureState/<CheckConfiguredState>d__1
struct CORDL_TYPE LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d3b964, size 0x8cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d3c230, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "controller", ty: "::UnityW<::Liv::Lck::Streaming::LckStreamingController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  controller, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  controller;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::Core::Result_1<bool>*>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckStreamingWaitingForConfigureState__CheckConfiguredState_d__1) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
