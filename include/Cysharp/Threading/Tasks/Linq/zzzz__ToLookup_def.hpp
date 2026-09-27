#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToLookup)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Grouping_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Lookup_2;
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
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
template<typename TKey,typename TElement>
struct Lookup_2_ToLookup__CreateAsync_d__6;
}
namespace GlobalNamespace {
template<typename TKey,typename TElement,typename TSource>
struct Lookup_2_ToLookup__CreateAsync_d__7_1;
}
namespace GlobalNamespace {
template<typename TKey,typename TElement>
struct Lookup_2_ToLookup__CreateAsync_d__8;
}
namespace GlobalNamespace {
template<typename TKey,typename TElement,typename TSource>
struct Lookup_2_ToLookup__CreateAsync_d__9_1;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToLookup__ToLookupAsync_d__0_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToLookup__ToLookupAsync_d__1_3;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToLookup__ToLookupAwaitAsync_d__2_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToLookup__ToLookupAwaitAsync_d__3_3;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToLookup__ToLookupAwaitWithCancellationAsync_d__4_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToLookup__ToLookupAwaitWithCancellationAsync_d__5_3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
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
struct ArraySegment_1;
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
class ToLookup;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Grouping_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TKey,typename TElement>
class ToLookup_Lookup_2;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ToLookup*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ToLookup*, "Cysharp.Threading.Tasks.Linq", "ToLookup");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2, "Cysharp.Threading.Tasks.Linq", "ToLookup/Grouping`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2, "Cysharp.Threading.Tasks.Linq", "ToLookup/Lookup`2");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToLookup
class CORDL_TYPE ToLookup : public ::System::Object {
public:
// Declarations
template<typename TKey,typename TElement>
using Grouping_2 = ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey, TElement>;

template<typename TKey,typename TElement>
using Lookup_2 = ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey, TElement>;

template<typename TSource,typename TKey>
using _ToLookupAsync_d__0_2 = ::GlobalNamespace::ToLookup__ToLookupAsync_d__0_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToLookupAsync_d__1_3 = ::GlobalNamespace::ToLookup__ToLookupAsync_d__1_3<TSource, TKey, TElement>;

template<typename TSource,typename TKey>
using _ToLookupAwaitAsync_d__2_2 = ::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__2_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToLookupAwaitAsync_d__3_3 = ::GlobalNamespace::ToLookup__ToLookupAwaitAsync_d__3_3<TSource, TKey, TElement>;

template<typename TSource,typename TKey>
using _ToLookupAwaitWithCancellationAsync_d__4_2 = ::GlobalNamespace::ToLookup__ToLookupAwaitWithCancellationAsync_d__4_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToLookupAwaitWithCancellationAsync_d__5_3 = ::GlobalNamespace::ToLookup__ToLookupAwaitWithCancellationAsync_d__5_3<TSource, TKey, TElement>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAsync>d__1`3<TSource, TKey, TElement>))]
/// @brief Method ToLookupAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAsync>d__0`2<TSource, TKey>))]
/// @brief Method ToLookupAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAwaitAsync>d__3`3<TSource, TKey, TElement>))]
/// @brief Method ToLookupAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAwaitAsync>d__2`2<TSource, TKey>))]
/// @brief Method ToLookupAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAwaitWithCancellationAsync>d__5`3<TSource, TKey, TElement>))]
/// @brief Method ToLookupAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::<ToLookupAwaitWithCancellationAsync>d__4`2<TSource, TKey>))]
/// @brief Method ToLookupAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToLookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToLookup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToLookup(ToLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToLookup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToLookup(ToLookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20870};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ToLookup) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TKey,typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToLookup/Grouping`2<TKey,TElement>
class CORDL_TYPE ToLookup_Grouping_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) TKey  Key;

/// @brief Field <Key>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Key_k__BackingField, put=__cordl_internal_set__Key_k__BackingField)) TKey  _Key_k__BackingField;

/// @brief Field elements, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::System::Collections::Generic::List_1<TElement>*  elements;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
constexpr operator  ::System::Linq::IGrouping_2<TKey,TElement>*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TElement  value) ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TElement>* GetEnumerator() ;

static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>* New_ctor(TKey  key) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr TKey const& __cordl_internal_get__Key_k__BackingField() const;

constexpr TKey& __cordl_internal_get__Key_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<TElement>* const& __cordl_internal_get_elements() const;

constexpr ::System::Collections::Generic::List_1<TElement>*& __cordl_internal_get_elements() ;

constexpr void __cordl_internal_set__Key_k__BackingField(TKey  value) ;

constexpr void __cordl_internal_set_elements(::System::Collections::Generic::List_1<TElement>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TKey  key) ;

/// [CompilerGenerated]
/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TKey get_Key() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
constexpr ::System::Linq::IGrouping_2<TKey,TElement>* i___System__Linq__IGrouping_2_TKey_TElement_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Key(TKey  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToLookup_Grouping_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToLookup_Grouping_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToLookup_Grouping_2(ToLookup_Grouping_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToLookup_Grouping_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToLookup_Grouping_2(ToLookup_Grouping_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20863};

/// @brief Field elements, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TElement>*  ___elements;

/// [CompilerGenerated]
/// @brief Field <Key>k__BackingField, offset: 0x18, size: 0x8, def value: None
 TKey  ____Key_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TKey,typename TElement>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToLookup/Lookup`2<TKey,TElement>
class CORDL_TYPE ToLookup_Lookup_2 : public ::System::Object {
public:
// Declarations
using _CreateAsync_d__6 = ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__6<TKey, TElement>;

template<typename TSource>
using _CreateAsync_d__7_1 = ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__7_1<TKey, TElement, TSource>;

using _CreateAsync_d__8 = ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__8<TKey, TElement>;

template<typename TSource>
using _CreateAsync_d__9_1 = ::GlobalNamespace::Lookup_2_ToLookup__CreateAsync_d__9_1<TKey, TElement, TSource>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Collections::Generic::IEnumerable_1<TElement>*  Item[];

/// @brief Field dict, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dict, put=__cordl_internal_set_dict)) ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  dict;

/// @brief Field empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_empty, put=setStaticF_empty)) ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*  empty;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Linq::ILookup_2<TKey,TElement>"
constexpr operator  ::System::Linq::ILookup_2<TKey,TElement>*() noexcept;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(TKey  key) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Create(::System::ArraySegment_1<TElement>  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Create(::System::ArraySegment_1<TSource>  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::Lookup`2::<CreateAsync>d__6<TKey, TElement>))]
/// @brief Method CreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> CreateAsync(::System::ArraySegment_1<TElement>  source, ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::Lookup`2::<CreateAsync>d__8<TKey, TElement>))]
/// @brief Method CreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> CreateAsync(::System::ArraySegment_1<TElement>  source, ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::Lookup`2::<CreateAsync>d__7`1<TKey, TElement, TSource>))]
/// @brief Method CreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> CreateAsync(::System::ArraySegment_1<TSource>  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToLookup::Lookup`2::<CreateAsync>d__9`1<TKey, TElement, TSource>))]
/// @brief Method CreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> CreateAsync(::System::ArraySegment_1<TSource>  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CreateEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* CreateEmpty() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* GetEnumerator() ;

static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* New_ctor(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  dict) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>* const& __cordl_internal_get_dict() const;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*& __cordl_internal_get_dict() ;

constexpr void __cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  dict) ;

static inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* getStaticF_empty() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<TElement>* get_Item(TKey  key) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Linq::ILookup_2<TKey,TElement>"
constexpr ::System::Linq::ILookup_2<TKey,TElement>* i___System__Linq__ILookup_2_TKey_TElement_() noexcept;

static inline void setStaticF_empty(::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToLookup_Lookup_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToLookup_Lookup_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToLookup_Lookup_2(ToLookup_Lookup_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToLookup_Lookup_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToLookup_Lookup_2(ToLookup_Lookup_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20862};

/// @brief Field dict, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  ___dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
