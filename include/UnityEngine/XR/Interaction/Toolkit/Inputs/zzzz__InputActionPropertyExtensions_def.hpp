#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/InputActionPropertyExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputActionPropertyExtensions)
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class InputActionPropertyExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionPropertyExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionPropertyExtensions
class CORDL_TYPE InputActionPropertyExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method DisableDirectAction, addr 0xb4b143c, size 0x98, virtual false, abstract: false, final false
static inline void DisableDirectAction(::UnityEngine::InputSystem::InputActionProperty  property) ;

/// [Extension]
/// @brief Method EnableDirectAction, addr 0xb4b13a4, size 0x98, virtual false, abstract: false, final false
static inline void EnableDirectAction(::UnityEngine::InputSystem::InputActionProperty  property) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionPropertyExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionPropertyExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionPropertyExtensions(InputActionPropertyExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionPropertyExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionPropertyExtensions(InputActionPropertyExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
