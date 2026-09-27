#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__HandleReceivedPingPongAsync_d__64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket__HandleReceivedPingPongAsync_d__64)
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket__HandleReceivedPingPongAsync_d__64;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, "System.Net.WebSockets", "ManagedWebSocket/<HandleReceivedPingPongAsync>d__64");
// [CompilerGenerated]
// Dependencies System.Net.WebSockets.ManagedWebSocket::MessageHeader, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/<HandleReceivedPingPongAsync>d__64
struct CORDL_TYPE ManagedWebSocket__HandleReceivedPingPongAsync_d__64 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xaceaccc, size 0x534, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xaceb200, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket__HandleReceivedPingPongAsync_d__64() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "header", ty: "::GlobalNamespace::ManagedWebSocket_MessageHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket__HandleReceivedPingPongAsync_d__64(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field header, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageHeader  header;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket*  __4__this;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, header) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket__HandleReceivedPingPongAsync_d__64) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
