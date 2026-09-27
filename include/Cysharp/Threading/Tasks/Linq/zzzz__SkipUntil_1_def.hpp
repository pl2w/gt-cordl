#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SkipUntil_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SkipUntil_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntil_1__SkipUntil;
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
struct _SkipUntil_SkipUntil_1__RunOther_d__18;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntil_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipUntil_1__SkipUntil;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntil_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntil_1, "Cysharp.Threading.Tasks.Linq", "SkipUntil`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil, "Cysharp.Threading.Tasks.Linq", "SkipUntil`1/_SkipUntil");
// Dependencies Cysharp.Threading.Tasks.UniTask, System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipUntil`1<TSource>
class CORDL_TYPE SkipUntil_1 : public ::System::Object {
public:
// Declarations
using _SkipUntil = ::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil<TSource>;

/// @brief Field other, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_other, put=__cordl_internal_set_other)) ::Cysharp::Threading::Tasks::UniTask  other;

/// @brief Field other2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_other2, put=__cordl_internal_set_other2)) ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other2;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::SkipUntil_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other2) ;

constexpr ::Cysharp::Threading::Tasks::UniTask const& __cordl_internal_get_other() const;

constexpr ::Cysharp::Threading::Tasks::UniTask& __cordl_internal_get_other() ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_other2() const;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_other2() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_other(::Cysharp::Threading::Tasks::UniTask  value) ;

constexpr void __cordl_internal_set_other2(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other2) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipUntil_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipUntil_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipUntil_1(SkipUntil_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipUntil_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipUntil_1(SkipUntil_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20757};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field other, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  ___other;

/// @brief Field other2, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  ___other2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipUntil`1/_SkipUntil<TSource>
class CORDL_TYPE SkipUntil_1__SkipUntil : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
using _RunOther_d__18 = ::GlobalNamespace::_SkipUntil_SkipUntil_1__RunOther_d__18<TSource>;

/// @brief Field CancelDelegate1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelDelegate1, put=setStaticF_CancelDelegate1)) ::System::Action_1<::System::Object*>*  CancelDelegate1;

 __declspec(property(get=get_Current, put=set_Current)) TSource  Current;

/// @brief Field MoveNextCoreDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveNextCoreDelegate, put=setStaticF_MoveNextCoreDelegate)) ::System::Action_1<::System::Object*>*  MoveNextCoreDelegate;

/// @brief Field <Current>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TSource  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field cancellationToken1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken1, put=__cordl_internal_set_cancellationToken1)) ::System::Threading::CancellationToken  cancellationToken1;

/// @brief Field cancellationTokenRegistration1, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration1, put=__cordl_internal_set_cancellationTokenRegistration1)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration1;

/// @brief Field completed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continueNext, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueNext, put=__cordl_internal_set_continueNext)) bool  continueNext;

/// @brief Field enumerator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field exception, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Exception*  exception;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

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

static inline ::Cysharp::Threading::Tasks::Linq::SkipUntil_1__SkipUntil<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Threading::CancellationToken  cancellationToken1) ;

/// @brief Method OnCanceled1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnCanceled1(::System::Object*  state) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.SkipUntil`1::_SkipUntil::<RunOther>d__18<TSource>))]
/// @brief Method RunOther, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunOther(::Cysharp::Threading::Tasks::UniTask  other) ;

/// @brief Method SourceMoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SourceMoveNext() ;

constexpr TSource const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TSource& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken1() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken1() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration1() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration1() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr bool const& __cordl_internal_get_continueNext() const;

constexpr bool& __cordl_internal_get_continueNext() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr ::System::Exception* const& __cordl_internal_get_exception() const;

constexpr ::System::Exception*& __cordl_internal_get_exception() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TSource  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continueNext(bool  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_exception(::System::Exception*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Threading::CancellationToken  cancellationToken1) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelDelegate1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_MoveNextCoreDelegate() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TSource get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept;

static inline void setStaticF_CancelDelegate1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipUntil_1__SkipUntil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipUntil_1__SkipUntil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipUntil_1__SkipUntil(SkipUntil_1__SkipUntil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipUntil_1__SkipUntil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipUntil_1__SkipUntil(SkipUntil_1__SkipUntil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20756};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field cancellationToken1, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken1;

/// @brief Field completed, offset: 0x48, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field cancellationTokenRegistration1, offset: 0x50, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration1;

/// @brief Field enumerator, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field continueNext, offset: 0x88, size: 0x1, def value: None
 bool  ___continueNext;

/// @brief Field exception, offset: 0x90, size: 0x8, def value: None
 ::System::Exception*  ___exception;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x98, size: 0x8, def value: None
 TSource  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
