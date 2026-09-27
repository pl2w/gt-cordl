#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketInvalidStateException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NativeWebSocket/zzzz__WebSocketException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketInvalidStateException)
namespace System {
class Exception;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketInvalidStateException;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketInvalidStateException*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketInvalidStateException*, "NativeWebSocket", "WebSocketInvalidStateException");
// Dependencies NativeWebSocket.WebSocketException
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketInvalidStateException
class CORDL_TYPE WebSocketInvalidStateException : public ::NativeWebSocket::WebSocketException {
public:
// Declarations
static inline ::NativeWebSocket::WebSocketInvalidStateException* New_ctor() ;

static inline ::NativeWebSocket::WebSocketInvalidStateException* New_ctor(::StringW  message) ;

static inline ::NativeWebSocket::WebSocketInvalidStateException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x5f34f98, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f34f9c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5f34e50, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketInvalidStateException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketInvalidStateException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketInvalidStateException(WebSocketInvalidStateException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketInvalidStateException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketInvalidStateException(WebSocketInvalidStateException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketInvalidStateException) == 0x90, "Size mismatch!");

} // namespace end def NativeWebSocket
