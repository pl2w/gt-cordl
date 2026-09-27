#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/IXRCustomReticleProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRCustomReticleProvider)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IXRCustomReticleProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "IXRCustomReticleProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.IXRCustomReticleProvider
class CORDL_TYPE IXRCustomReticleProvider {
public:
// Declarations
/// @brief Method AttachCustomReticle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AttachCustomReticle(::UnityEngine::GameObject*  reticleInstance) ;

/// @brief Method RemoveCustomReticle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoveCustomReticle() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRCustomReticleProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRCustomReticleProvider(IXRCustomReticleProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11486};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
