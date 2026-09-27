#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsManager__Heartbeat_d__10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__Response204_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsManager__Heartbeat_d__10)
namespace Modio::Metrics {
class MetricsManager;
}
namespace Modio::Metrics {
class MetricsSession;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MetricsManager__Heartbeat_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetricsManager__Heartbeat_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetricsManager__Heartbeat_d__10, "Modio.Metrics", "MetricsManager/<Heartbeat>d__10");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.Response204, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Metrics.MetricsManager/<Heartbeat>d__10
struct CORDL_TYPE MetricsManager__Heartbeat_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa03e63c, size 0x7c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa03edfc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MetricsManager__Heartbeat_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Metrics::MetricsManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_session_5__2", ty: "::Modio::Metrics::MetricsSession*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cancellationToken_5__3", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MetricsManager__Heartbeat_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Modio::Metrics::MetricsManager*  __4__this, ::StringW  id, ::Modio::Metrics::MetricsSession*  _session_5__2, ::System::Threading::CancellationToken  _cancellationToken_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17626};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Metrics::MetricsManager*  __4__this;

/// @brief Field id, offset: 0x28, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field <session>5__2, offset: 0x30, size: 0x8, def value: None
 ::Modio::Metrics::MetricsSession*  _session_5__2;

/// @brief Field <cancellationToken>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  _cancellationToken_5__3;

/// [TupleElementNames(new[] { "error", "response204" })]
/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, _session_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, _cancellationToken_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricsManager__Heartbeat_d__10, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetricsManager__Heartbeat_d__10) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
