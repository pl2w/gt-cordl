#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Sum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sum)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__0;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__12;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__13_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__16;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__17_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__1_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__20;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__21_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__24;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__25_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__28;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__29_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__32;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__33_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__36;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__37_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__4;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__5_1;
}
namespace GlobalNamespace {
struct Sum__SumAsync_d__8;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAsync_d__9_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__10_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__14_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__18_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__22_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__26_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__2_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__30_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__34_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__38_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitAsync_d__6_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__11_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__15_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__19_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__23_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__27_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__31_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__35_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__39_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__3_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Sum__SumAwaitWithCancellationAsync_d__7_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct Decimal;
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
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class Sum;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Sum*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Sum*, "Cysharp.Threading.Tasks.Linq", "Sum");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Sum
class CORDL_TYPE Sum : public ::System::Object {
public:
// Declarations
using _SumAsync_d__0 = ::GlobalNamespace::Sum__SumAsync_d__0;

using _SumAsync_d__12 = ::GlobalNamespace::Sum__SumAsync_d__12;

template<typename TSource>
using _SumAsync_d__13_1 = ::GlobalNamespace::Sum__SumAsync_d__13_1<TSource>;

using _SumAsync_d__16 = ::GlobalNamespace::Sum__SumAsync_d__16;

template<typename TSource>
using _SumAsync_d__17_1 = ::GlobalNamespace::Sum__SumAsync_d__17_1<TSource>;

template<typename TSource>
using _SumAsync_d__1_1 = ::GlobalNamespace::Sum__SumAsync_d__1_1<TSource>;

using _SumAsync_d__20 = ::GlobalNamespace::Sum__SumAsync_d__20;

template<typename TSource>
using _SumAsync_d__21_1 = ::GlobalNamespace::Sum__SumAsync_d__21_1<TSource>;

using _SumAsync_d__24 = ::GlobalNamespace::Sum__SumAsync_d__24;

template<typename TSource>
using _SumAsync_d__25_1 = ::GlobalNamespace::Sum__SumAsync_d__25_1<TSource>;

using _SumAsync_d__28 = ::GlobalNamespace::Sum__SumAsync_d__28;

template<typename TSource>
using _SumAsync_d__29_1 = ::GlobalNamespace::Sum__SumAsync_d__29_1<TSource>;

using _SumAsync_d__32 = ::GlobalNamespace::Sum__SumAsync_d__32;

template<typename TSource>
using _SumAsync_d__33_1 = ::GlobalNamespace::Sum__SumAsync_d__33_1<TSource>;

using _SumAsync_d__36 = ::GlobalNamespace::Sum__SumAsync_d__36;

template<typename TSource>
using _SumAsync_d__37_1 = ::GlobalNamespace::Sum__SumAsync_d__37_1<TSource>;

using _SumAsync_d__4 = ::GlobalNamespace::Sum__SumAsync_d__4;

template<typename TSource>
using _SumAsync_d__5_1 = ::GlobalNamespace::Sum__SumAsync_d__5_1<TSource>;

using _SumAsync_d__8 = ::GlobalNamespace::Sum__SumAsync_d__8;

template<typename TSource>
using _SumAsync_d__9_1 = ::GlobalNamespace::Sum__SumAsync_d__9_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__10_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__10_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__14_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__14_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__18_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__18_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__22_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__22_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__26_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__26_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__2_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__2_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__30_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__30_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__34_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__34_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__38_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__38_1<TSource>;

template<typename TSource>
using _SumAwaitAsync_d__6_1 = ::GlobalNamespace::Sum__SumAwaitAsync_d__6_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__11_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__11_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__15_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__15_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__19_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__19_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__23_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__23_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__27_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__27_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__31_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__31_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__35_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__35_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__39_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__39_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__3_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__3_1<TSource>;

template<typename TSource>
using _SumAwaitWithCancellationAsync_d__7_1 = ::GlobalNamespace::Sum__SumAwaitWithCancellationAsync_d__7_1<TSource>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__16))]
/// @brief Method SumAsync, addr 0xae06df0, size 0x124, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__17`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Decimal>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__36))]
/// @brief Method SumAsync, addr 0xae07620, size 0x134, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__37`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__32))]
/// @brief Method SumAsync, addr 0xae07468, size 0x104, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__33`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__28))]
/// @brief Method SumAsync, addr 0xae072d0, size 0x10c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__29`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__20))]
/// @brief Method SumAsync, addr 0xae06fa4, size 0x10c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__21`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__24))]
/// @brief Method SumAsync, addr 0xae0713c, size 0x104, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__25`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__13`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,double_t>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__12))]
/// @brief Method SumAsync, addr 0xae06c34, size 0x10c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__9`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,float_t>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__8))]
/// @brief Method SumAsync, addr 0xae06aac, size 0xf8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__1`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int32_t>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__0))]
/// @brief Method SumAsync, addr 0xae067b0, size 0xec, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__5`1<TSource>))]
/// @brief Method SumAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int64_t>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAsync>d__4))]
/// @brief Method SumAsync, addr 0xae0692c, size 0x118, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*  source, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__18`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__38`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__34`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__30`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__22`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__26`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__14`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__10`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__2`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitAsync>d__6`1<TSource>))]
/// @brief Method SumAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__19`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__39`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__35`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__31`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__23`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__27`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__15`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__11`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__3`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Sum::<SumAwaitWithCancellationAsync>d__7`1<TSource>))]
/// @brief Method SumAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sum(Sum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sum(Sum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Sum) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
