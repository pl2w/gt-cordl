#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocketHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketHelpers)
namespace Meta::Net::NativeWebSocket {
struct WebSocketCloseCode;
}
// Forward declare root types
namespace Meta::Net::NativeWebSocket {
class WebSocketHelpers;
}
// Write type traits
MARK_REF_T(::Meta::Net::NativeWebSocket::WebSocketHelpers*);
DEFINE_IL2CPP_CLASS(::Meta::Net::NativeWebSocket::WebSocketHelpers*, "Meta.Net.NativeWebSocket", "WebSocketHelpers");
// Dependencies System.Object
namespace Meta::Net::NativeWebSocket {
// Is value type: false
// CS Name: Meta.Net.NativeWebSocket.WebSocketHelpers
class CORDL_TYPE WebSocketHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method ParseCloseCodeEnum, addr 0x9e011bc, size 0xb8, virtual false, abstract: false, final false
static inline ::Meta::Net::NativeWebSocket::WebSocketCloseCode ParseCloseCodeEnum(int32_t  closeCode) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Net::NativeWebSocket::WebSocketHelpers) == 0x10, "Size mismatch!");

} // namespace end def Meta::Net::NativeWebSocket
