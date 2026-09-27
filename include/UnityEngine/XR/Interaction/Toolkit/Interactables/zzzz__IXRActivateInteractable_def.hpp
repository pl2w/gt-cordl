#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRActivateInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRActivateInteractable)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "IXRActivateInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable
class CORDL_TYPE IXRActivateInteractable {
public:
// Declarations
 __declspec(property(get=get_activated)) ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  activated;

 __declspec(property(get=get_deactivated)) ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  deactivated;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept;

/// @brief Method OnActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// @brief Method OnDeactivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method get_activated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* get_activated() ;

/// @brief Method get_deactivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* get_deactivated() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRActivateInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRActivateInteractable(IXRActivateInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
