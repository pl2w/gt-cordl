#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Any.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Any)
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
struct Any__AnyAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Any__AnyAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Any__AnyAwaitAsync_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Any__AnyAwaitWithCancellationAsync_d__3_1;
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
class Any;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Any*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Any*, "Cysharp.Threading.Tasks.Linq", "Any");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Any
class CORDL_TYPE Any : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _AnyAsync_d__0_1 = ::GlobalNamespace::Any__AnyAsync_d__0_1<TSource>;

template<typename TSource>
using _AnyAsync_d__1_1 = ::GlobalNamespace::Any__AnyAsync_d__1_1<TSource>;

template<typename TSource>
using _AnyAwaitAsync_d__2_1 = ::GlobalNamespace::Any__AnyAwaitAsync_d__2_1<TSource>;

template<typename TSource>
using _AnyAwaitWithCancellationAsync_d__3_1 = ::GlobalNamespace::Any__AnyAwaitWithCancellationAsync_d__3_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Any::<AnyAsync>d__0`1<TSource>))]
/// @brief Method AnyAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AnyAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Any::<AnyAsync>d__1`1<TSource>))]
/// @brief Method AnyAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AnyAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Any::<AnyAwaitAsync>d__2`1<TSource>))]
/// @brief Method AnyAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AnyAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Any::<AnyAwaitWithCancellationAsync>d__3`1<TSource>))]
/// @brief Method AnyAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> AnyAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Any() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Any", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Any(Any && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Any", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Any(Any const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Any) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
