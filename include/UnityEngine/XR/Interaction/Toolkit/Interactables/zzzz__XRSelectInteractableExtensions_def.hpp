#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRSelectInteractableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSelectInteractableExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct InteractorHandedness;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRSelectInteractableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRSelectInteractableExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRSelectInteractableExtensions
class CORDL_TYPE XRSelectInteractableExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOldestInteractorSelecting, addr 0xb4912f4, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* GetOldestInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method IsSelectedBy, addr 0xb491448, size 0x1a0, virtual false, abstract: false, final false
static inline bool IsSelectedBy(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness) ;

/// [Extension]
/// @brief Method IsSelectedByLeft, addr 0xb491440, size 0x8, virtual false, abstract: false, final false
static inline bool IsSelectedByLeft(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// [Extension]
/// @brief Method IsSelectedByRight, addr 0xb4915e8, size 0x8, virtual false, abstract: false, final false
static inline bool IsSelectedByRight(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSelectInteractableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractableExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSelectInteractableExtensions(XRSelectInteractableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractableExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSelectInteractableExtensions(XRSelectInteractableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
