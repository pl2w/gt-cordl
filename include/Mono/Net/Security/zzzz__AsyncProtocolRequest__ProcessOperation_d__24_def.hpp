#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest__ProcessOperation_d__24.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncProtocolRequest__ProcessOperation_d__24)
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AsyncProtocolRequest__ProcessOperation_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, "Mono.Net.Security", "AsyncProtocolRequest/<ProcessOperation>d__24");
// [CompilerGenerated]
// Dependencies Mono.Net.Security.AsyncOperationStatus, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24
struct CORDL_TYPE AsyncProtocolRequest__ProcessOperation_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa8d5180, size 0x584, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa8d59a4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncProtocolRequest__ProcessOperation_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_status_5__2", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "_newStatus_5__3", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr AsyncProtocolRequest__ProcessOperation_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::Mono::Net::Security::AsyncOperationStatus  _status_5__2, ::Mono::Net::Security::AsyncOperationStatus  _newStatus_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Mono::Net::Security::AsyncProtocolRequest*  __4__this;

/// @brief Field <status>5__2, offset: 0x30, size: 0x4, def value: None
 ::Mono::Net::Security::AsyncOperationStatus  _status_5__2;

/// @brief Field <newStatus>5__3, offset: 0x34, size: 0x4, def value: None
 ::Mono::Net::Security::AsyncOperationStatus  _newStatus_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, _status_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, _newStatus_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AsyncProtocolRequest__ProcessOperation_d__24) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
