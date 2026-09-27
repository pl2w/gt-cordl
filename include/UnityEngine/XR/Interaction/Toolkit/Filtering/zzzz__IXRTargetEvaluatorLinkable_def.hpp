#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRTargetEvaluatorLinkable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRTargetEvaluatorLinkable)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetEvaluatorLinkable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRTargetEvaluatorLinkable");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetEvaluatorLinkable
class CORDL_TYPE IXRTargetEvaluatorLinkable {
public:
// Declarations
/// @brief Method OnLink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method OnUnlink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRTargetEvaluatorLinkable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRTargetEvaluatorLinkable(IXRTargetEvaluatorLinkable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
