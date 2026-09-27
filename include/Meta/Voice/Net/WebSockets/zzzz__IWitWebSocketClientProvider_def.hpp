#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketClientProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWitWebSocketClientProvider)
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClient;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClientProvider;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*, "Meta.Voice.Net.WebSockets", "IWitWebSocketClientProvider");
// Dependencies 
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.IWitWebSocketClientProvider
class CORDL_TYPE IWitWebSocketClientProvider {
public:
// Declarations
 __declspec(property(get=get_WebSocketClient)) ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  WebSocketClient;

/// @brief Method get_WebSocketClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* get_WebSocketClient() ;

// Ctor Parameters [CppParam { name: "", ty: "IWitWebSocketClientProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitWebSocketClientProvider(IWitWebSocketClientProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Net::WebSockets
