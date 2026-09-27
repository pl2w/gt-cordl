#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/IInteractorDistanceEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IInteractorDistanceEvaluator)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IInteractorDistanceEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "UnityEngine.XR.Interaction.Toolkit", "IInteractorDistanceEvaluator");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.IInteractorDistanceEvaluator
class CORDL_TYPE IInteractorDistanceEvaluator {
public:
// Declarations
/// @brief Method EvaluateDistance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

// Ctor Parameters [CppParam { name: "", ty: "IInteractorDistanceEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInteractorDistanceEvaluator(IInteractorDistanceEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit
