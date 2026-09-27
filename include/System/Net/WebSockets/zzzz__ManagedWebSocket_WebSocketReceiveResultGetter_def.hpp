#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_WebSocketReceiveResultGetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket_WebSocketReceiveResultGetter)
namespace System::Net::WebSockets {
template<typename TResult>
class ManagedWebSocket_IWebSocketReceiveResultGetter_1;
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
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket_WebSocketReceiveResultGetter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter, "System.Net.WebSockets", "ManagedWebSocket/WebSocketReceiveResultGetter");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/WebSocketReceiveResultGetter
#pragma pack(push, 0)
struct CORDL_TYPE ManagedWebSocket_WebSocketReceiveResultGetter {
public:
// Declarations
/// @brief Convert operator to "::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr operator  ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>*() ;

/// @brief Method GetResult, addr 0xace86b4, size 0x88, virtual true, abstract: false, final true
inline ::System::Net::WebSockets::WebSocketReceiveResult* GetResult(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeDescription) ;

/// @brief Convert to "::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>"
constexpr ::System::Net::WebSockets::ManagedWebSocket_IWebSocketReceiveResultGetter_1<::System::Net::WebSockets::WebSocketReceiveResult*>* i___System__Net__WebSockets__ManagedWebSocket_IWebSocketReceiveResultGetter_1___System__Net__WebSockets__WebSocketReceiveResult__() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket_WebSocketReceiveResultGetter() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ManagedWebSocket_WebSocketReceiveResultGetter) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
