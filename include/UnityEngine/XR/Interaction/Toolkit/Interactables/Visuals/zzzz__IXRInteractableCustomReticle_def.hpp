#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/IXRInteractableCustomReticle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRInteractableCustomReticle)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IXRCustomReticleProvider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals {
class IXRInteractableCustomReticle;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*, "UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals", "IXRInteractableCustomReticle");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals.IXRInteractableCustomReticle
class CORDL_TYPE IXRInteractableCustomReticle {
public:
// Declarations
/// @brief Method OnReticleAttached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReticleAttached(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*  reticleProvider) ;

/// @brief Method OnReticleDetaching, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnReticleDetaching() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractableCustomReticle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractableCustomReticle(IXRInteractableCustomReticle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals
