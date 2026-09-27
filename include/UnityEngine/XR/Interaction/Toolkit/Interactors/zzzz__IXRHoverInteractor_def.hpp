#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRHoverInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRHoverInteractor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRHoverInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor
class CORDL_TYPE IXRHoverInteractor {
public:
// Declarations
 __declspec(property(get=get_hasHover)) bool  hasHover;

 __declspec(property(get=get_hoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  hoverEntered;

 __declspec(property(get=get_hoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  hoverExited;

 __declspec(property(get=get_interactablesHovered)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  interactablesHovered;

 __declspec(property(get=get_isHoverActive)) bool  isHoverActive;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method CanHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method IsHovering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method OnHoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnHoverExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method get_hasHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_hasHover() ;

/// @brief Method get_hoverEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered() ;

/// @brief Method get_hoverExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited() ;

/// @brief Method get_interactablesHovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* get_interactablesHovered() ;

/// @brief Method get_isHoverActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isHoverActive() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRHoverInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRHoverInteractor(IXRHoverInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
