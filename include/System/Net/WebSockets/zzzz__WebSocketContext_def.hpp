#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebSocketContext)
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketContext;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocketContext*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketContext*, "System.Net.WebSockets", "WebSocketContext");
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketContext
class CORDL_TYPE WebSocketContext : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketContext(WebSocketContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketContext(WebSocketContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::WebSocketContext) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
