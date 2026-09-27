#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket__SendMessage_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocket__SendMessage_d__33)
namespace NativeWebSocket {
class WebSocket;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebSocket__SendMessage_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebSocket__SendMessage_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebSocket__SendMessage_d__33, "NativeWebSocket", "WebSocket/<SendMessage>d__33");
// [CompilerGenerated]
// Dependencies System.ArraySegment`1<T>, System.Net.WebSockets.WebSocketMessageType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: NativeWebSocket.WebSocket/<SendMessage>d__33
struct CORDL_TYPE WebSocket__SendMessage_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5f38878, size 0x68c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5f38f04, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebSocket__SendMessage_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::NativeWebSocket::WebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "messageType", ty: "::System::Net::WebSockets::WebSocketMessageType", modifiers: "", def_value: None, comment: None }, CppParam { name: "queue", ty: "::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WebSocket__SendMessage_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::ArraySegment_1<uint8_t>  buffer, ::NativeWebSocket::WebSocket*  __4__this, ::System::Net::WebSockets::WebSocketMessageType  messageType, ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field buffer, offset: 0x20, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  buffer;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::NativeWebSocket::WebSocket*  __4__this;

/// @brief Field messageType, offset: 0x38, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketMessageType  messageType;

/// @brief Field queue, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, messageType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, queue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebSocket__SendMessage_d__33, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebSocket__SendMessage_d__33) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
