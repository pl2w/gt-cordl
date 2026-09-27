#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketErrorEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketErrorEventHandler)
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
class WebSocketErrorEventHandler;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketErrorEventHandler*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketErrorEventHandler*, "NativeWebSocket", "WebSocketErrorEventHandler");
// Dependencies System.MulticastDelegate
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketErrorEventHandler
class CORDL_TYPE WebSocketErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f34b18, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  errorMsg, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f34b38, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f34b04, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMsg) ;

static inline ::NativeWebSocket::WebSocketErrorEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f34a54, size 0xb0, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketErrorEventHandler) == 0x80, "Size mismatch!");

} // namespace end def NativeWebSocket
