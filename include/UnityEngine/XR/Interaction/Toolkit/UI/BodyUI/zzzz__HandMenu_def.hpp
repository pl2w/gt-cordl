#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/HandMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputModalityManager_InputMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_MenuHandedness_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_UpDirection_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandMenu)
namespace GlobalNamespace {
struct HandMenu_MenuHandedness;
}
namespace GlobalNamespace {
struct HandMenu_UpDirection;
}
namespace GlobalNamespace {
struct XRInputModalityManager_InputMode;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPresetDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPreset;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class QuaternionTweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class Vector3TweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class HandMenu;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu*, "UnityEngine.XR.Interaction.Toolkit.UI.BodyUI", "HandMenu");
// [AddComponentMenu("XR/Hand Menu", 22)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager::InputMode, UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu::MenuHandedness, UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu::UpDirection
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu
class CORDL_TYPE HandMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MenuHandedness = ::GlobalNamespace::HandMenu_MenuHandedness;

using UpDirection = ::GlobalNamespace::HandMenu_UpDirection;

 __declspec(property(get=get_animateMenuHideAndRevel, put=set_animateMenuHideAndRevel)) bool  animateMenuHideAndRevel;

 __declspec(property(get=get_handMenuUIGameObject, put=set_handMenuUIGameObject)) ::UnityW<::UnityEngine::GameObject>  handMenuUIGameObject;

 __declspec(property(get=get_handMenuUpDirection, put=set_handMenuUpDirection)) ::GlobalNamespace::HandMenu_UpDirection  handMenuUpDirection;

 __declspec(property(get=get_hideMenuOnSelect, put=set_hideMenuOnSelect)) bool  hideMenuOnSelect;

 __declspec(property(get=get_hideMenuWhenGazeDiverges, put=set_hideMenuWhenGazeDiverges)) bool  hideMenuWhenGazeDiverges;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

 __declspec(property(get=get_leftPalmAnchor, put=set_leftPalmAnchor)) ::UnityW<::UnityEngine::Transform>  leftPalmAnchor;

/// @brief Field m_AnimateMenuHideAndReveal, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AnimateMenuHideAndReveal, put=__cordl_internal_set_m_AnimateMenuHideAndReveal)) bool  m_AnimateMenuHideAndReveal;

/// @brief Field m_BindingsGroup, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_CameraTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraTransform, put=__cordl_internal_set_m_CameraTransform)) ::UnityW<::UnityEngine::Transform>  m_CameraTransform;

/// @brief Field m_ControllerFollowPreset, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerFollowPreset, put=__cordl_internal_set_m_ControllerFollowPreset)) ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  m_ControllerFollowPreset;

/// @brief Field m_CurrentInputMode, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentInputMode, put=__cordl_internal_set_m_CurrentInputMode)) ::GlobalNamespace::XRInputModalityManager_InputMode  m_CurrentInputMode;

/// @brief Field m_HandAnchorSmartFollow, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandAnchorSmartFollow, put=__cordl_internal_set_m_HandAnchorSmartFollow)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  m_HandAnchorSmartFollow;

/// @brief Field m_HandMenuUIGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandMenuUIGameObject, put=__cordl_internal_set_m_HandMenuUIGameObject)) ::UnityW<::UnityEngine::GameObject>  m_HandMenuUIGameObject;

/// @brief Field m_HandMenuUpDirection, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HandMenuUpDirection, put=__cordl_internal_set_m_HandMenuUpDirection)) ::GlobalNamespace::HandMenu_UpDirection  m_HandMenuUpDirection;

/// @brief Field m_HandTrackingFollowPreset, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandTrackingFollowPreset, put=__cordl_internal_set_m_HandTrackingFollowPreset)) ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  m_HandTrackingFollowPreset;

/// @brief Field m_HideCoroutine, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HideCoroutine, put=__cordl_internal_set_m_HideCoroutine)) ::UnityEngine::Coroutine*  m_HideCoroutine;

/// @brief Field m_HideMenuOnSelect, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideMenuOnSelect, put=__cordl_internal_set_m_HideMenuOnSelect)) bool  m_HideMenuOnSelect;

/// @brief Field m_HideMenuWhenGazeDiverges, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideMenuWhenGazeDiverges, put=__cordl_internal_set_m_HideMenuWhenGazeDiverges)) bool  m_HideMenuWhenGazeDiverges;

/// @brief Field m_InitialMenuLocalScale, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_InitialMenuLocalScale, put=__cordl_internal_set_m_InitialMenuLocalScale)) ::UnityEngine::Vector3  m_InitialMenuLocalScale;

/// @brief Field m_InteractionManager, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionManager, put=__cordl_internal_set_m_InteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_InteractionManager;

/// @brief Field m_LastHandThatMetRequirements, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHandThatMetRequirements, put=__cordl_internal_set_m_LastHandThatMetRequirements)) ::GlobalNamespace::HandMenu_MenuHandedness  m_LastHandThatMetRequirements;

/// @brief Field m_LastValidCameraTransform, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastValidCameraTransform, put=__cordl_internal_set_m_LastValidCameraTransform)) ::UnityW<::UnityEngine::Transform>  m_LastValidCameraTransform;

/// @brief Field m_LastValidPalmAnchor, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastValidPalmAnchor, put=__cordl_internal_set_m_LastValidPalmAnchor)) ::UnityW<::UnityEngine::Transform>  m_LastValidPalmAnchor;

/// @brief Field m_LastValidPalmAnchorOffset, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastValidPalmAnchorOffset, put=__cordl_internal_set_m_LastValidPalmAnchorOffset)) ::UnityW<::UnityEngine::Transform>  m_LastValidPalmAnchorOffset;

/// @brief Field m_LastValidTrackingTime, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastValidTrackingTime, put=__cordl_internal_set_m_LastValidTrackingTime)) float_t  m_LastValidTrackingTime;

/// @brief Field m_LeftOffsetRoot, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftOffsetRoot, put=__cordl_internal_set_m_LeftOffsetRoot)) ::UnityW<::UnityEngine::Transform>  m_LeftOffsetRoot;

/// @brief Field m_LeftPalmAnchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftPalmAnchor, put=__cordl_internal_set_m_LeftPalmAnchor)) ::UnityW<::UnityEngine::Transform>  m_LeftPalmAnchor;

/// @brief Field m_MaxFollowDistance, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxFollowDistance, put=__cordl_internal_set_m_MaxFollowDistance)) float_t  m_MaxFollowDistance;

/// @brief Field m_MenuHandedness, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MenuHandedness, put=__cordl_internal_set_m_MenuHandedness)) ::GlobalNamespace::HandMenu_MenuHandedness  m_MenuHandedness;

/// @brief Field m_MenuScaleTweenable, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MenuScaleTweenable, put=__cordl_internal_set_m_MenuScaleTweenable)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*  m_MenuScaleTweenable;

/// @brief Field m_MenuVisibilityDotThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MenuVisibilityDotThreshold, put=__cordl_internal_set_m_MenuVisibilityDotThreshold)) float_t  m_MenuVisibilityDotThreshold;

/// @brief Field m_MenuVisibleBindableVariable, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MenuVisibleBindableVariable, put=__cordl_internal_set_m_MenuVisibleBindableVariable)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*  m_MenuVisibleBindableVariable;

/// @brief Field m_MenuVisibleGazeAngleDivergenceThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MenuVisibleGazeAngleDivergenceThreshold, put=__cordl_internal_set_m_MenuVisibleGazeAngleDivergenceThreshold)) float_t  m_MenuVisibleGazeAngleDivergenceThreshold;

/// @brief Field m_MinFollowDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinFollowDistance, put=__cordl_internal_set_m_MinFollowDistance)) float_t  m_MinFollowDistance;

/// @brief Field m_MinToMaxDelaySeconds, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinToMaxDelaySeconds, put=__cordl_internal_set_m_MinToMaxDelaySeconds)) float_t  m_MinToMaxDelaySeconds;

/// @brief Field m_RevealHideAnimationDuration, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RevealHideAnimationDuration, put=__cordl_internal_set_m_RevealHideAnimationDuration)) float_t  m_RevealHideAnimationDuration;

/// @brief Field m_RightOffsetRoot, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightOffsetRoot, put=__cordl_internal_set_m_RightOffsetRoot)) ::UnityW<::UnityEngine::Transform>  m_RightOffsetRoot;

/// @brief Field m_RightPalmAnchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightPalmAnchor, put=__cordl_internal_set_m_RightPalmAnchor)) ::UnityW<::UnityEngine::Transform>  m_RightPalmAnchor;

/// @brief Field m_RotTweenFollow, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotTweenFollow, put=__cordl_internal_set_m_RotTweenFollow)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*  m_RotTweenFollow;

/// @brief Field m_ShowCoroutine, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowCoroutine, put=__cordl_internal_set_m_ShowCoroutine)) ::UnityEngine::Coroutine*  m_ShowCoroutine;

/// @brief Field m_WasMenuHiddenLastFrame, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasMenuHiddenLastFrame, put=__cordl_internal_set_m_WasMenuHiddenLastFrame)) bool  m_WasMenuHiddenLastFrame;

 __declspec(property(get=get_maxFollowDistance, put=set_maxFollowDistance)) float_t  maxFollowDistance;

 __declspec(property(get=get_menuHandedness, put=set_menuHandedness)) ::GlobalNamespace::HandMenu_MenuHandedness  menuHandedness;

 __declspec(property(get=get_menuVisibleGazeDivergenceThreshold, put=set_menuVisibleGazeDivergenceThreshold)) float_t  menuVisibleGazeDivergenceThreshold;

 __declspec(property(get=get_minFollowDistance, put=set_minFollowDistance)) float_t  minFollowDistance;

 __declspec(property(get=get_minToMaxDelaySeconds, put=set_minToMaxDelaySeconds)) float_t  minToMaxDelaySeconds;

 __declspec(property(get=get_revealHideAnimationDuration, put=set_revealHideAnimationDuration)) float_t  revealHideAnimationDuration;

 __declspec(property(get=get_rightPalmAnchor, put=set_rightPalmAnchor)) ::UnityW<::UnityEngine::Transform>  rightPalmAnchor;

/// @brief Method AngleToDot, addr 0xb444ebc, size 0x10, virtual false, abstract: false, final false
static inline float_t AngleToDot(float_t  angleDeg) ;

/// @brief Method Awake, addr 0xb444f0c, size 0x148, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentPreset, addr 0xb4457b4, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset* GetCurrentPreset() ;

/// @brief Method GetReferenceUpDirection, addr 0xb446350, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetReferenceUpDirection(::UnityEngine::Transform*  cameraTransform) ;

/// @brief Method GetTransformAnchorsForHandedness, addr 0xb4466a4, size 0x78, virtual false, abstract: false, final false
inline void GetTransformAnchorsForHandedness(::GlobalNamespace::HandMenu_MenuHandedness  handedness, ::by_ref<::UnityEngine::Transform*>  palmAnchor, ::by_ref<::UnityEngine::Transform*>  palmAnchorOffset) ;

/// @brief Method HideMenu, addr 0xb4459ec, size 0x1dc, virtual false, abstract: false, final false
inline void HideMenu() ;

/// @brief Method LateUpdate, addr 0xb445c04, size 0x528, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4456e8, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4455fc, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb445054, size 0x5a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInputModeChanged, addr 0xb44578c, size 0x28, virtual false, abstract: false, final false
inline void OnInputModeChanged(::GlobalNamespace::XRInputModalityManager_InputMode  newInputMode) ;

/// @brief Method OnMenuHidden, addr 0xb445bc8, size 0x3c, virtual false, abstract: false, final false
inline void OnMenuHidden() ;

/// @brief Method OnMenuVisible, addr 0xb4456c4, size 0x24, virtual false, abstract: false, final false
inline void OnMenuVisible() ;

/// @brief Method OnValidate, addr 0xb445738, size 0x54, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PalmMeetsRequirements, addr 0xb44659c, size 0x108, virtual false, abstract: false, final false
inline bool PalmMeetsRequirements(::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Transform*  palmAnchor, bool  isRightHand, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>  currentPresent) ;

/// @brief Method ShowMenu, addr 0xb445818, size 0x1d4, virtual false, abstract: false, final false
inline void ShowMenu() ;

/// @brief Method TryGetCamera, addr 0xb4463cc, size 0xf0, virtual false, abstract: false, final false
inline bool TryGetCamera(::by_ref<::UnityEngine::Transform*>  cameraTransform) ;

/// @brief Method TryGetInteractionManager, addr 0xb4464bc, size 0xe0, virtual false, abstract: false, final false
inline bool TryGetInteractionManager(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  manager) ;

/// @brief Method TryGetTrackedAnchors, addr 0xb44612c, size 0x224, virtual false, abstract: false, final false
inline bool TryGetTrackedAnchors(::GlobalNamespace::HandMenu_MenuHandedness  desiredHandedness, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*>  currentPreset, ::by_ref<::GlobalNamespace::HandMenu_MenuHandedness>  targetHandedness, ::by_ref<::UnityEngine::Transform*>  cameraTransform, ::by_ref<::UnityEngine::Transform*>  palmAnchor, ::by_ref<::UnityEngine::Transform*>  palmAnchorOffset) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__80_0, addr 0xb446944, size 0x60, virtual false, abstract: false, final false
inline void _OnEnable_b__80_0(::Unity::Mathematics::float3  newPosition) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__80_1, addr 0xb4469a4, size 0x58, virtual false, abstract: false, final false
inline void _OnEnable_b__80_1(::UnityEngine::Quaternion  newRot) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__80_2, addr 0xb4469fc, size 0x60, virtual false, abstract: false, final false
inline void _OnEnable_b__80_2(::Unity::Mathematics::float3  value) ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__80_3, addr 0xb446a5c, size 0xc, virtual false, abstract: false, final false
inline void _OnEnable_b__80_3(bool  value) ;

constexpr bool const& __cordl_internal_get_m_AnimateMenuHideAndReveal() const;

constexpr bool& __cordl_internal_get_m_AnimateMenuHideAndReveal() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CameraTransform() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* const& __cordl_internal_get_m_ControllerFollowPreset() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*& __cordl_internal_get_m_ControllerFollowPreset() ;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode const& __cordl_internal_get_m_CurrentInputMode() const;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode& __cordl_internal_get_m_CurrentInputMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable* const& __cordl_internal_get_m_HandAnchorSmartFollow() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*& __cordl_internal_get_m_HandAnchorSmartFollow() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_HandMenuUIGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_HandMenuUIGameObject() ;

constexpr ::GlobalNamespace::HandMenu_UpDirection const& __cordl_internal_get_m_HandMenuUpDirection() const;

constexpr ::GlobalNamespace::HandMenu_UpDirection& __cordl_internal_get_m_HandMenuUpDirection() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* const& __cordl_internal_get_m_HandTrackingFollowPreset() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*& __cordl_internal_get_m_HandTrackingFollowPreset() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_HideCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_HideCoroutine() ;

constexpr bool const& __cordl_internal_get_m_HideMenuOnSelect() const;

constexpr bool& __cordl_internal_get_m_HideMenuOnSelect() ;

constexpr bool const& __cordl_internal_get_m_HideMenuWhenGazeDiverges() const;

constexpr bool& __cordl_internal_get_m_HideMenuWhenGazeDiverges() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialMenuLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialMenuLocalScale() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager() ;

constexpr ::GlobalNamespace::HandMenu_MenuHandedness const& __cordl_internal_get_m_LastHandThatMetRequirements() const;

constexpr ::GlobalNamespace::HandMenu_MenuHandedness& __cordl_internal_get_m_LastHandThatMetRequirements() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LastValidCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LastValidCameraTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LastValidPalmAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LastValidPalmAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LastValidPalmAnchorOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LastValidPalmAnchorOffset() ;

constexpr float_t const& __cordl_internal_get_m_LastValidTrackingTime() const;

constexpr float_t& __cordl_internal_get_m_LastValidTrackingTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LeftOffsetRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LeftOffsetRoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_LeftPalmAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_LeftPalmAnchor() ;

constexpr float_t const& __cordl_internal_get_m_MaxFollowDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxFollowDistance() ;

constexpr ::GlobalNamespace::HandMenu_MenuHandedness const& __cordl_internal_get_m_MenuHandedness() const;

constexpr ::GlobalNamespace::HandMenu_MenuHandedness& __cordl_internal_get_m_MenuHandedness() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable* const& __cordl_internal_get_m_MenuScaleTweenable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*& __cordl_internal_get_m_MenuScaleTweenable() ;

constexpr float_t const& __cordl_internal_get_m_MenuVisibilityDotThreshold() const;

constexpr float_t& __cordl_internal_get_m_MenuVisibilityDotThreshold() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>* const& __cordl_internal_get_m_MenuVisibleBindableVariable() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*& __cordl_internal_get_m_MenuVisibleBindableVariable() ;

constexpr float_t const& __cordl_internal_get_m_MenuVisibleGazeAngleDivergenceThreshold() const;

constexpr float_t& __cordl_internal_get_m_MenuVisibleGazeAngleDivergenceThreshold() ;

constexpr float_t const& __cordl_internal_get_m_MinFollowDistance() const;

constexpr float_t& __cordl_internal_get_m_MinFollowDistance() ;

constexpr float_t const& __cordl_internal_get_m_MinToMaxDelaySeconds() const;

constexpr float_t& __cordl_internal_get_m_MinToMaxDelaySeconds() ;

constexpr float_t const& __cordl_internal_get_m_RevealHideAnimationDuration() const;

constexpr float_t& __cordl_internal_get_m_RevealHideAnimationDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RightOffsetRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RightOffsetRoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_RightPalmAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_RightPalmAnchor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* const& __cordl_internal_get_m_RotTweenFollow() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*& __cordl_internal_get_m_RotTweenFollow() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_ShowCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_ShowCoroutine() ;

constexpr bool const& __cordl_internal_get_m_WasMenuHiddenLastFrame() const;

constexpr bool& __cordl_internal_get_m_WasMenuHiddenLastFrame() ;

constexpr void __cordl_internal_set_m_AnimateMenuHideAndReveal(bool  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ControllerFollowPreset(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_CurrentInputMode(::GlobalNamespace::XRInputModalityManager_InputMode  value) ;

constexpr void __cordl_internal_set_m_HandAnchorSmartFollow(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  value) ;

constexpr void __cordl_internal_set_m_HandMenuUIGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_HandMenuUpDirection(::GlobalNamespace::HandMenu_UpDirection  value) ;

constexpr void __cordl_internal_set_m_HandTrackingFollowPreset(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_HideCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_HideMenuOnSelect(bool  value) ;

constexpr void __cordl_internal_set_m_HideMenuWhenGazeDiverges(bool  value) ;

constexpr void __cordl_internal_set_m_InitialMenuLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_LastHandThatMetRequirements(::GlobalNamespace::HandMenu_MenuHandedness  value) ;

constexpr void __cordl_internal_set_m_LastValidCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LastValidPalmAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LastValidPalmAnchorOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LastValidTrackingTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LeftOffsetRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_LeftPalmAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_MaxFollowDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MenuHandedness(::GlobalNamespace::HandMenu_MenuHandedness  value) ;

constexpr void __cordl_internal_set_m_MenuScaleTweenable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*  value) ;

constexpr void __cordl_internal_set_m_MenuVisibilityDotThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_MenuVisibleBindableVariable(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_MenuVisibleGazeAngleDivergenceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_MinFollowDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_MinToMaxDelaySeconds(float_t  value) ;

constexpr void __cordl_internal_set_m_RevealHideAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_RightOffsetRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RightPalmAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_RotTweenFollow(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*  value) ;

constexpr void __cordl_internal_set_m_ShowCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_WasMenuHiddenLastFrame(bool  value) ;

/// @brief Method .ctor, addr 0xb44671c, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_animateMenuHideAndRevel, addr 0xb444ecc, size 0x8, virtual false, abstract: false, final false
inline bool get_animateMenuHideAndRevel() ;

/// @brief Method get_handMenuUIGameObject, addr 0xb444db8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_handMenuUIGameObject() ;

/// @brief Method get_handMenuUpDirection, addr 0xb444dd8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandMenu_UpDirection get_handMenuUpDirection() ;

/// @brief Method get_hideMenuOnSelect, addr 0xb444eec, size 0x8, virtual false, abstract: false, final false
inline bool get_hideMenuOnSelect() ;

/// @brief Method get_hideMenuWhenGazeDiverges, addr 0xb444e78, size 0x8, virtual false, abstract: false, final false
inline bool get_hideMenuWhenGazeDiverges() ;

/// @brief Method get_interactionManager, addr 0xb444efc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// @brief Method get_leftPalmAnchor, addr 0xb444de8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_leftPalmAnchor() ;

/// @brief Method get_maxFollowDistance, addr 0xb444e2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxFollowDistance() ;

/// @brief Method get_menuHandedness, addr 0xb444dc8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandMenu_MenuHandedness get_menuHandedness() ;

/// @brief Method get_menuVisibleGazeDivergenceThreshold, addr 0xb444e88, size 0x8, virtual false, abstract: false, final false
inline float_t get_menuVisibleGazeDivergenceThreshold() ;

/// @brief Method get_minFollowDistance, addr 0xb444e08, size 0x8, virtual false, abstract: false, final false
inline float_t get_minFollowDistance() ;

/// @brief Method get_minToMaxDelaySeconds, addr 0xb444e54, size 0x8, virtual false, abstract: false, final false
inline float_t get_minToMaxDelaySeconds() ;

/// @brief Method get_revealHideAnimationDuration, addr 0xb444edc, size 0x8, virtual false, abstract: false, final false
inline float_t get_revealHideAnimationDuration() ;

/// @brief Method get_rightPalmAnchor, addr 0xb444df8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_rightPalmAnchor() ;

/// @brief Method set_animateMenuHideAndRevel, addr 0xb444ed4, size 0x8, virtual false, abstract: false, final false
inline void set_animateMenuHideAndRevel(bool  value) ;

/// @brief Method set_handMenuUIGameObject, addr 0xb444dc0, size 0x8, virtual false, abstract: false, final false
inline void set_handMenuUIGameObject(::UnityEngine::GameObject*  value) ;

/// @brief Method set_handMenuUpDirection, addr 0xb444de0, size 0x8, virtual false, abstract: false, final false
inline void set_handMenuUpDirection(::GlobalNamespace::HandMenu_UpDirection  value) ;

/// @brief Method set_hideMenuOnSelect, addr 0xb444ef4, size 0x8, virtual false, abstract: false, final false
inline void set_hideMenuOnSelect(bool  value) ;

/// @brief Method set_hideMenuWhenGazeDiverges, addr 0xb444e80, size 0x8, virtual false, abstract: false, final false
inline void set_hideMenuWhenGazeDiverges(bool  value) ;

/// @brief Method set_interactionManager, addr 0xb444f04, size 0x8, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

/// @brief Method set_leftPalmAnchor, addr 0xb444df0, size 0x8, virtual false, abstract: false, final false
inline void set_leftPalmAnchor(::UnityEngine::Transform*  value) ;

/// @brief Method set_maxFollowDistance, addr 0xb444e34, size 0x20, virtual false, abstract: false, final false
inline void set_maxFollowDistance(float_t  value) ;

/// @brief Method set_menuHandedness, addr 0xb444dd0, size 0x8, virtual false, abstract: false, final false
inline void set_menuHandedness(::GlobalNamespace::HandMenu_MenuHandedness  value) ;

/// @brief Method set_menuVisibleGazeDivergenceThreshold, addr 0xb444e90, size 0x2c, virtual false, abstract: false, final false
inline void set_menuVisibleGazeDivergenceThreshold(float_t  value) ;

/// @brief Method set_minFollowDistance, addr 0xb444e10, size 0x1c, virtual false, abstract: false, final false
inline void set_minFollowDistance(float_t  value) ;

/// @brief Method set_minToMaxDelaySeconds, addr 0xb444e5c, size 0x1c, virtual false, abstract: false, final false
inline void set_minToMaxDelaySeconds(float_t  value) ;

/// @brief Method set_revealHideAnimationDuration, addr 0xb444ee4, size 0x8, virtual false, abstract: false, final false
inline void set_revealHideAnimationDuration(float_t  value) ;

/// @brief Method set_rightPalmAnchor, addr 0xb444e00, size 0x8, virtual false, abstract: false, final false
inline void set_rightPalmAnchor(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandMenu", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandMenu(HandMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandMenu", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandMenu(HandMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11326};

/// [SerializeField]
/// [Tooltip("Child GameObject used to hold the hand menu UI. This is the transform that moves each frame.")]
/// @brief Field m_HandMenuUIGameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_HandMenuUIGameObject;

/// [Header("Hand alignment")]
/// [SerializeField]
/// [Tooltip("Which hand should the menu anchor to. None will disable the hand menu. Either will try to follow the first hand to meet requirements.")]
/// @brief Field m_MenuHandedness, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::HandMenu_MenuHandedness  ___m_MenuHandedness;

/// [SerializeField]
/// [Tooltip("Determines the up direction of the menu when the hand menu is looking at the camera.")]
/// @brief Field m_HandMenuUpDirection, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::HandMenu_UpDirection  ___m_HandMenuUpDirection;

/// [Header("Palm anchor")]
/// [SerializeField]
/// [Tooltip("Anchor associated with the left palm pose for the hand.")]
/// @brief Field m_LeftPalmAnchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LeftPalmAnchor;

/// [SerializeField]
/// [Tooltip("Anchor associated with the right palm pose for the hand.")]
/// @brief Field m_RightPalmAnchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RightPalmAnchor;

/// [Header("Position follow config.")]
/// [SerializeField]
/// [Tooltip("Minimum distance in meters from target before which tween starts.")]
/// @brief Field m_MinFollowDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MinFollowDistance;

/// [SerializeField]
/// [Tooltip("Maximum distance in meters from target before tween targets, when time threshold is reached.")]
/// @brief Field m_MaxFollowDistance, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_MaxFollowDistance;

/// [SerializeField]
/// [Tooltip("Time required to elapse before the max distance allowed goes from the min distance to the max.")]
/// @brief Field m_MinToMaxDelaySeconds, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_MinToMaxDelaySeconds;

/// [Header("Gaze Alignment Config")]
/// [SerializeField]
/// [Tooltip("If true, menu will hide when gaze to menu origin\'s divergence angle is above the threshold. In other words, the menu will only show if looking roughly in it\'s direction.")]
/// @brief Field m_HideMenuWhenGazeDiverges, offset: 0x4c, size: 0x1, def value: None
 bool  ___m_HideMenuWhenGazeDiverges;

/// [SerializeField]
/// [Tooltip("Only show menu if gaze to menu origin\'s divergence angle is below this value.")]
/// @brief Field m_MenuVisibleGazeAngleDivergenceThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_MenuVisibleGazeAngleDivergenceThreshold;

/// @brief Field m_MenuVisibilityDotThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_MenuVisibilityDotThreshold;

/// @brief Field m_HandAnchorSmartFollow, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*  ___m_HandAnchorSmartFollow;

/// @brief Field m_RotTweenFollow, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*  ___m_RotTweenFollow;

/// @brief Field m_MenuScaleTweenable, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable*  ___m_MenuScaleTweenable;

/// @brief Field m_BindingsGroup, offset: 0x70, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

/// @brief Field m_CameraTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CameraTransform;

/// @brief Field m_WasMenuHiddenLastFrame, offset: 0x80, size: 0x1, def value: None
 bool  ___m_WasMenuHiddenLastFrame;

/// @brief Field m_LastHandThatMetRequirements, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::HandMenu_MenuHandedness  ___m_LastHandThatMetRequirements;

/// [Header("Animation Settings")]
/// [SerializeField]
/// [Tooltip("Should the menu animate when it is revealed or hidden.")]
/// @brief Field m_AnimateMenuHideAndReveal, offset: 0x88, size: 0x1, def value: None
 bool  ___m_AnimateMenuHideAndReveal;

/// [SerializeField]
/// [Tooltip("Duration of the reveal/hide animation in seconds.")]
/// @brief Field m_RevealHideAnimationDuration, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_RevealHideAnimationDuration;

/// [Header("Selection Behavior")]
/// [SerializeField]
/// [Tooltip("Should the menu hide when a selection is made with the hand for which the menu is anchored to.")]
/// @brief Field m_HideMenuOnSelect, offset: 0x90, size: 0x1, def value: None
 bool  ___m_HideMenuOnSelect;

/// [SerializeField]
/// [Tooltip("XR Interaction Manager used to determine if a hand is selecting. Will find one if None. Used for Hide Menu On Select.")]
/// @brief Field m_InteractionManager, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_InteractionManager;

/// [Header("Follow presets")]
/// [SerializeField]
/// @brief Field m_HandTrackingFollowPreset, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  ___m_HandTrackingFollowPreset;

/// [SerializeField]
/// @brief Field m_ControllerFollowPreset, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*  ___m_ControllerFollowPreset;

/// @brief Field m_CurrentInputMode, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::XRInputModalityManager_InputMode  ___m_CurrentInputMode;

/// @brief Field m_LeftOffsetRoot, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LeftOffsetRoot;

/// @brief Field m_RightOffsetRoot, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_RightOffsetRoot;

/// @brief Field m_HideCoroutine, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_HideCoroutine;

/// @brief Field m_ShowCoroutine, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_ShowCoroutine;

/// @brief Field m_LastValidCameraTransform, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LastValidCameraTransform;

/// @brief Field m_LastValidPalmAnchor, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LastValidPalmAnchor;

/// @brief Field m_LastValidPalmAnchorOffset, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_LastValidPalmAnchorOffset;

/// @brief Field m_InitialMenuLocalScale, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_InitialMenuLocalScale;

/// @brief Field m_MenuVisibleBindableVariable, offset: 0x100, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<bool>*  ___m_MenuVisibleBindableVariable;

/// @brief Field m_LastValidTrackingTime, offset: 0x108, size: 0x4, def value: None
 float_t  ___m_LastValidTrackingTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HandMenuUIGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MenuHandedness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HandMenuUpDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LeftPalmAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_RightPalmAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MinFollowDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MaxFollowDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MinToMaxDelaySeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HideMenuWhenGazeDiverges) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MenuVisibleGazeAngleDivergenceThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MenuVisibilityDotThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HandAnchorSmartFollow) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_RotTweenFollow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MenuScaleTweenable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_BindingsGroup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_CameraTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_WasMenuHiddenLastFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LastHandThatMetRequirements) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_AnimateMenuHideAndReveal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_RevealHideAnimationDuration) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HideMenuOnSelect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_InteractionManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HandTrackingFollowPreset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_ControllerFollowPreset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_CurrentInputMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LeftOffsetRoot) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_RightOffsetRoot) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_HideCoroutine) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_ShowCoroutine) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LastValidCameraTransform) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LastValidPalmAnchor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LastValidPalmAnchorOffset) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_InitialMenuLocalScale) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_MenuVisibleBindableVariable) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu, ___m_LastValidTrackingTime) == 0x108, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::HandMenu) == 0x110, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI::BodyUI
