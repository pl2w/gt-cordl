#pragma once
// IWYU pragma private; include "Fusion/INetworkInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkInput)
// Forward declare root types
namespace Fusion {
class INetworkInput;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkInput*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkInput*, "Fusion", "INetworkInput");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkInput
class CORDL_TYPE INetworkInput {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "INetworkInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkInput(INetworkInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
