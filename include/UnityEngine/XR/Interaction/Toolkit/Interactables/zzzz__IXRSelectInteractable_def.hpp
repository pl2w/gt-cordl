#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRSelectInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectInteractable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct InteractableSelectMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEvent;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "IXRSelectInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable
class CORDL_TYPE IXRSelectInteractable {
public:
// Declarations
 __declspec(property(get=get_firstInteractorSelecting)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  firstInteractorSelecting;

 __declspec(property(get=get_firstSelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  firstSelectEntered;

 __declspec(property(get=get_interactorsSelecting)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  interactorsSelecting;

 __declspec(property(get=get_isSelected)) bool  isSelected;

 __declspec(property(get=get_lastSelectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  lastSelectExited;

 __declspec(property(get=get_selectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  selectEntered;

 __declspec(property(get=get_selectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  selectExited;

 __declspec(property(get=get_selectMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  selectMode;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept;

/// @brief Method GetAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method GetLocalAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method IsSelectableBy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method OnSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method get_firstInteractorSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* get_firstInteractorSelecting() ;

/// @brief Method get_firstSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_firstSelectEntered() ;

/// @brief Method get_interactorsSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* get_interactorsSelecting() ;

/// @brief Method get_isSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isSelected() ;

/// @brief Method get_lastSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_lastSelectExited() ;

/// @brief Method get_selectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered() ;

/// @brief Method get_selectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited() ;

/// @brief Method get_selectMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode get_selectMode() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRSelectInteractable(IXRSelectInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
