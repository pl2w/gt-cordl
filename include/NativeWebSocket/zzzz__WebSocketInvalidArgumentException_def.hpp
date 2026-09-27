#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketInvalidArgumentException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NativeWebSocket/zzzz__WebSocketException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketInvalidArgumentException)
namespace System {
class Exception;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketInvalidArgumentException;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketInvalidArgumentException*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketInvalidArgumentException*, "NativeWebSocket", "WebSocketInvalidArgumentException");
// Dependencies NativeWebSocket.WebSocketException
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketInvalidArgumentException
class CORDL_TYPE WebSocketInvalidArgumentException : public ::NativeWebSocket::WebSocketException {
public:
// Declarations
static inline ::NativeWebSocket::WebSocketInvalidArgumentException* New_ctor() ;

static inline ::NativeWebSocket::WebSocketInvalidArgumentException* New_ctor(::StringW  message) ;

static inline ::NativeWebSocket::WebSocketInvalidArgumentException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x5f34f90, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f34f94, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5f34e54, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketInvalidArgumentException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketInvalidArgumentException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketInvalidArgumentException(WebSocketInvalidArgumentException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketInvalidArgumentException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketInvalidArgumentException(WebSocketInvalidArgumentException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32573};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketInvalidArgumentException) == 0x90, "Size mismatch!");

} // namespace end def NativeWebSocket
