#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/IWitByteDataSentHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWitByteDataSentHandler)
// Forward declare root types
namespace Meta::WitAi::Events {
class IWitByteDataSentHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::IWitByteDataSentHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::IWitByteDataSentHandler*, "Meta.WitAi.Events", "IWitByteDataSentHandler");
// Dependencies 
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.IWitByteDataSentHandler
class CORDL_TYPE IWitByteDataSentHandler {
public:
// Declarations
/// @brief Method OnWitDataSent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnWitDataSent(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "IWitByteDataSentHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitByteDataSentHandler(IWitByteDataSentHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Events
