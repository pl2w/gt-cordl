#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Average__AverageAsync_d__24.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Average__AverageAsync_d__24)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Average__AverageAsync_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Average__AverageAsync_d__24);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Average__AverageAsync_d__24, "Cysharp.Threading.Tasks.Linq", "Average/<AverageAsync>d__24");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Nullable`1<T>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.Average/<AverageAsync>d__24
struct CORDL_TYPE Average__AverageAsync_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xae0a778, size 0xb2c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae0b2a4, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Average__AverageAsync_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<double_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count_5__2", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sum_5__3", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_e_5__4", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<int64_t>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr Average__AverageAsync_d__24(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<double_t>>  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken, int64_t  _count_5__2, ::System::Nullable_1<int64_t>  _sum_5__3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<int64_t>>*  _e_5__4, ::System::Object*  __7__wrap4, int32_t  __7__wrap5, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Nullable_1<double_t>>  __t__builder;

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <count>5__2, offset: 0x30, size: 0x8, def value: None
 int64_t  _count_5__2;

/// @brief Field <sum>5__3, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  _sum_5__3;

/// @brief Field <e>5__4, offset: 0x48, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Nullable_1<int64_t>>*  _e_5__4;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x58, size: 0x4, def value: None
 int32_t  __7__wrap5;

/// @brief Field <>u__1, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x78, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, _count_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, _sum_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, _e_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __7__wrap5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Average__AverageAsync_d__24, __u__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Average__AverageAsync_d__24) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
