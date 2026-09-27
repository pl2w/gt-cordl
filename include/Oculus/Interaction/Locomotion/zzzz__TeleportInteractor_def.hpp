#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportInteractor)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
struct TeleportHit;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractable;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_AcceptDestinationComputer;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateDelegate;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateTiebreakerDelegate;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor___c;
}
namespace Oculus::Interaction {
class IPolyline;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_AcceptDestinationComputer;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateDelegate;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor_ComputeCandidateTiebreakerDelegate;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractor*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractor*, "Oculus.Interaction.Locomotion", "TeleportInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*, "Oculus.Interaction.Locomotion", "TeleportInteractor/AcceptDestinationComputer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*, "Oculus.Interaction.Locomotion", "TeleportInteractor/ComputeCandidateDelegate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*, "Oculus.Interaction.Locomotion", "TeleportInteractor/ComputeCandidateTiebreakerDelegate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportInteractor___c*, "Oculus.Interaction.Locomotion", "TeleportInteractor/<>c");
// Dependencies Oculus.Interaction.Interactor`2<TInteractor, TInteractable>, Oculus.Interaction.Locomotion.TeleportHit
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractor
class CORDL_TYPE TeleportInteractor : public ::Oculus::Interaction::Interactor_2<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>> {
public:
// Declarations
using AcceptDestinationComputer = ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer;

using ComputeCandidateDelegate = ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate;

using ComputeCandidateTiebreakerDelegate = ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate;

using __c = ::Oculus::Interaction::Locomotion::TeleportInteractor___c;

 __declspec(property(get=get_AcceptDestination, put=set_AcceptDestination)) ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  AcceptDestination;

 __declspec(property(get=get_ArcEnd)) ::Oculus::Interaction::Locomotion::TeleportHit  ArcEnd;

 __declspec(property(get=get_ArcOrigin)) ::UnityEngine::Pose  ArcOrigin;

/// @brief [Obsolete("This property is obsolete, create a ComputeCandidateDelegate if you need custom candidate computing logic")]
 __declspec(property(get=get_EqualDistanceThreshold, put=set_EqualDistanceThreshold)) float_t  EqualDistanceThreshold;

/// @brief [Obsolete("This property is obsolete, create a ComputeCandidateDelegate if you need custom candidate computing logic")]
 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

 __declspec(property(get=get_TeleportArc, put=set_TeleportArc)) ::Oculus::Interaction::IPolyline*  TeleportArc;

 __declspec(property(get=get_TeleportTarget)) ::UnityEngine::Pose  TeleportTarget;

/// @brief Field <Hmd>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field <TeleportArc>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__TeleportArc_k__BackingField, put=__cordl_internal_set__TeleportArc_k__BackingField)) ::Oculus::Interaction::IPolyline*  _TeleportArc_k__BackingField;

/// @brief Field _acceptDestination, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__acceptDestination, put=__cordl_internal_set__acceptDestination)) ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  _acceptDestination;

/// @brief Field _arcEnd, offset 0x148, size 0x28 
 __declspec(property(get=__cordl_internal_get__arcEnd, put=__cordl_internal_set__arcEnd)) ::Oculus::Interaction::Locomotion::TeleportHit  _arcEnd;

/// @brief Field _computeCandidate, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeCandidate, put=__cordl_internal_set__computeCandidate)) ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  _computeCandidate;

/// @brief Field _computeCandidateTiebreaker, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeCandidateTiebreaker, put=__cordl_internal_set__computeCandidateTiebreaker)) ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  _computeCandidateTiebreaker;

/// @brief Field _equalDistanceThreshold, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__equalDistanceThreshold, put=__cordl_internal_set__equalDistanceThreshold)) float_t  _equalDistanceThreshold;

/// @brief Field _hmd, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _selector, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _teleportArc, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__teleportArc, put=__cordl_internal_set__teleportArc)) ::UnityW<::UnityEngine::Object>  _teleportArc;

/// @brief Field _whenLocomotionPerformed, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionPerformed, put=__cordl_internal_set__whenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _whenLocomotionPerformed;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4ce410, size 0x15c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanSelect, addr 0xa4ce934, size 0x220, virtual true, abstract: false, final false
inline bool CanSelect(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable) ;

/// @brief Method ComputeCandidate, addr 0xa4cee64, size 0x13c, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> ComputeCandidate() ;

/// @brief Method ComputeCandidateTiebreaker, addr 0xa4cefa0, size 0x98, virtual true, abstract: false, final false
inline int32_t ComputeCandidateTiebreaker(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b) ;

/// @brief Method HasValidDestination, addr 0xa4ceb54, size 0xdc, virtual false, abstract: false, final false
inline bool HasValidDestination() ;

/// @brief Method InjectAllTeleportInteractor, addr 0xa4cf038, size 0x4, virtual false, abstract: false, final false
inline void InjectAllTeleportInteractor(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InjectOptionalCandidateComputer, addr 0xa4cf1f0, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalCandidateComputer(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  candidateComputer) ;

/// [Obsolete("This property is no longer in use, create a ComputeCandidateDelegate if you need custom candidate computing logic")]
/// @brief Method InjectOptionalHmd, addr 0xa4cf120, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method InjectOptionalTeleportArc, addr 0xa4ce864, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalTeleportArc(::Oculus::Interaction::IPolyline*  teleportArc) ;

/// @brief Method InjectSelector, addr 0xa4cf03c, size 0xe4, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InteractableSelected, addr 0xa4cec30, size 0x234, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable) ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa4ce678, size 0x1ec, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__36_0, addr 0xa4cf310, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__36_0() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::Oculus::Interaction::IPolyline* const& __cordl_internal_get__TeleportArc_k__BackingField() const;

constexpr ::Oculus::Interaction::IPolyline*& __cordl_internal_get__TeleportArc_k__BackingField() ;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* const& __cordl_internal_get__acceptDestination() const;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*& __cordl_internal_get__acceptDestination() ;

constexpr ::Oculus::Interaction::Locomotion::TeleportHit const& __cordl_internal_get__arcEnd() const;

constexpr ::Oculus::Interaction::Locomotion::TeleportHit& __cordl_internal_get__arcEnd() ;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate* const& __cordl_internal_get__computeCandidate() const;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*& __cordl_internal_get__computeCandidate() ;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate* const& __cordl_internal_get__computeCandidateTiebreaker() const;

constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*& __cordl_internal_get__computeCandidateTiebreaker() ;

constexpr float_t const& __cordl_internal_get__equalDistanceThreshold() const;

constexpr float_t& __cordl_internal_get__equalDistanceThreshold() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__teleportArc() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__teleportArc() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__whenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__whenLocomotionPerformed() ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__TeleportArc_k__BackingField(::Oculus::Interaction::IPolyline*  value) ;

constexpr void __cordl_internal_set__acceptDestination(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  value) ;

constexpr void __cordl_internal_set__arcEnd(::Oculus::Interaction::Locomotion::TeleportHit  value) ;

constexpr void __cordl_internal_set__computeCandidate(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  value) ;

constexpr void __cordl_internal_set__computeCandidateTiebreaker(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  value) ;

constexpr void __cordl_internal_set__equalDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__teleportArc(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__whenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method .ctor, addr 0xa4cf200, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionPerformed, addr 0xa4ce2a8, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method get_AcceptDestination, addr 0xa4ce3f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* get_AcceptDestination() ;

/// @brief Method get_ArcEnd, addr 0xa4ce038, size 0x18, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::TeleportHit get_ArcEnd() ;

/// @brief Method get_ArcOrigin, addr 0xa4cdeac, size 0x18c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_ArcOrigin() ;

/// @brief Method get_EqualDistanceThreshold, addr 0xa4cde84, size 0x8, virtual false, abstract: false, final false
inline float_t get_EqualDistanceThreshold() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa4cde94, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method get_TeleportArc, addr 0xa4cde6c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPolyline* get_TeleportArc() ;

/// @brief Method get_TeleportTarget, addr 0xa4ce050, size 0x258, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_TeleportTarget() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4ce350, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method set_AcceptDestination, addr 0xa4ce400, size 0x10, virtual false, abstract: false, final false
inline void set_AcceptDestination(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  value) ;

/// @brief Method set_EqualDistanceThreshold, addr 0xa4cde8c, size 0x8, virtual false, abstract: false, final false
inline void set_EqualDistanceThreshold(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa4cde9c, size 0x10, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TeleportArc, addr 0xa4cde74, size 0x10, virtual false, abstract: false, final false
inline void set_TeleportArc(::Oculus::Interaction::IPolyline*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractor(TeleportInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractor(TeleportInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16286};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// [Tooltip("A selector indicating when the Interactor shouldSelect or Unselect the best available interactable.Typically when using controllers this selector is driven by the joystick value,and for hands it is driven by the index pinch value.")]
/// @brief Field _selector, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPolyline), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// [Tooltip("Specifies the shape of the arc used for detecting available interactables.If none is provided TeleportArcGravity will be used.")]
/// @brief Field _teleportArc, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____teleportArc;

/// [CompilerGenerated]
/// @brief Field <TeleportArc>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::Oculus::Interaction::IPolyline*  ____TeleportArc_k__BackingField;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Tooltip("(Meters, World) The threshold below which distances to a interactable are treated as equal for the purposes of ranking.")]
/// @brief Field _equalDistanceThreshold, offset: 0x130, size: 0x4, def value: None
 float_t  ____equalDistanceThreshold;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// [Tooltip("When provided, the Interactor will perform an extra check to ensurenothing is blocking the line between the Hmd and the teleport origin")]
/// @brief Field _hmd, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// @brief Field _arcEnd, offset: 0x148, size: 0x28, def value: None
 ::Oculus::Interaction::Locomotion::TeleportHit  ____arcEnd;

/// @brief Field _whenLocomotionPerformed, offset: 0x170, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____whenLocomotionPerformed;

/// @brief Field _acceptDestination, offset: 0x178, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  ____acceptDestination;

/// @brief Field _computeCandidate, offset: 0x180, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  ____computeCandidate;

/// @brief Field _computeCandidateTiebreaker, offset: 0x188, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  ____computeCandidateTiebreaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____selector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____teleportArc) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____TeleportArc_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____equalDistanceThreshold) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____hmd) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____Hmd_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____arcEnd) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____whenLocomotionPerformed) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____acceptDestination) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____computeCandidate) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportInteractor, ____computeCandidateTiebreaker) == 0x188, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractor) == 0x190, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractor/<>c
class CORDL_TYPE TeleportInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::TeleportInteractor___c*  __9;

/// @brief Field <>9__47_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_0, put=setStaticF___9__47_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__47_0;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__47_0, addr 0xa4cf73c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__47_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4cf734, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__47_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::TeleportInteractor___c*  value) ;

static inline void setStaticF___9__47_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractor___c(TeleportInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractor___c(TeleportInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractor/ComputeCandidateDelegate
class CORDL_TYPE TeleportInteractor_ComputeCandidateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa4cf5d8, size 0xdc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa4cf6b4, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa4cf5c4, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> Invoke(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose) ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa4cc3c4, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractor_ComputeCandidateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_ComputeCandidateDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractor_ComputeCandidateDelegate(TeleportInteractor_ComputeCandidateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_ComputeCandidateDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractor_ComputeCandidateDelegate(TeleportInteractor_ComputeCandidateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16284};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractor/ComputeCandidateTiebreakerDelegate
class CORDL_TYPE TeleportInteractor_ComputeCandidateTiebreakerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa4cf574, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa4cf59c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa4cf560, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b) ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa4ce56c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractor_ComputeCandidateTiebreakerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_ComputeCandidateTiebreakerDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractor_ComputeCandidateTiebreakerDelegate(TeleportInteractor_ComputeCandidateTiebreakerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_ComputeCandidateTiebreakerDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractor_ComputeCandidateTiebreakerDelegate(TeleportInteractor_ComputeCandidateTiebreakerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16283};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportInteractor/AcceptDestinationComputer
class CORDL_TYPE TeleportInteractor_AcceptDestinationComputer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa4cf4a4, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable, ::UnityEngine::Pose  destination, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa4cf538, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa4cf464, size 0x40, virtual true, abstract: false, final false
inline bool Invoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable, ::UnityEngine::Pose  destination) ;

static inline ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa4cf358, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportInteractor_AcceptDestinationComputer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_AcceptDestinationComputer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportInteractor_AcceptDestinationComputer(TeleportInteractor_AcceptDestinationComputer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportInteractor_AcceptDestinationComputer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportInteractor_AcceptDestinationComputer(TeleportInteractor_AcceptDestinationComputer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
