#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRPokeInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRPokeInteractor)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace GlobalNamespace {
struct XRPokeInteractor_PokeCollision;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityTracker;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IPokeStateDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRPokeFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct QueryUIDocumentInteraction;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIHoverExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIToolkitPokeHandler;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRPokeInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRPokeInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/Interactors/XR Poke Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRPokeInteractor.html")]
// Dependencies UnityEngine.Collider, UnityEngine.Component, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor, UnityEngine.XR.Interaction.Toolkit.UI.QueryUIDocumentInteraction
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRPokeInteractor
class CORDL_TYPE XRPokeInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor {
public:
// Declarations
using PokeCollision = ::GlobalNamespace::XRPokeInteractor_PokeCollision;

/// @brief Field <attachPointVelocityTracker>k__BackingField, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachPointVelocityTracker_k__BackingField, put=__cordl_internal_set__attachPointVelocityTracker_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  _attachPointVelocityTracker_k__BackingField;

 __declspec(property(get=get_attachPointVelocityTracker, put=set_attachPointVelocityTracker)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  attachPointVelocityTracker;

 __declspec(property(get=get_canProcessUIToolkit)) bool  canProcessUIToolkit;

 __declspec(property(get=get_clickUIOnDown, put=set_clickUIOnDown)) bool  clickUIOnDown;

 __declspec(property(get=get_debugVisualizationsEnabled, put=set_debugVisualizationsEnabled)) bool  debugVisualizationsEnabled;

 __declspec(property(get=get_enableMultiPick, put=set_enableMultiPick)) bool  enableMultiPick;

 __declspec(property(get=get_enableUIInteraction, put=set_enableUIInteraction)) bool  enableUIInteraction;

/// @brief Field m_ClickUIOnDown, offset 0x162, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ClickUIOnDown, put=__cordl_internal_set_m_ClickUIOnDown)) bool  m_ClickUIOnDown;

/// @brief Field m_CurrentPokeFilter, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentPokeFilter, put=__cordl_internal_set_m_CurrentPokeFilter)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  m_CurrentPokeFilter;

/// @brief Field m_CurrentPokeTarget, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentPokeTarget, put=__cordl_internal_set_m_CurrentPokeTarget)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  m_CurrentPokeTarget;

/// @brief Field m_DebugVisualizationsEnabled, offset 0x163, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DebugVisualizationsEnabled, put=__cordl_internal_set_m_DebugVisualizationsEnabled)) bool  m_DebugVisualizationsEnabled;

/// @brief Field m_EnableMultiPick, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableMultiPick, put=__cordl_internal_set_m_EnableMultiPick)) bool  m_EnableMultiPick;

/// @brief Field m_EnableUIInteraction, offset 0x161, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableUIInteraction, put=__cordl_internal_set_m_EnableUIInteraction)) bool  m_EnableUIInteraction;

/// @brief Field m_FirstFrame, offset 0x1a4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstFrame, put=__cordl_internal_set_m_FirstFrame)) bool  m_FirstFrame;

/// @brief Field m_HoverDebugRenderer, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverDebugRenderer, put=__cordl_internal_set_m_HoverDebugRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  m_HoverDebugRenderer;

/// @brief Field m_HoverDebugSphere, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverDebugSphere, put=__cordl_internal_set_m_HoverDebugSphere)) ::UnityW<::UnityEngine::GameObject>  m_HoverDebugSphere;

/// @brief Field m_InteractableSelectFilters, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableSelectFilters, put=__cordl_internal_set_m_InteractableSelectFilters)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  m_InteractableSelectFilters;

/// @brief Field m_LastPokeInteractionPoint, offset 0x198, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastPokeInteractionPoint, put=__cordl_internal_set_m_LastPokeInteractionPoint)) ::UnityEngine::Vector3  m_LastPokeInteractionPoint;

/// @brief Field m_LocalPhysicsScene, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_OverlapSphereHits, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverlapSphereHits, put=__cordl_internal_set_m_OverlapSphereHits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  m_OverlapSphereHits;

/// @brief Field m_PhysicsLayerMask, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsLayerMask, put=__cordl_internal_set_m_PhysicsLayerMask)) ::UnityEngine::LayerMask  m_PhysicsLayerMask;

/// @brief Field m_PhysicsTriggerInteraction, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsTriggerInteraction, put=__cordl_internal_set_m_PhysicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_PhysicsTriggerInteraction;

/// @brief Field m_PokeDepth, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeDepth, put=__cordl_internal_set_m_PokeDepth)) float_t  m_PokeDepth;

/// @brief Field m_PokeHoverRadius, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeHoverRadius, put=__cordl_internal_set_m_PokeHoverRadius)) float_t  m_PokeHoverRadius;

/// @brief Field m_PokeInteractionOffset, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeInteractionOffset, put=__cordl_internal_set_m_PokeInteractionOffset)) float_t  m_PokeInteractionOffset;

/// @brief Field m_PokeSelectWidth, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeSelectWidth, put=__cordl_internal_set_m_PokeSelectWidth)) float_t  m_PokeSelectWidth;

/// @brief Field m_PokeStateData, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeStateData, put=__cordl_internal_set_m_PokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  m_PokeStateData;

/// @brief Field m_PokeTargets, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeTargets, put=__cordl_internal_set_m_PokeTargets)) ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*  m_PokeTargets;

/// @brief Field m_PokeWidth, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeWidth, put=__cordl_internal_set_m_PokeWidth)) float_t  m_PokeWidth;

/// @brief Field m_PositionProvider, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionProvider, put=__cordl_internal_set_m_PositionProvider)) ::System::Func_1<::UnityEngine::Vector3>*  m_PositionProvider;

/// @brief Field m_RegisteredUIInteractorCache, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredUIInteractorCache, put=__cordl_internal_set_m_RegisteredUIInteractorCache)) ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  m_RegisteredUIInteractorCache;

/// @brief Field m_RequirePokeFilter, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequirePokeFilter, put=__cordl_internal_set_m_RequirePokeFilter)) bool  m_RequirePokeFilter;

/// @brief Field m_SphereCastHits, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SphereCastHits, put=__cordl_internal_set_m_SphereCastHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_SphereCastHits;

/// @brief Field m_UIDocumentTriggerInteraction, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UIDocumentTriggerInteraction, put=__cordl_internal_set_m_UIDocumentTriggerInteraction)) ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  m_UIDocumentTriggerInteraction;

/// @brief Field m_UIHoverEntered, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverEntered, put=__cordl_internal_set_m_UIHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  m_UIHoverEntered;

/// @brief Field m_UIHoverExited, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverExited, put=__cordl_internal_set_m_UIHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  m_UIHoverExited;

/// @brief Field m_UIToolkitPokeHandler, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIToolkitPokeHandler, put=__cordl_internal_set_m_UIToolkitPokeHandler)) ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*  m_UIToolkitPokeHandler;

/// @brief Field m_ValidTargets, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidTargets, put=__cordl_internal_set_m_ValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_ValidTargets;

 __declspec(property(get=get_physicsLayerMask, put=set_physicsLayerMask)) ::UnityEngine::LayerMask  physicsLayerMask;

 __declspec(property(get=get_physicsTriggerInteraction, put=set_physicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  physicsTriggerInteraction;

 __declspec(property(get=get_pokeDepth, put=set_pokeDepth)) float_t  pokeDepth;

 __declspec(property(get=get_pokeHoverRadius, put=set_pokeHoverRadius)) float_t  pokeHoverRadius;

 __declspec(property(get=get_pokeInteractionOffset, put=set_pokeInteractionOffset)) float_t  pokeInteractionOffset;

 __declspec(property(get=get_pokeSelectWidth, put=set_pokeSelectWidth)) float_t  pokeSelectWidth;

 __declspec(property(get=get_pokeStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  pokeStateData;

 __declspec(property(get=get_pokeWidth, put=set_pokeWidth)) float_t  pokeWidth;

 __declspec(property(get=get_requirePokeFilter, put=set_requirePokeFilter)) bool  requirePokeFilter;

/// @brief Field s_Results, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Results, put=setStaticF_s_Results)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  s_Results;

/// @brief Field s_ValidTargetsScratchMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ValidTargetsScratchMap, put=setStaticF_s_ValidTargetsScratchMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*  s_ValidTargetsScratchMap;

 __declspec(property(get=get_uiDocumentTriggerInteraction, put=set_uiDocumentTriggerInteraction)) ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  uiDocumentTriggerInteraction;

 __declspec(property(get=get_uiHoverEntered, put=set_uiHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  uiHoverEntered;

 __declspec(property(get=get_uiHoverExited, put=set_uiHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  uiHoverExited;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

/// @brief Method Awake, addr 0xb474d94, size 0xf8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateSphereOverlap, addr 0xb475ccc, size 0x3a0, virtual false, abstract: false, final false
inline int32_t EvaluateSphereOverlap() ;

/// @brief Method FindPokeTarget, addr 0xb47619c, size 0xec, virtual false, abstract: false, final false
inline bool FindPokeTarget(::UnityEngine::Collider*  hitCollider, ::by_ref<::GlobalNamespace::XRPokeInteractor_PokeCollision>  newPokeCollision) ;

/// @brief Method GetAttachPointAngularVelocity, addr 0xb476d30, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAttachPointAngularVelocity() ;

/// @brief Method GetAttachPointVelocity, addr 0xb476c64, size 0xcc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAttachPointVelocity() ;

/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetOrAddComponent(::UnityEngine::GameObject*  go) ;

/// @brief Method GetPokePosition, addr 0xb476958, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPokePosition() ;

/// @brief Method GetValidTargets, addr 0xb47606c, size 0x130, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb475258, size 0x28, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4751c0, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb474e8c, size 0xc4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntering, addr 0xb476c60, size 0x4, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb476b28, size 0x138, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnUIHoverEntered, addr 0xb476a68, size 0x60, virtual true, abstract: false, final false
inline void OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method OnUIHoverExited, addr 0xb476ac8, size 0x60, virtual true, abstract: false, final false
inline void OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method PreprocessInteractor, addr 0xb475280, size 0x180, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb475c10, size 0x10, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessPokeStateData, addr 0xb4759e8, size 0x228, virtual false, abstract: false, final false
inline void ProcessPokeStateData() ;

/// @brief Method ProcessValidInteraction, addr 0xb476570, size 0xf8, virtual false, abstract: false, final false
inline void ProcessValidInteraction(::UnityEngine::Collider*  hitCollider, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  pokeFilter) ;

/// @brief Method RegisterValidTargets, addr 0xb475400, size 0x5e8, virtual false, abstract: false, final false
inline bool RegisterValidTargets(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>  currentTarget, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>  pokeFilter) ;

/// @brief Method SetDebugObjectVisibility, addr 0xb474f50, size 0x270, virtual false, abstract: false, final false
inline void SetDebugObjectVisibility(bool  isVisible) ;

/// @brief Method TryGetPokeFilter, addr 0xb476288, size 0x2e8, virtual false, abstract: false, final false
inline bool TryGetPokeFilter(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>  pokeFilter) ;

/// @brief Method TryGetUIModel, addr 0xb476984, size 0xc4, virtual true, abstract: false, final true
inline bool TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered, addr 0xb476a48, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited, addr 0xb476a58, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UpdateDebugVisuals, addr 0xb475c20, size 0xac, virtual false, abstract: false, final false
inline void UpdateDebugVisuals() ;

/// @brief Method UpdateUIModel, addr 0xb476668, size 0x2f0, virtual true, abstract: false, final false
inline void UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UpdateUIRegistration, addr 0xb474bdc, size 0x104, virtual true, abstract: false, final false
inline void UpdateUIRegistration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* const& __cordl_internal_get__attachPointVelocityTracker_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*& __cordl_internal_get__attachPointVelocityTracker_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_ClickUIOnDown() const;

constexpr bool& __cordl_internal_get_m_ClickUIOnDown() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter* const& __cordl_internal_get_m_CurrentPokeFilter() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*& __cordl_internal_get_m_CurrentPokeFilter() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get_m_CurrentPokeTarget() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get_m_CurrentPokeTarget() ;

constexpr bool const& __cordl_internal_get_m_DebugVisualizationsEnabled() const;

constexpr bool& __cordl_internal_get_m_DebugVisualizationsEnabled() ;

constexpr bool const& __cordl_internal_get_m_EnableMultiPick() const;

constexpr bool& __cordl_internal_get_m_EnableMultiPick() ;

constexpr bool const& __cordl_internal_get_m_EnableUIInteraction() const;

constexpr bool& __cordl_internal_get_m_EnableUIInteraction() ;

constexpr bool const& __cordl_internal_get_m_FirstFrame() const;

constexpr bool& __cordl_internal_get_m_FirstFrame() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_HoverDebugRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_HoverDebugRenderer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_HoverDebugSphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_HoverDebugSphere() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& __cordl_internal_get_m_InteractableSelectFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& __cordl_internal_get_m_InteractableSelectFilters() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastPokeInteractionPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastPokeInteractionPoint() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_m_OverlapSphereHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_m_OverlapSphereHits() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_PhysicsLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_PhysicsLayerMask() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_PhysicsTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_PhysicsTriggerInteraction() ;

constexpr float_t const& __cordl_internal_get_m_PokeDepth() const;

constexpr float_t& __cordl_internal_get_m_PokeDepth() ;

constexpr float_t const& __cordl_internal_get_m_PokeHoverRadius() const;

constexpr float_t& __cordl_internal_get_m_PokeHoverRadius() ;

constexpr float_t const& __cordl_internal_get_m_PokeInteractionOffset() const;

constexpr float_t& __cordl_internal_get_m_PokeInteractionOffset() ;

constexpr float_t const& __cordl_internal_get_m_PokeSelectWidth() const;

constexpr float_t& __cordl_internal_get_m_PokeSelectWidth() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* const& __cordl_internal_get_m_PokeStateData() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*& __cordl_internal_get_m_PokeStateData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>* const& __cordl_internal_get_m_PokeTargets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*& __cordl_internal_get_m_PokeTargets() ;

constexpr float_t const& __cordl_internal_get_m_PokeWidth() const;

constexpr float_t& __cordl_internal_get_m_PokeWidth() ;

constexpr ::System::Func_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_PositionProvider() const;

constexpr ::System::Func_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_PositionProvider() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& __cordl_internal_get_m_RegisteredUIInteractorCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& __cordl_internal_get_m_RegisteredUIInteractorCache() ;

constexpr bool const& __cordl_internal_get_m_RequirePokeFilter() const;

constexpr bool& __cordl_internal_get_m_RequirePokeFilter() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_SphereCastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_SphereCastHits() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction const& __cordl_internal_get_m_UIDocumentTriggerInteraction() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction& __cordl_internal_get_m_UIDocumentTriggerInteraction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& __cordl_internal_get_m_UIHoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& __cordl_internal_get_m_UIHoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& __cordl_internal_get_m_UIHoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& __cordl_internal_get_m_UIHoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler* const& __cordl_internal_get_m_UIToolkitPokeHandler() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*& __cordl_internal_get_m_UIToolkitPokeHandler() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_ValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets() ;

constexpr void __cordl_internal_set__attachPointVelocityTracker_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  value) ;

constexpr void __cordl_internal_set_m_ClickUIOnDown(bool  value) ;

constexpr void __cordl_internal_set_m_CurrentPokeFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  value) ;

constexpr void __cordl_internal_set_m_CurrentPokeTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set_m_DebugVisualizationsEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_EnableMultiPick(bool  value) ;

constexpr void __cordl_internal_set_m_EnableUIInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_FirstFrame(bool  value) ;

constexpr void __cordl_internal_set_m_HoverDebugRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_m_HoverDebugSphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_InteractableSelectFilters(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value) ;

constexpr void __cordl_internal_set_m_LastPokeInteractionPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_m_PokeDepth(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeHoverRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeInteractionOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeSelectWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  value) ;

constexpr void __cordl_internal_set_m_PokeTargets(::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*  value) ;

constexpr void __cordl_internal_set_m_PokeWidth(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionProvider(::System::Func_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value) ;

constexpr void __cordl_internal_set_m_RequirePokeFilter(bool  value) ;

constexpr void __cordl_internal_set_m_SphereCastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_UIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value) ;

constexpr void __cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_UIToolkitPokeHandler(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*  value) ;

constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// @brief Method .ctor, addr 0xb476e00, size 0x318, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* getStaticF_s_Results() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>* getStaticF_s_ValidTargetsScratchMap() ;

/// [CompilerGenerated]
/// @brief Method get_attachPointVelocityTracker, addr 0xb474bc4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* get_attachPointVelocityTracker() ;

/// @brief Method get_canProcessUIToolkit, addr 0xb474ce0, size 0xa4, virtual false, abstract: false, final false
inline bool get_canProcessUIToolkit() ;

/// @brief Method get_clickUIOnDown, addr 0xb474b6c, size 0x8, virtual false, abstract: false, final false
inline bool get_clickUIOnDown() ;

/// @brief Method get_debugVisualizationsEnabled, addr 0xb474b7c, size 0x8, virtual false, abstract: false, final false
inline bool get_debugVisualizationsEnabled() ;

/// @brief Method get_enableMultiPick, addr 0xb474d84, size 0x8, virtual false, abstract: false, final false
inline bool get_enableMultiPick() ;

/// @brief Method get_enableUIInteraction, addr 0xb474b34, size 0x8, virtual false, abstract: false, final false
inline bool get_enableUIInteraction() ;

/// @brief Method get_physicsLayerMask, addr 0xb474af4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_physicsLayerMask() ;

/// @brief Method get_physicsTriggerInteraction, addr 0xb474b04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_physicsTriggerInteraction() ;

/// @brief Method get_pokeDepth, addr 0xb474aa4, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeDepth() ;

/// @brief Method get_pokeHoverRadius, addr 0xb474ad4, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeHoverRadius() ;

/// @brief Method get_pokeInteractionOffset, addr 0xb474ae4, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeInteractionOffset() ;

/// @brief Method get_pokeSelectWidth, addr 0xb474ac4, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeSelectWidth() ;

/// @brief Method get_pokeStateData, addr 0xb474bbc, size 0x8, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* get_pokeStateData() ;

/// @brief Method get_pokeWidth, addr 0xb474ab4, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeWidth() ;

/// @brief Method get_requirePokeFilter, addr 0xb474b24, size 0x8, virtual false, abstract: false, final false
inline bool get_requirePokeFilter() ;

/// @brief Method get_uiDocumentTriggerInteraction, addr 0xb474b14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction get_uiDocumentTriggerInteraction() ;

/// @brief Method get_uiHoverEntered, addr 0xb474b8c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* get_uiHoverEntered() ;

/// @brief Method get_uiHoverExited, addr 0xb474ba4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* get_uiHoverExited() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IPokeStateDataProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

static inline void setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

static inline void setStaticF_s_ValidTargetsScratchMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_attachPointVelocityTracker, addr 0xb474bcc, size 0x10, virtual false, abstract: false, final false
inline void set_attachPointVelocityTracker(::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  value) ;

/// @brief Method set_clickUIOnDown, addr 0xb474b74, size 0x8, virtual false, abstract: false, final false
inline void set_clickUIOnDown(bool  value) ;

/// @brief Method set_debugVisualizationsEnabled, addr 0xb474b84, size 0x8, virtual false, abstract: false, final false
inline void set_debugVisualizationsEnabled(bool  value) ;

/// @brief Method set_enableMultiPick, addr 0xb474d8c, size 0x8, virtual false, abstract: false, final false
inline void set_enableMultiPick(bool  value) ;

/// @brief Method set_enableUIInteraction, addr 0xb474b3c, size 0x30, virtual false, abstract: false, final false
inline void set_enableUIInteraction(bool  value) ;

/// @brief Method set_physicsLayerMask, addr 0xb474afc, size 0x8, virtual false, abstract: false, final false
inline void set_physicsLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_physicsTriggerInteraction, addr 0xb474b0c, size 0x8, virtual false, abstract: false, final false
inline void set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method set_pokeDepth, addr 0xb474aac, size 0x8, virtual false, abstract: false, final false
inline void set_pokeDepth(float_t  value) ;

/// @brief Method set_pokeHoverRadius, addr 0xb474adc, size 0x8, virtual false, abstract: false, final false
inline void set_pokeHoverRadius(float_t  value) ;

/// @brief Method set_pokeInteractionOffset, addr 0xb474aec, size 0x8, virtual false, abstract: false, final false
inline void set_pokeInteractionOffset(float_t  value) ;

/// @brief Method set_pokeSelectWidth, addr 0xb474acc, size 0x8, virtual false, abstract: false, final false
inline void set_pokeSelectWidth(float_t  value) ;

/// @brief Method set_pokeWidth, addr 0xb474abc, size 0x8, virtual false, abstract: false, final false
inline void set_pokeWidth(float_t  value) ;

/// @brief Method set_requirePokeFilter, addr 0xb474b2c, size 0x8, virtual false, abstract: false, final false
inline void set_requirePokeFilter(bool  value) ;

/// @brief Method set_uiDocumentTriggerInteraction, addr 0xb474b1c, size 0x8, virtual false, abstract: false, final false
inline void set_uiDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value) ;

/// @brief Method set_uiHoverEntered, addr 0xb474b94, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

/// @brief Method set_uiHoverExited, addr 0xb474bac, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRPokeInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRPokeInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRPokeInteractor(XRPokeInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRPokeInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRPokeInteractor(XRPokeInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11459};

/// [SerializeField]
/// @brief Field m_PokeDepth, offset: 0x140, size: 0x4, def value: None
 float_t  ___m_PokeDepth;

/// [SerializeField]
/// @brief Field m_PokeWidth, offset: 0x144, size: 0x4, def value: None
 float_t  ___m_PokeWidth;

/// [SerializeField]
/// @brief Field m_PokeSelectWidth, offset: 0x148, size: 0x4, def value: None
 float_t  ___m_PokeSelectWidth;

/// [SerializeField]
/// @brief Field m_PokeHoverRadius, offset: 0x14c, size: 0x4, def value: None
 float_t  ___m_PokeHoverRadius;

/// [SerializeField]
/// @brief Field m_PokeInteractionOffset, offset: 0x150, size: 0x4, def value: None
 float_t  ___m_PokeInteractionOffset;

/// [SerializeField]
/// @brief Field m_PhysicsLayerMask, offset: 0x154, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_PhysicsLayerMask;

/// [SerializeField]
/// @brief Field m_PhysicsTriggerInteraction, offset: 0x158, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_PhysicsTriggerInteraction;

/// [SerializeField]
/// @brief Field m_UIDocumentTriggerInteraction, offset: 0x15c, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  ___m_UIDocumentTriggerInteraction;

/// [SerializeField]
/// @brief Field m_RequirePokeFilter, offset: 0x160, size: 0x1, def value: None
 bool  ___m_RequirePokeFilter;

/// [SerializeField]
/// @brief Field m_EnableUIInteraction, offset: 0x161, size: 0x1, def value: None
 bool  ___m_EnableUIInteraction;

/// [SerializeField]
/// @brief Field m_ClickUIOnDown, offset: 0x162, size: 0x1, def value: None
 bool  ___m_ClickUIOnDown;

/// [SerializeField]
/// @brief Field m_DebugVisualizationsEnabled, offset: 0x163, size: 0x1, def value: None
 bool  ___m_DebugVisualizationsEnabled;

/// [SerializeField]
/// @brief Field m_UIHoverEntered, offset: 0x168, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  ___m_UIHoverEntered;

/// [SerializeField]
/// @brief Field m_UIHoverExited, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  ___m_UIHoverExited;

/// @brief Field m_PokeStateData, offset: 0x178, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  ___m_PokeStateData;

/// [CompilerGenerated]
/// @brief Field <attachPointVelocityTracker>k__BackingField, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*  ____attachPointVelocityTracker_k__BackingField;

/// @brief Field m_HoverDebugSphere, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_HoverDebugSphere;

/// @brief Field m_HoverDebugRenderer, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___m_HoverDebugRenderer;

/// @brief Field m_LastPokeInteractionPoint, offset: 0x198, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastPokeInteractionPoint;

/// @brief Field m_FirstFrame, offset: 0x1a4, size: 0x1, def value: None
 bool  ___m_FirstFrame;

/// @brief Field m_CurrentPokeTarget, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ___m_CurrentPokeTarget;

/// @brief Field m_CurrentPokeFilter, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  ___m_CurrentPokeFilter;

/// @brief Field m_SphereCastHits, offset: 0x1b8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_SphereCastHits;

/// @brief Field m_OverlapSphereHits, offset: 0x1c0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___m_OverlapSphereHits;

/// @brief Field m_PokeTargets, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XRPokeInteractor_PokeCollision>*  ___m_PokeTargets;

/// @brief Field m_InteractableSelectFilters, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  ___m_InteractableSelectFilters;

/// @brief Field m_ValidTargets, offset: 0x1d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_ValidTargets;

/// @brief Field m_RegisteredUIInteractorCache, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  ___m_RegisteredUIInteractorCache;

/// @brief Field m_LocalPhysicsScene, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_PositionProvider, offset: 0x1f0, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Vector3>*  ___m_PositionProvider;

/// @brief Field m_UIToolkitPokeHandler, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*  ___m_UIToolkitPokeHandler;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("When enabled, multi-point sampling is used for more forgiving UI element detection. Off by default for performance.")]
/// @brief Field m_EnableMultiPick, offset: 0x200, size: 0x1, def value: None
 bool  ___m_EnableMultiPick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeDepth) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeWidth) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeSelectWidth) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeHoverRadius) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeInteractionOffset) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PhysicsLayerMask) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PhysicsTriggerInteraction) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_UIDocumentTriggerInteraction) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_RequirePokeFilter) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_EnableUIInteraction) == 0x161, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_ClickUIOnDown) == 0x162, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_DebugVisualizationsEnabled) == 0x163, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_UIHoverEntered) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_UIHoverExited) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeStateData) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ____attachPointVelocityTracker_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_HoverDebugSphere) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_HoverDebugRenderer) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_LastPokeInteractionPoint) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_FirstFrame) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_CurrentPokeTarget) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_CurrentPokeFilter) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_SphereCastHits) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_OverlapSphereHits) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PokeTargets) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_InteractableSelectFilters) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_ValidTargets) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_RegisteredUIInteractorCache) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_LocalPhysicsScene) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_PositionProvider) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_UIToolkitPokeHandler) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor, ___m_EnableMultiPick) == 0x200, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor) == 0x208, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
