#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRHoverInteractorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRHoverInteractorExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRHoverInteractorExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRHoverInteractorExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRHoverInteractorExtensions*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRHoverInteractorExtensions");
// [Extension]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRHoverInteractorExtensions
class CORDL_TYPE XRHoverInteractorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOldestInteractableHovered, addr 0xb4608d4, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* GetOldestInteractableHovered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRHoverInteractorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHoverInteractorExtensions(XRHoverInteractorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHoverInteractorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHoverInteractorExtensions(XRHoverInteractorExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11429};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRHoverInteractorExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
