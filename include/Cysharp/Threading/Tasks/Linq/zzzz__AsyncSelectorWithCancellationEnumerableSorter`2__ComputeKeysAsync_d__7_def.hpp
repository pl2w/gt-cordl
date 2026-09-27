#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncSelectorWithCancellationEnumerableSorter`2__ComputeKeysAsync_d__7.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncSelectorWithCancellationEnumerableSorter`2__ComputeKeysAsync_d__7)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement,typename TKey>
class AsyncSelectorWithCancellationEnumerableSorter_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement,typename TKey>
struct AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7, "Cysharp.Threading.Tasks.Linq", "AsyncSelectorWithCancellationEnumerableSorter`2/<ComputeKeysAsync>d__7");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// cpp template
template<typename TElement,typename TKey>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.AsyncSelectorWithCancellationEnumerableSorter`2/<ComputeKeysAsync>d__7<TElement,TKey>
struct CORDL_TYPE AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7 {
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
constexpr AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::AsyncSelectorWithCancellationEnumerableSorter_2<TElement,TKey>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "elements", ty: "::ArrayW<TElement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<TKey>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<TKey>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::AsyncSelectorWithCancellationEnumerableSorter_2<TElement,TKey>*  __4__this, int32_t  count, ::ArrayW<TElement>  elements, int32_t  _i_5__2, ::ArrayW<TKey>  __7__wrap2, int32_t  __7__wrap3, ::GlobalNamespace::UniTask_1_Awaiter<TKey>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::AsyncSelectorWithCancellationEnumerableSorter_2<TElement,TKey>*  __4__this;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  count;

/// @brief Field elements, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<TElement>  elements;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<TKey>  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>u__1, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TKey>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
