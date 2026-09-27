#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketErrorEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketErrorEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WebSocketErrorEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*, "Meta.Net.NativeWebSocket", "WebSocketErrorEventHandler");
// Dependencies System.MulticastDelegate
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WebSocketErrorEventHandler
class CORDL_TYPE WebSocketErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e010f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMsg) ;

static inline ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e01044, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketErrorEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketErrorEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketErrorEventHandler(WebSocketErrorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketErrorEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketErrorEventHandler(WebSocketErrorEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
