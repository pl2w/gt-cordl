#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRInteractionStrengthFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRInteractionStrengthFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "IXRInteractionStrengthFilter");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter
class CORDL_TYPE IXRInteractionStrengthFilter {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, float_t  interactionStrength) ;

/// @brief Method get_canProcess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canProcess() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractionStrengthFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractionStrengthFilter(IXRInteractionStrengthFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11544};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
