#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketResponseProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitWebSocketResponseProcessor)
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketResponseProcessor;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*, "Meta.Voice.Net.WebSockets", "WitWebSocketResponseProcessor");
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketResponseProcessor
class CORDL_TYPE WitWebSocketResponseProcessor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e27528, size 0x40, virtual true, abstract: false, final false
inline bool Invoke(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk) ;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e27474, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketResponseProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketResponseProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketResponseProcessor(WitWebSocketResponseProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketResponseProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketResponseProcessor(WitWebSocketResponseProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
