#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__SendFrameFallbackAsync_d__56.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageOpcode_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket__SendFrameFallbackAsync_d__56)
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket__SendFrameFallbackAsync_d__56;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, "System.Net.WebSockets", "ManagedWebSocket/<SendFrameFallbackAsync>d__56");
// [CompilerGenerated]
// Dependencies System.Net.WebSockets.ManagedWebSocket::MessageOpcode, System.ReadOnlyMemory`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/<SendFrameFallbackAsync>d__56
struct CORDL_TYPE ManagedWebSocket__SendFrameFallbackAsync_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xace9028, size 0x918, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xace9940, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket__SendFrameFallbackAsync_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "opcode", ty: "::GlobalNamespace::ManagedWebSocket_MessageOpcode", modifiers: "", def_value: None, comment: None }, CppParam { name: "endOfMessage", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "payloadBuffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket__SendFrameFallbackAsync_d__56(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode, bool  endOfMessage, ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::System::Threading::CancellationTokenRegistration  __7__wrap1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket*  __4__this;

/// @brief Field opcode, offset: 0x28, size: 0x1, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageOpcode  opcode;

/// @brief Field endOfMessage, offset: 0x29, size: 0x1, def value: None
 bool  endOfMessage;

/// @brief Field payloadBuffer, offset: 0x30, size: 0x10, def value: None
 ::System::ReadOnlyMemory_1<uint8_t>  payloadBuffer;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>7__wrap1, offset: 0x58, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  __7__wrap1;

/// @brief Field <>u__2, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, opcode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, endOfMessage) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, payloadBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __7__wrap1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56, __u__2) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket__SendFrameFallbackAsync_d__56) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
