#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumeratorAwaitSelectorBase_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
CORDL_MODULE_EXPORT(AsyncEnumeratorAwaitSelectorBase_3)
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
template<typename TSource,typename TResult,typename TAwait>
class AsyncEnumeratorAwaitSelectorBase_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3, "Cysharp.Threading.Tasks.Linq", "AsyncEnumeratorAwaitSelectorBase`3");
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TResult,typename TAwait>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<TSource,TResult,TAwait>
class CORDL_TYPE AsyncEnumeratorAwaitSelectorBase_3 : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

 __declspec(property(get=get_SourceCurrent, put=set_SourceCurrent)) TSource  SourceCurrent;

/// @brief Field <Current>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field <SourceCurrent>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__SourceCurrent_k__BackingField, put=__cordl_internal_set__SourceCurrent_k__BackingField)) TSource  _SourceCurrent_k__BackingField;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field enumerator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field moveNextCallbackDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_moveNextCallbackDelegate, put=setStaticF_moveNextCallbackDelegate)) ::System::Action_1<::System::Object*>*  moveNextCallbackDelegate;

/// @brief Field resultAwaiter, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_resultAwaiter, put=__cordl_internal_set_resultAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<TAwait>  resultAwaiter;

/// @brief Field setCurrentCallbackDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_setCurrentCallbackDelegate, put=setStaticF_setCurrentCallbackDelegate)) ::System::Action_1<::System::Object*>*  setCurrentCallbackDelegate;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field sourceMoveNext, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_sourceMoveNext, put=__cordl_internal_set_sourceMoveNext)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  sourceMoveNext;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// @brief Method ActionCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> ActionCompleted(bool  trySetCurrentResult, ::by_ref<bool>  moveNextResult) ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method IterateFinished, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> IterateFinished(::by_ref<bool>  moveNextResult) ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

/// @brief Method MoveNextCallBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void MoveNextCallBack(::System::Object*  state) ;

static inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetCurrentCallBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetCurrentCallBack(::System::Object*  state) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

/// @brief Method TransformAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<TAwait> TransformAsync(TSource  sourceCurrent) ;

/// @brief Method TryMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result) ;

/// @brief Method TrySetCurrentCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TrySetCurrentCore(TAwait  awaitResult, ::by_ref<bool>  terminateIteration) ;

/// @brief Method UnwarapTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool UnwarapTask(::Cysharp::Threading::Tasks::UniTask_1<TAwait>  taskResult, ::by_ref<TAwait>  result) ;

/// @brief Method WaitAwaitCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> WaitAwaitCallback(::by_ref<bool>  moveNextResult) ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr TSource const& __cordl_internal_get__SourceCurrent_k__BackingField() const;

constexpr TSource& __cordl_internal_get__SourceCurrent_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TAwait> const& __cordl_internal_get_resultAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TAwait>& __cordl_internal_get_resultAwaiter() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_sourceMoveNext() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_sourceMoveNext() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set__SourceCurrent_k__BackingField(TSource  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_resultAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TAwait>  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_sourceMoveNext(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_moveNextCallbackDelegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_setCurrentCallbackDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// [CompilerGenerated]
/// @brief Method get_SourceCurrent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TSource get_SourceCurrent() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_moveNextCallbackDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_setCurrentCallbackDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

/// [CompilerGenerated]
/// @brief Method set_SourceCurrent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_SourceCurrent(TSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncEnumeratorAwaitSelectorBase_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncEnumeratorAwaitSelectorBase_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncEnumeratorAwaitSelectorBase_3(AsyncEnumeratorAwaitSelectorBase_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncEnumeratorAwaitSelectorBase_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncEnumeratorAwaitSelectorBase_3(AsyncEnumeratorAwaitSelectorBase_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20403};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field enumerator, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field sourceMoveNext, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___sourceMoveNext;

/// @brief Field resultAwaiter, offset: 0x68, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TAwait>  ___resultAwaiter;

/// [CompilerGenerated]
/// @brief Field <SourceCurrent>k__BackingField, offset: 0x80, size: 0x8, def value: None
 TSource  ____SourceCurrent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x88, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
