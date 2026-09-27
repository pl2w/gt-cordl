#pragma once
// IWYU pragma private; include "Oculus/Interaction/IMovementProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMovementProvider)
namespace Oculus::Interaction {
class IMovement;
}
// Forward declare root types
namespace Oculus::Interaction {
class IMovementProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IMovementProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IMovementProvider*, "Oculus.Interaction", "IMovementProvider");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IMovementProvider
class CORDL_TYPE IMovementProvider {
public:
// Declarations
/// @brief Method CreateMovement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

// Ctor Parameters [CppParam { name: "", ty: "IMovementProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMovementProvider(IMovementProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15944};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
