#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Pairwise_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
CORDL_MODULE_EXPORT(Pairwise_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Pairwise_1__Pairwise;
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
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Pairwise_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Pairwise_1__Pairwise;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Pairwise_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Pairwise_1__Pairwise);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Pairwise_1, "Cysharp.Threading.Tasks.Linq", "Pairwise`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Pairwise_1__Pairwise, "Cysharp.Threading.Tasks.Linq", "Pairwise`1/_Pairwise");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Pairwise`1<TSource>
class CORDL_TYPE Pairwise_1 : public ::System::Object {
public:
// Declarations
using _Pairwise = ::Cysharp::Threading::Tasks::Linq::Pairwise_1__Pairwise<TSource>;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::ValueTuple_2<TSource,TSource>>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Pairwise_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___System__ValueTuple_2_TSource_TSource__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pairwise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pairwise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pairwise_1(Pairwise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pairwise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pairwise_1(Pairwise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20705};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Pairwise`1/_Pairwise<TSource>
class CORDL_TYPE Pairwise_1__Pairwise : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) ::System::ValueTuple_2<TSource,TSource>  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) ::System::ValueTuple_2<TSource,TSource>  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field enumerator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field isFirst, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirst, put=__cordl_internal_set_isFirst)) bool  isFirst;

/// @brief Field prev, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) TSource  prev;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::ValueTuple_2<TSource,TSource>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::ValueTuple_2<TSource,TSource>>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::Pairwise_1__Pairwise<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr ::System::ValueTuple_2<TSource,TSource> const& __cordl_internal_get__Current_k__BackingField() const;

constexpr ::System::ValueTuple_2<TSource,TSource>& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr bool const& __cordl_internal_get_isFirst() const;

constexpr bool& __cordl_internal_get_isFirst() ;

constexpr TSource const& __cordl_internal_get_prev() const;

constexpr TSource& __cordl_internal_get_prev() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(::System::ValueTuple_2<TSource,TSource>  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_isFirst(bool  value) ;

constexpr void __cordl_internal_set_prev(TSource  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<TSource,TSource> get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::ValueTuple_2<TSource,TSource>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::ValueTuple_2<TSource,TSource>>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___System__ValueTuple_2_TSource_TSource__() noexcept;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(::System::ValueTuple_2<TSource,TSource>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pairwise_1__Pairwise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pairwise_1__Pairwise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pairwise_1__Pairwise(Pairwise_1__Pairwise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pairwise_1__Pairwise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pairwise_1__Pairwise(Pairwise_1__Pairwise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20704};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field enumerator, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field prev, offset: 0x68, size: 0x8, def value: None
 TSource  ___prev;

/// @brief Field isFirst, offset: 0x70, size: 0x1, def value: None
 bool  ___isFirst;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x78, size: 0x10, def value: None
 ::System::ValueTuple_2<TSource,TSource>  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
