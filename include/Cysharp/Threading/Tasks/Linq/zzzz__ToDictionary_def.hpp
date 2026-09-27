#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToDictionary)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToDictionary__ToDictionaryAsync_d__0_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToDictionary__ToDictionaryAsync_d__1_3;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToDictionary__ToDictionaryAwaitAsync_d__2_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToDictionary__ToDictionaryAwaitAsync_d__3_3;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey>
struct ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__4_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TKey,typename TElement>
struct ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__5_3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
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
class ToDictionary;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::ToDictionary*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::ToDictionary*, "Cysharp.Threading.Tasks.Linq", "ToDictionary");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.ToDictionary
class CORDL_TYPE ToDictionary : public ::System::Object {
public:
// Declarations
template<typename TSource,typename TKey>
using _ToDictionaryAsync_d__0_2 = ::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__0_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToDictionaryAsync_d__1_3 = ::GlobalNamespace::ToDictionary__ToDictionaryAsync_d__1_3<TSource, TKey, TElement>;

template<typename TSource,typename TKey>
using _ToDictionaryAwaitAsync_d__2_2 = ::GlobalNamespace::ToDictionary__ToDictionaryAwaitAsync_d__2_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToDictionaryAwaitAsync_d__3_3 = ::GlobalNamespace::ToDictionary__ToDictionaryAwaitAsync_d__3_3<TSource, TKey, TElement>;

template<typename TSource,typename TKey>
using _ToDictionaryAwaitWithCancellationAsync_d__4_2 = ::GlobalNamespace::ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__4_2<TSource, TKey>;

template<typename TSource,typename TKey,typename TElement>
using _ToDictionaryAwaitWithCancellationAsync_d__5_3 = ::GlobalNamespace::ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__5_3<TSource, TKey, TElement>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAsync>d__1`3<TSource, TKey, TElement>))]
/// @brief Method ToDictionaryAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAsync>d__0`2<TSource, TKey>))]
/// @brief Method ToDictionaryAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAwaitAsync>d__3`3<TSource, TKey, TElement>))]
/// @brief Method ToDictionaryAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAwaitAsync>d__2`2<TSource, TKey>))]
/// @brief Method ToDictionaryAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAwaitWithCancellationAsync>d__5`3<TSource, TKey, TElement>))]
/// @brief Method ToDictionaryAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey,typename TElement>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.ToDictionary::<ToDictionaryAwaitWithCancellationAsync>d__4`2<TSource, TKey>))]
/// @brief Method ToDictionaryAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TKey>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToDictionary(ToDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToDictionary(ToDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::ToDictionary) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
