#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TakeWhileIntAwaitWithCancellation_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TakeWhileIntAwaitWithCancellation_1)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation;
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
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileIntAwaitWithCancellation_1;
}
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1, "Cysharp.Threading.Tasks.Linq", "TakeWhileIntAwaitWithCancellation`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation, "Cysharp.Threading.Tasks.Linq", "TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1<TSource>
class CORDL_TYPE TakeWhileIntAwaitWithCancellation_1 : public ::System::Object {
public:
// Declarations
using _TakeWhileIntAwaitWithCancellation = ::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation<TSource>;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate) ;

constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& __cordl_internal_get_predicate() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_predicate(::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TakeWhileIntAwaitWithCancellation_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileIntAwaitWithCancellation_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeWhileIntAwaitWithCancellation_1(TakeWhileIntAwaitWithCancellation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileIntAwaitWithCancellation_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeWhileIntAwaitWithCancellation_1(TakeWhileIntAwaitWithCancellation_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20842};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  ___source;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  ___predicate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
// Dependencies Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<TSource, TResult, TAwait>
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<TSource>
class CORDL_TYPE TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TSource,bool> {
public:
// Declarations
/// @brief Field index, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field predicate, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate;

static inline ::Cysharp::Threading::Tasks::Linq::TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation<TSource>* New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TransformAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> TransformAsync(TSource  sourceCurrent) ;

/// @brief Method TrySetCurrentCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetCurrentCore(bool  awaitResult, ::by_ref<bool>  terminateIteration) ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation(TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation(TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20841};

/// @brief Field predicate, offset: 0x90, size: 0x8, def value: None
 ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  ___predicate;

/// @brief Field index, offset: 0x98, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
