#pragma once
// IWYU pragma private; include "System/Net/WebSockets/HttpListenerWebSocketContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketContext_def.hpp"
CORDL_MODULE_EXPORT(HttpListenerWebSocketContext)
// Forward declare root types
namespace System::Net::WebSockets {
class HttpListenerWebSocketContext;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::HttpListenerWebSocketContext*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::HttpListenerWebSocketContext*, "System.Net.WebSockets", "HttpListenerWebSocketContext");
// Dependencies System.Net.WebSockets.WebSocketContext
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.HttpListenerWebSocketContext
class CORDL_TYPE HttpListenerWebSocketContext : public ::System::Net::WebSockets::WebSocketContext {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerWebSocketContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerWebSocketContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerWebSocketContext(HttpListenerWebSocketContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerWebSocketContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerWebSocketContext(HttpListenerWebSocketContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::HttpListenerWebSocketContext) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
