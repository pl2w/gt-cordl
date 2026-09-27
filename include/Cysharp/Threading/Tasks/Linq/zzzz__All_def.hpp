#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/All.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(All)
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
struct All__AllAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct All__AllAwaitAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct All__AllAwaitWithCancellationAsync_d__2_1;
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
class All;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::All*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::All*, "Cysharp.Threading.Tasks.Linq", "All");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.All
class CORDL_TYPE All : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _AllAsync_d__0_1 = ::GlobalNamespace::All__AllAsync_d__0_1<TSource>;

template<typename TSource>
using _AllAwaitAsync_d__1_1 = ::GlobalNamespace::All__AllAwaitAsync_d__1_1<TSource>;

template<typename TSource>
using _AllAwaitWithCancellationAsync_d__2_1 = ::GlobalNamespace::All__AllAwaitWithCancellationAsync_d__2_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.All::<AllAsync>d__0`1<TSource>))]
/// @brief Method AllAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AllAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.All::<AllAwaitAsync>d__1`1<TSource>))]
/// @brief Method AllAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AllAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.All::<AllAwaitWithCancellationAsync>d__2`1<TSource>))]
/// @brief Method AllAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AllAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr All() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "All", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
All(All && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "All", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
All(All const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::All) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
