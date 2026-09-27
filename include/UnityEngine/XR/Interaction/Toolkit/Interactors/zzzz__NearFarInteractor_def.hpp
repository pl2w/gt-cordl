#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/NearFarInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractorFarAttachMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_NearCasterSortingStrategy_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_Region_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NearFarInteractor)
namespace GlobalNamespace {
struct NearFarInteractor_NearCasterSortingStrategy;
}
namespace GlobalNamespace {
struct NearFarInteractor_Region;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableEnum_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IInteractionAttachController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
struct InteractorFarAttachMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class ICurveInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class IInteractionCaster;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct EndPointType;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ICurveInteractionDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIModelUpdater;
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
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IInteractorDistanceEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class NearFarInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "NearFarInteractor");
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/Near-Far Interactor", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor.html")]
// Dependencies UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Attachment.InteractorFarAttachMode, UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::NearCasterSortingStrategy, UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor::Region, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor
class CORDL_TYPE NearFarInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor {
public:
// Declarations
using NearCasterSortingStrategy = ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy;

using Region = ::GlobalNamespace::NearFarInteractor_Region;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndPoint)) ::UnityEngine::Vector3  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_rayEndPoint;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndTransform)) ::UnityW<::UnityEngine::Transform>  UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_rayEndTransform;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_hasValidSelect)) bool  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_hasValidSelect;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_isActive)) bool  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_isActive;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_lastSamplePoint)) ::UnityEngine::Vector3  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_lastSamplePoint;

 __declspec(property(get=UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_samplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_samplePoints;

 __declspec(property(get=get_blockUIOnInteractableSelection, put=set_blockUIOnInteractableSelection)) bool  blockUIOnInteractableSelection;

 __declspec(property(get=get_canProcessUIToolkit)) bool  canProcessUIToolkit;

 __declspec(property(get=get_curveOrigin)) ::UnityW<::UnityEngine::Transform>  curveOrigin;

 __declspec(property(get=get_enableFarCasting, put=set_enableFarCasting)) bool  enableFarCasting;

 __declspec(property(get=get_enableNearCasting, put=set_enableNearCasting)) bool  enableNearCasting;

 __declspec(property(get=get_enableUIInteraction, put=set_enableUIInteraction)) bool  enableUIInteraction;

 __declspec(property(get=get_farAttachMode, put=set_farAttachMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  farAttachMode;

 __declspec(property(get=get_farInteractionCaster, put=set_farInteractionCaster)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*  farInteractionCaster;

 __declspec(property(get=get_interactionAttachController, put=set_interactionAttachController)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*  interactionAttachController;

 __declspec(property(get=get_isCurveActive)) bool  isCurveActive;

 __declspec(property(get=get_isUiSelectInputActive)) bool  isUiSelectInputActive;

/// @brief Field m_AllowMultipleValidTargets, offset 0x370, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowMultipleValidTargets, put=__cordl_internal_set_m_AllowMultipleValidTargets)) bool  m_AllowMultipleValidTargets;

/// @brief Field m_BlockUIOnInteractableSelection, offset 0x2b5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BlockUIOnInteractableSelection, put=__cordl_internal_set_m_BlockUIOnInteractableSelection)) bool  m_BlockUIOnInteractableSelection;

/// @brief Field m_EnableFarCasting, offset 0x29d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableFarCasting, put=__cordl_internal_set_m_EnableFarCasting)) bool  m_EnableFarCasting;

/// @brief Field m_EnableNearCasting, offset 0x280, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableNearCasting, put=__cordl_internal_set_m_EnableNearCasting)) bool  m_EnableNearCasting;

/// @brief Field m_EnableUIInteraction, offset 0x2b4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableUIInteraction, put=__cordl_internal_set_m_EnableUIInteraction)) bool  m_EnableUIInteraction;

/// @brief Field m_FarAttachMode, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FarAttachMode, put=__cordl_internal_set_m_FarAttachMode)) ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  m_FarAttachMode;

/// @brief Field m_FarCasterObjectRef, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FarCasterObjectRef, put=__cordl_internal_set_m_FarCasterObjectRef)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*  m_FarCasterObjectRef;

/// @brief Field m_FarInteractionCaster, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FarInteractionCaster, put=__cordl_internal_set_m_FarInteractionCaster)) ::UnityW<::UnityEngine::Object>  m_FarInteractionCaster;

/// @brief Field m_FarRayCastHits, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FarRayCastHits, put=__cordl_internal_set_m_FarRayCastHits)) ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  m_FarRayCastHits;

/// @brief Field m_FarTargetToIndexMap, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FarTargetToIndexMap, put=__cordl_internal_set_m_FarTargetToIndexMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*  m_FarTargetToIndexMap;

/// @brief Field m_HasValidRayHit, offset 0x330, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasValidRayHit, put=__cordl_internal_set_m_HasValidRayHit)) bool  m_HasValidRayHit;

/// @brief Field m_IndexToSnapVolumeMap, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexToSnapVolumeMap, put=__cordl_internal_set_m_IndexToSnapVolumeMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_IndexToSnapVolumeMap;

/// @brief Field m_InteractionAttachController, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionAttachController, put=__cordl_internal_set_m_InteractionAttachController)) ::UnityW<::UnityEngine::Object>  m_InteractionAttachController;

/// @brief Field m_InteractionAttachControllerObjectRef, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionAttachControllerObjectRef, put=__cordl_internal_set_m_InteractionAttachControllerObjectRef)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*  m_InteractionAttachControllerObjectRef;

/// @brief Field m_InternalValidTargets, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalValidTargets, put=__cordl_internal_set_m_InternalValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_InternalValidTargets;

/// @brief Field m_LastValidHitIsUI, offset 0x331, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LastValidHitIsUI, put=__cordl_internal_set_m_LastValidHitIsUI)) bool  m_LastValidHitIsUI;

/// @brief Field m_NearCasterObjectRef, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NearCasterObjectRef, put=__cordl_internal_set_m_NearCasterObjectRef)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*  m_NearCasterObjectRef;

/// @brief Field m_NearCasterSortingStrategy, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NearCasterSortingStrategy, put=__cordl_internal_set_m_NearCasterSortingStrategy)) ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  m_NearCasterSortingStrategy;

/// @brief Field m_NearInteractionCaster, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NearInteractionCaster, put=__cordl_internal_set_m_NearInteractionCaster)) ::UnityW<::UnityEngine::Object>  m_NearInteractionCaster;

/// @brief Field m_NormalRelativeToInteractable, offset 0x358, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_NormalRelativeToInteractable, put=__cordl_internal_set_m_NormalRelativeToInteractable)) ::UnityEngine::Vector3  m_NormalRelativeToInteractable;

/// @brief Field m_PreFilteredTargets, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreFilteredTargets, put=__cordl_internal_set_m_PreFilteredTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_PreFilteredTargets;

/// @brief Field m_RayEndNormal, offset 0x34c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_RayEndNormal, put=__cordl_internal_set_m_RayEndNormal)) ::UnityEngine::Vector3  m_RayEndNormal;

/// @brief Field m_RayEndPoint, offset 0x340, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_RayEndPoint, put=__cordl_internal_set_m_RayEndPoint)) ::UnityEngine::Vector3  m_RayEndPoint;

/// @brief Field m_RayEndTransform, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayEndTransform, put=__cordl_internal_set_m_RayEndTransform)) ::UnityW<::UnityEngine::Transform>  m_RayEndTransform;

/// @brief Field m_RegisteredUIInteractorCache, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredUIInteractorCache, put=__cordl_internal_set_m_RegisteredUIInteractorCache)) ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  m_RegisteredUIInteractorCache;

/// @brief Field m_ReleasedNearInteractionThisFrame, offset 0x318, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReleasedNearInteractionThisFrame, put=__cordl_internal_set_m_ReleasedNearInteractionThisFrame)) bool  m_ReleasedNearInteractionThisFrame;

/// @brief Field m_SelectedTargetCastSource, offset 0x2e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectedTargetCastSource, put=__cordl_internal_set_m_SelectedTargetCastSource)) ::GlobalNamespace::NearFarInteractor_Region  m_SelectedTargetCastSource;

/// @brief Field m_SelectionRegion, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectionRegion, put=__cordl_internal_set_m_SelectionRegion)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*  m_SelectionRegion;

/// @brief Field m_SortNearTargetsAfterTargetFilter, offset 0x29c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SortNearTargetsAfterTargetFilter, put=__cordl_internal_set_m_SortNearTargetsAfterTargetFilter)) bool  m_SortNearTargetsAfterTargetFilter;

/// @brief Field m_TargetColliders, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetColliders, put=__cordl_internal_set_m_TargetColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  m_TargetColliders;

/// @brief Field m_UIHoverEntered, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverEntered, put=__cordl_internal_set_m_UIHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  m_UIHoverEntered;

/// @brief Field m_UIHoverExited, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIHoverExited, put=__cordl_internal_set_m_UIHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  m_UIHoverExited;

/// @brief Field m_UIModelUpdaterReferenceCache, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIModelUpdaterReferenceCache, put=__cordl_internal_set_m_UIModelUpdaterReferenceCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*  m_UIModelUpdaterReferenceCache;

/// @brief Field m_UIPressInput, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIPressInput, put=__cordl_internal_set_m_UIPressInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_UIPressInput;

/// @brief Field m_UIScrollInput, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIScrollInput, put=__cordl_internal_set_m_UIScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_UIScrollInput;

/// @brief Field m_ValidHitIsSnapVolume, offset 0x365, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ValidHitIsSnapVolume, put=__cordl_internal_set_m_ValidHitIsSnapVolume)) bool  m_ValidHitIsSnapVolume;

/// @brief Field m_ValidHitIsUI, offset 0x364, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ValidHitIsUI, put=__cordl_internal_set_m_ValidHitIsUI)) bool  m_ValidHitIsUI;

/// @brief Field m_ValidHitSnapVolumeInteractable, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidHitSnapVolumeInteractable, put=__cordl_internal_set_m_ValidHitSnapVolumeInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_ValidHitSnapVolumeInteractable;

/// @brief Field m_ValidTargetCastSource, offset 0x2e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ValidTargetCastSource, put=__cordl_internal_set_m_ValidTargetCastSource)) ::GlobalNamespace::NearFarInteractor_Region  m_ValidTargetCastSource;

 __declspec(property(get=get_nearCasterSortingStrategy, put=set_nearCasterSortingStrategy)) ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  nearCasterSortingStrategy;

 __declspec(property(get=get_nearInteractionCaster, put=set_nearInteractionCaster)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*  nearInteractionCaster;

 __declspec(property(get=get_selectionRegion)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::NearFarInteractor_Region>*  selectionRegion;

 __declspec(property(get=get_sortNearTargetsAfterTargetFilter, put=set_sortNearTargetsAfterTargetFilter)) bool  sortNearTargetsAfterTargetFilter;

 __declspec(property(get=get_uiHoverEntered, put=set_uiHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  uiHoverEntered;

 __declspec(property(get=get_uiHoverExited, put=set_uiHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  uiHoverExited;

 __declspec(property(get=get_uiModelUpdater)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*  uiModelUpdater;

 __declspec(property(get=get_uiPressInput, put=set_uiPressInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  uiPressInput;

 __declspec(property(get=get_uiScrollInput, put=set_uiScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  uiScrollInput;

 __declspec(property(get=get_uiScrollInputValue)) ::UnityEngine::Vector2  uiScrollInputValue;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept;

/// @brief Method Awake, addr 0xb461538, size 0x170, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DetermineSelectionRegion, addr 0xb4625f0, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::NearFarInteractor_Region DetermineSelectionRegion() ;

/// @brief Method EvaluateFarInteraction, addr 0xb462840, size 0x47c, virtual false, abstract: false, final false
inline void EvaluateFarInteraction(::GlobalNamespace::NearFarInteractor_Region  newSelectionRegion) ;

/// @brief Method EvaluateNearInteraction, addr 0xb4626bc, size 0x184, virtual false, abstract: false, final false
inline void EvaluateNearInteraction() ;

/// @brief Method GetEvaluatorForSortingStrategy, addr 0xb463f04, size 0xd0, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* GetEvaluatorForSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  strategy) ;

/// @brief Method GetValidTargets, addr 0xb463fd4, size 0x150, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// @brief Method HandleUIToolkitEvents, addr 0xb462d18, size 0x238, virtual false, abstract: false, final false
inline void HandleUIToolkitEvents() ;

/// @brief Method InitializeInteractor, addr 0xb461ef8, size 0xf0, virtual false, abstract: false, final false
inline void InitializeInteractor() ;

/// @brief Method InitializeReferences, addr 0xb461fe8, size 0x2a0, virtual true, abstract: false, final false
inline void InitializeReferences() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0xb461cb8, size 0x78, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb461aac, size 0x34, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSelectEntered, addr 0xb4645a4, size 0xec, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectEntering, addr 0xb464124, size 0x32c, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb464930, size 0x74, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb4646f0, size 0x178, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnUIHoverEntered, addr 0xb464fac, size 0x60, virtual true, abstract: false, final false
inline void OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method OnUIHoverExited, addr 0xb46500c, size 0x60, virtual true, abstract: false, final false
inline void OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method PreprocessInteractor, addr 0xb462288, size 0x74, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method Process2dHit, addr 0xb463840, size 0x70, virtual false, abstract: false, final false
inline void Process2dHit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::EventSystems::RaycastResult>  uiHit) ;

/// @brief Method Process3dHit, addr 0xb463510, size 0x330, virtual false, abstract: false, final false
inline void Process3dHit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  farCasterOrigin, bool  has2dHit, float_t  uiHitSqDistance, ::by_ref<bool>  shouldProcess2dHit) ;

/// @brief Method ProcessUIToolkitHit, addr 0xb463388, size 0x70, virtual false, abstract: false, final false
inline void ProcessUIToolkitHit(::UnityEngine::RaycastHit  raycastHit) ;

/// @brief Method RegisterFarValidTargets, addr 0xb463a3c, size 0x4c8, virtual false, abstract: false, final false
inline int32_t RegisterFarValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables, ::by_ref<int32_t>  firstRegisteredIndex) ;

/// @brief Method RegisterNearValidTargets, addr 0xb462f50, size 0x398, virtual false, abstract: false, final false
inline int32_t RegisterNearValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables) ;

/// @brief Method TryGetCurrentUIRaycastResult, addr 0xb4633f8, size 0x118, virtual false, abstract: false, final false
inline bool TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult) ;

/// @brief Method TryGetCurveEndNormal, addr 0xb465298, size 0x1dc, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType TryGetCurveEndNormal(::by_ref<::UnityEngine::Vector3>  endNormal, bool  snapToSelectedAttachIfAvailable) ;

/// @brief Method TryGetCurveEndPoint, addr 0xb4610a4, size 0x27c, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType TryGetCurveEndPoint(::by_ref<::UnityEngine::Vector3>  endPoint, bool  snapToSelectedAttachIfAvailable, bool  snapToSnapVolumeIfAvailable) ;

/// @brief Method TryGetUIModel, addr 0xb464ec8, size 0xc4, virtual true, abstract: false, final true
inline bool TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform, addr 0xb464a58, size 0xac, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin, addr 0xb464bb8, size 0xac, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform, addr 0xb464b04, size 0xb4, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform(::UnityEngine::Transform*  newAttach) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin, addr 0xb464c64, size 0xb4, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin(::UnityEngine::Transform*  newOrigin) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndPoint, addr 0xb460fc0, size 0xe4, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndPoint() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndTransform, addr 0xb460fb8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndTransform() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_hasValidSelect, addr 0xb465070, size 0x28, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_hasValidSelect() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_isActive, addr 0xb46506c, size 0x4, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_isActive() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_lastSamplePoint, addr 0xb465140, size 0xac, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_lastSamplePoint() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_samplePoints, addr 0xb465098, size 0xa8, virtual true, abstract: false, final true
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_samplePoints() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered, addr 0xb464f8c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited, addr 0xb464f9c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args) ;

/// @brief Method UpdateAnchor, addr 0xb46252c, size 0xc4, virtual false, abstract: false, final false
inline void UpdateAnchor() ;

/// @brief Method UpdateSelectionRegion, addr 0xb462cbc, size 0x5c, virtual false, abstract: false, final false
inline void UpdateSelectionRegion(::GlobalNamespace::NearFarInteractor_Region  newSelectionRegion) ;

/// @brief Method UpdateUIModel, addr 0xb464d18, size 0x1b0, virtual true, abstract: false, final true
inline void UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UpdateUIRegistration, addr 0xb4613e4, size 0xb0, virtual true, abstract: false, final false
inline void UpdateUIRegistration() ;

constexpr bool const& __cordl_internal_get_m_AllowMultipleValidTargets() const;

constexpr bool& __cordl_internal_get_m_AllowMultipleValidTargets() ;

constexpr bool const& __cordl_internal_get_m_BlockUIOnInteractableSelection() const;

constexpr bool& __cordl_internal_get_m_BlockUIOnInteractableSelection() ;

constexpr bool const& __cordl_internal_get_m_EnableFarCasting() const;

constexpr bool& __cordl_internal_get_m_EnableFarCasting() ;

constexpr bool const& __cordl_internal_get_m_EnableNearCasting() const;

constexpr bool& __cordl_internal_get_m_EnableNearCasting() ;

constexpr bool const& __cordl_internal_get_m_EnableUIInteraction() const;

constexpr bool& __cordl_internal_get_m_EnableUIInteraction() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode const& __cordl_internal_get_m_FarAttachMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode& __cordl_internal_get_m_FarAttachMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_FarCasterObjectRef() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_FarCasterObjectRef() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_FarInteractionCaster() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_FarInteractionCaster() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& __cordl_internal_get_m_FarRayCastHits() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& __cordl_internal_get_m_FarRayCastHits() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>* const& __cordl_internal_get_m_FarTargetToIndexMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*& __cordl_internal_get_m_FarTargetToIndexMap() ;

constexpr bool const& __cordl_internal_get_m_HasValidRayHit() const;

constexpr bool& __cordl_internal_get_m_HasValidRayHit() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_IndexToSnapVolumeMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_IndexToSnapVolumeMap() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractionAttachController() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractionAttachController() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_InteractionAttachControllerObjectRef() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_InteractionAttachControllerObjectRef() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_InternalValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_InternalValidTargets() ;

constexpr bool const& __cordl_internal_get_m_LastValidHitIsUI() const;

constexpr bool& __cordl_internal_get_m_LastValidHitIsUI() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_NearCasterObjectRef() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_NearCasterObjectRef() ;

constexpr ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const& __cordl_internal_get_m_NearCasterSortingStrategy() const;

constexpr ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy& __cordl_internal_get_m_NearCasterSortingStrategy() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_NearInteractionCaster() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_NearInteractionCaster() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NormalRelativeToInteractable() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NormalRelativeToInteractable() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_PreFilteredTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_PreFilteredTargets() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_RayEndNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_RayEndNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_RayEndPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_RayEndPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RayEndTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RayEndTransform() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& __cordl_internal_get_m_RegisteredUIInteractorCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& __cordl_internal_get_m_RegisteredUIInteractorCache() ;

constexpr bool const& __cordl_internal_get_m_ReleasedNearInteractionThisFrame() const;

constexpr bool& __cordl_internal_get_m_ReleasedNearInteractionThisFrame() ;

constexpr ::GlobalNamespace::NearFarInteractor_Region const& __cordl_internal_get_m_SelectedTargetCastSource() const;

constexpr ::GlobalNamespace::NearFarInteractor_Region& __cordl_internal_get_m_SelectedTargetCastSource() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>* const& __cordl_internal_get_m_SelectionRegion() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*& __cordl_internal_get_m_SelectionRegion() ;

constexpr bool const& __cordl_internal_get_m_SortNearTargetsAfterTargetFilter() const;

constexpr bool& __cordl_internal_get_m_SortNearTargetsAfterTargetFilter() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_TargetColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_TargetColliders() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& __cordl_internal_get_m_UIHoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& __cordl_internal_get_m_UIHoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& __cordl_internal_get_m_UIHoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& __cordl_internal_get_m_UIHoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_UIModelUpdaterReferenceCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_UIModelUpdaterReferenceCache() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_UIPressInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_UIPressInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_UIScrollInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_UIScrollInput() ;

constexpr bool const& __cordl_internal_get_m_ValidHitIsSnapVolume() const;

constexpr bool& __cordl_internal_get_m_ValidHitIsSnapVolume() ;

constexpr bool const& __cordl_internal_get_m_ValidHitIsUI() const;

constexpr bool& __cordl_internal_get_m_ValidHitIsUI() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_ValidHitSnapVolumeInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_ValidHitSnapVolumeInteractable() ;

constexpr ::GlobalNamespace::NearFarInteractor_Region const& __cordl_internal_get_m_ValidTargetCastSource() const;

constexpr ::GlobalNamespace::NearFarInteractor_Region& __cordl_internal_get_m_ValidTargetCastSource() ;

constexpr void __cordl_internal_set_m_AllowMultipleValidTargets(bool  value) ;

constexpr void __cordl_internal_set_m_BlockUIOnInteractableSelection(bool  value) ;

constexpr void __cordl_internal_set_m_EnableFarCasting(bool  value) ;

constexpr void __cordl_internal_set_m_EnableNearCasting(bool  value) ;

constexpr void __cordl_internal_set_m_EnableUIInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_FarAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  value) ;

constexpr void __cordl_internal_set_m_FarCasterObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_FarInteractionCaster(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_FarRayCastHits(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value) ;

constexpr void __cordl_internal_set_m_FarTargetToIndexMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_HasValidRayHit(bool  value) ;

constexpr void __cordl_internal_set_m_IndexToSnapVolumeMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionAttachController(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_InteractionAttachControllerObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_InternalValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_LastValidHitIsUI(bool  value) ;

constexpr void __cordl_internal_set_m_NearCasterObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_NearCasterSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  value) ;

constexpr void __cordl_internal_set_m_NearInteractionCaster(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_NormalRelativeToInteractable(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreFilteredTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_RayEndNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_RayEndPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_RayEndTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value) ;

constexpr void __cordl_internal_set_m_ReleasedNearInteractionThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_SelectedTargetCastSource(::GlobalNamespace::NearFarInteractor_Region  value) ;

constexpr void __cordl_internal_set_m_SelectionRegion(::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*  value) ;

constexpr void __cordl_internal_set_m_SortNearTargetsAfterTargetFilter(bool  value) ;

constexpr void __cordl_internal_set_m_TargetColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_UIModelUpdaterReferenceCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_UIPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_UIScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_ValidHitIsSnapVolume(bool  value) ;

constexpr void __cordl_internal_set_m_ValidHitIsUI(bool  value) ;

constexpr void __cordl_internal_set_m_ValidHitSnapVolumeInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_ValidTargetCastSource(::GlobalNamespace::NearFarInteractor_Region  value) ;

/// @brief Method .ctor, addr 0xb465474, size 0x4f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_blockUIOnInteractableSelection, addr 0xb460edc, size 0x8, virtual false, abstract: false, final false
inline bool get_blockUIOnInteractableSelection() ;

/// @brief Method get_canProcessUIToolkit, addr 0xb461494, size 0xa4, virtual false, abstract: false, final false
inline bool get_canProcessUIToolkit() ;

/// @brief Method get_curveOrigin, addr 0xb4651ec, size 0xac, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_curveOrigin() ;

/// @brief Method get_enableFarCasting, addr 0xb460dd4, size 0x8, virtual false, abstract: false, final false
inline bool get_enableFarCasting() ;

/// @brief Method get_enableNearCasting, addr 0xb460cf4, size 0x8, virtual false, abstract: false, final false
inline bool get_enableNearCasting() ;

/// @brief Method get_enableUIInteraction, addr 0xb460ea4, size 0x8, virtual false, abstract: false, final false
inline bool get_enableUIInteraction() ;

/// @brief Method get_farAttachMode, addr 0xb460e94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode get_farAttachMode() ;

/// @brief Method get_farInteractionCaster, addr 0xb460de4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster* get_farInteractionCaster() ;

/// @brief Method get_interactionAttachController, addr 0xb460c44, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController* get_interactionAttachController() ;

/// @brief Method get_isCurveActive, addr 0xb4638b0, size 0x18c, virtual false, abstract: false, final false
inline bool get_isCurveActive() ;

/// @brief Method get_isUiSelectInputActive, addr 0xb46137c, size 0x18, virtual false, abstract: false, final false
inline bool get_isUiSelectInputActive() ;

/// @brief Method get_nearCasterSortingStrategy, addr 0xb460db4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy get_nearCasterSortingStrategy() ;

/// @brief Method get_nearInteractionCaster, addr 0xb460d04, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* get_nearInteractionCaster() ;

/// @brief Method get_selectionRegion, addr 0xb461320, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::NearFarInteractor_Region>* get_selectionRegion() ;

/// @brief Method get_sortNearTargetsAfterTargetFilter, addr 0xb460dc4, size 0x8, virtual false, abstract: false, final false
inline bool get_sortNearTargetsAfterTargetFilter() ;

/// @brief Method get_uiHoverEntered, addr 0xb460eec, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* get_uiHoverEntered() ;

/// @brief Method get_uiHoverExited, addr 0xb460f04, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* get_uiHoverExited() ;

/// @brief Method get_uiModelUpdater, addr 0xb461328, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater* get_uiModelUpdater() ;

/// @brief Method get_uiPressInput, addr 0xb460f1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_uiPressInput() ;

/// @brief Method get_uiScrollInput, addr 0xb460f54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_uiScrollInput() ;

/// @brief Method get_uiScrollInputValue, addr 0xb461394, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_uiScrollInputValue() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRRayProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ICurveInteractionDataProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept;

/// @brief Method set_blockUIOnInteractableSelection, addr 0xb460ee4, size 0x8, virtual false, abstract: false, final false
inline void set_blockUIOnInteractableSelection(bool  value) ;

/// @brief Method set_enableFarCasting, addr 0xb460ddc, size 0x8, virtual false, abstract: false, final false
inline void set_enableFarCasting(bool  value) ;

/// @brief Method set_enableNearCasting, addr 0xb460cfc, size 0x8, virtual false, abstract: false, final false
inline void set_enableNearCasting(bool  value) ;

/// @brief Method set_enableUIInteraction, addr 0xb460eac, size 0x30, virtual false, abstract: false, final false
inline void set_enableUIInteraction(bool  value) ;

/// @brief Method set_farAttachMode, addr 0xb460e9c, size 0x8, virtual false, abstract: false, final false
inline void set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  value) ;

/// @brief Method set_farInteractionCaster, addr 0xb460e38, size 0x5c, virtual false, abstract: false, final false
inline void set_farInteractionCaster(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*  value) ;

/// @brief Method set_interactionAttachController, addr 0xb460c98, size 0x5c, virtual false, abstract: false, final false
inline void set_interactionAttachController(::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*  value) ;

/// @brief Method set_nearCasterSortingStrategy, addr 0xb460dbc, size 0x8, virtual false, abstract: false, final false
inline void set_nearCasterSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  value) ;

/// @brief Method set_nearInteractionCaster, addr 0xb460d58, size 0x5c, virtual false, abstract: false, final false
inline void set_nearInteractionCaster(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*  value) ;

/// @brief Method set_sortNearTargetsAfterTargetFilter, addr 0xb460dcc, size 0x8, virtual false, abstract: false, final false
inline void set_sortNearTargetsAfterTargetFilter(bool  value) ;

/// @brief Method set_uiHoverEntered, addr 0xb460ef4, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value) ;

/// @brief Method set_uiHoverExited, addr 0xb460f0c, size 0x10, virtual false, abstract: false, final false
inline void set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value) ;

/// @brief Method set_uiPressInput, addr 0xb460f24, size 0x14, virtual false, abstract: false, final false
inline void set_uiPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_uiScrollInput, addr 0xb460f5c, size 0x5c, virtual false, abstract: false, final false
inline void set_uiScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NearFarInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NearFarInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NearFarInteractor(NearFarInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NearFarInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NearFarInteractor(NearFarInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11444};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController))]
/// @brief Field m_InteractionAttachController, offset: 0x270, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractionAttachController;

/// @brief Field m_InteractionAttachControllerObjectRef, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*  ___m_InteractionAttachControllerObjectRef;

/// [SerializeField]
/// @brief Field m_EnableNearCasting, offset: 0x280, size: 0x1, def value: None
 bool  ___m_EnableNearCasting;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.IInteractionCaster))]
/// @brief Field m_NearInteractionCaster, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_NearInteractionCaster;

/// @brief Field m_NearCasterObjectRef, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*  ___m_NearCasterObjectRef;

/// [SerializeField]
/// @brief Field m_NearCasterSortingStrategy, offset: 0x298, size: 0x4, def value: None
 ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  ___m_NearCasterSortingStrategy;

/// [SerializeField]
/// @brief Field m_SortNearTargetsAfterTargetFilter, offset: 0x29c, size: 0x1, def value: None
 bool  ___m_SortNearTargetsAfterTargetFilter;

/// [Space]
/// [SerializeField]
/// @brief Field m_EnableFarCasting, offset: 0x29d, size: 0x1, def value: None
 bool  ___m_EnableFarCasting;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.ICurveInteractionCaster))]
/// @brief Field m_FarInteractionCaster, offset: 0x2a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_FarInteractionCaster;

/// @brief Field m_FarCasterObjectRef, offset: 0x2a8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*  ___m_FarCasterObjectRef;

/// [SerializeField]
/// @brief Field m_FarAttachMode, offset: 0x2b0, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  ___m_FarAttachMode;

/// [SerializeField]
/// @brief Field m_EnableUIInteraction, offset: 0x2b4, size: 0x1, def value: None
 bool  ___m_EnableUIInteraction;

/// [SerializeField]
/// @brief Field m_BlockUIOnInteractableSelection, offset: 0x2b5, size: 0x1, def value: None
 bool  ___m_BlockUIOnInteractableSelection;

/// [SerializeField]
/// @brief Field m_UIHoverEntered, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  ___m_UIHoverEntered;

/// [SerializeField]
/// @brief Field m_UIHoverExited, offset: 0x2c0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  ___m_UIHoverExited;

/// [SerializeField]
/// @brief Field m_UIPressInput, offset: 0x2c8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_UIPressInput;

/// [SerializeField]
/// @brief Field m_UIScrollInput, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_UIScrollInput;

/// @brief Field m_SelectionRegion, offset: 0x2d8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*  ___m_SelectionRegion;

/// @brief Field m_ValidTargetCastSource, offset: 0x2e0, size: 0x4, def value: None
 ::GlobalNamespace::NearFarInteractor_Region  ___m_ValidTargetCastSource;

/// @brief Field m_SelectedTargetCastSource, offset: 0x2e4, size: 0x4, def value: None
 ::GlobalNamespace::NearFarInteractor_Region  ___m_SelectedTargetCastSource;

/// @brief Field m_TargetColliders, offset: 0x2e8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___m_TargetColliders;

/// @brief Field m_FarRayCastHits, offset: 0x2f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  ___m_FarRayCastHits;

/// @brief Field m_InternalValidTargets, offset: 0x2f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_InternalValidTargets;

/// @brief Field m_IndexToSnapVolumeMap, offset: 0x300, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_IndexToSnapVolumeMap;

/// @brief Field m_FarTargetToIndexMap, offset: 0x308, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*  ___m_FarTargetToIndexMap;

/// @brief Field m_PreFilteredTargets, offset: 0x310, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_PreFilteredTargets;

/// @brief Field m_ReleasedNearInteractionThisFrame, offset: 0x318, size: 0x1, def value: None
 bool  ___m_ReleasedNearInteractionThisFrame;

/// @brief Field m_RegisteredUIInteractorCache, offset: 0x320, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  ___m_RegisteredUIInteractorCache;

/// @brief Field m_UIModelUpdaterReferenceCache, offset: 0x328, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*  ___m_UIModelUpdaterReferenceCache;

/// @brief Field m_HasValidRayHit, offset: 0x330, size: 0x1, def value: None
 bool  ___m_HasValidRayHit;

/// @brief Field m_LastValidHitIsUI, offset: 0x331, size: 0x1, def value: None
 bool  ___m_LastValidHitIsUI;

/// @brief Field m_RayEndTransform, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RayEndTransform;

/// @brief Field m_RayEndPoint, offset: 0x340, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_RayEndPoint;

/// @brief Field m_RayEndNormal, offset: 0x34c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_RayEndNormal;

/// @brief Field m_NormalRelativeToInteractable, offset: 0x358, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_NormalRelativeToInteractable;

/// @brief Field m_ValidHitIsUI, offset: 0x364, size: 0x1, def value: None
 bool  ___m_ValidHitIsUI;

/// @brief Field m_ValidHitIsSnapVolume, offset: 0x365, size: 0x1, def value: None
 bool  ___m_ValidHitIsSnapVolume;

/// @brief Field m_ValidHitSnapVolumeInteractable, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_ValidHitSnapVolumeInteractable;

/// @brief Field m_AllowMultipleValidTargets, offset: 0x370, size: 0x1, def value: None
 bool  ___m_AllowMultipleValidTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_InteractionAttachController) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_InteractionAttachControllerObjectRef) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_EnableNearCasting) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_NearInteractionCaster) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_NearCasterObjectRef) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_NearCasterSortingStrategy) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_SortNearTargetsAfterTargetFilter) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_EnableFarCasting) == 0x29d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_FarInteractionCaster) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_FarCasterObjectRef) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_FarAttachMode) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_EnableUIInteraction) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_BlockUIOnInteractableSelection) == 0x2b5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_UIHoverEntered) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_UIHoverExited) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_UIPressInput) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_UIScrollInput) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_SelectionRegion) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_ValidTargetCastSource) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_SelectedTargetCastSource) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_TargetColliders) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_FarRayCastHits) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_InternalValidTargets) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_IndexToSnapVolumeMap) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_FarTargetToIndexMap) == 0x308, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_PreFilteredTargets) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_ReleasedNearInteractionThisFrame) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_RegisteredUIInteractorCache) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_UIModelUpdaterReferenceCache) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_HasValidRayHit) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_LastValidHitIsUI) == 0x331, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_RayEndTransform) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_RayEndPoint) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_RayEndNormal) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_NormalRelativeToInteractable) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_ValidHitIsUI) == 0x364, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_ValidHitIsSnapVolume) == 0x365, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_ValidHitSnapVolumeInteractable) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor, ___m_AllowMultipleValidTargets) == 0x370, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor) == 0x378, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
