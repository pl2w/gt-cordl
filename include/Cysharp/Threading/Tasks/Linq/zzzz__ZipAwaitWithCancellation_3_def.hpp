#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ZipAwaitWithCancellation_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZipAwaitWithCancellation_3)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TFirst,typename TSecond,typename TResult>
class ZipAwaitWithCancellation_3__ZipAwaitWithCancellation;
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
template<typename TFirst,typename TSecond,typename TResult>
struct _ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TFirst,typename TSecond,typename TResult>
class ZipAwaitWithCancellation_3;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TFirst,typename TSecond,typename TResult>
class ZipAwaitWithCancellation_3__ZipAwaitWithCancellation;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3, "Cysharp.Threading.Tasks.Linq", "ZipAwaitWithCancellation`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation, "Cysharp.Threading.Tasks.Linq", "ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TFirst,typename TSecond,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3<TFirst,TSecond,TResult>
class CORDL_TYPE ZipAwaitWithCancellation_3 : public ::System::Object {
public:
// Declarations
using _ZipAwaitWithCancellation = ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst, TSecond, TResult>;

/// @brief Field first, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first;

/// @brief Field resultSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector;

/// @brief Field second, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector) ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* const& __cordl_internal_get_first() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*& __cordl_internal_get_first() ;

constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*& __cordl_internal_get_second() ;

constexpr void __cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipAwaitWithCancellation_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipAwaitWithCancellation_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipAwaitWithCancellation_3(ZipAwaitWithCancellation_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipAwaitWithCancellation_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipAwaitWithCancellation_3(ZipAwaitWithCancellation_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20914};

/// @brief Field first, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  ___first;

/// @brief Field second, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  ___second;

/// @brief Field resultSelector, offset: 0x20, size: 0x8, def value: None
 ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  ___resultSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TFirst,typename TSecond,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult>
class CORDL_TYPE ZipAwaitWithCancellation_3__ZipAwaitWithCancellation : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _DisposeAsync_d__21 = ::GlobalNamespace::_ZipAwaitWithCancellation_ZipAwaitWithCancellation_3__DisposeAsync_d__21<TFirst, TSecond, TResult>;

 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

/// @brief Field <Current>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field cancellationToken, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field first, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first;

/// @brief Field firstAwaiter, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_firstAwaiter, put=__cordl_internal_set_firstAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  firstAwaiter;

/// @brief Field firstEnumerator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstEnumerator, put=__cordl_internal_set_firstEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*  firstEnumerator;

/// @brief Field firstMoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_firstMoveNextCoreDelegate, put=setStaticF_firstMoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  firstMoveNextCoreDelegate;

/// @brief Field resultAwaitCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_resultAwaitCoreDelegate, put=setStaticF_resultAwaitCoreDelegate)) ::System::Action_1<::System::Object*>*  resultAwaitCoreDelegate;

/// @brief Field resultAwaiter, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get_resultAwaiter, put=__cordl_internal_set_resultAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<TResult>  resultAwaiter;

/// @brief Field resultSelector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSelector, put=__cordl_internal_set_resultSelector)) ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector;

/// @brief Field second, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second;

/// @brief Field secondAwaiter, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get_secondAwaiter, put=__cordl_internal_set_secondAwaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  secondAwaiter;

/// @brief Field secondEnumerator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondEnumerator, put=__cordl_internal_set_secondEnumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*  secondEnumerator;

/// @brief Field secondMoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_secondMoveNextCoreDelegate, put=setStaticF_secondMoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  secondMoveNextCoreDelegate;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3::_ZipAwaitWithCancellation::<DisposeAsync>d__21<TFirst, TSecond, TResult>))]
/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method FirstMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void FirstMoveNextCore(::System::Object*  state) ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ResultAwaitCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ResultAwaitCore(::System::Object*  state) ;

/// @brief Method SecondMoveNextCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SecondMoveNextCore(::System::Object*  state) ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* const& __cordl_internal_get_first() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*& __cordl_internal_get_first() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_firstAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_firstAwaiter() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>* const& __cordl_internal_get_firstEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*& __cordl_internal_get_firstEnumerator() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& __cordl_internal_get_resultAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& __cordl_internal_get_resultAwaiter() ;

constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& __cordl_internal_get_resultSelector() const;

constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& __cordl_internal_get_resultSelector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* const& __cordl_internal_get_second() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*& __cordl_internal_get_second() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_secondAwaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_secondAwaiter() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>* const& __cordl_internal_get_secondEnumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*& __cordl_internal_get_secondEnumerator() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  value) ;

constexpr void __cordl_internal_set_firstAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_firstEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*  value) ;

constexpr void __cordl_internal_set_resultAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value) ;

constexpr void __cordl_internal_set_resultSelector(::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value) ;

constexpr void __cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  value) ;

constexpr void __cordl_internal_set_secondAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_secondEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_firstMoveNextCoreDelegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_resultAwaitCoreDelegate() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_secondMoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

static inline void setStaticF_firstMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_resultAwaitCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_secondMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipAwaitWithCancellation_3__ZipAwaitWithCancellation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipAwaitWithCancellation_3__ZipAwaitWithCancellation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipAwaitWithCancellation_3__ZipAwaitWithCancellation(ZipAwaitWithCancellation_3__ZipAwaitWithCancellation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipAwaitWithCancellation_3__ZipAwaitWithCancellation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipAwaitWithCancellation_3__ZipAwaitWithCancellation(ZipAwaitWithCancellation_3__ZipAwaitWithCancellation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20913};

/// @brief Field first, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  ___first;

/// @brief Field second, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  ___second;

/// @brief Field resultSelector, offset: 0x48, size: 0x8, def value: None
 ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  ___resultSelector;

/// @brief Field cancellationToken, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field firstEnumerator, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*  ___firstEnumerator;

/// @brief Field secondEnumerator, offset: 0x60, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*  ___secondEnumerator;

/// @brief Field firstAwaiter, offset: 0x68, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___firstAwaiter;

/// @brief Field secondAwaiter, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___secondAwaiter;

/// @brief Field resultAwaiter, offset: 0x98, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TResult>  ___resultAwaiter;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
