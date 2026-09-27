#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_UpdateType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBaseController)
namespace GlobalNamespace {
struct XRBaseController_UpdateType;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseSingleChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController_HapticImpulseChannel;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController_HapticImpulseChannel;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseController");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseController/HapticImpulseChannel");
// [DefaultExecutionOrder(-29990)]
// [DisallowMultipleComponent]
// [Obsolete("XRBaseController has been deprecated in version 3.0.0. Its functionality has been distributed into different components.")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.XR.Interaction.Toolkit.InteractionState, UnityEngine.XR.Interaction.Toolkit.XRBaseController::UpdateType
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRBaseController
class CORDL_TYPE XRBaseController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateType = ::GlobalNamespace::XRBaseController_UpdateType;

using HapticImpulseChannel = ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel;

 __declspec(property(get=get_activateInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  activateInteractionState;

/// @brief [Obsolete("anchorControlDeadzone is obsolete. Please configure deadzone on the Rotate Anchor and Translate Anchor Actions.", true)]
 __declspec(property(get=get_anchorControlDeadzone, put=set_anchorControlDeadzone)) float_t  anchorControlDeadzone;

/// @brief [Obsolete("anchorControlOffAxisDeadzone is obsolete. Please configure deadzone on the Rotate Anchor and Translate Anchor Actions.", true)]
 __declspec(property(get=get_anchorControlOffAxisDeadzone, put=set_anchorControlOffAxisDeadzone)) float_t  anchorControlOffAxisDeadzone;

 __declspec(property(get=get_animateModel, put=set_animateModel)) bool  animateModel;

 __declspec(property(get=get_currentControllerState, put=set_currentControllerState)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  currentControllerState;

 __declspec(property(get=get_enableInputActions, put=set_enableInputActions)) bool  enableInputActions;

 __declspec(property(get=get_enableInputTracking, put=set_enableInputTracking)) bool  enableInputTracking;

 __declspec(property(get=get_hideControllerModel, put=set_hideControllerModel)) bool  hideControllerModel;

/// @brief Field m_ActivateInteractionState, offset 0x64, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateInteractionState, put=__cordl_internal_set_m_ActivateInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  m_ActivateInteractionState;

/// @brief Field m_AnimateModel, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AnimateModel, put=__cordl_internal_set_m_AnimateModel)) bool  m_AnimateModel;

/// @brief Field m_ControllerState, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerState, put=__cordl_internal_set_m_ControllerState)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  m_ControllerState;

/// @brief Field m_CreateControllerState, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CreateControllerState, put=__cordl_internal_set_m_CreateControllerState)) bool  m_CreateControllerState;

/// @brief Field m_EnableInputActions, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableInputActions, put=__cordl_internal_set_m_EnableInputActions)) bool  m_EnableInputActions;

/// @brief Field m_EnableInputTracking, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableInputTracking, put=__cordl_internal_set_m_EnableInputTracking)) bool  m_EnableInputTracking;

/// @brief Field m_HapticChannel, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticChannel, put=__cordl_internal_set_m_HapticChannel)) ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*  m_HapticChannel;

/// @brief Field m_HapticChannelGroup, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticChannelGroup, put=__cordl_internal_set_m_HapticChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  m_HapticChannelGroup;

/// @brief Field m_HasWarnedAnimatorMissing, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasWarnedAnimatorMissing, put=__cordl_internal_set_m_HasWarnedAnimatorMissing)) bool  m_HasWarnedAnimatorMissing;

/// @brief Field m_HideControllerModel, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideControllerModel, put=__cordl_internal_set_m_HideControllerModel)) bool  m_HideControllerModel;

/// @brief Field m_Model, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Model, put=__cordl_internal_set_m_Model)) ::UnityW<::UnityEngine::Transform>  m_Model;

/// @brief Field m_ModelAnimator, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ModelAnimator, put=__cordl_internal_set_m_ModelAnimator)) ::UnityW<::UnityEngine::Animator>  m_ModelAnimator;

/// @brief Field m_ModelDeSelectTransition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ModelDeSelectTransition, put=__cordl_internal_set_m_ModelDeSelectTransition)) ::StringW  m_ModelDeSelectTransition;

/// @brief Field m_ModelParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ModelParent, put=__cordl_internal_set_m_ModelParent)) ::UnityW<::UnityEngine::Transform>  m_ModelParent;

/// @brief Field m_ModelPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ModelPrefab, put=__cordl_internal_set_m_ModelPrefab)) ::UnityW<::UnityEngine::Transform>  m_ModelPrefab;

/// @brief Field m_ModelSelectTransition, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ModelSelectTransition, put=__cordl_internal_set_m_ModelSelectTransition)) ::StringW  m_ModelSelectTransition;

/// @brief Field m_PerformSetup, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PerformSetup, put=__cordl_internal_set_m_PerformSetup)) bool  m_PerformSetup;

/// @brief Field m_SelectInteractionState, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractionState, put=__cordl_internal_set_m_SelectInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  m_SelectInteractionState;

/// @brief Field m_UIPressInteractionState, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIPressInteractionState, put=__cordl_internal_set_m_UIPressInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  m_UIPressInteractionState;

/// @brief Field m_UIScrollValue, offset 0x74, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIScrollValue, put=__cordl_internal_set_m_UIScrollValue)) ::UnityEngine::Vector2  m_UIScrollValue;

/// @brief Field m_UpdateTrackingType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateTrackingType, put=__cordl_internal_set_m_UpdateTrackingType)) ::GlobalNamespace::XRBaseController_UpdateType  m_UpdateTrackingType;

 __declspec(property(get=get_model, put=set_model)) ::UnityW<::UnityEngine::Transform>  model;

 __declspec(property(get=get_modelDeSelectTransition, put=set_modelDeSelectTransition)) ::StringW  modelDeSelectTransition;

 __declspec(property(get=get_modelParent, put=set_modelParent)) ::UnityW<::UnityEngine::Transform>  modelParent;

 __declspec(property(get=get_modelPrefab, put=set_modelPrefab)) ::UnityW<::UnityEngine::Transform>  modelPrefab;

 __declspec(property(get=get_modelSelectTransition, put=set_modelSelectTransition)) ::StringW  modelSelectTransition;

/// @brief [Obsolete("modelTransform has been deprecated due to being renamed. Use modelParent instead. (UnityUpgradable) -> modelParent", true)]
 __declspec(property(get=get_modelTransform, put=set_modelTransform)) ::UnityW<::UnityEngine::Transform>  modelTransform;

 __declspec(property(get=get_selectInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  selectInteractionState;

 __declspec(property(get=get_uiPressInteractionState)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  uiPressInteractionState;

 __declspec(property(get=get_uiScrollValue)) ::UnityEngine::Vector2  uiScrollValue;

 __declspec(property(get=get_updateTrackingType, put=set_updateTrackingType)) ::GlobalNamespace::XRBaseController_UpdateType  updateTrackingType;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*() noexcept;

/// @brief Method ApplyControllerState, addr 0xb400ce4, size 0x118, virtual true, abstract: false, final false
inline void ApplyControllerState(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method Awake, addr 0xb400734, size 0x1a8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0xb400c90, size 0x54, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// [Obsolete("GetControllerState has been deprecated. Use currentControllerState instead.", true)]
/// @brief Method GetControllerState, addr 0xb40042c, size 0x20, virtual true, abstract: false, final false
inline bool GetControllerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>  controllerState) ;

/// @brief Method GetModelPrefab, addr 0xb400b0c, size 0x88, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetModelPrefab() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseController* New_ctor() ;

/// @brief Method OnBeforeRender, addr 0xb400c38, size 0x58, virtual true, abstract: false, final false
inline void OnBeforeRender() ;

/// @brief Method OnDisable, addr 0xb3fea20, size 0x94, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb3fe760, size 0x94, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SendHapticImpulse, addr 0xb400fc0, size 0x8, virtual true, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// [Obsolete("SetControllerState has been deprecated. Use currentControllerState instead.", true)]
/// @brief Method SetControllerState, addr 0xb40044c, size 0x4, virtual true, abstract: false, final false
inline void SetControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method SetupControllerState, addr 0xb400698, size 0x7c, virtual false, abstract: false, final false
inline void SetupControllerState() ;

/// @brief Method SetupModel, addr 0xb4008e8, size 0x164, virtual false, abstract: false, final false
inline void SetupModel() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.IXRHapticImpulseProvider.GetChannelGroup, addr 0xb400fc8, size 0xcc, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_GetChannelGroup() ;

/// @brief Method Update, addr 0xb4008dc, size 0xc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateController, addr 0xb400b94, size 0xa4, virtual true, abstract: false, final false
inline void UpdateController() ;

/// @brief Method UpdateControllerModelAnimation, addr 0xb400dfc, size 0x1c4, virtual true, abstract: false, final false
inline void UpdateControllerModelAnimation() ;

/// @brief Method UpdateInput, addr 0xb3ff660, size 0x4, virtual true, abstract: false, final false
inline void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

/// @brief Method UpdateTrackingInput, addr 0xb3ff230, size 0x4, virtual true, abstract: false, final false
inline void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_ActivateInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_ActivateInteractionState() ;

constexpr bool const& __cordl_internal_get_m_AnimateModel() const;

constexpr bool& __cordl_internal_get_m_AnimateModel() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* const& __cordl_internal_get_m_ControllerState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*& __cordl_internal_get_m_ControllerState() ;

constexpr bool const& __cordl_internal_get_m_CreateControllerState() const;

constexpr bool& __cordl_internal_get_m_CreateControllerState() ;

constexpr bool const& __cordl_internal_get_m_EnableInputActions() const;

constexpr bool& __cordl_internal_get_m_EnableInputActions() ;

constexpr bool const& __cordl_internal_get_m_EnableInputTracking() const;

constexpr bool& __cordl_internal_get_m_EnableInputTracking() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel* const& __cordl_internal_get_m_HapticChannel() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*& __cordl_internal_get_m_HapticChannel() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* const& __cordl_internal_get_m_HapticChannelGroup() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*& __cordl_internal_get_m_HapticChannelGroup() ;

constexpr bool const& __cordl_internal_get_m_HasWarnedAnimatorMissing() const;

constexpr bool& __cordl_internal_get_m_HasWarnedAnimatorMissing() ;

constexpr bool const& __cordl_internal_get_m_HideControllerModel() const;

constexpr bool& __cordl_internal_get_m_HideControllerModel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Model() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Model() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_ModelAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_ModelAnimator() ;

constexpr ::StringW const& __cordl_internal_get_m_ModelDeSelectTransition() const;

constexpr ::StringW& __cordl_internal_get_m_ModelDeSelectTransition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ModelParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ModelParent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_ModelPrefab() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_ModelPrefab() ;

constexpr ::StringW const& __cordl_internal_get_m_ModelSelectTransition() const;

constexpr ::StringW& __cordl_internal_get_m_ModelSelectTransition() ;

constexpr bool const& __cordl_internal_get_m_PerformSetup() const;

constexpr bool& __cordl_internal_get_m_PerformSetup() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_SelectInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_SelectInteractionState() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get_m_UIPressInteractionState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get_m_UIPressInteractionState() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_UIScrollValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_UIScrollValue() ;

constexpr ::GlobalNamespace::XRBaseController_UpdateType const& __cordl_internal_get_m_UpdateTrackingType() const;

constexpr ::GlobalNamespace::XRBaseController_UpdateType& __cordl_internal_get_m_UpdateTrackingType() ;

constexpr void __cordl_internal_set_m_ActivateInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_m_AnimateModel(bool  value) ;

constexpr void __cordl_internal_set_m_ControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value) ;

constexpr void __cordl_internal_set_m_CreateControllerState(bool  value) ;

constexpr void __cordl_internal_set_m_EnableInputActions(bool  value) ;

constexpr void __cordl_internal_set_m_EnableInputTracking(bool  value) ;

constexpr void __cordl_internal_set_m_HapticChannel(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*  value) ;

constexpr void __cordl_internal_set_m_HapticChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  value) ;

constexpr void __cordl_internal_set_m_HasWarnedAnimatorMissing(bool  value) ;

constexpr void __cordl_internal_set_m_HideControllerModel(bool  value) ;

constexpr void __cordl_internal_set_m_Model(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ModelAnimator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_m_ModelDeSelectTransition(::StringW  value) ;

constexpr void __cordl_internal_set_m_ModelParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ModelPrefab(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ModelSelectTransition(::StringW  value) ;

constexpr void __cordl_internal_set_m_PerformSetup(bool  value) ;

constexpr void __cordl_internal_set_m_SelectInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_m_UIPressInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

constexpr void __cordl_internal_set_m_UIScrollValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_UpdateTrackingType(::GlobalNamespace::XRBaseController_UpdateType  value) ;

/// @brief Method .ctor, addr 0xb400354, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activateInteractionState, addr 0xb400668, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_activateInteractionState() ;

/// @brief Method get_anchorControlDeadzone, addr 0xb40045c, size 0x8, virtual false, abstract: false, final false
inline float_t get_anchorControlDeadzone() ;

/// @brief Method get_anchorControlOffAxisDeadzone, addr 0xb400468, size 0x8, virtual false, abstract: false, final false
inline float_t get_anchorControlOffAxisDeadzone() ;

/// @brief Method get_animateModel, addr 0xb400578, size 0x8, virtual false, abstract: false, final false
inline bool get_animateModel() ;

/// @brief Method get_currentControllerState, addr 0xb400680, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* get_currentControllerState() ;

/// @brief Method get_enableInputActions, addr 0xb400494, size 0x8, virtual false, abstract: false, final false
inline bool get_enableInputActions() ;

/// @brief Method get_enableInputTracking, addr 0xb400484, size 0x8, virtual false, abstract: false, final false
inline bool get_enableInputTracking() ;

/// @brief Method get_hideControllerModel, addr 0xb4005a8, size 0x8, virtual false, abstract: false, final false
inline bool get_hideControllerModel() ;

/// @brief Method get_model, addr 0xb400568, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_model() ;

/// @brief Method get_modelDeSelectTransition, addr 0xb400598, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_modelDeSelectTransition() ;

/// @brief Method get_modelParent, addr 0xb4004b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_modelParent() ;

/// @brief Method get_modelPrefab, addr 0xb4004a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_modelPrefab() ;

/// @brief Method get_modelSelectTransition, addr 0xb400588, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_modelSelectTransition() ;

/// @brief Method get_modelTransform, addr 0xb400450, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_modelTransform() ;

/// @brief Method get_selectInteractionState, addr 0xb400660, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_selectInteractionState() ;

/// @brief Method get_uiPressInteractionState, addr 0xb400670, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_uiPressInteractionState() ;

/// @brief Method get_uiScrollValue, addr 0xb400678, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_uiScrollValue() ;

/// @brief Method get_updateTrackingType, addr 0xb400474, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseController_UpdateType get_updateTrackingType() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseProvider() noexcept;

/// @brief Method set_anchorControlDeadzone, addr 0xb400464, size 0x4, virtual false, abstract: false, final false
inline void set_anchorControlDeadzone(float_t  value) ;

/// @brief Method set_anchorControlOffAxisDeadzone, addr 0xb400470, size 0x4, virtual false, abstract: false, final false
inline void set_anchorControlOffAxisDeadzone(float_t  value) ;

/// @brief Method set_animateModel, addr 0xb400580, size 0x8, virtual false, abstract: false, final false
inline void set_animateModel(bool  value) ;

/// @brief Method set_currentControllerState, addr 0xb400714, size 0x20, virtual false, abstract: false, final false
inline void set_currentControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value) ;

/// @brief Method set_enableInputActions, addr 0xb40049c, size 0x8, virtual false, abstract: false, final false
inline void set_enableInputActions(bool  value) ;

/// @brief Method set_enableInputTracking, addr 0xb40048c, size 0x8, virtual false, abstract: false, final false
inline void set_enableInputTracking(bool  value) ;

/// @brief Method set_hideControllerModel, addr 0xb4005b0, size 0xb0, virtual false, abstract: false, final false
inline void set_hideControllerModel(bool  value) ;

/// @brief Method set_model, addr 0xb400570, size 0x8, virtual false, abstract: false, final false
inline void set_model(::UnityEngine::Transform*  value) ;

/// @brief Method set_modelDeSelectTransition, addr 0xb4005a0, size 0x8, virtual false, abstract: false, final false
inline void set_modelDeSelectTransition(::StringW  value) ;

/// @brief Method set_modelParent, addr 0xb4004bc, size 0xac, virtual false, abstract: false, final false
inline void set_modelParent(::UnityEngine::Transform*  value) ;

/// @brief Method set_modelPrefab, addr 0xb4004ac, size 0x8, virtual false, abstract: false, final false
inline void set_modelPrefab(::UnityEngine::Transform*  value) ;

/// @brief Method set_modelSelectTransition, addr 0xb400590, size 0x8, virtual false, abstract: false, final false
inline void set_modelSelectTransition(::StringW  value) ;

/// @brief Method set_modelTransform, addr 0xb400458, size 0x4, virtual false, abstract: false, final false
inline void set_modelTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_updateTrackingType, addr 0xb40047c, size 0x8, virtual false, abstract: false, final false
inline void set_updateTrackingType(::GlobalNamespace::XRBaseController_UpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseController(XRBaseController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseController(XRBaseController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11069};

/// [SerializeField]
/// @brief Field m_UpdateTrackingType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseController_UpdateType  ___m_UpdateTrackingType;

/// [SerializeField]
/// @brief Field m_EnableInputTracking, offset: 0x24, size: 0x1, def value: None
 bool  ___m_EnableInputTracking;

/// [SerializeField]
/// @brief Field m_EnableInputActions, offset: 0x25, size: 0x1, def value: None
 bool  ___m_EnableInputActions;

/// [SerializeField]
/// @brief Field m_ModelPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ModelPrefab;

/// [SerializeField]
/// [FormerlySerializedAs("m_ModelTransform")]
/// @brief Field m_ModelParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_ModelParent;

/// [SerializeField]
/// @brief Field m_Model, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Model;

/// [SerializeField]
/// @brief Field m_AnimateModel, offset: 0x40, size: 0x1, def value: None
 bool  ___m_AnimateModel;

/// [SerializeField]
/// @brief Field m_ModelSelectTransition, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___m_ModelSelectTransition;

/// [SerializeField]
/// @brief Field m_ModelDeSelectTransition, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___m_ModelDeSelectTransition;

/// @brief Field m_HideControllerModel, offset: 0x58, size: 0x1, def value: None
 bool  ___m_HideControllerModel;

/// @brief Field m_SelectInteractionState, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___m_SelectInteractionState;

/// @brief Field m_ActivateInteractionState, offset: 0x64, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___m_ActivateInteractionState;

/// @brief Field m_UIPressInteractionState, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ___m_UIPressInteractionState;

/// @brief Field m_UIScrollValue, offset: 0x74, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_UIScrollValue;

/// @brief Field m_ControllerState, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  ___m_ControllerState;

/// @brief Field m_CreateControllerState, offset: 0x88, size: 0x1, def value: None
 bool  ___m_CreateControllerState;

/// @brief Field m_ModelAnimator, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___m_ModelAnimator;

/// @brief Field m_HasWarnedAnimatorMissing, offset: 0x98, size: 0x1, def value: None
 bool  ___m_HasWarnedAnimatorMissing;

/// @brief Field m_PerformSetup, offset: 0x99, size: 0x1, def value: None
 bool  ___m_PerformSetup;

/// @brief Field m_HapticChannel, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*  ___m_HapticChannel;

/// @brief Field m_HapticChannelGroup, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  ___m_HapticChannelGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_UpdateTrackingType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_EnableInputTracking) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_EnableInputActions) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_Model) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_AnimateModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelSelectTransition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelDeSelectTransition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HideControllerModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_SelectInteractionState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ActivateInteractionState) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_UIPressInteractionState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_UIScrollValue) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ControllerState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_CreateControllerState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_ModelAnimator) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HasWarnedAnimatorMissing) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_PerformSetup) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HapticChannel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController, ___m_HapticChannelGroup) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRBaseController/HapticImpulseChannel
class CORDL_TYPE XRBaseController_HapticImpulseChannel : public ::System::Object {
public:
// Declarations
/// @brief Field m_Controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controller, put=__cordl_internal_set_m_Controller)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  m_Controller;

/// @brief Field m_WarningLogged, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WarningLogged, put=__cordl_internal_set_m_WarningLogged)) bool  m_WarningLogged;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel* New_ctor(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  controller) ;

/// @brief Method SendHapticImpulse, addr 0xb4010c4, size 0x104, virtual true, abstract: false, final true
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_Controller() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_Controller() ;

constexpr bool const& __cordl_internal_get_m_WarningLogged() const;

constexpr bool& __cordl_internal_get_m_WarningLogged() ;

constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value) ;

constexpr void __cordl_internal_set_m_WarningLogged(bool  value) ;

/// @brief Method .ctor, addr 0xb401094, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  controller) ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseController_HapticImpulseChannel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseController_HapticImpulseChannel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseController_HapticImpulseChannel(XRBaseController_HapticImpulseChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseController_HapticImpulseChannel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseController_HapticImpulseChannel(XRBaseController_HapticImpulseChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11068};

/// @brief Field m_Controller, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  ___m_Controller;

/// @brief Field m_WarningLogged, offset: 0x18, size: 0x1, def value: None
 bool  ___m_WarningLogged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel, ___m_Controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel, ___m_WarningLogged) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
