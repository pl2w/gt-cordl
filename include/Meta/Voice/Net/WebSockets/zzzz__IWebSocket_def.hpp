#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWebSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWebSocket)
namespace Meta::Voice::Net::WebSockets {
struct WebSocketCloseCode;
}
namespace Meta::Voice::Net::WebSockets {
struct WitWebSocketConnectionState;
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
class IWebSocket;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::IWebSocket*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::IWebSocket*, "Meta.Voice.Net.WebSockets", "IWebSocket");
// Dependencies 
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.IWebSocket
class CORDL_TYPE IWebSocket {
public:
// Declarations
 __declspec(property(get=get_State)) ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  State;

/// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* Close() ;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* Connect() ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* Send(::ArrayW<uint8_t>  data) ;

/// [CompilerGenerated]
/// @brief Method add_OnClose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnError(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOpen, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnOpen(::System::Action*  value) ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState get_State() ;

/// [CompilerGenerated]
/// @brief Method remove_OnClose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnError(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOpen, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnOpen(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebSocket(IWebSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::WebSockets
