#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketOpenEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(WebSocketOpenEventHandler)
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
class WebSocketOpenEventHandler;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketOpenEventHandler*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketOpenEventHandler*, "NativeWebSocket", "WebSocketOpenEventHandler");
// Dependencies System.MulticastDelegate
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketOpenEventHandler
class CORDL_TYPE WebSocketOpenEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f3493c, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f34958, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f34928, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::NativeWebSocket::WebSocketOpenEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f3488c, size 0x9c, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketOpenEventHandler) == 0x80, "Size mismatch!");

} // namespace end def NativeWebSocket
