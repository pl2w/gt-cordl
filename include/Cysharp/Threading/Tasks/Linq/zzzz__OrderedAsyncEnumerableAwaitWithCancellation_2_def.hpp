#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerableAwaitWithCancellation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_def.hpp"
CORDL_MODULE_EXPORT(OrderedAsyncEnumerableAwaitWithCancellation_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class AsyncEnumerableSorter_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class OrderedAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement,typename TKey>
class OrderedAsyncEnumerableAwaitWithCancellation_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerableAwaitWithCancellation_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerableAwaitWithCancellation_2, "Cysharp.Threading.Tasks.Linq", "OrderedAsyncEnumerableAwaitWithCancellation`2");
// Dependencies Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerable`1<TElement>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerableAwaitWithCancellation`2<TElement,TKey>
class CORDL_TYPE OrderedAsyncEnumerableAwaitWithCancellation_2 : public ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement> {
public:
// Declarations
/// @brief Field comparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>*  comparer;

/// @brief Field descending, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_descending, put=__cordl_internal_set_descending)) bool  descending;

/// @brief Field keySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field parent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent;

/// @brief Method GetAsyncEnumerableSorter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* GetAsyncEnumerableSorter(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerableAwaitWithCancellation_2<TElement,TKey>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source, ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr bool const& __cordl_internal_get_descending() const;

constexpr bool& __cordl_internal_get_descending() ;

constexpr ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& __cordl_internal_get_keySelector() ;

constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_descending(bool  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source, ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrderedAsyncEnumerableAwaitWithCancellation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerableAwaitWithCancellation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedAsyncEnumerableAwaitWithCancellation_2(OrderedAsyncEnumerableAwaitWithCancellation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerableAwaitWithCancellation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedAsyncEnumerableAwaitWithCancellation_2(OrderedAsyncEnumerableAwaitWithCancellation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20703};

/// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  ___keySelector;

/// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<TKey>*  ___comparer;

/// @brief Field descending, offset: 0x28, size: 0x1, def value: None
 bool  ___descending;

/// @brief Field parent, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
