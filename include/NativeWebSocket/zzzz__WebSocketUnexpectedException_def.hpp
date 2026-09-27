#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketUnexpectedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NativeWebSocket/zzzz__WebSocketException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketUnexpectedException)
namespace System {
class Exception;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketUnexpectedException;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketUnexpectedException*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketUnexpectedException*, "NativeWebSocket", "WebSocketUnexpectedException");
// Dependencies NativeWebSocket.WebSocketException
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketUnexpectedException
class CORDL_TYPE WebSocketUnexpectedException : public ::NativeWebSocket::WebSocketException {
public:
// Declarations
static inline ::NativeWebSocket::WebSocketUnexpectedException* New_ctor() ;

static inline ::NativeWebSocket::WebSocketUnexpectedException* New_ctor(::StringW  message) ;

static inline ::NativeWebSocket::WebSocketUnexpectedException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief Method .ctor, addr 0x5f34f88, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f34f8c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x5f34e4c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketUnexpectedException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketUnexpectedException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketUnexpectedException(WebSocketUnexpectedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketUnexpectedException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketUnexpectedException(WebSocketUnexpectedException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketUnexpectedException) == 0x90, "Size mismatch!");

} // namespace end def NativeWebSocket
