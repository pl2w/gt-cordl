#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SelectAwait_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectAwait_2)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TResult>
class SelectAwait_2__SelectAwait;
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
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TResult>
class SelectAwait_2;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource,typename TResult>
class SelectAwait_2__SelectAwait;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SelectAwait_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SelectAwait_2__SelectAwait);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SelectAwait_2, "Cysharp.Threading.Tasks.Linq", "SelectAwait`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SelectAwait_2__SelectAwait, "Cysharp.Threading.Tasks.Linq", "SelectAwait`2/_SelectAwait");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SelectAwait`2<TSource,TResult>
class CORDL_TYPE SelectAwait_2 : public ::System::Object {
public:
// Declarations
using _SelectAwait = ::Cysharp::Threading::Tasks::Linq::SelectAwait_2__SelectAwait<TSource, TResult>;

/// @brief Field selector, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::SelectAwait_2<TSource,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector) ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& __cordl_internal_get_selector() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& __cordl_internal_get_selector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_selector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectAwait_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectAwait_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectAwait_2(SelectAwait_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectAwait_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectAwait_2(SelectAwait_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20728};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field selector, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  ___selector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource,typename TResult>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SelectAwait`2/_SelectAwait<TSource,TResult>
class CORDL_TYPE SelectAwait_2__SelectAwait : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) TResult  Current;

/// @brief Field <Current>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) TResult  _Current_k__BackingField;

/// @brief Field awaiter, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<bool>  awaiter;

/// @brief Field awaiter2, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter2, put=__cordl_internal_set_awaiter2)) ::GlobalNamespace::UniTask_1_Awaiter<TResult>  awaiter2;

/// @brief Field cancellationToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field enumerator, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enumerator, put=__cordl_internal_set_enumerator)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator;

/// @brief Field moveNextAction, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveNextAction, put=__cordl_internal_set_moveNextAction)) ::System::Action*  moveNextAction;

/// @brief Field selector, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector;

/// @brief Field source, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field state, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNext() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::Linq::SelectAwait_2__SelectAwait<TSource,TResult>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr TResult const& __cordl_internal_get__Current_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& __cordl_internal_get_awaiter() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& __cordl_internal_get_awaiter2() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& __cordl_internal_get_awaiter2() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& __cordl_internal_get_enumerator() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& __cordl_internal_get_enumerator() ;

constexpr ::System::Action* const& __cordl_internal_get_moveNextAction() const;

constexpr ::System::Action*& __cordl_internal_get_moveNextAction() ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& __cordl_internal_get_selector() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& __cordl_internal_get_selector() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set__Current_k__BackingField(TResult  value) ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value) ;

constexpr void __cordl_internal_set_awaiter2(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value) ;

constexpr void __cordl_internal_set_moveNextAction(::System::Action*  value) ;

constexpr void __cordl_internal_set_selector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectAwait_2__SelectAwait() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectAwait_2__SelectAwait", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectAwait_2__SelectAwait(SelectAwait_2__SelectAwait && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectAwait_2__SelectAwait", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectAwait_2__SelectAwait(SelectAwait_2__SelectAwait const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20727};

/// @brief Field source, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field selector, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  ___selector;

/// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field state, offset: 0x50, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field enumerator, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  ___enumerator;

/// @brief Field awaiter, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  ___awaiter;

/// @brief Field awaiter2, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TResult>  ___awaiter2;

/// @brief Field moveNextAction, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___moveNextAction;

/// [CompilerGenerated]
/// @brief Field <Current>k__BackingField, offset: 0x98, size: 0x8, def value: None
 TResult  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
