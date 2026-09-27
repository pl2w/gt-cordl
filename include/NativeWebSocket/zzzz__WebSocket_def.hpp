#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocket)
namespace GlobalNamespace {
struct WebSocket__Close_d__38;
}
namespace GlobalNamespace {
struct WebSocket__Connect_d__28;
}
namespace GlobalNamespace {
struct WebSocket__HandleQueue_d__34;
}
namespace GlobalNamespace {
struct WebSocket__Receive_d__37;
}
namespace GlobalNamespace {
struct WebSocket__SendMessage_d__33;
}
namespace NativeWebSocket {
class IWebSocket;
}
namespace NativeWebSocket {
class WebSocketCloseEventHandler;
}
namespace NativeWebSocket {
class WebSocketErrorEventHandler;
}
namespace NativeWebSocket {
class WebSocketMessageEventHandler;
}
namespace NativeWebSocket {
class WebSocketOpenEventHandler;
}
namespace NativeWebSocket {
struct WebSocketState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocket;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocket*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocket*, "NativeWebSocket", "WebSocket");
// Dependencies System.Object, System.Threading.CancellationToken
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocket
class CORDL_TYPE WebSocket : public ::System::Object {
public:
// Declarations
using _Close_d__38 = ::GlobalNamespace::WebSocket__Close_d__38;

using _Connect_d__28 = ::GlobalNamespace::WebSocket__Connect_d__28;

using _HandleQueue_d__34 = ::GlobalNamespace::WebSocket__HandleQueue_d__34;

using _Receive_d__37 = ::GlobalNamespace::WebSocket__Receive_d__37;

using _SendMessage_d__33 = ::GlobalNamespace::WebSocket__SendMessage_d__33;

/// @brief Field IncomingMessageLock, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_IncomingMessageLock, put=__cordl_internal_set_IncomingMessageLock)) ::System::Object*  IncomingMessageLock;

/// @brief Field OnClose, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClose, put=__cordl_internal_set_OnClose)) ::NativeWebSocket::WebSocketCloseEventHandler*  OnClose;

/// @brief Field OnError, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::NativeWebSocket::WebSocketErrorEventHandler*  OnError;

/// @brief Field OnMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMessage, put=__cordl_internal_set_OnMessage)) ::NativeWebSocket::WebSocketMessageEventHandler*  OnMessage;

/// @brief Field OnOpen, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOpen, put=__cordl_internal_set_OnOpen)) ::NativeWebSocket::WebSocketOpenEventHandler*  OnOpen;

/// @brief Field OutgoingMessageLock, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutgoingMessageLock, put=__cordl_internal_set_OutgoingMessageLock)) ::System::Object*  OutgoingMessageLock;

 __declspec(property(get=get_State)) ::NativeWebSocket::WebSocketState  State;

/// @brief Field headers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers;

/// @brief Field isSending, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSending, put=__cordl_internal_set_isSending)) bool  isSending;

/// @brief Field m_CancellationToken, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancellationToken, put=__cordl_internal_set_m_CancellationToken)) ::System::Threading::CancellationToken  m_CancellationToken;

/// @brief Field m_MessageList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MessageList, put=__cordl_internal_set_m_MessageList)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  m_MessageList;

/// @brief Field m_Socket, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Socket, put=__cordl_internal_set_m_Socket)) ::System::Net::WebSockets::ClientWebSocket*  m_Socket;

/// @brief Field m_TokenSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TokenSource, put=__cordl_internal_set_m_TokenSource)) ::System::Threading::CancellationTokenSource*  m_TokenSource;

/// @brief Field sendBytesQueue, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendBytesQueue, put=__cordl_internal_set_sendBytesQueue)) ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  sendBytesQueue;

/// @brief Field sendTextQueue, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendTextQueue, put=__cordl_internal_set_sendTextQueue)) ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  sendTextQueue;

/// @brief Field subprotocols, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_subprotocols, put=__cordl_internal_set_subprotocols)) ::System::Collections::Generic::List_1<::StringW>*  subprotocols;

/// @brief Field uri, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_uri, put=__cordl_internal_set_uri)) ::System::Uri*  uri;

/// @brief Convert operator to "::NativeWebSocket::IWebSocket"
constexpr operator  ::NativeWebSocket::IWebSocket*() noexcept;

/// @brief Method CancelConnection, addr 0x5f36084, size 0x14, virtual false, abstract: false, final false
inline void CancelConnection() ;

/// [AsyncStateMachine(typeof(NativeWebSocket.WebSocket::<Close>d__38))]
/// @brief Method Close, addr 0x5f367e4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Close() ;

/// [AsyncStateMachine(typeof(NativeWebSocket.WebSocket::<Connect>d__28))]
/// @brief Method Connect, addr 0x5f36098, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Connect() ;

/// @brief Method DispatchMessageQueue, addr 0x5f364f8, size 0x208, virtual false, abstract: false, final false
inline void DispatchMessageQueue() ;

/// [AsyncStateMachine(typeof(NativeWebSocket.WebSocket::<HandleQueue>d__34))]
/// @brief Method HandleQueue, addr 0x5f363fc, size 0xfc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* HandleQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType) ;

static inline ::NativeWebSocket::WebSocket* New_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

static inline ::NativeWebSocket::WebSocket* New_ctor(::StringW  url, ::StringW  subprotocol, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

static inline ::NativeWebSocket::WebSocket* New_ctor(::StringW  url, ::System::Collections::Generic::List_1<::StringW>*  subprotocols, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// [AsyncStateMachine(typeof(NativeWebSocket.WebSocket::<Receive>d__37))]
/// @brief Method Receive, addr 0x5f36700, size 0xe4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Receive() ;

/// @brief Method Send, addr 0x5f361b4, size 0x80, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Send(::ArrayW<uint8_t>  bytes) ;

/// [AsyncStateMachine(typeof(NativeWebSocket.WebSocket::<SendMessage>d__33))]
/// @brief Method SendMessage, addr 0x5f36234, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendMessage(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType, ::System::ArraySegment_1<uint8_t>  buffer) ;

/// @brief Method SendText, addr 0x5f36354, size 0xa8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendText(::StringW  message) ;

/// @brief Method SetRequestHeader, addr 0x5f3601c, size 0x68, virtual false, abstract: false, final false
inline void SetRequestHeader(::StringW  name, ::StringW  value) ;

constexpr ::System::Object* const& __cordl_internal_get_IncomingMessageLock() const;

constexpr ::System::Object*& __cordl_internal_get_IncomingMessageLock() ;

constexpr ::NativeWebSocket::WebSocketCloseEventHandler* const& __cordl_internal_get_OnClose() const;

constexpr ::NativeWebSocket::WebSocketCloseEventHandler*& __cordl_internal_get_OnClose() ;

constexpr ::NativeWebSocket::WebSocketErrorEventHandler* const& __cordl_internal_get_OnError() const;

constexpr ::NativeWebSocket::WebSocketErrorEventHandler*& __cordl_internal_get_OnError() ;

constexpr ::NativeWebSocket::WebSocketMessageEventHandler* const& __cordl_internal_get_OnMessage() const;

constexpr ::NativeWebSocket::WebSocketMessageEventHandler*& __cordl_internal_get_OnMessage() ;

constexpr ::NativeWebSocket::WebSocketOpenEventHandler* const& __cordl_internal_get_OnOpen() const;

constexpr ::NativeWebSocket::WebSocketOpenEventHandler*& __cordl_internal_get_OnOpen() ;

constexpr ::System::Object* const& __cordl_internal_get_OutgoingMessageLock() const;

constexpr ::System::Object*& __cordl_internal_get_OutgoingMessageLock() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_headers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_headers() ;

constexpr bool const& __cordl_internal_get_isSending() const;

constexpr bool& __cordl_internal_get_isSending() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_m_CancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_m_CancellationToken() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_m_MessageList() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& __cordl_internal_get_m_MessageList() ;

constexpr ::System::Net::WebSockets::ClientWebSocket* const& __cordl_internal_get_m_Socket() const;

constexpr ::System::Net::WebSockets::ClientWebSocket*& __cordl_internal_get_m_Socket() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_m_TokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_m_TokenSource() ;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_sendBytesQueue() const;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_sendBytesQueue() ;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_sendTextQueue() const;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_sendTextQueue() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_subprotocols() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_subprotocols() ;

constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

constexpr ::System::Uri*& __cordl_internal_get_uri() ;

constexpr void __cordl_internal_set_IncomingMessageLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value) ;

constexpr void __cordl_internal_set_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value) ;

constexpr void __cordl_internal_set_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value) ;

constexpr void __cordl_internal_set_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value) ;

constexpr void __cordl_internal_set_OutgoingMessageLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_isSending(bool  value) ;

constexpr void __cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_m_MessageList(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_m_Socket(::System::Net::WebSockets::ClientWebSocket*  value) ;

constexpr void __cordl_internal_set_m_TokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_sendBytesQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_sendTextQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_subprotocols(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_uri(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0x5f35610, size 0x344, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method .ctor, addr 0x5f35954, size 0x3bc, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::StringW  subprotocol, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method .ctor, addr 0x5f35d10, size 0x30c, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::System::Collections::Generic::List_1<::StringW>*  subprotocols, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// [CompilerGenerated]
/// @brief Method add_OnClose, addr 0x5f354d8, size 0x9c, virtual true, abstract: false, final true
inline void add_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0x5f353a0, size 0x9c, virtual true, abstract: false, final true
inline void add_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessage, addr 0x5f35268, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpen, addr 0x5f35130, size 0x9c, virtual true, abstract: false, final true
inline void add_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value) ;

/// @brief Method get_State, addr 0x5f36170, size 0x44, virtual true, abstract: false, final true
inline ::NativeWebSocket::WebSocketState get_State() ;

/// @brief Convert to "::NativeWebSocket::IWebSocket"
constexpr ::NativeWebSocket::IWebSocket* i___NativeWebSocket__IWebSocket() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnClose, addr 0x5f35574, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0x5f3543c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessage, addr 0x5f35304, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpen, addr 0x5f351cc, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocket(WebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocket(WebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32582};

/// [CompilerGenerated]
/// @brief Field OnOpen, offset: 0x10, size: 0x8, def value: None
 ::NativeWebSocket::WebSocketOpenEventHandler*  ___OnOpen;

/// [CompilerGenerated]
/// @brief Field OnMessage, offset: 0x18, size: 0x8, def value: None
 ::NativeWebSocket::WebSocketMessageEventHandler*  ___OnMessage;

/// [CompilerGenerated]
/// @brief Field OnError, offset: 0x20, size: 0x8, def value: None
 ::NativeWebSocket::WebSocketErrorEventHandler*  ___OnError;

/// [CompilerGenerated]
/// @brief Field OnClose, offset: 0x28, size: 0x8, def value: None
 ::NativeWebSocket::WebSocketCloseEventHandler*  ___OnClose;

/// @brief Field uri, offset: 0x30, size: 0x8, def value: None
 ::System::Uri*  ___uri;

/// @brief Field headers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___headers;

/// @brief Field subprotocols, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___subprotocols;

/// @brief Field m_Socket, offset: 0x48, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocket*  ___m_Socket;

/// @brief Field m_TokenSource, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___m_TokenSource;

/// @brief Field m_CancellationToken, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___m_CancellationToken;

/// @brief Field OutgoingMessageLock, offset: 0x60, size: 0x8, def value: None
 ::System::Object*  ___OutgoingMessageLock;

/// @brief Field IncomingMessageLock, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  ___IncomingMessageLock;

/// @brief Field isSending, offset: 0x70, size: 0x1, def value: None
 bool  ___isSending;

/// @brief Field sendBytesQueue, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  ___sendBytesQueue;

/// @brief Field sendTextQueue, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  ___sendTextQueue;

/// @brief Field m_MessageList, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  ___m_MessageList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NativeWebSocket::WebSocket, ___OnOpen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___OnMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___OnError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___OnClose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___subprotocols) == 0x40, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___m_Socket) == 0x48, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___m_TokenSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___m_CancellationToken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___OutgoingMessageLock) == 0x60, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___IncomingMessageLock) == 0x68, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___isSending) == 0x70, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___sendBytesQueue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___sendTextQueue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::NativeWebSocket::WebSocket, ___m_MessageList) == 0x88, "Offset mismatch!");

static_assert(sizeof(::NativeWebSocket::WebSocket) == 0x90, "Size mismatch!");

} // namespace end def NativeWebSocket
