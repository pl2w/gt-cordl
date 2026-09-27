#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRDirectInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRDirectInteractor)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TriggerContactMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRDirectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRDirectInteractor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__36");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/XR Direct Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor.html")]
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor
class CORDL_TYPE XRDirectInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor {
public:
// Declarations
using _UpdateCollidersAfterOnTriggerStay_d__36 = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36;

/// @brief Field <unsortedValidTargets>k__BackingField, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get__unsortedValidTargets_k__BackingField, put=__cordl_internal_set__unsortedValidTargets_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  _unsortedValidTargets_k__BackingField;

 __declspec(property(get=get_improveAccuracyWithSphereCollider, put=set_improveAccuracyWithSphereCollider)) bool  improveAccuracyWithSphereCollider;

/// @brief Field m_ContactsSortedThisFrame, offset 0x2d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ContactsSortedThisFrame, put=__cordl_internal_set_m_ContactsSortedThisFrame)) bool  m_ContactsSortedThisFrame;

/// @brief Field m_FirstFrame, offset 0x2d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstFrame, put=__cordl_internal_set_m_FirstFrame)) bool  m_FirstFrame;

/// @brief Field m_ImproveAccuracyWithSphereCollider, offset 0x269, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImproveAccuracyWithSphereCollider, put=__cordl_internal_set_m_ImproveAccuracyWithSphereCollider)) bool  m_ImproveAccuracyWithSphereCollider;

/// @brief Field m_LastSphereCastOrigin, offset 0x2b0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastSphereCastOrigin, put=__cordl_internal_set_m_LastSphereCastOrigin)) ::UnityEngine::Vector3  m_LastSphereCastOrigin;

/// @brief Field m_LocalPhysicsScene, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_OverlapSphereHits, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverlapSphereHits, put=__cordl_internal_set_m_OverlapSphereHits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  m_OverlapSphereHits;

/// @brief Field m_PhysicsLayerMask, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsLayerMask, put=__cordl_internal_set_m_PhysicsLayerMask)) ::UnityEngine::LayerMask  m_PhysicsLayerMask;

/// @brief Field m_PhysicsTriggerInteraction, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsTriggerInteraction, put=__cordl_internal_set_m_PhysicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_PhysicsTriggerInteraction;

/// @brief Field m_SortedValidTargets, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortedValidTargets, put=__cordl_internal_set_m_SortedValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_SortedValidTargets;

/// @brief Field m_SphereCastHits, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SphereCastHits, put=__cordl_internal_set_m_SphereCastHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_SphereCastHits;

/// @brief Field m_SphereCollider, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SphereCollider, put=__cordl_internal_set_m_SphereCollider)) ::UnityW<::UnityEngine::SphereCollider>  m_SphereCollider;

/// @brief Field m_StayedColliders, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StayedColliders, put=__cordl_internal_set_m_StayedColliders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  m_StayedColliders;

/// @brief Field m_TriggerContactMonitor, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerContactMonitor, put=__cordl_internal_set_m_TriggerContactMonitor)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  m_TriggerContactMonitor;

/// @brief Field m_UpdateCollidersAfterTriggerStay, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdateCollidersAfterTriggerStay, put=__cordl_internal_set_m_UpdateCollidersAfterTriggerStay)) ::System::Collections::IEnumerator*  m_UpdateCollidersAfterTriggerStay;

/// @brief Field m_UsingSphereColliderAccuracyImprovement, offset 0x298, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UsingSphereColliderAccuracyImprovement, put=__cordl_internal_set_m_UsingSphereColliderAccuracyImprovement)) bool  m_UsingSphereColliderAccuracyImprovement;

 __declspec(property(get=get_physicsLayerMask, put=set_physicsLayerMask)) ::UnityEngine::LayerMask  physicsLayerMask;

 __declspec(property(get=get_physicsTriggerInteraction, put=set_physicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  physicsTriggerInteraction;

/// @brief Field s_WaitForFixedUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WaitForFixedUpdate, put=setStaticF_s_WaitForFixedUpdate)) ::UnityEngine::WaitForFixedUpdate*  s_WaitForFixedUpdate;

 __declspec(property(get=get_unsortedValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedValidTargets;

 __declspec(property(get=get_usingSphereColliderAccuracyImprovement)) bool  usingSphereColliderAccuracyImprovement;

/// @brief Method Awake, addr 0xb46cbb0, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanHover, addr 0xb46d7dc, size 0x14, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method CanSelect, addr 0xb46d7f0, size 0x14, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method EvaluateSphereOverlap, addr 0xb46d240, size 0x314, virtual false, abstract: false, final false
inline void EvaluateSphereOverlap() ;

/// @brief Method GetValidTargets, addr 0xb46d5cc, size 0x210, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor* New_ctor() ;

/// @brief Method OnContactAdded, addr 0xb46daf4, size 0xdc, virtual false, abstract: false, final false
inline void OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method OnContactRemoved, addr 0xb46dbe4, size 0x64, virtual false, abstract: false, final false
inline void OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method OnDisable, addr 0xb46d014, size 0x110, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb46ce34, size 0x110, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInteractableRegistered, addr 0xb46da90, size 0x64, virtual false, abstract: false, final false
inline void OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method OnInteractableUnregistered, addr 0xb46dbd0, size 0x14, virtual false, abstract: false, final false
inline void OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0xb46d804, size 0x184, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnTriggerEnter, addr 0xb46d124, size 0x24, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0xb46d1b4, size 0x24, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0xb46d148, size 0x6c, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method OnUnregistered, addr 0xb46d988, size 0x108, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method PreprocessInteractor, addr 0xb46d200, size 0x40, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb46d554, size 0x78, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ResetCollidersAndValidTargets, addr 0xb46cf44, size 0xd0, virtual false, abstract: false, final false
inline void ResetCollidersAndValidTargets() ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor::<UpdateCollidersAfterOnTriggerStay>d__36))]
/// @brief Method UpdateCollidersAfterOnTriggerStay, addr 0xb46cc24, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateCollidersAfterOnTriggerStay() ;

/// @brief Method ValidateColliderConfiguration, addr 0xb46cc90, size 0x1a4, virtual false, abstract: false, final false
inline void ValidateColliderConfiguration() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get__unsortedValidTargets_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get__unsortedValidTargets_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_ContactsSortedThisFrame() const;

constexpr bool& __cordl_internal_get_m_ContactsSortedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_FirstFrame() const;

constexpr bool& __cordl_internal_get_m_FirstFrame() ;

constexpr bool const& __cordl_internal_get_m_ImproveAccuracyWithSphereCollider() const;

constexpr bool& __cordl_internal_get_m_ImproveAccuracyWithSphereCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastSphereCastOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastSphereCastOrigin() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_m_OverlapSphereHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_m_OverlapSphereHits() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_PhysicsLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_PhysicsLayerMask() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_PhysicsTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_PhysicsTriggerInteraction() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_SortedValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_SortedValidTargets() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_SphereCastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_SphereCastHits() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_m_SphereCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_m_SphereCollider() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_StayedColliders() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_StayedColliders() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* const& __cordl_internal_get_m_TriggerContactMonitor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& __cordl_internal_get_m_TriggerContactMonitor() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_m_UpdateCollidersAfterTriggerStay() ;

constexpr bool const& __cordl_internal_get_m_UsingSphereColliderAccuracyImprovement() const;

constexpr bool& __cordl_internal_get_m_UsingSphereColliderAccuracyImprovement() ;

constexpr void __cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_ContactsSortedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_FirstFrame(bool  value) ;

constexpr void __cordl_internal_set_m_ImproveAccuracyWithSphereCollider(bool  value) ;

constexpr void __cordl_internal_set_m_LastSphereCastOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_m_SortedValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_SphereCastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_SphereCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  value) ;

constexpr void __cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_m_UsingSphereColliderAccuracyImprovement(bool  value) ;

/// @brief Method .ctor, addr 0xb46dc48, size 0x224, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::WaitForFixedUpdate* getStaticF_s_WaitForFixedUpdate() ;

/// @brief Method get_improveAccuracyWithSphereCollider, addr 0xb46cb70, size 0x8, virtual false, abstract: false, final false
inline bool get_improveAccuracyWithSphereCollider() ;

/// @brief Method get_physicsLayerMask, addr 0xb46cb88, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_physicsLayerMask() ;

/// @brief Method get_physicsTriggerInteraction, addr 0xb46cb98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_physicsTriggerInteraction() ;

/// [CompilerGenerated]
/// @brief Method get_unsortedValidTargets, addr 0xb46cba8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* get_unsortedValidTargets() ;

/// @brief Method get_usingSphereColliderAccuracyImprovement, addr 0xb46cb80, size 0x8, virtual false, abstract: false, final false
inline bool get_usingSphereColliderAccuracyImprovement() ;

static inline void setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value) ;

/// @brief Method set_improveAccuracyWithSphereCollider, addr 0xb46cb78, size 0x8, virtual false, abstract: false, final false
inline void set_improveAccuracyWithSphereCollider(bool  value) ;

/// @brief Method set_physicsLayerMask, addr 0xb46cb90, size 0x8, virtual false, abstract: false, final false
inline void set_physicsLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_physicsTriggerInteraction, addr 0xb46cba0, size 0x8, virtual false, abstract: false, final false
inline void set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDirectInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDirectInteractor(XRDirectInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDirectInteractor(XRDirectInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11452};

/// [SerializeField]
/// @brief Field m_ImproveAccuracyWithSphereCollider, offset: 0x269, size: 0x1, def value: None
 bool  ___m_ImproveAccuracyWithSphereCollider;

/// [SerializeField]
/// @brief Field m_PhysicsLayerMask, offset: 0x26c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_PhysicsLayerMask;

/// [SerializeField]
/// @brief Field m_PhysicsTriggerInteraction, offset: 0x270, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_PhysicsTriggerInteraction;

/// [CompilerGenerated]
/// @brief Field <unsortedValidTargets>k__BackingField, offset: 0x278, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ____unsortedValidTargets_k__BackingField;

/// @brief Field m_StayedColliders, offset: 0x280, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ___m_StayedColliders;

/// @brief Field m_TriggerContactMonitor, offset: 0x288, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  ___m_TriggerContactMonitor;

/// @brief Field m_UpdateCollidersAfterTriggerStay, offset: 0x290, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___m_UpdateCollidersAfterTriggerStay;

/// @brief Field m_UsingSphereColliderAccuracyImprovement, offset: 0x298, size: 0x1, def value: None
 bool  ___m_UsingSphereColliderAccuracyImprovement;

/// @brief Field m_SphereCollider, offset: 0x2a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___m_SphereCollider;

/// @brief Field m_LocalPhysicsScene, offset: 0x2a8, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_LastSphereCastOrigin, offset: 0x2b0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastSphereCastOrigin;

/// @brief Field m_OverlapSphereHits, offset: 0x2c0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___m_OverlapSphereHits;

/// @brief Field m_SphereCastHits, offset: 0x2c8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_SphereCastHits;

/// @brief Field m_FirstFrame, offset: 0x2d0, size: 0x1, def value: None
 bool  ___m_FirstFrame;

/// @brief Field m_ContactsSortedThisFrame, offset: 0x2d1, size: 0x1, def value: None
 bool  ___m_ContactsSortedThisFrame;

/// @brief Field m_SortedValidTargets, offset: 0x2d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_SortedValidTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_ImproveAccuracyWithSphereCollider) == 0x269, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_PhysicsLayerMask) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_PhysicsTriggerInteraction) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ____unsortedValidTargets_k__BackingField) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_StayedColliders) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_TriggerContactMonitor) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_UpdateCollidersAfterTriggerStay) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_UsingSphereColliderAccuracyImprovement) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_SphereCollider) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_LocalPhysicsScene) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_LastSphereCastOrigin) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_OverlapSphereHits) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_SphereCastHits) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_FirstFrame) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_ContactsSortedThisFrame) == 0x2d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor, ___m_SortedValidTargets) == 0x2d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor) == 0x2e0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor/<UpdateCollidersAfterOnTriggerStay>d__36
class CORDL_TYPE XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb46deec, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb46dfa8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb46dfb0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb46dfe8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb46dee8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb46d1d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36(XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36(XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11451};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
