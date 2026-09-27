#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleEventSequencer__StartSequenceDelayed_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleEventSequencer__StartSequenceDelayed_d__11)
namespace GlobalNamespace {
class SimpleEventSequencer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct SimpleEventSequencer__StartSequenceDelayed_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, "", "SimpleEventSequencer/<StartSequenceDelayed>d__11");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SimpleEventSequencer/<StartSequenceDelayed>d__11
struct CORDL_TYPE SimpleEventSequencer__StartSequenceDelayed_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5b1ffb4, size 0x470, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5b20424, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleEventSequencer__StartSequenceDelayed_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SimpleEventSequencer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr SimpleEventSequencer__StartSequenceDelayed_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::SimpleEventSequencer>  __4__this, float_t  delay, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3597};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleEventSequencer>  __4__this;

/// @brief Field delay, offset: 0x30, size: 0x4, def value: None
 float_t  delay;

/// @brief Field <>u__1, offset: 0x34, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, delay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11, __u__1) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleEventSequencer__StartSequenceDelayed_d__11) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
