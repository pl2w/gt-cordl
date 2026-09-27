#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRFocusInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRFocusInteractable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct InteractableFocusMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "IXRFocusInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable
class CORDL_TYPE IXRFocusInteractable {
public:
// Declarations
 __declspec(property(get=get_canFocus)) bool  canFocus;

 __declspec(property(get=get_firstFocusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  firstFocusEntered;

 __declspec(property(get=get_firstInteractionGroupFocusing)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  firstInteractionGroupFocusing;

 __declspec(property(get=get_focusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  focusEntered;

 __declspec(property(get=get_focusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  focusExited;

 __declspec(property(get=get_focusMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  focusMode;

 __declspec(property(get=get_interactionGroupsFocusing)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  interactionGroupsFocusing;

 __declspec(property(get=get_isFocused)) bool  isFocused;

 __declspec(property(get=get_lastFocusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  lastFocusExited;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept;

/// @brief Method OnFocusEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method OnFocusExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method get_canFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_canFocus() ;

/// @brief Method get_firstFocusEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* get_firstFocusEntered() ;

/// @brief Method get_firstInteractionGroupFocusing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_firstInteractionGroupFocusing() ;

/// @brief Method get_focusEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* get_focusEntered() ;

/// @brief Method get_focusExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* get_focusExited() ;

/// @brief Method get_focusMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode get_focusMode() ;

/// @brief Method get_interactionGroupsFocusing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* get_interactionGroupsFocusing() ;

/// @brief Method get_isFocused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isFocused() ;

/// @brief Method get_lastFocusExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* get_lastFocusExited() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRFocusInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRFocusInteractable(IXRFocusInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11508};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
