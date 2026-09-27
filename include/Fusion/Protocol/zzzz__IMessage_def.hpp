#pragma once
// IWYU pragma private; include "Fusion/Protocol/IMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMessage)
// Forward declare root types
namespace Fusion::Protocol {
class IMessage;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::IMessage*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::IMessage*, "Fusion.Protocol", "IMessage");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.IMessage
class CORDL_TYPE IMessage {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMessage(IMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Protocol
