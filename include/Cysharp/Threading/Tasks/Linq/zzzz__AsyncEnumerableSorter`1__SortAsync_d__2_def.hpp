#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumerableSorter`1__SortAsync_d__2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncEnumerableSorter`1__SortAsync_d__2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class AsyncEnumerableSorter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement>
struct AsyncEnumerableSorter_1__SortAsync_d__2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2, "Cysharp.Threading.Tasks.Linq", "AsyncEnumerableSorter`1/<SortAsync>d__2");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// cpp template
template<typename TElement>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.AsyncEnumerableSorter`1/<SortAsync>d__2<TElement>
struct CORDL_TYPE AsyncEnumerableSorter_1__SortAsync_d__2 {
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
constexpr AsyncEnumerableSorter_1__SortAsync_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "elements", ty: "::ArrayW<TElement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr AsyncEnumerableSorter_1__SortAsync_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<int32_t>>  __t__builder, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  __4__this, ::ArrayW<TElement>  elements, int32_t  count, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20690};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<int32_t>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  __4__this;

/// @brief Field elements, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<TElement>  elements;

/// @brief Field count, offset: 0x30, size: 0x4, def value: None
 int32_t  count;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
