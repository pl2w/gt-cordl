#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketMessageEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketMessageEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WebSocketMessageEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*, "Meta.Net.NativeWebSocket", "WebSocketMessageEventHandler");
// Dependencies System.MulticastDelegate
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WebSocketMessageEventHandler
class CORDL_TYPE WebSocketMessageEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e01030, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

static inline ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e00f7c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketMessageEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketMessageEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketMessageEventHandler(WebSocketMessageEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketMessageEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketMessageEventHandler(WebSocketMessageEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
