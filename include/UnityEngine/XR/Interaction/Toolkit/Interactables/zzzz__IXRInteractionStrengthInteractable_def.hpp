#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRInteractionStrengthInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractionStrengthInteractable)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractionStrengthInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "IXRInteractionStrengthInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable
class CORDL_TYPE IXRInteractionStrengthInteractable {
public:
// Declarations
 __declspec(property(get=get_largestInteractionStrength)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*  largestInteractionStrength;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept;

/// @brief Method GetInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method ProcessInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method get_largestInteractionStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractionStrengthInteractable(IXRInteractionStrengthInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
