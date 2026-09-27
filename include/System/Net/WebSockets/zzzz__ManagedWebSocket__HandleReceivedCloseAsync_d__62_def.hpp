#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__HandleReceivedCloseAsync_d__62.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket__HandleReceivedCloseAsync_d__62)
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket__HandleReceivedCloseAsync_d__62;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, "System.Net.WebSockets", "ManagedWebSocket/<HandleReceivedCloseAsync>d__62");
// [CompilerGenerated]
// Dependencies System.Net.WebSockets.ManagedWebSocket::MessageHeader, System.Net.WebSockets.WebSocketCloseStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/<HandleReceivedCloseAsync>d__62
struct CORDL_TYPE ManagedWebSocket__HandleReceivedCloseAsync_d__62 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xace99a8, size 0xa98, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacea440, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket__HandleReceivedCloseAsync_d__62() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "header", ty: "::GlobalNamespace::ManagedWebSocket_MessageHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_closeStatus_5__2", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "_closeStatusDescription_5__3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket__HandleReceivedCloseAsync_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::GlobalNamespace::ManagedWebSocket_MessageHeader  header, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::WebSocketCloseStatus  _closeStatus_5__2, ::StringW  _closeStatusDescription_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket*  __4__this;

/// @brief Field header, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageHeader  header;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <closeStatus>5__2, offset: 0x48, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketCloseStatus  _closeStatus_5__2;

/// @brief Field <closeStatusDescription>5__3, offset: 0x50, size: 0x8, def value: None
 ::StringW  _closeStatusDescription_5__3;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, header) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, _closeStatus_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, _closeStatusDescription_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket__HandleReceivedCloseAsync_d__62) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
