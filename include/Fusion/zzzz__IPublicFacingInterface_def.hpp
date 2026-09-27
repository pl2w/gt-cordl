#pragma once
// IWYU pragma private; include "Fusion/IPublicFacingInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPublicFacingInterface)
// Forward declare root types
namespace Fusion {
class IPublicFacingInterface;
}
// Write type traits
MARK_REF_T(::Fusion::IPublicFacingInterface*);
DEFINE_IL2CPP_CLASS(::Fusion::IPublicFacingInterface*, "Fusion", "IPublicFacingInterface");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IPublicFacingInterface
class CORDL_TYPE IPublicFacingInterface {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPublicFacingInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPublicFacingInterface(IPublicFacingInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
