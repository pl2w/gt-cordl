#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SelectMany_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectMany_3)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TCollection,typename TResult>
class SelectMany_3__SelectMany;
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
namespace GlobalNamespace {
template<typename TSource,typename TCollection,typename TResult>
struct _SelectMany_SelectMany_3__DisposeAsync_d__26;
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
template<typename TSource,typename TCollection,typename TResult>
class SelectMany_3;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TCollection,typename TResult>
class SelectMany_3__SelectMany;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SelectMany_3);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SelectMany_3, "Cysharp.Threading.Tasks.Linq", "SelectMany`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany, "Cysharp.Threading.Tasks.Linq", "SelectMany`3/_SelectMany");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TCollection,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SelectMany`3<TSource,TCollection,TResult>
class CORDL_TYPE SelectMany_3 : public ::System::Object {
public:
// Declarations
using _SelectMany = ::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany<TSource, TCollection, TResult>;

/// @brief Field resultSelector, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TSource,TCollection,TResult>*  resultSelector;

/// @brief Field selector1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector1, put=__cordl_internal_set_selector1)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector1;

/// @brief Field selector2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector2, put=__cordl_internal_set_selector2)) ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector2;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::SelectMany_3<TSource,TCollection,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector) ;

static inline ::Cysharp::Threading::Tasks::Linq::SelectMany_3<TSource,TCollection,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector) ;

constexpr ::System::Func_3<TSource,TCollection,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TSource,TCollection,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* const& __cordl_internal_get_selector1() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*& __cordl_internal_get_selector1() ;

constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* const& __cordl_internal_get_selector2() const;

constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*& __cordl_internal_get_selector2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TSource,TCollection,TResult>*  value) ;

constexpr void __cordl_internal_set_selector1(::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  value) ;

constexpr void __cordl_internal_set_selector2(::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectMany_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectMany_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectMany_3(SelectMany_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectMany_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectMany_3(SelectMany_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20737};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field selector1, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  ___selector1;

/// @brief Field selector2, offset: 0x20, size: 0x8, def value: None
 ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  ___selector2;

/// @brief Field resultSelector, offset: 0x28, size: 0x8, def value: None
 ::System::Func_3<TSource,TCollection,TResult>*  ___resultSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TCollection,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SelectMany`3/_SelectMany<TSource,TCollection,TResult>
class CORDL_TYPE SelectMany_3__SelectMany : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _DisposeAsync_d__26 = ::GlobalNamespace::_SelectMany_SelectMany_3__DisposeAsync_d__26<TSource, TCollection, TResult>;

 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

/// @brief Field <Current>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field cancellationToken, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field resultSelector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_3<TSource,TCollection,TResult>*  resultSelector;

/// @brief Field selectedAwaiter, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get_selectedAwaiter, put=__cordl_internal_set_selectedAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  selectedAwaiter;

/// @brief Field selectedDisposeAsyncAwaiter, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_selectedDisposeAsyncAwaiter, put=__cordl_internal_set_selectedDisposeAsyncAwaiter)) ::GlobalNamespace::UniTask_Awaiter  selectedDisposeAsyncAwaiter;

/// @brief Field selectedEnumerator, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedEnumerator, put=__cordl_internal_set_selectedEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*  selectedEnumerator;

/// @brief Field selectedEnumeratorDisposeAsyncCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selectedEnumeratorDisposeAsyncCoreDelegate, put=setStaticF_selectedEnumeratorDisposeAsyncCoreDelegate)) ::System::Action_1<::System::Object*>*  selectedEnumeratorDisposeAsyncCoreDelegate;

/// @brief Field selectedSourceMoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selectedSourceMoveNextCoreDelegate, put=setStaticF_selectedSourceMoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  selectedSourceMoveNextCoreDelegate;

/// @brief Field selector1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector1, put=__cordl_internal_set_selector1)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector1;

/// @brief Field selector2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector2, put=__cordl_internal_set_selector2)) ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector2;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field sourceAwaiter, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get_sourceAwaiter, put=__cordl_internal_set_sourceAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  sourceAwaiter;

/// @brief Field sourceCurrent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceCurrent, put=__cordl_internal_set_sourceCurrent)) TSource  sourceCurrent;

/// @brief Field sourceEnumerator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceEnumerator, put=__cordl_internal_set_sourceEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  sourceEnumerator;

/// @brief Field sourceIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_sourceIndex, put=__cordl_internal_set_sourceIndex)) int32_t  sourceIndex;

/// @brief Field sourceMoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sourceMoveNextCoreDelegate, put=setStaticF_sourceMoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  sourceMoveNextCoreDelegate;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.SelectMany`3::_SelectMany::<DisposeAsync>d__26<TSource, TCollection, TResult>))]
/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextSelected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNextSelected() ;

/// @brief Method MoveNextSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNextSource() ;

static inline ::Cysharp::Threading::Tasks::Linq::SelectMany_3__SelectMany<TSource,TCollection,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector1, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector2, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SelectedEnumeratorDisposeAsyncCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SelectedEnumeratorDisposeAsyncCore(::System::Object*  state) ;

/// @brief Method SeletedSourceMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SeletedSourceMoveNextCore(::System::Object*  state) ;

/// @brief Method SourceMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SourceMoveNextCore(::System::Object*  state) ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Func_3<TSource,TCollection,TResult>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_3<TSource,TCollection,TResult>*& __cordl_internal_get_resultSelector() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_selectedAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_selectedAwaiter() ;

constexpr ::GlobalNamespace::UniTask_Awaiter const& __cordl_internal_get_selectedDisposeAsyncAwaiter() const;

constexpr ::GlobalNamespace::UniTask_Awaiter& __cordl_internal_get_selectedDisposeAsyncAwaiter() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>* const& __cordl_internal_get_selectedEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*& __cordl_internal_get_selectedEnumerator() ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* const& __cordl_internal_get_selector1() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*& __cordl_internal_get_selector1() ;

constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>* const& __cordl_internal_get_selector2() const;

constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*& __cordl_internal_get_selector2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_sourceAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_sourceAwaiter() ;

constexpr TSource const& __cordl_internal_get_sourceCurrent() const;

constexpr TSource& __cordl_internal_get_sourceCurrent() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_sourceEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_sourceEnumerator() ;

constexpr int32_t const& __cordl_internal_get_sourceIndex() const;

constexpr int32_t& __cordl_internal_get_sourceIndex() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_3<TSource,TCollection,TResult>*  value) ;

constexpr void __cordl_internal_set_selectedAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_selectedDisposeAsyncAwaiter(::GlobalNamespace::UniTask_Awaiter  value) ;

constexpr void __cordl_internal_set_selectedEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*  value) ;

constexpr void __cordl_internal_set_selector1(::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  value) ;

constexpr void __cordl_internal_set_selector2(::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_sourceAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_sourceCurrent(TSource  value) ;

constexpr void __cordl_internal_set_sourceEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_sourceIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector1, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  selector2, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_selectedEnumeratorDisposeAsyncCoreDelegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_selectedSourceMoveNextCoreDelegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_sourceMoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_selectedEnumeratorDisposeAsyncCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_selectedSourceMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_sourceMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectMany_3__SelectMany() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectMany_3__SelectMany", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectMany_3__SelectMany(SelectMany_3__SelectMany && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectMany_3__SelectMany", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectMany_3__SelectMany(SelectMany_3__SelectMany const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20736};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field selector1, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  ___selector1;

/// @brief Field selector2, offset: 0x48, size: 0x8, def value: None
 ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  ___selector2;

/// @brief Field resultSelector, offset: 0x50, size: 0x8, def value: None
 ::System::Func_3<TSource,TCollection,TResult>*  ___resultSelector;

/// @brief Field cancellationToken, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field sourceCurrent, offset: 0x60, size: 0x8, def value: None
 TSource  ___sourceCurrent;

/// @brief Field sourceIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___sourceIndex;

/// @brief Field sourceEnumerator, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___sourceEnumerator;

/// @brief Field selectedEnumerator, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*  ___selectedEnumerator;

/// @brief Field sourceAwaiter, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___sourceAwaiter;

/// @brief Field selectedAwaiter, offset: 0x98, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___selectedAwaiter;

/// @brief Field selectedDisposeAsyncAwaiter, offset: 0xb0, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  ___selectedDisposeAsyncAwaiter;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
