#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsBorderAffordanceController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsBorderAffordanceController_AffordanceState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelWithManipulatorsBorderAffordanceController)
namespace GlobalNamespace {
class PanelHoverState;
}
namespace GlobalNamespace {
struct PanelWithManipulatorsBorderAffordanceController_AffordanceState;
}
namespace GlobalNamespace {
struct PanelWithManipulatorsBorderAffordanceController_RailState;
}
namespace GlobalNamespace {
struct PanelWithManipulatorsStateSignaler_State;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsBorderAffordanceController_Affordance;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsBorderAffordanceController_FadePoint;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsStateSignaler;
}
namespace Oculus::Interaction {
class GrabInteractable;
}
namespace Oculus::Interaction {
class Grabbable;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class RayInteractable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsBorderAffordanceController;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsBorderAffordanceController_Affordance;
}
namespace Oculus::Interaction::Samples {
class PanelWithManipulatorsBorderAffordanceController_FadePoint;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*);
MARK_REF_T(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*);
MARK_REF_T(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController*, "Oculus.Interaction.Samples", "PanelWithManipulatorsBorderAffordanceController");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*, "Oculus.Interaction.Samples", "PanelWithManipulatorsBorderAffordanceController/Affordance");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*, "Oculus.Interaction.Samples", "PanelWithManipulatorsBorderAffordanceController/FadePoint");
// Dependencies Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController::Affordance, UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController
class CORDL_TYPE PanelWithManipulatorsBorderAffordanceController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AffordanceState = ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState;

using RailState = ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_RailState;

using Affordance = ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance;

using FadePoint = ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint;

/// @brief Field _affordances, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordances, put=__cordl_internal_set__affordances)) ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>  _affordances;

/// @brief Field _affordancesInUse, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__affordancesInUse, put=__cordl_internal_set__affordancesInUse)) ::System::Collections::Generic::HashSet_1<int32_t>*  _affordancesInUse;

/// @brief Field _boneTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneTransform, put=__cordl_internal_set__boneTransform)) ::UnityW<::UnityEngine::Transform>  _boneTransform;

/// @brief Field _cornerArcRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__cornerArcRadius, put=__cordl_internal_set__cornerArcRadius)) float_t  _cornerArcRadius;

/// @brief Field _deletePointKeys, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__deletePointKeys, put=__cordl_internal_set__deletePointKeys)) ::System::Collections::Generic::List_1<int32_t>*  _deletePointKeys;

/// @brief Field _fadePoints, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadePoints, put=__cordl_internal_set__fadePoints)) ::ArrayW<::UnityEngine::Vector4>  _fadePoints;

/// @brief Field _grabInteractable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabInteractable, put=__cordl_internal_set__grabInteractable)) ::UnityW<::Oculus::Interaction::GrabInteractable>  _grabInteractable;

/// @brief Field _grabbale, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbale, put=__cordl_internal_set__grabbale)) ::UnityW<::Oculus::Interaction::Grabbable>  _grabbale;

/// @brief Field _handGrabInteractable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractable, put=__cordl_internal_set__handGrabInteractable)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  _handGrabInteractable;

/// @brief Field _materialPropertyBlock, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialPropertyBlock, put=__cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialPropertyBlock;

/// @brief Field _panelHoverState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__panelHoverState, put=__cordl_internal_set__panelHoverState)) ::UnityW<::GlobalNamespace::PanelHoverState>  _panelHoverState;

/// @brief Field _points, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*  _points;

/// @brief Field _railOpacityAnimator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__railOpacityAnimator, put=__cordl_internal_set__railOpacityAnimator)) ::UnityW<::UnityEngine::Animator>  _railOpacityAnimator;

/// @brief Field _railOpacityTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__railOpacityTransform, put=__cordl_internal_set__railOpacityTransform)) ::UnityW<::UnityEngine::Transform>  _railOpacityTransform;

/// @brief Field _railRenderer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__railRenderer, put=__cordl_internal_set__railRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _railRenderer;

/// @brief Field _rayInteractable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractable, put=__cordl_internal_set__rayInteractable)) ::UnityW<::Oculus::Interaction::RayInteractable>  _rayInteractable;

/// @brief Field _stateSignaler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateSignaler, put=__cordl_internal_set__stateSignaler)) ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  _stateSignaler;

/// @brief Method CreateFadePoint, addr 0xa43c560, size 0x120, virtual false, abstract: false, final false
inline void CreateFadePoint(int32_t  eventIdentifier) ;

/// @brief Method HandleInteractableStateChanged, addr 0xa43d128, size 0x48, virtual false, abstract: false, final false
inline void HandleInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

/// @brief Method HandlePointerEvent, addr 0xa43c6ac, size 0x21c, virtual false, abstract: false, final false
inline void HandlePointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method HandleStateChanged, addr 0xa43d170, size 0x1b0, virtual false, abstract: false, final false
inline void HandleStateChanged(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  state) ;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa43c334, size 0x22c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetRailAnimatorState, addr 0xa43c8c8, size 0x150, virtual false, abstract: false, final false
inline void SetRailAnimatorState() ;

/// @brief Method Start, addr 0xa43beec, size 0x448, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43d108, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateFadePoints, addr 0xa43ca18, size 0x408, virtual false, abstract: false, final false
inline void UpdateFadePoints() ;

/// @brief Method UpdateMaterialProperties, addr 0xa43cef4, size 0x214, virtual false, abstract: false, final false
inline void UpdateMaterialProperties() ;

constexpr ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*> const& __cordl_internal_get__affordances() const;

constexpr ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>& __cordl_internal_get__affordances() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__affordancesInUse() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__affordancesInUse() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__boneTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__boneTransform() ;

constexpr float_t const& __cordl_internal_get__cornerArcRadius() const;

constexpr float_t& __cordl_internal_get__cornerArcRadius() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__deletePointKeys() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__deletePointKeys() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__fadePoints() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__fadePoints() ;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& __cordl_internal_get__grabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& __cordl_internal_get__grabInteractable() ;

constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& __cordl_internal_get__grabbale() const;

constexpr ::UnityW<::Oculus::Interaction::Grabbable>& __cordl_internal_get__grabbale() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& __cordl_internal_get__handGrabInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& __cordl_internal_get__handGrabInteractable() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock() ;

constexpr ::UnityW<::GlobalNamespace::PanelHoverState> const& __cordl_internal_get__panelHoverState() const;

constexpr ::UnityW<::GlobalNamespace::PanelHoverState>& __cordl_internal_get__panelHoverState() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>* const& __cordl_internal_get__points() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*& __cordl_internal_get__points() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__railOpacityAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__railOpacityAnimator() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__railOpacityTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__railOpacityTransform() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__railRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__railRenderer() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& __cordl_internal_get__rayInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& __cordl_internal_get__rayInteractable() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler> const& __cordl_internal_get__stateSignaler() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>& __cordl_internal_get__stateSignaler() ;

constexpr void __cordl_internal_set__affordances(::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>  value) ;

constexpr void __cordl_internal_set__affordancesInUse(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__boneTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cornerArcRadius(float_t  value) ;

constexpr void __cordl_internal_set__deletePointKeys(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__fadePoints(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value) ;

constexpr void __cordl_internal_set__grabbale(::UnityW<::Oculus::Interaction::Grabbable>  value) ;

constexpr void __cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value) ;

constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__panelHoverState(::UnityW<::GlobalNamespace::PanelHoverState>  value) ;

constexpr void __cordl_internal_set__points(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*  value) ;

constexpr void __cordl_internal_set__railOpacityAnimator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__railOpacityTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__railRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__rayInteractable(::UnityW<::Oculus::Interaction::RayInteractable>  value) ;

constexpr void __cordl_internal_set__stateSignaler(::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  value) ;

/// @brief Method .ctor, addr 0xa43d320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _projectToRoundedBoxEdge, addr 0xa43bcc8, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector3> _projectToRoundedBoxEdge(::UnityEngine::Vector3  worldSpacePoint, ::UnityEngine::Transform*  targetTransform, ::UnityEngine::Transform*  boneTransform, float_t  arcRadius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsBorderAffordanceController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelWithManipulatorsBorderAffordanceController(PanelWithManipulatorsBorderAffordanceController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelWithManipulatorsBorderAffordanceController(PanelWithManipulatorsBorderAffordanceController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28321};

/// [Header("Interactables")]
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
/// [Tooltip("The hand grab interactable for the slate itself (as opposed to the surrounding affordances)")]
/// @brief Field _rayInteractable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractable>  ____rayInteractable;

/// [Header("Panel Signals")]
/// [SerializeField]
/// [Tooltip("The state signaler for the SlateWithManipulators prefab")]
/// @brief Field _stateSignaler, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler>  ____stateSignaler;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Holds the panel hover state")]
/// @brief Field _panelHoverState, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PanelHoverState>  ____panelHoverState;

/// [SerializeField]
/// [Tooltip("The grabbable associated with the slate itself (i.e., the grabbable with One- and TwoGrabFreeTransformers")]
/// @brief Field _grabbale, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Grabbable>  ____grabbale;

/// [Space(10)]
/// [SerializeField]
/// [Tooltip("The transform of one of the bones of the rail affordance (used in calculating capsule placement)")]
/// @brief Field _boneTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____boneTransform;

/// [SerializeField]
/// [Tooltip("The radius of the arcs at the corners of the rail affordance (used in calculating capsule placement)")]
/// @brief Field _cornerArcRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ____cornerArcRadius;

/// [Space(10)]
/// [SerializeField]
/// [Tooltip("The animator controlling the overall opacity of the rail affordance (note that this is independent of the localized opacities associated with the capsule affordances)")]
/// @brief Field _railOpacityAnimator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____railOpacityAnimator;

/// [SerializeField]
/// [Tooltip("The transform being controlled by the rail opacity animator")]
/// @brief Field _railOpacityTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____railOpacityTransform;

/// [SerializeField]
/// [Tooltip("The capsule affordances")]
/// @brief Field _affordances, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance*>  ____affordances;

/// [SerializeField]
/// [Tooltip("The renderer controlling shading for the rail affordance")]
/// @brief Field _railRenderer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____railRenderer;

/// @brief Field _fadePoints, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____fadePoints;

/// @brief Field _materialPropertyBlock, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialPropertyBlock;

/// @brief Field _points, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint*>*  ____points;

/// @brief Field _affordancesInUse, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____affordancesInUse;

/// @brief Field _deletePointKeys, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____deletePointKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____grabInteractable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____handGrabInteractable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____rayInteractable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____stateSignaler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____panelHoverState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____grabbale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____boneTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____cornerArcRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____railOpacityAnimator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____railOpacityTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____affordances) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____railRenderer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____fadePoints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____materialPropertyBlock) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____points) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____affordancesInUse) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController, ____deletePointKeys) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController) == 0xa8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController/FadePoint
class CORDL_TYPE PanelWithManipulatorsBorderAffordanceController_FadePoint : public ::System::Object {
public:
// Declarations
/// @brief Field affordanceIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_affordanceIndex, put=__cordl_internal_set_affordanceIndex)) int32_t  affordanceIndex;

/// @brief Field removeFlag, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_removeFlag, put=__cordl_internal_set_removeFlag)) bool  removeFlag;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint* New_ctor(int32_t  index) ;

constexpr int32_t const& __cordl_internal_get_affordanceIndex() const;

constexpr int32_t& __cordl_internal_get_affordanceIndex() ;

constexpr bool const& __cordl_internal_get_removeFlag() const;

constexpr bool& __cordl_internal_get_removeFlag() ;

constexpr void __cordl_internal_set_affordanceIndex(int32_t  value) ;

constexpr void __cordl_internal_set_removeFlag(bool  value) ;

/// @brief Method .ctor, addr 0xa43c680, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsBorderAffordanceController_FadePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController_FadePoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelWithManipulatorsBorderAffordanceController_FadePoint(PanelWithManipulatorsBorderAffordanceController_FadePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController_FadePoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelWithManipulatorsBorderAffordanceController_FadePoint(PanelWithManipulatorsBorderAffordanceController_FadePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28320};

/// @brief Field affordanceIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___affordanceIndex;

/// @brief Field removeFlag, offset: 0x14, size: 0x1, def value: None
 bool  ___removeFlag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint, ___affordanceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint, ___removeFlag) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_FadePoint) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// Dependencies Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController::AffordanceState, System.Object, UnityEngine.Animator, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PanelWithManipulatorsBorderAffordanceController/Affordance
class CORDL_TYPE PanelWithManipulatorsBorderAffordanceController_Affordance : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AnimationState, put=set_AnimationState)) ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  AnimationState;

 __declspec(property(get=get_Geometry)) ::UnityW<::UnityEngine::Transform>  Geometry;

 __declspec(property(get=get_LastKnownPositionParentSpace, put=set_LastKnownPositionParentSpace)) ::UnityEngine::Vector3  LastKnownPositionParentSpace;

 __declspec(property(get=get_Opacity)) float_t  Opacity;

/// @brief Field _animationState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationState, put=__cordl_internal_set__animationState)) ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  _animationState;

/// @brief Field _animators, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animators, put=__cordl_internal_set__animators)) ::ArrayW<::UnityW<::UnityEngine::Animator>>  _animators;

/// @brief Field _geometry, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__geometry, put=__cordl_internal_set__geometry)) ::UnityW<::UnityEngine::Transform>  _geometry;

/// @brief Field _lastKnownPositionParentSpace, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastKnownPositionParentSpace, put=__cordl_internal_set__lastKnownPositionParentSpace)) ::UnityEngine::Vector3  _lastKnownPositionParentSpace;

/// @brief Field _opacityTransform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__opacityTransform, put=__cordl_internal_set__opacityTransform)) ::UnityW<::UnityEngine::Transform>  _opacityTransform;

static inline ::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance* New_ctor() ;

constexpr ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState const& __cordl_internal_get__animationState() const;

constexpr ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState& __cordl_internal_get__animationState() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& __cordl_internal_get__animators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& __cordl_internal_get__animators() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__geometry() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__geometry() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastKnownPositionParentSpace() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastKnownPositionParentSpace() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__opacityTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__opacityTransform() ;

constexpr void __cordl_internal_set__animationState(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  value) ;

constexpr void __cordl_internal_set__animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value) ;

constexpr void __cordl_internal_set__geometry(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__lastKnownPositionParentSpace(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__opacityTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa43d350, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AnimationState, addr 0xa43d328, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState get_AnimationState() ;

/// @brief Method get_Geometry, addr 0xa43d348, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Geometry() ;

/// @brief Method get_LastKnownPositionParentSpace, addr 0xa43d330, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastKnownPositionParentSpace() ;

/// @brief Method get_Opacity, addr 0xa43ced0, size 0x24, virtual false, abstract: false, final false
inline float_t get_Opacity() ;

/// @brief Method set_AnimationState, addr 0xa43ce20, size 0xb0, virtual false, abstract: false, final false
inline void set_AnimationState(::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  value) ;

/// @brief Method set_LastKnownPositionParentSpace, addr 0xa43d33c, size 0xc, virtual false, abstract: false, final false
inline void set_LastKnownPositionParentSpace(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelWithManipulatorsBorderAffordanceController_Affordance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController_Affordance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelWithManipulatorsBorderAffordanceController_Affordance(PanelWithManipulatorsBorderAffordanceController_Affordance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelWithManipulatorsBorderAffordanceController_Affordance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelWithManipulatorsBorderAffordanceController_Affordance(PanelWithManipulatorsBorderAffordanceController_Affordance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28319};

/// [SerializeField]
/// [Tooltip("The parent transform of the geometry (i.e., visuals) which should be moved to place the capsule affordance")]
/// @brief Field _geometry, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____geometry;

/// [SerializeField]
/// [Tooltip("Then transform controlled by an animation whose X axis magnitude will be used to control the affordance\'s opacity")]
/// @brief Field _opacityTransform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____opacityTransform;

/// [SerializeField]
/// [Tooltip("The animators (canonically geometry and opacity) whose \'state\' variables should be controlled by this affordance")]
/// @brief Field _animators, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Animator>>  ____animators;

/// @brief Field _animationState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PanelWithManipulatorsBorderAffordanceController_AffordanceState  ____animationState;

/// @brief Field _lastKnownPositionParentSpace, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastKnownPositionParentSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance, ____geometry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance, ____opacityTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance, ____animators) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance, ____animationState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance, ____lastKnownPositionParentSpace) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PanelWithManipulatorsBorderAffordanceController_Affordance) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
