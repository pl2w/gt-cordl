#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractableAffordanceStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_ActivateClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_SelectClickAnimationMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractableAffordanceStateProvider)
namespace GlobalNamespace {
struct XRInteractableAffordanceStateProvider_ActivateClickAnimationMode;
}
namespace GlobalNamespace {
struct XRInteractableAffordanceStateProvider_SelectClickAnimationMode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider__ClickAnimation_d__91;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractionStrengthInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider__ClickAnimation_d__91;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/<ClickAnimation>d__91");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractableAffordanceStateProvider/<HoveredPriorityRoutine>d__93");
// [AddComponentMenu("Affordance System/XR Interactable Affordance State Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider.html")]
// [DisallowMultipleComponent]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::ActivateClickAnimationMode, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::SelectClickAnimationMode
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider
class CORDL_TYPE XRInteractableAffordanceStateProvider : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider {
public:
// Declarations
using ActivateClickAnimationMode = ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode;

using SelectClickAnimationMode = ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode;

using _ClickAnimation_d__91 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91;

using _HoveredPriorityRoutine_d__93 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93;

 __declspec(property(get=get_activateClickAnimationMode, put=set_activateClickAnimationMode)) ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  activateClickAnimationMode;

 __declspec(property(get=get_clickAnimationCurve, put=set_clickAnimationCurve)) ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  clickAnimationCurve;

 __declspec(property(get=get_clickAnimationDuration, put=set_clickAnimationDuration)) float_t  clickAnimationDuration;

 __declspec(property(get=get_ignoreActivateEvents, put=set_ignoreActivateEvents)) bool  ignoreActivateEvents;

 __declspec(property(get=get_ignoreFocusEvents, put=set_ignoreFocusEvents)) bool  ignoreFocusEvents;

 __declspec(property(get=get_ignoreHoverEvents, put=set_ignoreHoverEvents)) bool  ignoreHoverEvents;

 __declspec(property(get=get_ignoreHoverPriorityEvents, put=set_ignoreHoverPriorityEvents)) bool  ignoreHoverPriorityEvents;

 __declspec(property(get=get_ignoreSelectEvents, put=set_ignoreSelectEvents)) bool  ignoreSelectEvents;

 __declspec(property(get=get_interactableSource, put=set_interactableSource)) ::UnityW<::UnityEngine::Object>  interactableSource;

 __declspec(property(get=get_isActivated)) bool  isActivated;

 __declspec(property(get=get_isFocused)) bool  isFocused;

 __declspec(property(get=get_isHovered)) bool  isHovered;

 __declspec(property(get=get_isRegistered)) bool  isRegistered;

 __declspec(property(get=get_isSelected)) bool  isSelected;

/// @brief Field m_ActivateClickAnimationMode, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivateClickAnimationMode, put=__cordl_internal_set_m_ActivateClickAnimationMode)) ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  m_ActivateClickAnimationMode;

/// @brief Field m_ActivateInteractable, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateInteractable, put=__cordl_internal_set_m_ActivateInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  m_ActivateInteractable;

/// @brief Field m_ActivatedClickAnimation, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivatedClickAnimation, put=__cordl_internal_set_m_ActivatedClickAnimation)) ::UnityEngine::Coroutine*  m_ActivatedClickAnimation;

/// @brief Field m_ClickAnimationCurve, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClickAnimationCurve, put=__cordl_internal_set_m_ClickAnimationCurve)) ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  m_ClickAnimationCurve;

/// @brief Field m_ClickAnimationDuration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ClickAnimationDuration, put=__cordl_internal_set_m_ClickAnimationDuration)) float_t  m_ClickAnimationDuration;

/// @brief Field m_FocusInteractable, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusInteractable, put=__cordl_internal_set_m_FocusInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  m_FocusInteractable;

/// @brief Field m_HasHoverInteractable, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasHoverInteractable, put=__cordl_internal_set_m_HasHoverInteractable)) bool  m_HasHoverInteractable;

/// @brief Field m_HasInteractionStrengthInteractable, offset 0xde, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInteractionStrengthInteractable, put=__cordl_internal_set_m_HasInteractionStrengthInteractable)) bool  m_HasInteractionStrengthInteractable;

/// @brief Field m_HasSelectInteractable, offset 0xdd, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasSelectInteractable, put=__cordl_internal_set_m_HasSelectInteractable)) bool  m_HasSelectInteractable;

/// @brief Field m_HoverInteractable, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverInteractable, put=__cordl_internal_set_m_HoverInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  m_HoverInteractable;

/// @brief Field m_HoveredPriorityRoutine, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoveredPriorityRoutine, put=__cordl_internal_set_m_HoveredPriorityRoutine)) ::UnityEngine::Coroutine*  m_HoveredPriorityRoutine;

/// @brief Field m_HoveringPriorityInteractorCount, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HoveringPriorityInteractorCount, put=__cordl_internal_set_m_HoveringPriorityInteractorCount)) int32_t  m_HoveringPriorityInteractorCount;

/// @brief Field m_IgnoreActivateEvents, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreActivateEvents, put=__cordl_internal_set_m_IgnoreActivateEvents)) bool  m_IgnoreActivateEvents;

/// @brief Field m_IgnoreFocusEvents, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreFocusEvents, put=__cordl_internal_set_m_IgnoreFocusEvents)) bool  m_IgnoreFocusEvents;

/// @brief Field m_IgnoreHoverEvents, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreHoverEvents, put=__cordl_internal_set_m_IgnoreHoverEvents)) bool  m_IgnoreHoverEvents;

/// @brief Field m_IgnoreHoverPriorityEvents, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreHoverPriorityEvents, put=__cordl_internal_set_m_IgnoreHoverPriorityEvents)) bool  m_IgnoreHoverPriorityEvents;

/// @brief Field m_IgnoreSelectEvents, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreSelectEvents, put=__cordl_internal_set_m_IgnoreSelectEvents)) bool  m_IgnoreSelectEvents;

/// @brief Field m_Interactable, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactable, put=__cordl_internal_set_m_Interactable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  m_Interactable;

/// @brief Field m_InteractableSource, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableSource, put=__cordl_internal_set_m_InteractableSource)) ::UnityW<::UnityEngine::Object>  m_InteractableSource;

/// @brief Field m_InteractionStrengthInteractable, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengthInteractable, put=__cordl_internal_set_m_InteractionStrengthInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*  m_InteractionStrengthInteractable;

/// @brief Field m_IsActivated, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActivated, put=__cordl_internal_set_m_IsActivated)) bool  m_IsActivated;

/// @brief Field m_IsBoundToInteractionEvents, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsBoundToInteractionEvents, put=__cordl_internal_set_m_IsBoundToInteractionEvents)) bool  m_IsBoundToInteractionEvents;

/// @brief Field m_IsHoveredPriority, offset 0xdb, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsHoveredPriority, put=__cordl_internal_set_m_IsHoveredPriority)) bool  m_IsHoveredPriority;

/// @brief Field m_IsRegistered, offset 0xda, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRegistered, put=__cordl_internal_set_m_IsRegistered)) bool  m_IsRegistered;

/// @brief Field m_SelectClickAnimationMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectClickAnimationMode, put=__cordl_internal_set_m_SelectClickAnimationMode)) ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  m_SelectClickAnimationMode;

/// @brief Field m_SelectInteractable, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractable, put=__cordl_internal_set_m_SelectInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  m_SelectInteractable;

/// @brief Field m_SelectedClickAnimation, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedClickAnimation, put=__cordl_internal_set_m_SelectedClickAnimation)) ::UnityEngine::Coroutine*  m_SelectedClickAnimation;

 __declspec(property(get=get_selectClickAnimationMode, put=set_selectClickAnimationMode)) ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  selectClickAnimationMode;

/// @brief Method ActivatedClickBehavior, addr 0xb4d4500, size 0xd0, virtual true, abstract: false, final false
inline void ActivatedClickBehavior() ;

/// @brief Method Awake, addr 0xb4d3d3c, size 0x174, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BindToProviders, addr 0xb4d4bf4, size 0xbf8, virtual true, abstract: false, final false
inline void BindToProviders() ;

/// @brief Method ClearBindings, addr 0xb4d57ec, size 0x970, virtual true, abstract: false, final false
inline void ClearBindings() ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::<ClickAnimation>d__91))]
/// @brief Method ClickAnimation, addr 0xb4d4658, size 0xa0, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* ClickAnimation(uint8_t  targetStateIndex, float_t  duration, ::System::Action*  onComplete) ;

/// @brief Method GenerateNewAffordanceState, addr 0xb4d4720, size 0x4ac, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData GenerateNewAffordanceState() ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider::<HoveredPriorityRoutine>d__93))]
/// @brief Method HoveredPriorityRoutine, addr 0xb4d4090, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HoveredPriorityRoutine() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider* New_ctor() ;

/// @brief Method OnActivatedEvent, addr 0xb4d42c8, size 0x94, virtual true, abstract: false, final false
inline void OnActivatedEvent(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// @brief Method OnDeactivatedEvent, addr 0xb4d435c, size 0xa4, virtual true, abstract: false, final false
inline void OnDeactivatedEvent(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method OnFirstFocusEntered, addr 0xb4d42c0, size 0x4, virtual true, abstract: false, final false
inline void OnFirstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFirstHoverEntered, addr 0xb4d3f74, size 0x4, virtual true, abstract: false, final false
inline void OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnFirstSelectEntered, addr 0xb4d4194, size 0x8c, virtual true, abstract: false, final false
inline void OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnHoverEntered, addr 0xb4d3f7c, size 0x114, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb4d40fc, size 0x98, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnLargestInteractionStrengthChanged, addr 0xb4d4400, size 0x18, virtual true, abstract: false, final false
inline void OnLargestInteractionStrengthChanged(float_t  value) ;

/// @brief Method OnLastFocusExited, addr 0xb4d42c4, size 0x4, virtual true, abstract: false, final false
inline void OnLastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method OnLastHoverExited, addr 0xb4d3f78, size 0x4, virtual true, abstract: false, final false
inline void OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnLastSelectExited, addr 0xb4d4220, size 0xa0, virtual true, abstract: false, final false
inline void OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0xb4d3f60, size 0xc, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0xb4d3f6c, size 0x8, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method OnValidate, addr 0xb4d3eb0, size 0xb0, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RefreshState, addr 0xb4d3a3c, size 0x58, virtual false, abstract: false, final false
inline void RefreshState() ;

/// @brief Method SelectedClickBehavior, addr 0xb4d4418, size 0xd0, virtual true, abstract: false, final false
inline void SelectedClickBehavior() ;

/// @brief Method SetBoundInteractionReceiver, addr 0xb4d36d4, size 0x268, virtual false, abstract: false, final false
inline bool SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  receiver) ;

/// @brief Method StopActivatedCoroutine, addr 0xb4d45d0, size 0x44, virtual false, abstract: false, final false
inline void StopActivatedCoroutine() ;

/// @brief Method StopAllClickAnimations, addr 0xb4d44e8, size 0x18, virtual false, abstract: false, final false
inline void StopAllClickAnimations() ;

/// @brief Method StopHoveredPriorityRoutine, addr 0xb4d39f0, size 0x4c, virtual false, abstract: false, final false
inline void StopHoveredPriorityRoutine() ;

/// @brief Method StopSelectedCoroutine, addr 0xb4d4614, size 0x44, virtual false, abstract: false, final false
inline void StopSelectedCoroutine() ;

/// [CompilerGenerated]
/// @brief Method <ActivatedClickBehavior>b__87_0, addr 0xb4d620c, size 0xc, virtual false, abstract: false, final false
inline void _ActivatedClickBehavior_b__87_0() ;

/// [CompilerGenerated]
/// @brief Method <SelectedClickBehavior>b__86_0, addr 0xb4d6200, size 0xc, virtual false, abstract: false, final false
inline void _SelectedClickBehavior_b__86_0() ;

constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode const& __cordl_internal_get_m_ActivateClickAnimationMode() const;

constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode& __cordl_internal_get_m_ActivateClickAnimationMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* const& __cordl_internal_get_m_ActivateInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*& __cordl_internal_get_m_ActivateInteractable() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_ActivatedClickAnimation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_ActivatedClickAnimation() ;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* const& __cordl_internal_get_m_ClickAnimationCurve() const;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& __cordl_internal_get_m_ClickAnimationCurve() ;

constexpr float_t const& __cordl_internal_get_m_ClickAnimationDuration() const;

constexpr float_t& __cordl_internal_get_m_ClickAnimationDuration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& __cordl_internal_get_m_FocusInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& __cordl_internal_get_m_FocusInteractable() ;

constexpr bool const& __cordl_internal_get_m_HasHoverInteractable() const;

constexpr bool& __cordl_internal_get_m_HasHoverInteractable() ;

constexpr bool const& __cordl_internal_get_m_HasInteractionStrengthInteractable() const;

constexpr bool& __cordl_internal_get_m_HasInteractionStrengthInteractable() ;

constexpr bool const& __cordl_internal_get_m_HasSelectInteractable() const;

constexpr bool& __cordl_internal_get_m_HasSelectInteractable() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* const& __cordl_internal_get_m_HoverInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*& __cordl_internal_get_m_HoverInteractable() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_HoveredPriorityRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_HoveredPriorityRoutine() ;

constexpr int32_t const& __cordl_internal_get_m_HoveringPriorityInteractorCount() const;

constexpr int32_t& __cordl_internal_get_m_HoveringPriorityInteractorCount() ;

constexpr bool const& __cordl_internal_get_m_IgnoreActivateEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreActivateEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreFocusEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreFocusEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreHoverEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreHoverEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreHoverPriorityEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreHoverPriorityEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreSelectEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreSelectEvents() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get_m_Interactable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get_m_Interactable() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractableSource() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractableSource() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable* const& __cordl_internal_get_m_InteractionStrengthInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*& __cordl_internal_get_m_InteractionStrengthInteractable() ;

constexpr bool const& __cordl_internal_get_m_IsActivated() const;

constexpr bool& __cordl_internal_get_m_IsActivated() ;

constexpr bool const& __cordl_internal_get_m_IsBoundToInteractionEvents() const;

constexpr bool& __cordl_internal_get_m_IsBoundToInteractionEvents() ;

constexpr bool const& __cordl_internal_get_m_IsHoveredPriority() const;

constexpr bool& __cordl_internal_get_m_IsHoveredPriority() ;

constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

constexpr bool& __cordl_internal_get_m_IsRegistered() ;

constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode const& __cordl_internal_get_m_SelectClickAnimationMode() const;

constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode& __cordl_internal_get_m_SelectClickAnimationMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get_m_SelectInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get_m_SelectInteractable() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_SelectedClickAnimation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_SelectedClickAnimation() ;

constexpr void __cordl_internal_set_m_ActivateClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  value) ;

constexpr void __cordl_internal_set_m_ActivateInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  value) ;

constexpr void __cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_ClickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ClickAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_FocusInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

constexpr void __cordl_internal_set_m_HasHoverInteractable(bool  value) ;

constexpr void __cordl_internal_set_m_HasInteractionStrengthInteractable(bool  value) ;

constexpr void __cordl_internal_set_m_HasSelectInteractable(bool  value) ;

constexpr void __cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value) ;

constexpr void __cordl_internal_set_m_HoveredPriorityRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_HoveringPriorityInteractorCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_IgnoreActivateEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreFocusEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreHoverEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreHoverPriorityEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreSelectEvents(bool  value) ;

constexpr void __cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set_m_InteractableSource(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengthInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*  value) ;

constexpr void __cordl_internal_set_m_IsActivated(bool  value) ;

constexpr void __cordl_internal_set_m_IsBoundToInteractionEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IsHoveredPriority(bool  value) ;

constexpr void __cordl_internal_set_m_IsRegistered(bool  value) ;

constexpr void __cordl_internal_set_m_SelectClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  value) ;

constexpr void __cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0xb4d615c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activateClickAnimationMode, addr 0xb4d3ad4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode get_activateClickAnimationMode() ;

/// @brief Method get_clickAnimationCurve, addr 0xb4d3af4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* get_clickAnimationCurve() ;

/// @brief Method get_clickAnimationDuration, addr 0xb4d3ae4, size 0x8, virtual false, abstract: false, final false
inline float_t get_clickAnimationDuration() ;

/// @brief Method get_ignoreActivateEvents, addr 0xb4d3ab4, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreActivateEvents() ;

/// @brief Method get_ignoreFocusEvents, addr 0xb4d3a94, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreFocusEvents() ;

/// @brief Method get_ignoreHoverEvents, addr 0xb4d393c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreHoverEvents() ;

/// @brief Method get_ignoreHoverPriorityEvents, addr 0xb4d394c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreHoverPriorityEvents() ;

/// @brief Method get_ignoreSelectEvents, addr 0xb4d3aa4, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreSelectEvents() ;

/// @brief Method get_interactableSource, addr 0xb4d360c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_interactableSource() ;

/// @brief Method get_isActivated, addr 0xb4d3d2c, size 0x8, virtual true, abstract: false, final false
inline bool get_isActivated() ;

/// @brief Method get_isFocused, addr 0xb4d3c7c, size 0xb0, virtual true, abstract: false, final false
inline bool get_isFocused() ;

/// @brief Method get_isHovered, addr 0xb4d3b04, size 0xbc, virtual true, abstract: false, final false
inline bool get_isHovered() ;

/// @brief Method get_isRegistered, addr 0xb4d3d34, size 0x8, virtual true, abstract: false, final false
inline bool get_isRegistered() ;

/// @brief Method get_isSelected, addr 0xb4d3bc0, size 0xbc, virtual true, abstract: false, final false
inline bool get_isSelected() ;

/// @brief Method get_selectClickAnimationMode, addr 0xb4d3ac4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode get_selectClickAnimationMode() ;

/// @brief Method set_activateClickAnimationMode, addr 0xb4d3adc, size 0x8, virtual false, abstract: false, final false
inline void set_activateClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  value) ;

/// @brief Method set_clickAnimationCurve, addr 0xb4d3afc, size 0x8, virtual false, abstract: false, final false
inline void set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value) ;

/// @brief Method set_clickAnimationDuration, addr 0xb4d3aec, size 0x8, virtual false, abstract: false, final false
inline void set_clickAnimationDuration(float_t  value) ;

/// @brief Method set_ignoreActivateEvents, addr 0xb4d3abc, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreActivateEvents(bool  value) ;

/// @brief Method set_ignoreFocusEvents, addr 0xb4d3a9c, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreFocusEvents(bool  value) ;

/// @brief Method set_ignoreHoverEvents, addr 0xb4d3944, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreHoverEvents(bool  value) ;

/// @brief Method set_ignoreHoverPriorityEvents, addr 0xb4d3954, size 0x9c, virtual false, abstract: false, final false
inline void set_ignoreHoverPriorityEvents(bool  value) ;

/// @brief Method set_ignoreSelectEvents, addr 0xb4d3aac, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreSelectEvents(bool  value) ;

/// @brief Method set_interactableSource, addr 0xb4d3614, size 0xc0, virtual false, abstract: false, final false
inline void set_interactableSource(::UnityEngine::Object*  value) ;

/// @brief Method set_selectClickAnimationMode, addr 0xb4d3acc, size 0x8, virtual false, abstract: false, final false
inline void set_selectClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractableAffordanceStateProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractableAffordanceStateProvider(XRInteractableAffordanceStateProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractableAffordanceStateProvider(XRInteractableAffordanceStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11735};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable))]
/// [Tooltip("The interactable component that drives the affordance states. If null, Unity will try and find an interactable component attached.")]
/// @brief Field m_InteractableSource, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractableSource;

/// [Header("Event Constraints")]
/// [SerializeField]
/// [Tooltip("When hover events are registered and this is true, the state will fallback to idle or disabled.")]
/// @brief Field m_IgnoreHoverEvents, offset: 0x70, size: 0x1, def value: None
 bool  ___m_IgnoreHoverEvents;

/// [SerializeField]
/// [Tooltip("When this is true, the state will fallback to hover if the later is not ignored. When this is false, this provider will check if the Interactable Source has priority for selection when hovered, and update its state accordingly.")]
/// @brief Field m_IgnoreHoverPriorityEvents, offset: 0x71, size: 0x1, def value: None
 bool  ___m_IgnoreHoverPriorityEvents;

/// [SerializeField]
/// [Tooltip("When focus events are registered and this is true, the state will fallback to idle or disabled.")]
/// @brief Field m_IgnoreFocusEvents, offset: 0x72, size: 0x1, def value: None
 bool  ___m_IgnoreFocusEvents;

/// [SerializeField]
/// [Tooltip("When select events are registered and this is true, the state will fallback to idle or disabled. Note this will not affect click animations which can be disabled separately.")]
/// @brief Field m_IgnoreSelectEvents, offset: 0x73, size: 0x1, def value: None
 bool  ___m_IgnoreSelectEvents;

/// [SerializeField]
/// [Tooltip("When activate events are registered and this is true, the state will fallback to idle or disabled.Note this will not affect click animations which can be disabled separately.")]
/// @brief Field m_IgnoreActivateEvents, offset: 0x74, size: 0x1, def value: None
 bool  ___m_IgnoreActivateEvents;

/// [Header("Click Animation Config")]
/// [SerializeField]
/// [Tooltip("Condition to trigger click animation for Selected interaction events.")]
/// @brief Field m_SelectClickAnimationMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  ___m_SelectClickAnimationMode;

/// [SerializeField]
/// [Tooltip("Condition to trigger click animation for activated interaction events.")]
/// @brief Field m_ActivateClickAnimationMode, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  ___m_ActivateClickAnimationMode;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Duration of click animations for selected and activated events.")]
/// @brief Field m_ClickAnimationDuration, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_ClickAnimationDuration;

/// [SerializeField]
/// [Tooltip("Animation curve reference for click animation events. Select the More menu (\u{22ee}) to choose between a direct reference and a reusable scriptable object animation curve datum.")]
/// @brief Field m_ClickAnimationCurve, offset: 0x88, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  ___m_ClickAnimationCurve;

/// @brief Field m_Interactable, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ___m_Interactable;

/// @brief Field m_HoverInteractable, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  ___m_HoverInteractable;

/// @brief Field m_SelectInteractable, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ___m_SelectInteractable;

/// @brief Field m_FocusInteractable, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  ___m_FocusInteractable;

/// @brief Field m_ActivateInteractable, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  ___m_ActivateInteractable;

/// @brief Field m_InteractionStrengthInteractable, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*  ___m_InteractionStrengthInteractable;

/// @brief Field m_SelectedClickAnimation, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_SelectedClickAnimation;

/// @brief Field m_ActivatedClickAnimation, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_ActivatedClickAnimation;

/// @brief Field m_HoveredPriorityRoutine, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_HoveredPriorityRoutine;

/// @brief Field m_IsBoundToInteractionEvents, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_IsBoundToInteractionEvents;

/// @brief Field m_IsActivated, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_IsActivated;

/// @brief Field m_IsRegistered, offset: 0xda, size: 0x1, def value: None
 bool  ___m_IsRegistered;

/// @brief Field m_IsHoveredPriority, offset: 0xdb, size: 0x1, def value: None
 bool  ___m_IsHoveredPriority;

/// @brief Field m_HasHoverInteractable, offset: 0xdc, size: 0x1, def value: None
 bool  ___m_HasHoverInteractable;

/// @brief Field m_HasSelectInteractable, offset: 0xdd, size: 0x1, def value: None
 bool  ___m_HasSelectInteractable;

/// @brief Field m_HasInteractionStrengthInteractable, offset: 0xde, size: 0x1, def value: None
 bool  ___m_HasInteractionStrengthInteractable;

/// @brief Field m_HoveringPriorityInteractorCount, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_HoveringPriorityInteractorCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_InteractableSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreHoverEvents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreHoverPriorityEvents) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreFocusEvents) == 0x72, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreSelectEvents) == 0x73, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IgnoreActivateEvents) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectClickAnimationMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivateClickAnimationMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ClickAnimationDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ClickAnimationCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_Interactable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoverInteractable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectInteractable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_FocusInteractable) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivateInteractable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_InteractionStrengthInteractable) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_SelectedClickAnimation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_ActivatedClickAnimation) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoveredPriorityRoutine) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsBoundToInteractionEvents) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsActivated) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsRegistered) == 0xda, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_IsHoveredPriority) == 0xdb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HasHoverInteractable) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HasSelectInteractable) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HasInteractionStrengthInteractable) == 0xde, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider, ___m_HoveringPriorityInteractorCount) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider) == 0xe8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider/<HoveredPriorityRoutine>d__93
class CORDL_TYPE XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb4d63f8, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb4d6558, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb4d6560, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb4d6598, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb4d63f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb4d4bcc, size 0x28, virtual false, abstract: false, final false
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
constexpr XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93(XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93(XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11734};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider/<ClickAnimation>d__91
class CORDL_TYPE XRInteractableAffordanceStateProvider__ClickAnimation_d__91 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  __4__this;

/// @brief Field <elapsedTime>5__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime_5__2, put=__cordl_internal_set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field onComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action*  onComplete;

/// @brief Field targetStateIndex, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetStateIndex, put=__cordl_internal_set_targetStateIndex)) uint8_t  targetStateIndex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb4d621c, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb4d63ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb4d63b4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb4d63ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb4d6218, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

constexpr float_t& __cordl_internal_get__elapsedTime_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::System::Action* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action*& __cordl_internal_get_onComplete() ;

constexpr uint8_t const& __cordl_internal_get_targetStateIndex() const;

constexpr uint8_t& __cordl_internal_get_targetStateIndex() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  value) ;

constexpr void __cordl_internal_set__elapsedTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_targetStateIndex(uint8_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb4d46f8, size 0x28, virtual false, abstract: false, final false
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
constexpr XRInteractableAffordanceStateProvider__ClickAnimation_d__91() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider__ClickAnimation_d__91", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractableAffordanceStateProvider__ClickAnimation_d__91(XRInteractableAffordanceStateProvider__ClickAnimation_d__91 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractableAffordanceStateProvider__ClickAnimation_d__91", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractableAffordanceStateProvider__ClickAnimation_d__91(XRInteractableAffordanceStateProvider__ClickAnimation_d__91 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11733};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  _____4__this;

/// @brief Field targetStateIndex, offset: 0x30, size: 0x1, def value: None
 uint8_t  ___targetStateIndex;

/// @brief Field onComplete, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

/// @brief Field <elapsedTime>5__2, offset: 0x40, size: 0x4, def value: None
 float_t  ____elapsedTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, ___targetStateIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, ___onComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91, ____elapsedTime_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
