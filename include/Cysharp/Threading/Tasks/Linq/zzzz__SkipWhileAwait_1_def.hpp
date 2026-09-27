#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SkipWhileAwait_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SkipWhileAwait_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipWhileAwait_1__SkipWhileAwait;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipWhileAwait_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class SkipWhileAwait_1__SkipWhileAwait;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1__SkipWhileAwait);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1, "Cysharp.Threading.Tasks.Linq", "SkipWhileAwait`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1__SkipWhileAwait, "Cysharp.Threading.Tasks.Linq", "SkipWhileAwait`1/_SkipWhileAwait");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1<TSource>
class CORDL_TYPE SkipWhileAwait_1 : public ::System::Object {
public:
// Declarations
using _SkipWhileAwait = ::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1__SkipWhileAwait<TSource>;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate) ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& __cordl_internal_get_predicate() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipWhileAwait_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipWhileAwait_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipWhileAwait_1(SkipWhileAwait_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipWhileAwait_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipWhileAwait_1(SkipWhileAwait_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20765};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  ___predicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<TSource, TResult, TAwait>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<TSource>
class CORDL_TYPE SkipWhileAwait_1__SkipWhileAwait : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TSource,bool> {
public:
// Declarations
/// @brief Field predicate, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate;

static inline ::Cysharp::Threading::Tasks::Linq::SkipWhileAwait_1__SkipWhileAwait<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TransformAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> TransformAsync(TSource  sourceCurrent) ;

/// @brief Method TrySetCurrentCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetCurrentCore(bool  awaitResult, ::by_ref<bool>  terminateIteration) ;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_predicate(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkipWhileAwait_1__SkipWhileAwait() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkipWhileAwait_1__SkipWhileAwait", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkipWhileAwait_1__SkipWhileAwait(SkipWhileAwait_1__SkipWhileAwait && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkipWhileAwait_1__SkipWhileAwait", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkipWhileAwait_1__SkipWhileAwait(SkipWhileAwait_1__SkipWhileAwait const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20764};

/// @brief Field predicate, offset: 0x90, size: 0x8, def value: None
 ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  ___predicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
