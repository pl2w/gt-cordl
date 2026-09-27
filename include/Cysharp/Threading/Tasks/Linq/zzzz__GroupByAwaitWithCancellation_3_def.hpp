#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupByAwaitWithCancellation_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GroupByAwaitWithCancellation_3)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement>
class GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation;
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
template<typename TSource,typename TKey,typename TElement>
struct _GroupByAwaitWithCancellation_GroupByAwaitWithCancellation_3__CreateLookup_d__12;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
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
template<typename TSource,typename TKey,typename TElement>
class GroupByAwaitWithCancellation_3;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement>
class GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3, "Cysharp.Threading.Tasks.Linq", "GroupByAwaitWithCancellation`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation, "Cysharp.Threading.Tasks.Linq", "GroupByAwaitWithCancellation`3/_GroupByAwaitWithCancellation");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey,typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.GroupByAwaitWithCancellation`3<TSource,TKey,TElement>
class CORDL_TYPE GroupByAwaitWithCancellation_3 : public ::System::Object {
public:
// Declarations
using _GroupByAwaitWithCancellation = ::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation<TSource, TKey, TElement>;

/// @brief Field comparer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field elementSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementSelector, put=__cordl_internal_set_elementSelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector;

/// @brief Field keySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3<TSource,TKey,TElement>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>* const& __cordl_internal_get_elementSelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*& __cordl_internal_get_elementSelector() ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& __cordl_internal_get_keySelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_elementSelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupByAwaitWithCancellation_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupByAwaitWithCancellation_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupByAwaitWithCancellation_3(GroupByAwaitWithCancellation_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupByAwaitWithCancellation_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupByAwaitWithCancellation_3(GroupByAwaitWithCancellation_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20562};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  ___keySelector;

/// @brief Field elementSelector, offset: 0x20, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  ___elementSelector;

/// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey,typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.GroupByAwaitWithCancellation`3/_GroupByAwaitWithCancellation<TSource,TKey,TElement>
class CORDL_TYPE GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _CreateLookup_d__12 = ::GlobalNamespace::_GroupByAwaitWithCancellation_GroupByAwaitWithCancellation_3__CreateLookup_d__12<TSource, TKey, TElement>;

 __declspec(property(get=get_Current, put=set_Current)) ::System::Linq::IGrouping_2<TKey,TElement>*  Current;

/// @brief Field <Current>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) ::System::Linq::IGrouping_2<TKey,TElement>*  _Current_k__BackingField;

/// @brief Field cancellationToken, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field comparer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field elementSelector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementSelector, put=__cordl_internal_set_elementSelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector;

/// @brief Field groupEnumerator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupEnumerator, put=__cordl_internal_set_groupEnumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  groupEnumerator;

/// @brief Field keySelector, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.GroupByAwaitWithCancellation`3::_GroupByAwaitWithCancellation::<CreateLookup>d__12<TSource, TKey, TElement>))]
/// @brief Method CreateLookup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid CreateLookup() ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation<TSource,TKey,TElement>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr ::System::Linq::IGrouping_2<TKey,TElement>* const& __cordl_internal_get__Current_k__BackingField() const;

constexpr ::System::Linq::IGrouping_2<TKey,TElement>*& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>* const& __cordl_internal_get_elementSelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*& __cordl_internal_get_elementSelector() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* const& __cordl_internal_get_groupEnumerator() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*& __cordl_internal_get_groupEnumerator() ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& __cordl_internal_get_keySelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(::System::Linq::IGrouping_2<TKey,TElement>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_elementSelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  value) ;

constexpr void __cordl_internal_set_groupEnumerator(::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Linq::IGrouping_2<TKey,TElement>* get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(::System::Linq::IGrouping_2<TKey,TElement>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation(GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation(GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20561};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x40, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  ___keySelector;

/// @brief Field elementSelector, offset: 0x48, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  ___elementSelector;

/// @brief Field comparer, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

/// @brief Field cancellationToken, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field groupEnumerator, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  ___groupEnumerator;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Linq::IGrouping_2<TKey,TElement>*  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
