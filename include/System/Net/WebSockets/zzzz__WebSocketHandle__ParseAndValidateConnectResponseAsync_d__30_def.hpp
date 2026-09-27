#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30)
namespace System::IO {
class Stream;
}
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, "System.Net.WebSockets", "WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.WebSocketHandle/<ParseAndValidateConnectResponseAsync>d__30
struct CORDL_TYPE WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacf16b4, size 0x97c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacf2030, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "expectedSecWebSocketAccept", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_foundUpgrade_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_foundConnection_5__3", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_foundSecWebSocketAccept_5__4", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_subprotocol_5__5", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::StringW  expectedSecWebSocketAccept, ::System::Net::WebSockets::ClientWebSocketOptions*  options, bool  _foundUpgrade_5__2, bool  _foundConnection_5__3, bool  _foundSecWebSocketAccept_5__4, ::StringW  _subprotocol_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field stream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field expectedSecWebSocketAccept, offset: 0x30, size: 0x8, def value: None
 ::StringW  expectedSecWebSocketAccept;

/// @brief Field options, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocketOptions*  options;

/// @brief Field <foundUpgrade>5__2, offset: 0x40, size: 0x1, def value: None
 bool  _foundUpgrade_5__2;

/// @brief Field <foundConnection>5__3, offset: 0x41, size: 0x1, def value: None
 bool  _foundConnection_5__3;

/// @brief Field <foundSecWebSocketAccept>5__4, offset: 0x42, size: 0x1, def value: None
 bool  _foundSecWebSocketAccept_5__4;

/// @brief Field <subprotocol>5__5, offset: 0x48, size: 0x8, def value: None
 ::StringW  _subprotocol_5__5;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, expectedSecWebSocketAccept) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, _foundUpgrade_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, _foundConnection_5__3) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, _foundSecWebSocketAccept_5__4) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, _subprotocol_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebSocketHandle__ParseAndValidateConnectResponseAsync_d__30) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
