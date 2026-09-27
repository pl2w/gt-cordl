#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SkipUntil`1__SkipUntil__RunOther_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SkipUntil`1__SkipUntil__RunOther_d__18)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntil_1__SkipUntil;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct _SkipUntil_SkipUntil_1__RunOther_d__18;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_SkipUntil_SkipUntil_1__RunOther_d__18);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_SkipUntil_SkipUntil_1__RunOther_d__18, "Cysharp.Threading.Tasks.Linq", "SkipUntil`1/_SkipUntil/<RunOther>d__18");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil/<RunOther>d__18<TSource>
struct CORDL_TYPE _SkipUntil_SkipUntil_1__RunOther_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr _SkipUntil_SkipUntil_1__RunOther_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "other", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil<TSource>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr _SkipUntil_SkipUntil_1__RunOther_d__18(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  other, ::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil<TSource>*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field other, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  other;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil<TSource>*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
