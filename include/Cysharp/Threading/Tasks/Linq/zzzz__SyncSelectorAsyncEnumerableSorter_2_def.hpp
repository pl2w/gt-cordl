#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SyncSelectorAsyncEnumerableSorter_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncSelectorAsyncEnumerableSorter_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class AsyncEnumerableSorter_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TElement,typename TKey>
struct SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement,typename TKey>
class SyncSelectorAsyncEnumerableSorter_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2, "Cysharp.Threading.Tasks.Linq", "SyncSelectorAsyncEnumerableSorter`2");
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumerableSorter`1<TElement>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SyncSelectorAsyncEnumerableSorter`2<TElement,TKey>
class CORDL_TYPE SyncSelectorAsyncEnumerableSorter_2 : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement> {
public:
// Declarations
using _ComputeKeysAsync_d__6 = ::GlobalNamespace::SyncSelectorAsyncEnumerableSorter_2__ComputeKeysAsync_d__6<TElement, TKey>;

/// @brief Field comparer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>*  comparer;

/// @brief Field descending, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_descending, put=__cordl_internal_set_descending)) bool  descending;

/// @brief Field keySelector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_2<TElement,TKey>*  keySelector;

/// @brief Field keys, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::ArrayW<TKey>  keys;

/// @brief Field next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next;

/// @brief Method CompareKeys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t CompareKeys(int32_t  index1, int32_t  index2) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.SyncSelectorAsyncEnumerableSorter`2::<ComputeKeysAsync>d__6<TElement, TKey>))]
/// @brief Method ComputeKeysAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ComputeKeysAsync(::ArrayW<TElement>  elements, int32_t  count) ;

static inline ::Cysharp::Threading::Tasks::Linq::SyncSelectorAsyncEnumerableSorter_2<TElement,TKey>* New_ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr bool const& __cordl_internal_get_descending() const;

constexpr bool& __cordl_internal_get_descending() ;

constexpr ::System::Func_2<TElement,TKey>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_2<TElement,TKey>*& __cordl_internal_get_keySelector() ;

constexpr ::ArrayW<TKey> const& __cordl_internal_get_keys() const;

constexpr ::ArrayW<TKey>& __cordl_internal_get_keys() ;

constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* const& __cordl_internal_get_next() const;

constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*& __cordl_internal_get_next() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_descending(bool  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_2<TElement,TKey>*  value) ;

constexpr void __cordl_internal_set_keys(::ArrayW<TKey>  value) ;

constexpr void __cordl_internal_set_next(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSelectorAsyncEnumerableSorter_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSelectorAsyncEnumerableSorter_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSelectorAsyncEnumerableSorter_2(SyncSelectorAsyncEnumerableSorter_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSelectorAsyncEnumerableSorter_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSelectorAsyncEnumerableSorter_2(SyncSelectorAsyncEnumerableSorter_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20693};

/// @brief Field keySelector, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<TElement,TKey>*  ___keySelector;

/// @brief Field comparer, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<TKey>*  ___comparer;

/// @brief Field descending, offset: 0x20, size: 0x1, def value: None
 bool  ___descending;

/// @brief Field next, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  ___next;

/// @brief Field keys, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<TKey>  ___keys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
