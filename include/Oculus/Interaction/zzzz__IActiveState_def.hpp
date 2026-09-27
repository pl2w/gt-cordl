#pragma once
// IWYU pragma private; include "Oculus/Interaction/IActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IActiveState)
// Forward declare root types
namespace Oculus::Interaction {
class IActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IActiveState*, "Oculus.Interaction", "IActiveState");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IActiveState
class CORDL_TYPE IActiveState {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Method get_Active, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Active() ;

// Ctor Parameters [CppParam { name: "", ty: "IActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IActiveState(IActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
