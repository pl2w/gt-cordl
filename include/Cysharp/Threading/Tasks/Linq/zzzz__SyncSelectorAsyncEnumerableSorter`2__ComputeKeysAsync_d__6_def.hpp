#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SyncSelectorAsyncEnumerableSorter`2__ComputeKeysAsync_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncSelectorAsyncEnumerableSorter`2__ComputeKeysAsync_d__6)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement,typename TKey>
class SyncSelectorAsyncEnumerableSorter_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement,typename TKey>
struct SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6, "Cysharp.Threading.Tasks.Linq", "SyncSelectorAsyncEnumerableSorter`2/<ComputeKeysAsync>d__6");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// cpp template
template<typename TElement,typename TKey>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.SyncSelectorAsyncEnumerableSorter`2/<ComputeKeysAsync>d__6<TElement,TKey>
struct CORDL_TYPE SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6 {
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
constexpr SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "elements", ty: "::ArrayW<TElement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>*  __4__this, int32_t  count, ::ArrayW<TElement>  elements, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>*  __4__this;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  count;

/// @brief Field elements, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<TElement>  elements;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
