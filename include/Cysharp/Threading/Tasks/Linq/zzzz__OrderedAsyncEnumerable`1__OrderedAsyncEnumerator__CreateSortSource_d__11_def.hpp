#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable`1__OrderedAsyncEnumerator__CreateSortSource_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedAsyncEnumerable`1__OrderedAsyncEnumerator__CreateSortSource_d__11)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement>
struct _OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11, "Cysharp.Threading.Tasks.Linq", "OrderedAsyncEnumerable`1/_OrderedAsyncEnumerator/<CreateSortSource>d__11");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// cpp template
template<typename TElement>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerable`1/_OrderedAsyncEnumerator/<CreateSortSource>d__11<TElement>
struct CORDL_TYPE _OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11 {
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
constexpr _OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TElement>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<int32_t>>", modifiers: "", def_value: None, comment: None }]
constexpr _OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TElement>>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<int32_t>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TElement>>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<int32_t>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
