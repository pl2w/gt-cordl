#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeWebSocketWrapper)
namespace GlobalNamespace {
struct NativeWebSocketWrapper__Close_d__19;
}
namespace GlobalNamespace {
struct NativeWebSocketWrapper__Connect_d__5;
}
namespace GlobalNamespace {
struct NativeWebSocketWrapper__Send_d__10;
}
namespace Meta::Net::NativeWebSocket {
struct WebSocketCloseCode;
}
namespace Meta::Net::NativeWebSocket {
class WebSocket;
}
namespace Meta::Voice::Net::WebSockets {
class IWebSocket;
}
namespace Meta::Voice::Net::WebSockets {
struct WebSocketCloseCode;
}
namespace Meta::Voice::Net::WebSockets {
struct WitWebSocketConnectionState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class NativeWebSocketWrapper;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*, "Meta.Voice.Net.WebSockets", "NativeWebSocketWrapper");
// Dependencies System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.NativeWebSocketWrapper
class CORDL_TYPE NativeWebSocketWrapper : public ::System::Object {
public:
// Declarations
using _Close_d__19 = ::GlobalNamespace::NativeWebSocketWrapper__Close_d__19;

using _Connect_d__5 = ::GlobalNamespace::NativeWebSocketWrapper__Connect_d__5;

using _Send_d__10 = ::GlobalNamespace::NativeWebSocketWrapper__Send_d__10;

/// @brief Field OnClose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClose, put=__cordl_internal_set_OnClose)) ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  OnClose;

/// @brief Field OnError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnError, put=__cordl_internal_set_OnError)) ::System::Action_1<::StringW>*  OnError;

/// @brief Field OnMessage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMessage, put=__cordl_internal_set_OnMessage)) ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  OnMessage;

/// @brief Field OnOpen, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOpen, put=__cordl_internal_set_OnOpen)) ::System::Action*  OnOpen;

 __declspec(property(get=get_State)) ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  State;

/// @brief Field _webSocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocket, put=__cordl_internal_set__webSocket)) ::Meta::Net::NativeWebSocket::WebSocket*  _webSocket;

/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWebSocket"
constexpr operator  ::Meta::Voice::Net::WebSockets::IWebSocket*() noexcept;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.NativeWebSocketWrapper::<Close>d__19))]
/// @brief Method Close, addr 0x9e280c4, size 0xd8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Close() ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.NativeWebSocketWrapper::<Connect>d__5))]
/// @brief Method Connect, addr 0x9e27aa8, size 0xd8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Connect() ;

/// @brief Method Finalize, addr 0x9e27834, size 0x238, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper* New_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method RaiseClose, addr 0x9e282fc, size 0x1c, virtual false, abstract: false, final false
inline void RaiseClose(::Meta::Net::NativeWebSocket::WebSocketCloseCode  closeCode) ;

/// @brief Method RaiseError, addr 0x9e280a8, size 0x1c, virtual false, abstract: false, final false
inline void RaiseError(::StringW  error) ;

/// @brief Method RaiseMessage, addr 0x9e27f2c, size 0x1c, virtual false, abstract: false, final false
inline void RaiseMessage(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

/// @brief Method RaiseOpen, addr 0x9e27cb8, size 0x1c, virtual false, abstract: false, final false
inline void RaiseOpen() ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.NativeWebSocketWrapper::<Send>d__10))]
/// @brief Method Send, addr 0x9e27cd4, size 0xf8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Send(::ArrayW<uint8_t>  data) ;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>* const& __cordl_internal_get_OnClose() const;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*& __cordl_internal_get_OnClose() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnError() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnError() ;

constexpr ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>* const& __cordl_internal_get_OnMessage() const;

constexpr ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*& __cordl_internal_get_OnMessage() ;

constexpr ::System::Action* const& __cordl_internal_get_OnOpen() const;

constexpr ::System::Action*& __cordl_internal_get_OnOpen() ;

constexpr ::Meta::Net::NativeWebSocket::WebSocket* const& __cordl_internal_get__webSocket() const;

constexpr ::Meta::Net::NativeWebSocket::WebSocket*& __cordl_internal_get__webSocket() ;

constexpr void __cordl_internal_set_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value) ;

constexpr void __cordl_internal_set_OnError(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_OnOpen(::System::Action*  value) ;

constexpr void __cordl_internal_set__webSocket(::Meta::Net::NativeWebSocket::WebSocket*  value) ;

/// @brief Method .ctor, addr 0x9e27630, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// [CompilerGenerated]
/// @brief Method add_OnClose, addr 0x9e2819c, size 0xb0, virtual true, abstract: false, final true
inline void add_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0x9e27f48, size 0xb0, virtual true, abstract: false, final true
inline void add_OnError(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessage, addr 0x9e27dcc, size 0xb0, virtual true, abstract: false, final true
inline void add_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpen, addr 0x9e27b80, size 0x9c, virtual true, abstract: false, final true
inline void add_OnOpen(::System::Action*  value) ;

/// @brief Method get_State, addr 0x9e27a6c, size 0x3c, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState get_State() ;

/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWebSocket"
constexpr ::Meta::Voice::Net::WebSockets::IWebSocket* i___Meta__Voice__Net__WebSockets__IWebSocket() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnClose, addr 0x9e2824c, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0x9e27ff8, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnError(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessage, addr 0x9e27e7c, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpen, addr 0x9e27c1c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnOpen(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeWebSocketWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeWebSocketWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeWebSocketWrapper(NativeWebSocketWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeWebSocketWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeWebSocketWrapper(NativeWebSocketWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25467};

/// @brief Field _webSocket, offset: 0x10, size: 0x8, def value: None
 ::Meta::Net::NativeWebSocket::WebSocket*  ____webSocket;

/// [CompilerGenerated]
/// @brief Field OnOpen, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___OnOpen;

/// [CompilerGenerated]
/// @brief Field OnMessage, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  ___OnMessage;

/// [CompilerGenerated]
/// @brief Field OnError, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnError;

/// [CompilerGenerated]
/// @brief Field OnClose, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  ___OnClose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper, ____webSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper, ___OnOpen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper, ___OnMessage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper, ___OnError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper, ___OnClose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
