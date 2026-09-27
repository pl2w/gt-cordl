#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRFocusInteractableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRFocusInteractableExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRFocusInteractableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRFocusInteractableExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRFocusInteractableExtensions
class CORDL_TYPE XRFocusInteractableExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOldestInteractorFocusing, addr 0xb490eac, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* GetOldestInteractorFocusing(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRFocusInteractableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRFocusInteractableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRFocusInteractableExtensions(XRFocusInteractableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRFocusInteractableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRFocusInteractableExtensions(XRFocusInteractableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
