#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupBy_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GroupBy_4)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement,typename TResult>
class GroupBy_4__GroupBy;
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
template<typename TSource,typename TKey,typename TElement,typename TResult>
struct _GroupBy_GroupBy_4__CreateLookup_d__13;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement,typename TResult>
class GroupBy_4;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey,typename TElement,typename TResult>
class GroupBy_4__GroupBy;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::GroupBy_4);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::GroupBy_4__GroupBy);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::GroupBy_4, "Cysharp.Threading.Tasks.Linq", "GroupBy`4");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::GroupBy_4__GroupBy, "Cysharp.Threading.Tasks.Linq", "GroupBy`4/_GroupBy");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey,typename TElement,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.GroupBy`4<TSource,TKey,TElement,TResult>
class CORDL_TYPE GroupBy_4 : public ::System::Object {
public:
// Declarations
using _GroupBy = ::Cysharp::Threading::Tasks::Linq::GroupBy_4__GroupBy<TSource, TKey, TElement, TResult>;

/// @brief Field comparer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field elementSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementSelector, put=__cordl_internal_set_elementSelector)) ::System::Func_2<TSource,TElement>*  elementSelector;

/// @brief Field keySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field resultSelector, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::GroupBy_4<TSource,TKey,TElement,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_2<TSource,TElement>* const& __cordl_internal_get_elementSelector() const;

constexpr ::System::Func_2<TSource,TElement>*& __cordl_internal_get_elementSelector() ;

constexpr ::System::Func_2<TSource,TKey>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_2<TSource,TKey>*& __cordl_internal_get_keySelector() ;

constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_elementSelector(::System::Func_2<TSource,TElement>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupBy_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupBy_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupBy_4(GroupBy_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupBy_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupBy_4(GroupBy_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20553};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TSource,TKey>*  ___keySelector;

/// @brief Field elementSelector, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<TSource,TElement>*  ___elementSelector;

/// @brief Field resultSelector, offset: 0x28, size: 0x8, def value: None
 ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  ___resultSelector;

/// @brief Field comparer, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey,typename TElement,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.GroupBy`4/_GroupBy<TSource,TKey,TElement,TResult>
class CORDL_TYPE GroupBy_4__GroupBy : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _CreateLookup_d__13 = ::GlobalNamespace::_GroupBy_GroupBy_4__CreateLookup_d__13<TSource, TKey, TElement, TResult>;

 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

/// @brief Field <Current>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field cancellationToken, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field comparer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field elementSelector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementSelector, put=__cordl_internal_set_elementSelector)) ::System::Func_2<TSource,TElement>*  elementSelector;

/// @brief Field groupEnumerator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupEnumerator, put=__cordl_internal_set_groupEnumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  groupEnumerator;

/// @brief Field keySelector, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field resultSelector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.GroupBy`4::_GroupBy::<CreateLookup>d__13<TSource, TKey, TElement, TResult>))]
/// @brief Method CreateLookup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid CreateLookup() ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::GroupBy_4__GroupBy<TSource,TKey,TElement,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_2<TSource,TElement>* const& __cordl_internal_get_elementSelector() const;

constexpr ::System::Func_2<TSource,TElement>*& __cordl_internal_get_elementSelector() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* const& __cordl_internal_get_groupEnumerator() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*& __cordl_internal_get_groupEnumerator() ;

constexpr ::System::Func_2<TSource,TKey>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_2<TSource,TKey>*& __cordl_internal_get_keySelector() ;

constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_elementSelector(::System::Func_2<TSource,TElement>*  value) ;

constexpr void __cordl_internal_set_groupEnumerator(::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupBy_4__GroupBy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupBy_4__GroupBy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupBy_4__GroupBy(GroupBy_4__GroupBy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupBy_4__GroupBy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupBy_4__GroupBy(GroupBy_4__GroupBy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20552};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<TSource,TKey>*  ___keySelector;

/// @brief Field elementSelector, offset: 0x48, size: 0x8, def value: None
 ::System::Func_2<TSource,TElement>*  ___elementSelector;

/// @brief Field resultSelector, offset: 0x50, size: 0x8, def value: None
 ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  ___resultSelector;

/// @brief Field comparer, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

/// @brief Field cancellationToken, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field groupEnumerator, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  ___groupEnumerator;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x70, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
