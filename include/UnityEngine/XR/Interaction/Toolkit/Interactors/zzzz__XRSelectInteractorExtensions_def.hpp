#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRSelectInteractorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSelectInteractorExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRSelectInteractorExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSelectInteractorExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSelectInteractorExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRSelectInteractorExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRSelectInteractorExtensions
class CORDL_TYPE XRSelectInteractorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOldestInteractableSelected, addr 0xb460af8, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* GetOldestInteractableSelected(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSelectInteractorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSelectInteractorExtensions(XRSelectInteractorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSelectInteractorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSelectInteractorExtensions(XRSelectInteractorExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSelectInteractorExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
