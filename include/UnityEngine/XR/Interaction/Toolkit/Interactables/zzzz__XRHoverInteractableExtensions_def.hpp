#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRHoverInteractableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverInteractableExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct InteractorHandedness;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRHoverInteractableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRHoverInteractableExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRHoverInteractableExtensions
class CORDL_TYPE XRHoverInteractableExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOldestInteractorHovering, addr 0xb490ff8, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* GetOldestInteractorHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method IsHoveredBy, addr 0xb49114c, size 0x1a0, virtual false, abstract: false, final false
static inline bool IsHoveredBy(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness) ;

/// [Extension]
/// @brief Method IsHoveredByLeft, addr 0xb491144, size 0x8, virtual false, abstract: false, final false
static inline bool IsHoveredByLeft(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// [Extension]
/// @brief Method IsHoveredByRight, addr 0xb4912ec, size 0x8, virtual false, abstract: false, final false
static inline bool IsHoveredByRight(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRHoverInteractableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHoverInteractableExtensions(XRHoverInteractableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHoverInteractableExtensions(XRHoverInteractableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
