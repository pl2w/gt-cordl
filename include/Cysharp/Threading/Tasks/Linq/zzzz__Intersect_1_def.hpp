#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Intersect_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Intersect_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Intersect_1__Intersect;
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
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Intersect_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Intersect_1__Intersect;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Intersect_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Intersect_1__Intersect);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Intersect_1, "Cysharp.Threading.Tasks.Linq", "Intersect`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Intersect_1__Intersect, "Cysharp.Threading.Tasks.Linq", "Intersect`1/_Intersect");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Intersect`1<TSource>
class CORDL_TYPE Intersect_1 : public ::System::Object {
public:
// Declarations
using _Intersect = ::Cysharp::Threading::Tasks::Linq::Intersect_1__Intersect<TSource>;

/// @brief Field comparer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer;

/// @brief Field first, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first;

/// @brief Field second, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Intersect_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_first() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_second() ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>*  value) ;

constexpr void __cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Intersect_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Intersect_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Intersect_1(Intersect_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Intersect_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Intersect_1(Intersect_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20576};

/// @brief Field first, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___first;

/// @brief Field second, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___second;

/// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TSource>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<TSource, TResult>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Intersect`1/_Intersect<TSource>
class CORDL_TYPE Intersect_1__Intersect : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorBase_2<TSource,TSource> {
public:
// Declarations
/// @brief Field HashSetAsyncCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HashSetAsyncCoreDelegate, put=setStaticF_HashSetAsyncCoreDelegate)) ::System::Action_1<::System::Object*>*  HashSetAsyncCoreDelegate;

/// @brief Field awaiter, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*>  awaiter;

/// @brief Field comparer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer;

/// @brief Field second, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second;

/// @brief Field set, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_set, put=__cordl_internal_set_set)) ::System::Collections::Generic::HashSet_1<TSource>*  set;

/// @brief Method HashSetAsyncCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void HashSetAsyncCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::Intersect_1__Intersect<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnFirstIteration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool OnFirstIteration() ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*>& __cordl_internal_get_awaiter() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& __cordl_internal_get_comparer() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_second() ;

constexpr ::System::Collections::Generic::HashSet_1<TSource>* const& __cordl_internal_get_set() const;

constexpr ::System::Collections::Generic::HashSet_1<TSource>*& __cordl_internal_get_set() ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*>  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>*  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_set(::System::Collections::Generic::HashSet_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_HashSetAsyncCoreDelegate() ;

static inline void setStaticF_HashSetAsyncCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Intersect_1__Intersect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Intersect_1__Intersect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Intersect_1__Intersect(Intersect_1__Intersect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Intersect_1__Intersect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Intersect_1__Intersect(Intersect_1__Intersect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20575};

/// @brief Field comparer, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TSource>*  ___comparer;

/// @brief Field second, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___second;

/// @brief Field set, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<TSource>*  ___set;

/// @brief Field awaiter, offset: 0x88, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::Collections::Generic::HashSet_1<TSource>*>  ___awaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
