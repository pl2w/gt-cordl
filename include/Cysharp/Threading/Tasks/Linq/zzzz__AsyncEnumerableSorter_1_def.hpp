#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumerableSorter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncEnumerableSorter_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TElement>
struct AsyncEnumerableSorter_1__SortAsync_d__2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class AsyncEnumerableSorter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1, "Cysharp.Threading.Tasks.Linq", "AsyncEnumerableSorter`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.AsyncEnumerableSorter`1<TElement>
class CORDL_TYPE AsyncEnumerableSorter_1 : public ::System::Object {
public:
// Declarations
using _SortAsync_d__2 = ::GlobalNamespace::AsyncEnumerableSorter_1__SortAsync_d__2<TElement>;

/// @brief Method CompareKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// @brief Method ComputeKeysAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask ComputeKeysAsync(::ArrayW<TElement>  elements, int32_t  count) ;

static inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* New_ctor() ;

/// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void QuickSort(::ArrayW<int32_t>  map, int32_t  left, int32_t  right) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.AsyncEnumerableSorter`1::<SortAsync>d__2<TElement>))]
/// @brief Method SortAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<int32_t>> SortAsync(::ArrayW<TElement>  elements, int32_t  count) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncEnumerableSorter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncEnumerableSorter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncEnumerableSorter_1(AsyncEnumerableSorter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncEnumerableSorter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncEnumerableSorter_1(AsyncEnumerableSorter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
