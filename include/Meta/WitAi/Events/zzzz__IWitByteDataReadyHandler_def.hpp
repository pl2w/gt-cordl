#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/IWitByteDataReadyHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWitByteDataReadyHandler)
// Forward declare root types
namespace Meta::WitAi::Events {
class IWitByteDataReadyHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::IWitByteDataReadyHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::IWitByteDataReadyHandler*, "Meta.WitAi.Events", "IWitByteDataReadyHandler");
// Dependencies 
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.IWitByteDataReadyHandler
class CORDL_TYPE IWitByteDataReadyHandler {
public:
// Declarations
/// @brief Method OnWitDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnWitDataReady(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "IWitByteDataReadyHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitByteDataReadyHandler(IWitByteDataReadyHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Events
