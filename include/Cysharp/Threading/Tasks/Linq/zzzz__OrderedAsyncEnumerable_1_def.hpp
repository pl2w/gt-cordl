#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrderedAsyncEnumerable_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class AsyncEnumerableSorter_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename TElement>
class IUniTaskOrderedAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TElement>
struct _OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class OrderedAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TElement>
class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1, "Cysharp.Threading.Tasks.Linq", "OrderedAsyncEnumerable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator, "Cysharp.Threading.Tasks.Linq", "OrderedAsyncEnumerable`1/_OrderedAsyncEnumerator");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerable`1<TElement>
class CORDL_TYPE OrderedAsyncEnumerable_1 : public ::System::Object {
public:
// Declarations
using _OrderedAsyncEnumerator = ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*() noexcept;

/// @brief Method CreateOrderedEnumerable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method CreateOrderedEnumerable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method CreateOrderedEnumerable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending) ;

/// @brief Method GetAsyncEnumerableSorter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* GetAsyncEnumerableSorter(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskOrderedAsyncEnumerable_1_TElement_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrderedAsyncEnumerable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedAsyncEnumerable_1(OrderedAsyncEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedAsyncEnumerable_1(OrderedAsyncEnumerable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20700};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerable`1/_OrderedAsyncEnumerator<TElement>
class CORDL_TYPE OrderedAsyncEnumerable_1__OrderedAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _CreateSortSource_d__11 = ::GlobalNamespace::_OrderedAsyncEnumerator_OrderedAsyncEnumerable_1__CreateSortSource_d__11<TElement>;

 __declspec(property(get=get_Current, put=set_Current)) TElement  Current;

/// @brief Field <Current>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TElement  _Current_k__BackingField;

/// @brief Field buffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<TElement>  buffer;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field index, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field map, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::ArrayW<int32_t>  map;

/// @brief Field parent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.OrderedAsyncEnumerable`1::_OrderedAsyncEnumerator::<CreateSortSource>d__11<TElement>))]
/// @brief Method CreateSortSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid CreateSortSource() ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>* New_ctor(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr TElement const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TElement& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::ArrayW<TElement> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<TElement>& __cordl_internal_get_buffer() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_map() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_map() ;

constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TElement  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<TElement>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_map(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TElement get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TElement_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TElement  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrderedAsyncEnumerable_1__OrderedAsyncEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerable_1__OrderedAsyncEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderedAsyncEnumerable_1__OrderedAsyncEnumerator(OrderedAsyncEnumerable_1__OrderedAsyncEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderedAsyncEnumerable_1__OrderedAsyncEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderedAsyncEnumerable_1__OrderedAsyncEnumerator(OrderedAsyncEnumerable_1__OrderedAsyncEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20699};

/// @brief Field parent, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  ___parent;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field buffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<TElement>  ___buffer;

/// @brief Field map, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___map;

/// @brief Field index, offset: 0x58, size: 0x4, def value: None
 int32_t  ___index;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x60, size: 0x8, def value: None
 TElement  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
