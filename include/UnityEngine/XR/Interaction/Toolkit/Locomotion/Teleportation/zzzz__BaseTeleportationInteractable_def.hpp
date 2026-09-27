#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/BaseTeleportationInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_TeleportTrigger_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__MatchOrientation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseTeleportationInteractable)
namespace GlobalNamespace {
struct BaseTeleportationInteractable_TeleportTrigger;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IXRReticleDirectionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class BaseTeleportationInteractable___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct MatchOrientation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
struct TeleportRequest;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportingEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportingEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class BaseTeleportationInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class BaseTeleportationInteractable___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "BaseTeleportationInteractable");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "BaseTeleportationInteractable/<>c");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable, UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable::TeleportTrigger, UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.MatchOrientation
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable
class CORDL_TYPE BaseTeleportationInteractable : public ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable {
public:
// Declarations
using TeleportTrigger = ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger;

using __c = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c;

 __declspec(property(get=get_filterSelectionByHitNormal, put=set_filterSelectionByHitNormal)) bool  filterSelectionByHitNormal;

/// @brief Field m_FilterSelectionByHitNormal, offset 0x1b4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FilterSelectionByHitNormal, put=__cordl_internal_set_m_FilterSelectionByHitNormal)) bool  m_FilterSelectionByHitNormal;

/// @brief Field m_MatchDirectionalInput, offset 0x1ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MatchDirectionalInput, put=__cordl_internal_set_m_MatchDirectionalInput)) bool  m_MatchDirectionalInput;

/// @brief Field m_MatchOrientation, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MatchOrientation, put=__cordl_internal_set_m_MatchOrientation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  m_MatchOrientation;

/// @brief Field m_TeleportForwardPerInteractor, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TeleportForwardPerInteractor, put=__cordl_internal_set_m_TeleportForwardPerInteractor)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*  m_TeleportForwardPerInteractor;

/// @brief Field m_TeleportTrigger, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TeleportTrigger, put=__cordl_internal_set_m_TeleportTrigger)) ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  m_TeleportTrigger;

/// @brief Field m_TeleportationProvider, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TeleportationProvider, put=__cordl_internal_set_m_TeleportationProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>  m_TeleportationProvider;

/// @brief Field m_Teleporting, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Teleporting, put=__cordl_internal_set_m_Teleporting)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  m_Teleporting;

/// @brief Field m_TeleportingEventArgs, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TeleportingEventArgs, put=__cordl_internal_set_m_TeleportingEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  m_TeleportingEventArgs;

/// @brief Field m_UpNormalToleranceDegrees, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpNormalToleranceDegrees, put=__cordl_internal_set_m_UpNormalToleranceDegrees)) float_t  m_UpNormalToleranceDegrees;

 __declspec(property(get=get_matchDirectionalInput, put=set_matchDirectionalInput)) bool  matchDirectionalInput;

 __declspec(property(get=get_matchOrientation, put=set_matchOrientation)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  matchOrientation;

 __declspec(property(get=get_teleportTrigger, put=set_teleportTrigger)) ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  teleportTrigger;

 __declspec(property(get=get_teleportationProvider, put=set_teleportationProvider)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>  teleportationProvider;

 __declspec(property(get=get_teleporting, put=set_teleporting)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  teleporting;

 __declspec(property(get=get_upNormalToleranceDegrees, put=set_upNormalToleranceDegrees)) float_t  upNormalToleranceDegrees;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*() noexcept;

/// @brief Method Awake, addr 0xb44c05c, size 0xc4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GenerateTeleportRequest, addr 0xb44c12c, size 0x8, virtual true, abstract: false, final false
inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// [Obsolete("GenerateTeleportRequest(XRBaseInteractor, RaycastHit, ref TeleportRequest) has been deprecated. Use GenerateTeleportRequest(IXRInteractor, RaycastHit, ref TeleportRequest) instead.", true)]
/// @brief Method GenerateTeleportRequest, addr 0xb44d1ac, size 0x7c, virtual true, abstract: false, final false
inline bool GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// @brief Method GetReticleDirection, addr 0xb44cf28, size 0x284, virtual true, abstract: false, final true
inline void GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  reticleUp, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  optionalReticleForward) ;

/// @brief Method IsSelectableBy, addr 0xb44cd74, size 0x1b4, virtual true, abstract: false, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable* New_ctor() ;

/// @brief Method OnActivated, addr 0xb44cccc, size 0x54, virtual true, abstract: false, final false
inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// @brief Method OnDeactivated, addr 0xb44cd20, size 0x54, virtual true, abstract: false, final false
inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb44cc20, size 0x54, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb44cc74, size 0x58, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method ProcessInteractable, addr 0xb44c6b8, size 0x15c, virtual true, abstract: false, final false
inline void ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method Reset, addr 0xb44c120, size 0xc, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SendTeleportRequest, addr 0xb44c134, size 0x444, virtual false, abstract: false, final false
inline bool SendTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method UpdateTeleportRequestRotation, addr 0xb44c578, size 0x140, virtual false, abstract: false, final false
inline void UpdateTeleportRequestRotation(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest) ;

/// [CompilerGenerated]
/// @brief Method <ProcessInteractable>g__CalculateTeleportForward|37_0, addr 0xb44c814, size 0x40c, virtual false, abstract: false, final false
inline void _ProcessInteractable_g__CalculateTeleportForward_37_0(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr bool const& __cordl_internal_get_m_FilterSelectionByHitNormal() const;

constexpr bool& __cordl_internal_get_m_FilterSelectionByHitNormal() ;

constexpr bool const& __cordl_internal_get_m_MatchDirectionalInput() const;

constexpr bool& __cordl_internal_get_m_MatchDirectionalInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation const& __cordl_internal_get_m_MatchOrientation() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation& __cordl_internal_get_m_MatchOrientation() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>* const& __cordl_internal_get_m_TeleportForwardPerInteractor() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*& __cordl_internal_get_m_TeleportForwardPerInteractor() ;

constexpr ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const& __cordl_internal_get_m_TeleportTrigger() const;

constexpr ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger& __cordl_internal_get_m_TeleportTrigger() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider> const& __cordl_internal_get_m_TeleportationProvider() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>& __cordl_internal_get_m_TeleportationProvider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent* const& __cordl_internal_get_m_Teleporting() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*& __cordl_internal_get_m_Teleporting() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>* const& __cordl_internal_get_m_TeleportingEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*& __cordl_internal_get_m_TeleportingEventArgs() ;

constexpr float_t const& __cordl_internal_get_m_UpNormalToleranceDegrees() const;

constexpr float_t& __cordl_internal_get_m_UpNormalToleranceDegrees() ;

constexpr void __cordl_internal_set_m_FilterSelectionByHitNormal(bool  value) ;

constexpr void __cordl_internal_set_m_MatchDirectionalInput(bool  value) ;

constexpr void __cordl_internal_set_m_MatchOrientation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  value) ;

constexpr void __cordl_internal_set_m_TeleportForwardPerInteractor(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_TeleportTrigger(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  value) ;

constexpr void __cordl_internal_set_m_TeleportationProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>  value) ;

constexpr void __cordl_internal_set_m_Teleporting(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  value) ;

constexpr void __cordl_internal_set_m_TeleportingEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_UpNormalToleranceDegrees(float_t  value) ;

/// @brief Method .ctor, addr 0xb44d228, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_filterSelectionByHitNormal, addr 0xb44c024, size 0x8, virtual false, abstract: false, final false
inline bool get_filterSelectionByHitNormal() ;

/// @brief Method get_matchDirectionalInput, addr 0xb44c004, size 0x8, virtual false, abstract: false, final false
inline bool get_matchDirectionalInput() ;

/// @brief Method get_matchOrientation, addr 0xb44bff4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation get_matchOrientation() ;

/// @brief Method get_teleportTrigger, addr 0xb44c014, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger get_teleportTrigger() ;

/// @brief Method get_teleportationProvider, addr 0xb44bfdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider> get_teleportationProvider() ;

/// @brief Method get_teleporting, addr 0xb44c044, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent* get_teleporting() ;

/// @brief Method get_upNormalToleranceDegrees, addr 0xb44c034, size 0x8, virtual false, abstract: false, final false
inline float_t get_upNormalToleranceDegrees() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IXRReticleDirectionProvider() noexcept;

/// @brief Method set_filterSelectionByHitNormal, addr 0xb44c02c, size 0x8, virtual false, abstract: false, final false
inline void set_filterSelectionByHitNormal(bool  value) ;

/// @brief Method set_matchDirectionalInput, addr 0xb44c00c, size 0x8, virtual false, abstract: false, final false
inline void set_matchDirectionalInput(bool  value) ;

/// @brief Method set_matchOrientation, addr 0xb44bffc, size 0x8, virtual false, abstract: false, final false
inline void set_matchOrientation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  value) ;

/// @brief Method set_teleportTrigger, addr 0xb44c01c, size 0x8, virtual false, abstract: false, final false
inline void set_teleportTrigger(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  value) ;

/// @brief Method set_teleportationProvider, addr 0xb44bfe4, size 0x10, virtual false, abstract: false, final false
inline void set_teleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*  value) ;

/// @brief Method set_teleporting, addr 0xb44c04c, size 0x10, virtual false, abstract: false, final false
inline void set_teleporting(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  value) ;

/// @brief Method set_upNormalToleranceDegrees, addr 0xb44c03c, size 0x8, virtual false, abstract: false, final false
inline void set_upNormalToleranceDegrees(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTeleportationInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTeleportationInteractable(BaseTeleportationInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTeleportationInteractable(BaseTeleportationInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11356};

/// @brief Field k_DefaultNormalToleranceDegrees offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultNormalToleranceDegrees{static_cast<float_t>(30.0f)};

/// @brief Field k_GenerateTeleportRequestDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GenerateTeleportRequestDeprecated{u"GenerateTeleportRequest(XRBaseInteractor, RaycastHit, ref TeleportRequest) has been deprecated. Use GenerateTeleportRequest(IXRInteractor, RaycastHit, ref TeleportRequest) instead."};

/// [SerializeField]
/// [Tooltip("The teleportation provider that this teleportation interactable will communicate teleport requests to. If no teleportation provider is configured, will attempt to find a teleportation provider.")]
/// @brief Field m_TeleportationProvider, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>  ___m_TeleportationProvider;

/// [SerializeField]
/// [Tooltip("How to orient the rig after teleportation.\nSet to:\n\nWorld Space Up to stay oriented according to the world space up vector.\n\nSet to Target Up to orient according to the target BaseTeleportationInteractable Transform\'s up vector.\n\nSet to Target Up And Forward to orient according to the target BaseTeleportationInteractable Transform\'s rotation.\n\nSet to None to maintain the same orientation before and after teleporting.")]
/// @brief Field m_MatchOrientation, offset: 0x1a8, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  ___m_MatchOrientation;

/// [SerializeField]
/// [Tooltip("Whether or not to rotate the rig to match the forward direction of the attach transform of the selecting interactor.")]
/// @brief Field m_MatchDirectionalInput, offset: 0x1ac, size: 0x1, def value: None
 bool  ___m_MatchDirectionalInput;

/// [SerializeField]
/// [Tooltip("Specify when the teleportation will be triggered. Options map to when the trigger is pressed or when it is released.")]
/// @brief Field m_TeleportTrigger, offset: 0x1b0, size: 0x4, def value: None
 ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  ___m_TeleportTrigger;

/// [SerializeField]
/// [Tooltip("When enabled, this teleportation interactable will only be selectable by a ray interactor if its current hit normal is aligned with this object\'s up vector.")]
/// @brief Field m_FilterSelectionByHitNormal, offset: 0x1b4, size: 0x1, def value: None
 bool  ___m_FilterSelectionByHitNormal;

/// [SerializeField]
/// [Tooltip("Sets the tolerance in degrees from this object\'s up vector for a hit normal to be considered aligned with the up vector.")]
/// @brief Field m_UpNormalToleranceDegrees, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___m_UpNormalToleranceDegrees;

/// [SerializeField]
/// @brief Field m_Teleporting, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  ___m_Teleporting;

/// @brief Field m_TeleportingEventArgs, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  ___m_TeleportingEventArgs;

/// @brief Field m_TeleportForwardPerInteractor, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*  ___m_TeleportForwardPerInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_TeleportationProvider) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_MatchOrientation) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_MatchDirectionalInput) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_TeleportTrigger) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_FilterSelectionByHitNormal) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_UpNormalToleranceDegrees) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_Teleporting) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_TeleportingEventArgs) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable, ___m_TeleportForwardPerInteractor) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable) == 0x1d8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable/<>c
class CORDL_TYPE BaseTeleportationInteractable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*  __9;

/// @brief Field <>9__46_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__46_0, put=setStaticF___9__46_0)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  __9__46_0;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c* New_ctor() ;

/// @brief Method <.ctor>b__46_0, addr 0xb44d4e0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs* __ctor_b__46_0() ;

/// @brief Method .ctor, addr 0xb44d4d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>* getStaticF___9__46_0() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*  value) ;

static inline void setStaticF___9__46_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTeleportationInteractable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTeleportationInteractable___c(BaseTeleportationInteractable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTeleportationInteractable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTeleportationInteractable___c(BaseTeleportationInteractable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11355};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
