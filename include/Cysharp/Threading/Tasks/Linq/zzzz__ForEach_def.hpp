#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ForEach.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ForEach)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAsync_d__1_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAwaitAsync_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAwaitAsync_d__3_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAwaitWithCancellationAsync_d__4_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct ForEach__ForEachAwaitWithCancellationAsync_d__5_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class ForEach;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ForEach*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ForEach*, "Cysharp.Threading.Tasks.Linq", "ForEach");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ForEach
class CORDL_TYPE ForEach : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _ForEachAsync_d__0_1 = ::GlobalNamespace::ForEach__ForEachAsync_d__0_1<TSource>;

template<typename TSource>
using _ForEachAsync_d__1_1 = ::GlobalNamespace::ForEach__ForEachAsync_d__1_1<TSource>;

template<typename TSource>
using _ForEachAwaitAsync_d__2_1 = ::GlobalNamespace::ForEach__ForEachAwaitAsync_d__2_1<TSource>;

template<typename TSource>
using _ForEachAwaitAsync_d__3_1 = ::GlobalNamespace::ForEach__ForEachAwaitAsync_d__3_1<TSource>;

template<typename TSource>
using _ForEachAwaitWithCancellationAsync_d__4_1 = ::GlobalNamespace::ForEach__ForEachAwaitWithCancellationAsync_d__4_1<TSource>;

template<typename TSource>
using _ForEachAwaitWithCancellationAsync_d__5_1 = ::GlobalNamespace::ForEach__ForEachAwaitWithCancellationAsync_d__5_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAsync>d__0`1<TSource>))]
/// @brief Method ForEachAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAsync>d__1`1<TSource>))]
/// @brief Method ForEachAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_2<TSource,int32_t>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAwaitAsync>d__2`1<TSource>))]
/// @brief Method ForEachAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAwaitAsync>d__3`1<TSource>))]
/// @brief Method ForEachAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAwaitWithCancellationAsync>d__4`1<TSource>))]
/// @brief Method ForEachAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ForEach::<ForEachAwaitWithCancellationAsync>d__5`1<TSource>))]
/// @brief Method ForEachAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForEach() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForEach", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ForEach(ForEach && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForEach", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForEach(ForEach const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ForEach) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
