#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleGhostDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_def.hpp"
CORDL_MODULE_EXPORT(ReticleGhostDrawer)
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataGhost;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabState;
}
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace Oculus::Interaction::Input {
class SyntheticHand;
}
namespace Oculus::Interaction {
class IHandVisual;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleGhostDrawer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*, "Oculus.Interaction.DistanceReticles", "ReticleGhostDrawer");
// Dependencies Oculus.Interaction.DistanceReticles.InteractorReticle`1<TReticleData>
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer
class CORDL_TYPE ReticleGhostDrawer : public ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<::UnityW<::Oculus::Interaction::DistanceReticles::ReticleDataGhost>> {
public:
// Declarations
 __declspec(property(get=get_HandGrabInteractor, put=set_HandGrabInteractor)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  HandGrabInteractor;

/// @brief Field HandVisual, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandVisual, put=__cordl_internal_set_HandVisual)) ::Oculus::Interaction::IHandVisual*  HandVisual;

 __declspec(property(get=get_InteractableComponent)) ::UnityW<::UnityEngine::Component>  InteractableComponent;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractorView*  Interactor;

/// @brief Field Transformer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Transformer, put=__cordl_internal_set_Transformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  Transformer;

/// @brief Field <HandGrabInteractor>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrabInteractor_k__BackingField, put=__cordl_internal_set__HandGrabInteractor_k__BackingField)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  _HandGrabInteractor_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _Interactor_k__BackingField;

/// @brief Field _areFingersFree, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__areFingersFree, put=__cordl_internal_set__areFingersFree)) bool  _areFingersFree;

/// @brief Field _handGrabInteractor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractor, put=__cordl_internal_set__handGrabInteractor)) ::UnityW<::UnityEngine::Object>  _handGrabInteractor;

/// @brief Field _handVisual, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__handVisual, put=__cordl_internal_set__handVisual)) ::UnityW<::UnityEngine::Object>  _handVisual;

/// @brief Field _isWristFree, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWristFree, put=__cordl_internal_set__isWristFree)) bool  _isWristFree;

/// @brief Field _syntheticHand, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__syntheticHand, put=__cordl_internal_set__syntheticHand)) ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  _syntheticHand;

/// @brief Method Align, addr 0xa4f0f9c, size 0x30, virtual true, abstract: false, final false
inline void Align(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*  data) ;

/// @brief Method Awake, addr 0xa4f0a0c, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Draw, addr 0xa4f0fcc, size 0xa8, virtual true, abstract: false, final false
inline void Draw(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*  data) ;

/// @brief Method FreeFingers, addr 0xa4f0e38, size 0x44, virtual false, abstract: false, final false
inline bool FreeFingers() ;

/// @brief Method FreeWrist, addr 0xa4f0e7c, size 0x48, virtual false, abstract: false, final false
inline bool FreeWrist() ;

/// @brief Method Hide, addr 0xa4f1074, size 0xc0, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method InjectAllReticleGhostDrawer, addr 0xa4f1134, size 0x3c, virtual false, abstract: false, final false
inline void InjectAllReticleGhostDrawer(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Input::SyntheticHand*  syntheticHand, ::Oculus::Interaction::IHandVisual*  visualHand) ;

/// @brief Method InjectHandGrabInteractor, addr 0xa4f1170, size 0x104, virtual false, abstract: false, final false
inline void InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// @brief Method InjectSyntheticHand, addr 0xa4f1344, size 0x8, virtual false, abstract: false, final false
inline void InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

/// @brief Method InjectVisualHand, addr 0xa4f1274, size 0xd0, virtual false, abstract: false, final false
inline void InjectVisualHand(::Oculus::Interaction::IHandVisual*  visualHand) ;

static inline ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer* New_ctor() ;

/// @brief Method Start, addr 0xa4f0aec, size 0xec, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFingers, addr 0xa4f0ec4, size 0xd8, virtual false, abstract: false, final false
inline void UpdateFingers(::Oculus::Interaction::HandGrab::HandPose*  handPose, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers) ;

/// @brief Method UpdateHandPose, addr 0xa4f0bd8, size 0x260, virtual false, abstract: false, final false
inline void UpdateHandPose(::Oculus::Interaction::HandGrab::IHandGrabState*  snapper) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__18_0, addr 0xa4f139c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__18_0() ;

constexpr ::Oculus::Interaction::IHandVisual* const& __cordl_internal_get_HandVisual() const;

constexpr ::Oculus::Interaction::IHandVisual*& __cordl_internal_get_HandVisual() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_Transformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_Transformer() ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& __cordl_internal_get__HandGrabInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& __cordl_internal_get__HandGrabInteractor_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr bool const& __cordl_internal_get__areFingersFree() const;

constexpr bool& __cordl_internal_get__areFingersFree() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handGrabInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handGrabInteractor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handVisual() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handVisual() ;

constexpr bool const& __cordl_internal_get__isWristFree() const;

constexpr bool& __cordl_internal_get__isWristFree() ;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& __cordl_internal_get__syntheticHand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& __cordl_internal_get__syntheticHand() ;

constexpr void __cordl_internal_set_HandVisual(::Oculus::Interaction::IHandVisual*  value) ;

constexpr void __cordl_internal_set_Transformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__HandGrabInteractor_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__areFingersFree(bool  value) ;

constexpr void __cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handVisual(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isWristFree(bool  value) ;

constexpr void __cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value) ;

/// @brief Method .ctor, addr 0xa4f134c, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrabInteractor, addr 0xa4f08f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* get_HandGrabInteractor() ;

/// @brief Method get_InteractableComponent, addr 0xa4f0918, size 0xf4, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_InteractableComponent() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa4f0908, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_Interactor() ;

/// [CompilerGenerated]
/// @brief Method set_HandGrabInteractor, addr 0xa4f0900, size 0x8, virtual false, abstract: false, final false
inline void set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa4f0910, size 0x8, virtual true, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractorView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleGhostDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleGhostDrawer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleGhostDrawer(ReticleGhostDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleGhostDrawer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleGhostDrawer(ReticleGhostDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16374};

/// [Tooltip("The hand grab interactor to use for pose data.")]
/// [FormerlySerializedAs("_handGrabber")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabInteractor), new[] { typeof(Oculus.Interaction.IInteractorView) })]
/// @brief Field _handGrabInteractor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handGrabInteractor;

/// [CompilerGenerated]
/// @brief Field <HandGrabInteractor>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  ____HandGrabInteractor_k__BackingField;

/// [Tooltip("Provides pose data for the ghost hand.")]
/// [FormerlySerializedAs("_modifier")]
/// [SerializeField]
/// @brief Field _syntheticHand, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  ____syntheticHand;

/// [Tooltip("Determines the visuals of the hand.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IHandVisual), new[] {  })]
/// [FormerlySerializedAs("_visualHand")]
/// @brief Field _handVisual, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handVisual;

/// @brief Field HandVisual, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::IHandVisual*  ___HandVisual;

/// @brief Field _areFingersFree, offset: 0x60, size: 0x1, def value: None
 bool  ____areFingersFree;

/// @brief Field _isWristFree, offset: 0x61, size: 0x1, def value: None
 bool  ____isWristFree;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____Interactor_k__BackingField;

/// @brief Field Transformer, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___Transformer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____handGrabInteractor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____HandGrabInteractor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____syntheticHand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____handVisual) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ___HandVisual) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____areFingersFree) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____isWristFree) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ____Interactor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer, ___Transformer) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
