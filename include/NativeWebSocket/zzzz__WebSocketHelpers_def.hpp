#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocketHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHelpers)
namespace NativeWebSocket {
struct WebSocketCloseCode;
}
namespace NativeWebSocket {
class WebSocketException;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace NativeWebSocket {
class WebSocketHelpers;
}
// Write type traits
MARK_REF_T(::NativeWebSocket::WebSocketHelpers*);
DEFINE_IL2CPP_CLASS(::NativeWebSocket::WebSocketHelpers*, "NativeWebSocket", "WebSocketHelpers");
// Dependencies System.Object
namespace NativeWebSocket {
// Is value type: false
// CS Name: NativeWebSocket.WebSocketHelpers
class CORDL_TYPE WebSocketHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method GetErrorMessageFromCode, addr 0x5f34d40, size 0x10c, virtual false, abstract: false, final false
static inline ::NativeWebSocket::WebSocketException* GetErrorMessageFromCode(int32_t  errorCode, ::System::Exception*  inner) ;

/// @brief Method ParseCloseCodeEnum, addr 0x5f34c88, size 0xb8, virtual false, abstract: false, final false
static inline ::NativeWebSocket::WebSocketCloseCode ParseCloseCodeEnum(int32_t  closeCode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketHelpers(WebSocketHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketHelpers(WebSocketHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NativeWebSocket::WebSocketHelpers) == 0x10, "Size mismatch!");

} // namespace end def NativeWebSocket
