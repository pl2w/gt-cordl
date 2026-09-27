#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRActivateInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRActivateInteractor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRActivateInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRActivateInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRActivateInteractor
class CORDL_TYPE IXRActivateInteractor {
public:
// Declarations
 __declspec(property(get=get_shouldActivate)) bool  shouldActivate;

 __declspec(property(get=get_shouldDeactivate)) bool  shouldDeactivate;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method GetActivateTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method get_shouldActivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_shouldActivate() ;

/// @brief Method get_shouldDeactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_shouldDeactivate() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRActivateInteractor(IXRActivateInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
