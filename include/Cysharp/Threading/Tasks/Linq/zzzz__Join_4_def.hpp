#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Join_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Join_4)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TOuter,typename TInner,typename TKey,typename TResult>
class Join_4__Join;
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
template<typename TOuter,typename TInner,typename TKey,typename TResult>
struct _Join_Join_4__CreateInnerHashSet_d__20;
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
class ILookup_2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TOuter,typename TInner,typename TKey,typename TResult>
class Join_4;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TOuter,typename TInner,typename TKey,typename TResult>
class Join_4__Join;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Join_4);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Join_4__Join);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Join_4, "Cysharp.Threading.Tasks.Linq", "Join`4");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Join_4__Join, "Cysharp.Threading.Tasks.Linq", "Join`4/_Join");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TOuter,typename TInner,typename TKey,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Join`4<TOuter,TInner,TKey,TResult>
class CORDL_TYPE Join_4 : public ::System::Object {
public:
// Declarations
using _Join = ::Cysharp::Threading::Tasks::Linq::Join_4__Join<TOuter, TInner, TKey, TResult>;

/// @brief Field comparer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field inner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inner, put=__cordl_internal_set_inner)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner;

/// @brief Field innerKeySelector, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerKeySelector, put=__cordl_internal_set_innerKeySelector)) ::System::Func_2<TInner,TKey>*  innerKeySelector;

/// @brief Field outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_outer, put=__cordl_internal_set_outer)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer;

/// @brief Field outerKeySelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_outerKeySelector, put=__cordl_internal_set_outerKeySelector)) ::System::Func_2<TOuter,TKey>*  outerKeySelector;

/// @brief Field resultSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TOuter,TInner,TResult>*  resultSelector;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Join_4<TOuter,TInner,TKey,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* const& __cordl_internal_get_inner() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*& __cordl_internal_get_inner() ;

constexpr ::System::Func_2<TInner,TKey>* const& __cordl_internal_get_innerKeySelector() const;

constexpr ::System::Func_2<TInner,TKey>*& __cordl_internal_get_innerKeySelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* const& __cordl_internal_get_outer() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*& __cordl_internal_get_outer() ;

constexpr ::System::Func_2<TOuter,TKey>* const& __cordl_internal_get_outerKeySelector() const;

constexpr ::System::Func_2<TOuter,TKey>*& __cordl_internal_get_outerKeySelector() ;

constexpr ::System::Func_3<TOuter,TInner,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TOuter,TInner,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_inner(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  value) ;

constexpr void __cordl_internal_set_innerKeySelector(::System::Func_2<TInner,TKey>*  value) ;

constexpr void __cordl_internal_set_outer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  value) ;

constexpr void __cordl_internal_set_outerKeySelector(::System::Func_2<TOuter,TKey>*  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TOuter,TInner,TResult>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Join_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Join_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Join_4(Join_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Join_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Join_4(Join_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20579};

/// @brief Field outer, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  ___outer;

/// @brief Field inner, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  ___inner;

/// @brief Field outerKeySelector, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<TOuter,TKey>*  ___outerKeySelector;

/// @brief Field innerKeySelector, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<TInner,TKey>*  ___innerKeySelector;

/// @brief Field resultSelector, offset: 0x30, size: 0x8, def value: None
 ::System::Func_3<TOuter,TInner,TResult>*  ___resultSelector;

/// @brief Field comparer, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TOuter,typename TInner,typename TKey,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Join`4/_Join<TOuter,TInner,TKey,TResult>
class CORDL_TYPE Join_4__Join : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _CreateInnerHashSet_d__20 = ::GlobalNamespace::_Join_Join_4__CreateInnerHashSet_d__20<TOuter, TInner, TKey, TResult>;

 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field cancellationToken, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field comparer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field continueNext, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueNext, put=__cordl_internal_set_continueNext)) bool  continueNext;

/// @brief Field currentOuterValue, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOuterValue, put=__cordl_internal_set_currentOuterValue)) TOuter  currentOuterValue;

/// @brief Field enumerator, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*  enumerator;

/// @brief Field inner, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_inner, put=__cordl_internal_set_inner)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner;

/// @brief Field innerKeySelector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerKeySelector, put=__cordl_internal_set_innerKeySelector)) ::System::Func_2<TInner,TKey>*  innerKeySelector;

/// @brief Field lookup, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookup, put=__cordl_internal_set_lookup)) ::System::Linq::ILookup_2<TKey,TInner>*  lookup;

/// @brief Field outer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_outer, put=__cordl_internal_set_outer)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer;

/// @brief Field outerKeySelector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_outerKeySelector, put=__cordl_internal_set_outerKeySelector)) ::System::Func_2<TOuter,TKey>*  outerKeySelector;

/// @brief Field resultSelector, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TOuter,TInner,TResult>*  resultSelector;

/// @brief Field valueEnumerator, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueEnumerator, put=__cordl_internal_set_valueEnumerator)) ::System::Collections::Generic::IEnumerator_1<TInner>*  valueEnumerator;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Join`4::_Join::<CreateInnerHashSet>d__20<TOuter, TInner, TKey, TResult>))]
/// @brief Method CreateInnerHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid CreateInnerHashSet() ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::Join_4__Join<TOuter,TInner,TKey,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr bool const& __cordl_internal_get_continueNext() const;

constexpr bool& __cordl_internal_get_continueNext() ;

constexpr TOuter const& __cordl_internal_get_currentOuterValue() const;

constexpr TOuter& __cordl_internal_get_currentOuterValue() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*& __cordl_internal_get_enumerator() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* const& __cordl_internal_get_inner() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*& __cordl_internal_get_inner() ;

constexpr ::System::Func_2<TInner,TKey>* const& __cordl_internal_get_innerKeySelector() const;

constexpr ::System::Func_2<TInner,TKey>*& __cordl_internal_get_innerKeySelector() ;

constexpr ::System::Linq::ILookup_2<TKey,TInner>* const& __cordl_internal_get_lookup() const;

constexpr ::System::Linq::ILookup_2<TKey,TInner>*& __cordl_internal_get_lookup() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* const& __cordl_internal_get_outer() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*& __cordl_internal_get_outer() ;

constexpr ::System::Func_2<TOuter,TKey>* const& __cordl_internal_get_outerKeySelector() const;

constexpr ::System::Func_2<TOuter,TKey>*& __cordl_internal_get_outerKeySelector() ;

constexpr ::System::Func_3<TOuter,TInner,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TOuter,TInner,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::System::Collections::Generic::IEnumerator_1<TInner>* const& __cordl_internal_get_valueEnumerator() const;

constexpr ::System::Collections::Generic::IEnumerator_1<TInner>*& __cordl_internal_get_valueEnumerator() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_continueNext(bool  value) ;

constexpr void __cordl_internal_set_currentOuterValue(TOuter  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*  value) ;

constexpr void __cordl_internal_set_inner(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  value) ;

constexpr void __cordl_internal_set_innerKeySelector(::System::Func_2<TInner,TKey>*  value) ;

constexpr void __cordl_internal_set_lookup(::System::Linq::ILookup_2<TKey,TInner>*  value) ;

constexpr void __cordl_internal_set_outer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  value) ;

constexpr void __cordl_internal_set_outerKeySelector(::System::Func_2<TOuter,TKey>*  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TOuter,TInner,TResult>*  value) ;

constexpr void __cordl_internal_set_valueEnumerator(::System::Collections::Generic::IEnumerator_1<TInner>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Join_4__Join() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Join_4__Join", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Join_4__Join(Join_4__Join && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Join_4__Join", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Join_4__Join(Join_4__Join const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20578};

/// @brief Field outer, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  ___outer;

/// @brief Field inner, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  ___inner;

/// @brief Field outerKeySelector, offset: 0x48, size: 0x8, def value: None
 ::System::Func_2<TOuter,TKey>*  ___outerKeySelector;

/// @brief Field innerKeySelector, offset: 0x50, size: 0x8, def value: None
 ::System::Func_2<TInner,TKey>*  ___innerKeySelector;

/// @brief Field resultSelector, offset: 0x58, size: 0x8, def value: None
 ::System::Func_3<TOuter,TInner,TResult>*  ___resultSelector;

/// @brief Field comparer, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

/// @brief Field cancellationToken, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field lookup, offset: 0x70, size: 0x8, def value: None
 ::System::Linq::ILookup_2<TKey,TInner>*  ___lookup;

/// @brief Field enumerator, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*  ___enumerator;

/// @brief Field awaiter, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field currentOuterValue, offset: 0x98, size: 0x8, def value: None
 TOuter  ___currentOuterValue;

/// @brief Field valueEnumerator, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<TInner>*  ___valueEnumerator;

/// @brief Field continueNext, offset: 0xa8, size: 0x1, def value: None
 bool  ___continueNext;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
