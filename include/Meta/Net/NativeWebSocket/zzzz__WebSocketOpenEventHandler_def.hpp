#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketOpenEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(WebSocketOpenEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WebSocketOpenEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*, "Meta.Net.NativeWebSocket", "WebSocketOpenEventHandler");
// Dependencies System.MulticastDelegate
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WebSocketOpenEventHandler
class CORDL_TYPE WebSocketOpenEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e00f68, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e00ecc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketOpenEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketOpenEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketOpenEventHandler(WebSocketOpenEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketOpenEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketOpenEventHandler(WebSocketOpenEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
