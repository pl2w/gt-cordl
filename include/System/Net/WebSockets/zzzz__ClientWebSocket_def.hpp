#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientWebSocket)
namespace GlobalNamespace {
struct ClientWebSocket_InternalState;
}
namespace GlobalNamespace {
struct ClientWebSocket__ConnectAsyncCore_d__16;
}
namespace System::Net::WebSockets {
class ClientWebSocketOptions;
}
namespace System::Net::WebSockets {
class ClientWebSocket_DefaultWebProxy;
}
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
class WebSocketHandle;
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
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
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
template<typename T>
struct Nullable_1;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Net::WebSockets {
class ClientWebSocket_DefaultWebProxy;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::ClientWebSocket*);
MARK_REF_T(::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ClientWebSocket*, "System.Net.WebSockets", "ClientWebSocket");
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*, "System.Net.WebSockets", "ClientWebSocket/DefaultWebProxy");
// Dependencies System.Net.WebSockets.WebSocket
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ClientWebSocket
class CORDL_TYPE ClientWebSocket : public ::System::Net::WebSockets::WebSocket {
public:
// Declarations
using InternalState = ::GlobalNamespace::ClientWebSocket_InternalState;

using _ConnectAsyncCore_d__16 = ::GlobalNamespace::ClientWebSocket__ConnectAsyncCore_d__16;

using DefaultWebProxy = ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy;

 __declspec(property(get=get_CloseStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  CloseStatus;

 __declspec(property(get=get_CloseStatusDescription)) ::StringW  CloseStatusDescription;

 __declspec(property(get=get_Options)) ::System::Net::WebSockets::ClientWebSocketOptions*  Options;

 __declspec(property(get=get_State)) ::System::Net::WebSockets::WebSocketState  State;

/// @brief Field _innerWebSocket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerWebSocket, put=__cordl_internal_set__innerWebSocket)) ::System::Net::WebSockets::WebSocketHandle*  _innerWebSocket;

/// @brief Field _options, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__options, put=__cordl_internal_set__options)) ::System::Net::WebSockets::ClientWebSocketOptions*  _options;

/// @brief Field _state, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) int32_t  _state;

/// @brief Method Abort, addr 0xaced920, size 0x94, virtual true, abstract: false, final false
inline void Abort() ;

/// @brief Method CloseAsync, addr 0xaced838, size 0x58, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CloseOutputAsync, addr 0xaced8ac, size 0x58, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ConnectAsync, addr 0xaced2cc, size 0x270, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectAsync(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebSockets.ClientWebSocket::<ConnectAsyncCore>d__16))]
/// @brief Method ConnectAsyncCore, addr 0xaced548, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose, addr 0xaced9f0, size 0xa8, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::System::Net::WebSockets::ClientWebSocket* New_ctor() ;

/// @brief Method ReceiveAsync, addr 0xaced7c4, size 0x58, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsync, addr 0xaced65c, size 0x74, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ThrowIfNotConnected, addr 0xaced6d0, size 0xd0, virtual false, abstract: false, final false
inline void ThrowIfNotConnected() ;

constexpr ::System::Net::WebSockets::WebSocketHandle* const& __cordl_internal_get__innerWebSocket() const;

constexpr ::System::Net::WebSockets::WebSocketHandle*& __cordl_internal_get__innerWebSocket() ;

constexpr ::System::Net::WebSockets::ClientWebSocketOptions* const& __cordl_internal_get__options() const;

constexpr ::System::Net::WebSockets::ClientWebSocketOptions*& __cordl_internal_get__options() ;

constexpr int32_t const& __cordl_internal_get__state() const;

constexpr int32_t& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__innerWebSocket(::System::Net::WebSockets::WebSocketHandle*  value) ;

constexpr void __cordl_internal_set__options(::System::Net::WebSockets::ClientWebSocketOptions*  value) ;

constexpr void __cordl_internal_set__state(int32_t  value) ;

/// @brief Method .ctor, addr 0xacecdcc, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CloseStatus, addr 0xaced0b0, size 0x8c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus() ;

/// @brief Method get_CloseStatusDescription, addr 0xaced160, size 0x8c, virtual true, abstract: false, final false
inline ::StringW get_CloseStatusDescription() ;

/// @brief Method get_Options, addr 0xaced0a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebSockets::ClientWebSocketOptions* get_Options() ;

/// @brief Method get_State, addr 0xaced204, size 0xa8, virtual true, abstract: false, final false
inline ::System::Net::WebSockets::WebSocketState get_State() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientWebSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientWebSocket(ClientWebSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientWebSocket(ClientWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10907};

/// @brief Field _options, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocketOptions*  ____options;

/// @brief Field _innerWebSocket, offset: 0x18, size: 0x8, def value: None
 ::System::Net::WebSockets::WebSocketHandle*  ____innerWebSocket;

/// @brief Field _state, offset: 0x20, size: 0x4, def value: None
 int32_t  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____options) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____innerWebSocket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::ClientWebSocket, ____state) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::ClientWebSocket) == 0x28, "Size mismatch!");

} // namespace end def System::Net::WebSockets
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.ClientWebSocket/DefaultWebProxy
class CORDL_TYPE ClientWebSocket_DefaultWebProxy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*  _Instance_k__BackingField;

/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Method GetProxy, addr 0xacedb84, size 0x38, virtual true, abstract: false, final true
inline ::System::Uri* GetProxy(::System::Uri*  destination) ;

/// @brief Method IsBypassed, addr 0xacedbbc, size 0x38, virtual true, abstract: false, final true
inline bool IsBypassed(::System::Uri*  host) ;

static inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* New_ctor() ;

/// @brief Method .ctor, addr 0xacedbf4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Credentials, addr 0xacedb14, size 0x38, virtual true, abstract: false, final true
inline ::System::Net::ICredentials* get_Credentials() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0xacedabc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* get_Instance() ;

/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

static inline void setStaticF__Instance_k__BackingField(::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*  value) ;

/// @brief Method set_Credentials, addr 0xacedb4c, size 0x38, virtual true, abstract: false, final true
inline void set_Credentials(::System::Net::ICredentials*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientWebSocket_DefaultWebProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket_DefaultWebProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientWebSocket_DefaultWebProxy(ClientWebSocket_DefaultWebProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientWebSocket_DefaultWebProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientWebSocket_DefaultWebProxy(ClientWebSocket_DefaultWebProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10905};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
