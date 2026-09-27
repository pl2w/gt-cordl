#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/First.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(First)
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
struct First__FirstAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct First__FirstAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct First__FirstAwaitAsync_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct First__FirstAwaitWithCancellationAsync_d__3_1;
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
class First;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::First*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::First*, "Cysharp.Threading.Tasks.Linq", "First");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.First
class CORDL_TYPE First : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _FirstAsync_d__0_1 = ::GlobalNamespace::First__FirstAsync_d__0_1<TSource>;

template<typename TSource>
using _FirstAsync_d__1_1 = ::GlobalNamespace::First__FirstAsync_d__1_1<TSource>;

template<typename TSource>
using _FirstAwaitAsync_d__2_1 = ::GlobalNamespace::First__FirstAwaitAsync_d__2_1<TSource>;

template<typename TSource>
using _FirstAwaitWithCancellationAsync_d__3_1 = ::GlobalNamespace::First__FirstAwaitWithCancellationAsync_d__3_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.First::<FirstAsync>d__0`1<TSource>))]
/// @brief Method FirstAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> FirstAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.First::<FirstAsync>d__1`1<TSource>))]
/// @brief Method FirstAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> FirstAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.First::<FirstAwaitAsync>d__2`1<TSource>))]
/// @brief Method FirstAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> FirstAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.First::<FirstAwaitWithCancellationAsync>d__3`1<TSource>))]
/// @brief Method FirstAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> FirstAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr First() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "First", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
First(First && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "First", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
First(First const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::First) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
