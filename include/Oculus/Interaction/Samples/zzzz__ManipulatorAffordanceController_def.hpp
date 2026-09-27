#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ManipulatorAffordanceController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManipulatorAffordanceController)
namespace GlobalNamespace {
class PanelHoverState;
}
namespace GlobalNamespace {
struct PanelWithManipulatorsStateSignaler_State;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsStateSignaler;
}
namespace Oculus::Interaction {
class GrabInteractable;
}
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
class RayInteractable;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ManipulatorAffordanceController;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ManipulatorAffordanceController*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ManipulatorAffordanceController*, "Oculus.Interaction.Samples", "ManipulatorAffordanceController");
// Dependencies UnityEngine.Animator, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ManipulatorAffordanceController
class CORDL_TYPE ManipulatorAffordanceController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animators, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__animators, put=__cordl_internal_set__animators)) ::ArrayW<::UnityW<::UnityEngine::Animator>>  _animators;

/// @brief Field _grabInteractable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabInteractable, put=__cordl_internal_set__grabInteractable)) ::UnityW<::Oculus::Interaction::GrabInteractable>  _grabInteractable;

/// @brief Field _handGrabInteractable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractable, put=__cordl_internal_set__handGrabInteractable)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  _handGrabInteractable;

/// @brief Field _panelHoverState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelHoverState, put=__cordl_internal_set__panelHoverState)) ::UnityW<::GlobalNamespace::PanelHoverState>  _panelHoverState;

/// @brief Field _rayInteractable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractable, put=__cordl_internal_set__rayInteractable)) ::UnityW<::Oculus::Interaction::RayInteractable>  _rayInteractable;

/// @brief Field _stateSignaler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateSignaler, put=__cordl_internal_set__stateSignaler)) ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  _stateSignaler;

/// @brief Method GetAnimatorState, addr 0xa43abb0, size 0x128, virtual false, abstract: false, final false
inline int32_t GetAnimatorState() ;

/// @brief Method GetAnimatorStateFromInteractable, addr 0xa43b0a0, size 0xac, virtual false, abstract: false, final false
inline int32_t GetAnimatorStateFromInteractable(::Oculus::Interaction::IInteractableView*  view) ;

/// @brief Method HandleInteractableStateChanged, addr 0xa43b14c, size 0xe0, virtual false, abstract: false, final false
inline void HandleInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

/// @brief Method HandleStateChanged, addr 0xa43b308, size 0x1b0, virtual false, abstract: false, final false
inline void HandleStateChanged(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  state) ;

static inline ::Oculus::Interaction::Samples::ManipulatorAffordanceController* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa43ad88, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PanelHoverStateChanged, addr 0xa43b260, size 0xa8, virtual false, abstract: false, final false
inline void PanelHoverStateChanged(bool  newState) ;

/// @brief Method Start, addr 0xa43a8d8, size 0x2d8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& __cordl_internal_get__animators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& __cordl_internal_get__animators() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& __cordl_internal_get__grabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& __cordl_internal_get__grabInteractable() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& __cordl_internal_get__handGrabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& __cordl_internal_get__handGrabInteractable() ;

constexpr ::UnityW<::GlobalNamespace::PanelHoverState> const& __cordl_internal_get__panelHoverState() const;

constexpr ::UnityW<::GlobalNamespace::PanelHoverState>& __cordl_internal_get__panelHoverState() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& __cordl_internal_get__rayInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& __cordl_internal_get__rayInteractable() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler> const& __cordl_internal_get__stateSignaler() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>& __cordl_internal_get__stateSignaler() ;

constexpr void __cordl_internal_set__animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value) ;

constexpr void __cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value) ;

constexpr void __cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value) ;

constexpr void __cordl_internal_set__panelHoverState(::UnityW<::GlobalNamespace::PanelHoverState>  value) ;

constexpr void __cordl_internal_set__rayInteractable(::UnityW<::Oculus::Interaction::RayInteractable>  value) ;

constexpr void __cordl_internal_set__stateSignaler(::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  value) ;

/// @brief Method .ctor, addr 0xa43b4b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManipulatorAffordanceController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManipulatorAffordanceController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManipulatorAffordanceController(ManipulatorAffordanceController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManipulatorAffordanceController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManipulatorAffordanceController(ManipulatorAffordanceController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28313};

/// [SerializeField]
/// [Tooltip("The grab interactable for the slate itself (as opposed to the surrounding affordances)")]
/// @brief Field _grabInteractable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabInteractable>  ____grabInteractable;

/// [SerializeField]
/// [Tooltip("The hand grab interactable for the slate itself (as opposed to the surrounding affordances)")]
/// @brief Field _handGrabInteractable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  ____handGrabInteractable;

/// [SerializeField]
/// [Optional]
/// [Tooltip("The ray interactable for the slate itself (as opposed to the surrounding affordances)")]
/// @brief Field _rayInteractable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractable>  ____rayInteractable;

/// [SerializeField]
/// [Tooltip("The state signaler for the SlateWithManipulators prefab")]
/// @brief Field _stateSignaler, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  ____stateSignaler;

/// [SerializeField]
/// [Tooltip("The animators (canonically geometry and opacity) whose \'state\' variables should be controlled by this affordance")]
/// @brief Field _animators, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Animator>>  ____animators;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Holds the panel hover state")]
/// @brief Field _panelHoverState, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PanelHoverState>  ____panelHoverState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____grabInteractable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____handGrabInteractable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____rayInteractable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____stateSignaler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____animators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ManipulatorAffordanceController, ____panelHoverState) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ManipulatorAffordanceController) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
