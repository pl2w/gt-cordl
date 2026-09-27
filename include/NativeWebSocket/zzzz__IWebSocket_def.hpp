#pragma once
// IWYU pragma private; include "NativeWebSocket/IWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWebSocket)
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
// Forward declare root types
namespace NativeWebSocket {
class IWebSocket;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::IWebSocket*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::IWebSocket*, "NativeWebSocket", "IWebSocket");
// Dependencies 
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.IWebSocket
class CORDL_TYPE IWebSocket {
public:
// Declarations
 __declspec(property(get=get_State)) ::NativeWebSocket::WebSocketState  State;

/// [CompilerGenerated]
/// @brief Method add_OnClose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpen, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value) ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::NativeWebSocket::WebSocketState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_OnClose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpen, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebSocket(IWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NativeWebSocket
