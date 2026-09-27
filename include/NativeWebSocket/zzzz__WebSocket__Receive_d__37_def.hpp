#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket__Receive_d__37.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocket__Receive_d__37)
namespace NativeWebSocket {
class WebSocket;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebSocket__Receive_d__37;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebSocket__Receive_d__37);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebSocket__Receive_d__37, "NativeWebSocket", "WebSocket/<Receive>d__37");
// [CompilerGenerated]
// Dependencies NativeWebSocket.WebSocketCloseCode, System.ArraySegment`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: NativeWebSocket.WebSocket/<Receive>d__37
struct CORDL_TYPE WebSocket__Receive_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5f378d8, size 0xf38, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f38810, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebSocket__Receive_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::NativeWebSocket::WebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_closeCode_5__2", ty: "::NativeWebSocket::WebSocketCloseCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__3", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_result_5__6", ty: "::System::Net::WebSockets::WebSocketReceiveResult*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ms_5__7", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebSockets::WebSocketReceiveResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr WebSocket__Receive_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::NativeWebSocket::WebSocket*  __4__this, ::NativeWebSocket::WebSocketCloseCode  _closeCode_5__2, ::System::ArraySegment_1<uint8_t>  _buffer_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::Net::WebSockets::WebSocketReceiveResult*  _result_5__6, ::System::IO::MemoryStream*  _ms_5__7, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebSockets::WebSocketReceiveResult*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3, ::System::Object*  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::NativeWebSocket::WebSocket*  __4__this;

/// @brief Field <closeCode>5__2, offset: 0x28, size: 0x4, def value: None
 ::NativeWebSocket::WebSocketCloseCode  _closeCode_5__2;

/// @brief Field <buffer>5__3, offset: 0x30, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _buffer_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x58, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <result>5__6, offset: 0x60, size: 0x8, def value: None
 ::System::Net::WebSockets::WebSocketReceiveResult*  _result_5__6;

/// @brief Field <ms>5__7, offset: 0x68, size: 0x8, def value: None
 ::System::IO::MemoryStream*  _ms_5__7;

/// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebSockets::WebSocketReceiveResult*>  __u__2;

/// @brief Field <>u__3, offset: 0x78, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__3;

/// @brief Field <>u__4, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, _closeCode_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, _buffer_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __7__wrap4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, _result_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, _ms_5__7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __u__2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __u__3) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__Receive_d__37, __u__4) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebSocket__Receive_d__37) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
