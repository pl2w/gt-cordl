#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketCloseEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(WebSocketCloseEventHandler)
namespace Meta::Net::NativeWebSocket {
struct WebSocketCloseCode;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WebSocketCloseEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*, "Meta.Net.NativeWebSocket", "WebSocketCloseEventHandler");
// Dependencies System.MulticastDelegate
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WebSocketCloseEventHandler
class CORDL_TYPE WebSocketCloseEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e011a8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::Net::NativeWebSocket::WebSocketCloseCode  closeCode) ;

static inline ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e01108, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketCloseEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketCloseEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketCloseEventHandler(WebSocketCloseEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketCloseEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketCloseEventHandler(WebSocketCloseEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
