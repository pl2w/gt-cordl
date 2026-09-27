#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketException;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketException*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketException*, "NativeWebSocket", "WebSocketException");
// Dependencies System.Exception
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketException
class CORDL_TYPE WebSocketException : public ::System::Exception {
public:
// Declarations
static inline ::NativeWebSocket::WebSocketException* New_ctor() ;

static inline ::NativeWebSocket::WebSocketException* New_ctor(::StringW  message) ;

static inline ::NativeWebSocket::WebSocketException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x5f34e58, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f34eb0, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5f34f18, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketException(WebSocketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketException(WebSocketException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketException) == 0x90, "Size mismatch!");

} // namespace end def NativeWebSocket
