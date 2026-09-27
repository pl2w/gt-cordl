#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocket)
namespace System::IO {
class Stream;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocket;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocket*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocket*, "System.Net.WebSockets", "WebSocket");
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocket
class CORDL_TYPE WebSocket : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CloseStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  CloseStatus;

 __declspec(property(get=get_CloseStatusDescription)) ::StringW  CloseStatusDescription;

 __declspec(property(get=get_State)) ::System::Net::WebSockets::WebSocketState  State;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Abort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Abort() ;

/// @brief Method CloseAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CloseOutputAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Method CreateClientWebSocket, addr 0xacf0610, size 0x380, virtual false, abstract: false, final false
static inline ::System::Net::WebSockets::WebSocket* CreateClientWebSocket(::System::IO::Stream*  innerStream, ::StringW  subProtocol, int32_t  receiveBufferSize, int32_t  sendBufferSize, ::System::TimeSpan  keepAliveInterval, bool  useZeroMaskingKey, ::System::ArraySegment_1<uint8_t>  internalBuffer) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

static inline ::System::Net::WebSockets::WebSocket* New_ctor() ;

/// @brief Method ReceiveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xace4e08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CloseStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus() ;

/// @brief Method get_CloseStatusDescription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_CloseStatusDescription() ;

/// @brief Method get_DefaultKeepAliveInterval, addr 0xacee238, size 0x54, virtual false, abstract: false, final false
static inline ::System::TimeSpan get_DefaultKeepAliveInterval() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Net::WebSockets::WebSocketState get_State() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10916};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::WebSocket) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
