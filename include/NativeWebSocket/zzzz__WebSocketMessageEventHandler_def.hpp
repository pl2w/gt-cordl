#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketMessageEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketMessageEventHandler)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketMessageEventHandler;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketMessageEventHandler*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketMessageEventHandler*, "NativeWebSocket", "WebSocketMessageEventHandler");
// Dependencies System.MulticastDelegate
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketMessageEventHandler
class CORDL_TYPE WebSocketMessageEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f34a28, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f34a48, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f34a14, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<uint8_t>  data) ;

static inline ::NativeWebSocket::WebSocketMessageEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f34964, size 0xb0, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketMessageEventHandler) == 0x80, "Size mismatch!");

} // namespace end def NativeWebSocket
