#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Last.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Last)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Last__LastAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Last__LastAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Last__LastAwaitAsync_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Last__LastAwaitWithCancellationAsync_d__3_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class Last;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Last*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Last*, "Cysharp.Threading.Tasks.Linq", "Last");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Last
class CORDL_TYPE Last : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _LastAsync_d__0_1 = ::GlobalNamespace::Last__LastAsync_d__0_1<TSource>;

template<typename TSource>
using _LastAsync_d__1_1 = ::GlobalNamespace::Last__LastAsync_d__1_1<TSource>;

template<typename TSource>
using _LastAwaitAsync_d__2_1 = ::GlobalNamespace::Last__LastAwaitAsync_d__2_1<TSource>;

template<typename TSource>
using _LastAwaitWithCancellationAsync_d__3_1 = ::GlobalNamespace::Last__LastAwaitWithCancellationAsync_d__3_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Last::<LastAsync>d__0`1<TSource>))]
/// @brief Method LastAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> LastAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Last::<LastAsync>d__1`1<TSource>))]
/// @brief Method LastAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> LastAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Last::<LastAwaitAsync>d__2`1<TSource>))]
/// @brief Method LastAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> LastAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Last::<LastAwaitWithCancellationAsync>d__3`1<TSource>))]
/// @brief Method LastAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> LastAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Last() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Last", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Last(Last && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Last", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Last(Last const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20590};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Last) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
