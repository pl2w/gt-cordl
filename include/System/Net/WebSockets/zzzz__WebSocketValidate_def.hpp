#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketValidate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketValidate)
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketState;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketValidate;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocketValidate*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketValidate*, "System.Net.WebSockets", "WebSocketValidate");
// Dependencies System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketValidate
class CORDL_TYPE WebSocketValidate : public ::System::Object {
public:
// Declarations
/// @brief Method ThrowIfInvalidState, addr 0xace568c, size 0x154, virtual false, abstract: false, final false
static inline void ThrowIfInvalidState(::System::Net::WebSockets::WebSocketState  currentState, bool  isDisposed, ::ArrayW<::System::Net::WebSockets::WebSocketState>  validStates) ;

/// @brief Method ValidateArraySegment, addr 0xace51d0, size 0x198, virtual false, abstract: false, final false
static inline void ValidateArraySegment(::System::ArraySegment_1<uint8_t>  arraySegment, ::StringW  parameterName) ;

/// @brief Method ValidateCloseStatus, addr 0xace5dd0, size 0x19c, virtual false, abstract: false, final false
static inline void ValidateCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription) ;

/// @brief Method ValidateSubprotocol, addr 0xacecb5c, size 0x270, virtual false, abstract: false, final false
static inline void ValidateSubprotocol(::StringW  subProtocol) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketValidate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketValidate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketValidate(WebSocketValidate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketValidate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketValidate(WebSocketValidate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebSockets::WebSocketValidate) == 0x10, "Size mismatch!");

} // namespace end def System::Net::WebSockets
