#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketHandle__ConnectAsyncCore_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHandle__ConnectAsyncCore_d__26)
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Net::WebSockets {
class WebSocketHandle;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebSocketHandle__ConnectAsyncCore_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, "System.Net.WebSockets", "WebSocketHandle/<ConnectAsyncCore>d__26");
// [CompilerGenerated]
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.WebSocketHandle/<ConnectAsyncCore>d__26
struct CORDL_TYPE WebSocketHandle__ConnectAsyncCore_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacefa34, size 0xbd4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacf0998, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHandle__ConnectAsyncCore_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::WebSocketHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::System::Net::WebSockets::ClientWebSocketOptions*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_secKeyAndSecWebSocketAccept_5__4", ty: "::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sslStream_5__5", ty: "::System::Net::Security::SslStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr WebSocketHandle__ConnectAsyncCore_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::WebSocketHandle*  __4__this, ::System::Uri*  uri, ::System::Net::WebSockets::ClientWebSocketOptions*  options, ::System::Threading::CancellationTokenRegistration  _registration_5__2, ::System::IO::Stream*  _stream_5__3, ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  _secKeyAndSecWebSocketAccept_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>  __u__1, ::System::Net::Security::SslStream*  _sslStream_5__5, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebSockets::WebSocketHandle*  __4__this;

/// @brief Field uri, offset: 0x30, size: 0x8, def value: None
 ::System::Uri*  uri;

/// @brief Field options, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocketOptions*  options;

/// @brief Field <registration>5__2, offset: 0x40, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  _registration_5__2;

/// @brief Field <stream>5__3, offset: 0x58, size: 0x8, def value: None
 ::System::IO::Stream*  _stream_5__3;

/// @brief Field <secKeyAndSecWebSocketAccept>5__4, offset: 0x60, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  _secKeyAndSecWebSocketAccept_5__4;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Sockets::Socket*>  __u__1;

/// @brief Field <sslStream>5__5, offset: 0x80, size: 0x8, def value: None
 ::System::Net::Security::SslStream*  _sslStream_5__5;

/// @brief Field <>u__2, offset: 0x88, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::StringW>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, _registration_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, _stream_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, _secKeyAndSecWebSocketAccept_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, _sslStream_5__5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __u__2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26, __u__3) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebSocketHandle__ConnectAsyncCore_d__26) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
