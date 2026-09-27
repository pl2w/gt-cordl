#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/DistinctAwaitWithCancellation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DistinctAwaitWithCancellation_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey>
class DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation;
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
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
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
template<typename TSource,typename TKey>
class DistinctAwaitWithCancellation_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey>
class DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2, "Cysharp.Threading.Tasks.Linq", "DistinctAwaitWithCancellation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation, "Cysharp.Threading.Tasks.Linq", "DistinctAwaitWithCancellation`2/_DistinctAwaitWithCancellation");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.DistinctAwaitWithCancellation`2<TSource,TKey>
class CORDL_TYPE DistinctAwaitWithCancellation_2 : public ::System::Object {
public:
// Declarations
using _DistinctAwaitWithCancellation = ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource, TKey>;

/// @brief Field comparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field keySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& __cordl_internal_get_keySelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistinctAwaitWithCancellation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistinctAwaitWithCancellation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistinctAwaitWithCancellation_2(DistinctAwaitWithCancellation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistinctAwaitWithCancellation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistinctAwaitWithCancellation_2(DistinctAwaitWithCancellation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20519};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  ___keySelector;

/// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<TSource, TResult, TAwait>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.DistinctAwaitWithCancellation`2/_DistinctAwaitWithCancellation<TSource,TKey>
class CORDL_TYPE DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TSource,TKey> {
public:
// Declarations
/// @brief Field keySelector, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector;

/// @brief Field set, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_set, put=__cordl_internal_set_set)) ::System::Collections::Generic::HashSet_1<TKey>*  set;

static inline ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TransformAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<TKey> TransformAsync(TSource  sourceCurrent) ;

/// @brief Method TrySetCurrentCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetCurrentCore(TKey  awaitResult, ::by_ref<bool>  terminateIteration) ;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& __cordl_internal_get_keySelector() ;

constexpr ::System::Collections::Generic::HashSet_1<TKey>* const& __cordl_internal_get_set() const;

constexpr ::System::Collections::Generic::HashSet_1<TKey>*& __cordl_internal_get_set() ;

constexpr void __cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value) ;

constexpr void __cordl_internal_set_set(::System::Collections::Generic::HashSet_1<TKey>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation(DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation(DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20518};

/// @brief Field set, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<TKey>*  ___set;

/// @brief Field keySelector, offset: 0x98, size: 0x8, def value: None
 ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  ___keySelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
