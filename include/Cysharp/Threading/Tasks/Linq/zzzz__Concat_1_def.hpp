#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Concat_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__Concat`1__Concat_IteratingState_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Concat_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Concat_1__Concat;
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
template<typename TSource>
struct _Concat_Concat_1_IteratingState;
}
namespace GlobalNamespace {
template<typename TSource>
struct _Concat_Concat_1__RunSecondAfterDisposeAsync_d__16;
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
class Concat_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Concat_1__Concat;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Concat_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::Concat_1__Concat);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Concat_1, "Cysharp.Threading.Tasks.Linq", "Concat`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::Concat_1__Concat, "Cysharp.Threading.Tasks.Linq", "Concat`1/_Concat");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Concat`1<TSource>
class CORDL_TYPE Concat_1 : public ::System::Object {
public:
// Declarations
using _Concat = ::Cysharp::Threading::Tasks::Linq::Concat_1__Concat<TSource>;

/// @brief Field first, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first;

/// @brief Field second, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::Concat_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_first() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_second() ;

constexpr void __cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Concat_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Concat_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Concat_1(Concat_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Concat_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Concat_1(Concat_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20496};

/// @brief Field first, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___first;

/// @brief Field second, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___second;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.Concat`1::_Concat::IteratingState<TSource>, Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Concat`1/_Concat<TSource>
class CORDL_TYPE Concat_1__Concat : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using IteratingState = ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>;

using _RunSecondAfterDisposeAsync_d__16 = ::GlobalNamespace::_Concat_Concat_1__RunSecondAfterDisposeAsync_d__16<TSource>;

 __declspec(property(get=get_Current, put=set_Current)) TSource  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TSource  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field cancellationToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field enumerator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field first, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first;

/// @brief Field iteratingState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_iteratingState, put=__cordl_internal_set_iteratingState)) ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  iteratingState;

/// @brief Field second, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCore(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::Concat_1__Concat<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Concat`1::_Concat::<RunSecondAfterDisposeAsync>d__16<TSource>))]
/// @brief Method RunSecondAfterDisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunSecondAfterDisposeAsync() ;

/// @brief Method StartIterate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StartIterate() ;

constexpr TSource const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TSource& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_first() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_first() ;

constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource> const& __cordl_internal_get_iteratingState() const;

constexpr ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>& __cordl_internal_get_iteratingState() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_second() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TSource  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_iteratingState(::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Concat_1__Concat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Concat_1__Concat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Concat_1__Concat(Concat_1__Concat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Concat_1__Concat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Concat_1__Concat(Concat_1__Concat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20495};

/// @brief Field first, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___first;

/// @brief Field second, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___second;

/// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field iteratingState, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource>  ___iteratingState;

/// @brief Field enumerator, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x78, size: 0x8, def value: None
 TSource  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
