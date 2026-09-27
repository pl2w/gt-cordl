#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/WebSockets/WebSocketContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebSocketContext)
// Forward declare root types
namespace WebSocketSharp::Net::WebSockets {
class WebSocketContext;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::WebSockets::WebSocketContext*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::WebSockets::WebSocketContext*, "WebSocketSharp.Net.WebSockets", "WebSocketContext");
// Dependencies System.Object
namespace WebSocketSharp::Net::WebSockets {
// Is value type: false
// CS Name: WebSocketSharp.Net.WebSockets.WebSocketContext
class CORDL_TYPE WebSocketContext : public ::System::Object {
public:
// Declarations
static inline ::WebSocketSharp::Net::WebSockets::WebSocketContext* New_ctor() ;

/// @brief Method .ctor, addr 0xb98b5d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Net::WebSockets::WebSocketContext) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp::Net::WebSockets
