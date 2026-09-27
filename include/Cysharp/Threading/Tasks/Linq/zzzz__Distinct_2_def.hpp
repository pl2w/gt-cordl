#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Distinct_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Distinct_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey>
class Distinct_2__Distinct;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
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
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey>
class Distinct_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TKey>
class Distinct_2__Distinct;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Distinct_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Distinct_2__Distinct);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Distinct_2, "Cysharp.Threading.Tasks.Linq", "Distinct`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Distinct_2__Distinct, "Cysharp.Threading.Tasks.Linq", "Distinct`2/_Distinct");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Distinct`2<TSource,TKey>
class CORDL_TYPE Distinct_2 : public ::System::Object {
public:
// Declarations
using _Distinct = ::Cysharp::Threading::Tasks::Linq::Distinct_2__Distinct<TSource, TKey>;

/// @brief Field comparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer;

/// @brief Field keySelector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Distinct_2<TSource,TKey>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_comparer() ;

constexpr ::System::Func_2<TSource,TKey>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_2<TSource,TKey>*& __cordl_internal_get_keySelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Distinct_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Distinct_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Distinct_2(Distinct_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Distinct_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Distinct_2(Distinct_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20515};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field keySelector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TSource,TKey>*  ___keySelector;

/// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<TSource, TResult>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TKey>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Distinct`2/_Distinct<TSource,TKey>
class CORDL_TYPE Distinct_2__Distinct : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource,TSource> {
public:
// Declarations
/// @brief Field keySelector, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_keySelector, put=__cordl_internal_set_keySelector)) ::System::Func_2<TSource,TKey>*  keySelector;

/// @brief Field set, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_set, put=__cordl_internal_set_set)) ::System::Collections::Generic::HashSet_1<TKey>*  set;

static inline ::Cysharp::Threading::Tasks::Linq::Distinct_2__Distinct<TSource,TKey>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

constexpr ::System::Func_2<TSource,TKey>* const& __cordl_internal_get_keySelector() const;

constexpr ::System::Func_2<TSource,TKey>*& __cordl_internal_get_keySelector() ;

constexpr ::System::Collections::Generic::HashSet_1<TKey>* const& __cordl_internal_get_set() const;

constexpr ::System::Collections::Generic::HashSet_1<TKey>*& __cordl_internal_get_set() ;

constexpr void __cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value) ;

constexpr void __cordl_internal_set_set(::System::Collections::Generic::HashSet_1<TKey>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Distinct_2__Distinct() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Distinct_2__Distinct", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Distinct_2__Distinct(Distinct_2__Distinct && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Distinct_2__Distinct", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Distinct_2__Distinct(Distinct_2__Distinct const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20514};

/// @brief Field set, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<TKey>*  ___set;

/// @brief Field keySelector, offset: 0x78, size: 0x8, def value: None
 ::System::Func_2<TSource,TKey>*  ___keySelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
