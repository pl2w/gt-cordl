#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractorAffordanceStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_SelectClickAnimationMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorAffordanceStateProvider)
namespace GlobalNamespace {
struct XRInteractorAffordanceStateProvider_ActivateClickAnimationMode;
}
namespace GlobalNamespace {
struct XRInteractorAffordanceStateProvider_SelectClickAnimationMode;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class XRInteractorAffordanceStateProvider__ClickAnimation_d__98;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ICurveInteractionDataProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionStrengthInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
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
class XRInteractorAffordanceStateProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractorAffordanceStateProvider__ClickAnimation_d__98;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractorAffordanceStateProvider");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractorAffordanceStateProvider/<ClickAnimation>d__98");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "XRInteractorAffordanceStateProvider/<UIUpdateCheckCoroutine>d__99");
// [AddComponentMenu("Affordance System/XR Interactor Affordance State Provider", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider.html")]
// [DisallowMultipleComponent]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider::ActivateClickAnimationMode, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider::SelectClickAnimationMode
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider
class CORDL_TYPE XRInteractorAffordanceStateProvider : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider {
public:
// Declarations
using ActivateClickAnimationMode = ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode;

using SelectClickAnimationMode = ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode;

using _ClickAnimation_d__98 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98;

using _UIUpdateCheckCoroutine_d__99 = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99;

 __declspec(property(get=get_activateClickAnimationMode, put=set_activateClickAnimationMode)) ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  activateClickAnimationMode;

 __declspec(property(get=get_clickAnimationCurve, put=set_clickAnimationCurve)) ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  clickAnimationCurve;

 __declspec(property(get=get_clickAnimationDuration, put=set_clickAnimationDuration)) float_t  clickAnimationDuration;

 __declspec(property(get=get_hasUIHover)) bool  hasUIHover;

 __declspec(property(get=get_hasUISelection)) bool  hasUISelection;

 __declspec(property(get=get_hasXRHover)) bool  hasXRHover;

 __declspec(property(get=get_hasXRSelection)) bool  hasXRSelection;

 __declspec(property(get=get_ignoreActivateEvents, put=set_ignoreActivateEvents)) bool  ignoreActivateEvents;

 __declspec(property(get=get_ignoreHoverEvents, put=set_ignoreHoverEvents)) bool  ignoreHoverEvents;

 __declspec(property(get=get_ignoreSelectEvents, put=set_ignoreSelectEvents)) bool  ignoreSelectEvents;

 __declspec(property(get=get_ignoreUGUIHover, put=set_ignoreUGUIHover)) bool  ignoreUGUIHover;

 __declspec(property(get=get_ignoreUGUISelect, put=set_ignoreUGUISelect)) bool  ignoreUGUISelect;

 __declspec(property(get=get_ignoreXRInteractionEvents, put=set_ignoreXRInteractionEvents)) bool  ignoreXRInteractionEvents;

 __declspec(property(get=get_interactorSource, put=set_interactorSource)) ::UnityW<::UnityEngine::Object>  interactorSource;

 __declspec(property(get=get_isActivated)) bool  isActivated;

 __declspec(property(get=get_isBlockedByGroup)) bool  isBlockedByGroup;

 __declspec(property(get=get_isRegistered)) bool  isRegistered;

/// @brief Field m_ActivateClickAnimationMode, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ActivateClickAnimationMode, put=__cordl_internal_set_m_ActivateClickAnimationMode)) ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  m_ActivateClickAnimationMode;

/// @brief Field m_ActivatedClickAnimation, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivatedClickAnimation, put=__cordl_internal_set_m_ActivatedClickAnimation)) ::UnityEngine::Coroutine*  m_ActivatedClickAnimation;

/// @brief Field m_BoundActivateInteractable, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundActivateInteractable, put=__cordl_internal_set_m_BoundActivateInteractable)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  m_BoundActivateInteractable;

/// @brief Field m_ClickAnimationCurve, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClickAnimationCurve, put=__cordl_internal_set_m_ClickAnimationCurve)) ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  m_ClickAnimationCurve;

/// @brief Field m_ClickAnimationDuration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ClickAnimationDuration, put=__cordl_internal_set_m_ClickAnimationDuration)) float_t  m_ClickAnimationDuration;

/// @brief Field m_CurveInteractionDataProvider, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurveInteractionDataProvider, put=__cordl_internal_set_m_CurveInteractionDataProvider)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  m_CurveInteractionDataProvider;

/// @brief Field m_HasCurveInteractionDataProvider, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCurveInteractionDataProvider, put=__cordl_internal_set_m_HasCurveInteractionDataProvider)) bool  m_HasCurveInteractionDataProvider;

/// @brief Field m_HasHoverInteractor, offset 0xc3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasHoverInteractor, put=__cordl_internal_set_m_HasHoverInteractor)) bool  m_HasHoverInteractor;

/// @brief Field m_HasInteractionStrengthInteractor, offset 0xc5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasInteractionStrengthInteractor, put=__cordl_internal_set_m_HasInteractionStrengthInteractor)) bool  m_HasInteractionStrengthInteractor;

/// @brief Field m_HasRayInteractor, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasRayInteractor, put=__cordl_internal_set_m_HasRayInteractor)) bool  m_HasRayInteractor;

/// @brief Field m_HasSelectInteractor, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasSelectInteractor, put=__cordl_internal_set_m_HasSelectInteractor)) bool  m_HasSelectInteractor;

/// @brief Field m_HoverInteractor, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverInteractor, put=__cordl_internal_set_m_HoverInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  m_HoverInteractor;

/// @brief Field m_IgnoreActivateEvents, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreActivateEvents, put=__cordl_internal_set_m_IgnoreActivateEvents)) bool  m_IgnoreActivateEvents;

/// @brief Field m_IgnoreHoverEvents, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreHoverEvents, put=__cordl_internal_set_m_IgnoreHoverEvents)) bool  m_IgnoreHoverEvents;

/// @brief Field m_IgnoreSelectEvents, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreSelectEvents, put=__cordl_internal_set_m_IgnoreSelectEvents)) bool  m_IgnoreSelectEvents;

/// @brief Field m_IgnoreUGUIHover, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreUGUIHover, put=__cordl_internal_set_m_IgnoreUGUIHover)) bool  m_IgnoreUGUIHover;

/// @brief Field m_IgnoreUGUISelect, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreUGUISelect, put=__cordl_internal_set_m_IgnoreUGUISelect)) bool  m_IgnoreUGUISelect;

/// @brief Field m_IgnoreXRInteractionEvents, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreXRInteractionEvents, put=__cordl_internal_set_m_IgnoreXRInteractionEvents)) bool  m_IgnoreXRInteractionEvents;

/// @brief Field m_InteractionStrengthInteractor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengthInteractor, put=__cordl_internal_set_m_InteractionStrengthInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*  m_InteractionStrengthInteractor;

/// @brief Field m_Interactor, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactor, put=__cordl_internal_set_m_Interactor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  m_Interactor;

/// @brief Field m_InteractorSource, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorSource, put=__cordl_internal_set_m_InteractorSource)) ::UnityW<::UnityEngine::Object>  m_InteractorSource;

/// @brief Field m_IsActivated, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActivated, put=__cordl_internal_set_m_IsActivated)) bool  m_IsActivated;

/// @brief Field m_IsBoundToInteractionEvents, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsBoundToInteractionEvents, put=__cordl_internal_set_m_IsBoundToInteractionEvents)) bool  m_IsBoundToInteractionEvents;

/// @brief Field m_IsIXRInteractor, offset 0xc6, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsIXRInteractor, put=__cordl_internal_set_m_IsIXRInteractor)) bool  m_IsIXRInteractor;

/// @brief Field m_IsRegistered, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRegistered, put=__cordl_internal_set_m_IsRegistered)) bool  m_IsRegistered;

/// @brief Field m_RayInteractor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayInteractor, put=__cordl_internal_set_m_RayInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  m_RayInteractor;

/// @brief Field m_SelectClickAnimationMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectClickAnimationMode, put=__cordl_internal_set_m_SelectClickAnimationMode)) ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  m_SelectClickAnimationMode;

/// @brief Field m_SelectInteractor, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInteractor, put=__cordl_internal_set_m_SelectInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  m_SelectInteractor;

/// @brief Field m_SelectedClickAnimation, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedClickAnimation, put=__cordl_internal_set_m_SelectedClickAnimation)) ::UnityEngine::Coroutine*  m_SelectedClickAnimation;

/// @brief Field m_UGUIUpdateCoroutine, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UGUIUpdateCoroutine, put=__cordl_internal_set_m_UGUIUpdateCoroutine)) ::UnityEngine::Coroutine*  m_UGUIUpdateCoroutine;

/// @brief Field m_UIHovering, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UIHovering, put=__cordl_internal_set_m_UIHovering)) bool  m_UIHovering;

/// @brief Field m_UISelecting, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UISelecting, put=__cordl_internal_set_m_UISelecting)) bool  m_UISelecting;

 __declspec(property(get=get_selectClickAnimationMode, put=set_selectClickAnimationMode)) ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  selectClickAnimationMode;

/// @brief Method ActivatedClickBehavior, addr 0xb4d9378, size 0xd8, virtual true, abstract: false, final false
inline void ActivatedClickBehavior() ;

/// @brief Method Awake, addr 0xb4d6bf4, size 0x174, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BindToProviders, addr 0xb4d6d68, size 0x7dc, virtual true, abstract: false, final false
inline void BindToProviders() ;

/// @brief Method ClearBindings, addr 0xb4d75e4, size 0x820, virtual true, abstract: false, final false
inline void ClearBindings() ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider::<ClickAnimation>d__98))]
/// @brief Method ClickAnimation, addr 0xb4d9450, size 0xa8, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* ClickAnimation(uint8_t  targetStateIndex, float_t  duration, ::System::Action*  onComplete) ;

/// @brief Method GenerateNewAffordanceState, addr 0xb4d7e04, size 0x4c8, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData GenerateNewAffordanceState() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider* New_ctor() ;

/// @brief Method OnActivated, addr 0xb4d9134, size 0xb8, virtual false, abstract: false, final false
inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// @brief Method OnDeactivated, addr 0xb4d91ec, size 0xb4, virtual false, abstract: false, final false
inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method OnHoverEntered, addr 0xb4d8330, size 0x3e8, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb4d8718, size 0x280, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnLargestInteractionStrengthChanged, addr 0xb4d90ec, size 0x48, virtual true, abstract: false, final false
inline void OnLargestInteractionStrengthChanged(float_t  value) ;

/// @brief Method OnRegistered, addr 0xb4d82cc, size 0x34, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb4d8998, size 0x458, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb4d8df0, size 0x2fc, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0xb4d8300, size 0x30, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method RefreshState, addr 0xb4d75b8, size 0x2c, virtual false, abstract: false, final false
inline void RefreshState() ;

/// @brief Method SelectedClickBehavior, addr 0xb4d92a0, size 0xd8, virtual true, abstract: false, final false
inline void SelectedClickBehavior() ;

/// @brief Method SetBoundInteractionReceiver, addr 0xb4d6668, size 0x2d4, virtual false, abstract: false, final false
inline bool SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [IteratorStateMachine(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider::<UIUpdateCheckCoroutine>d__99))]
/// @brief Method UIUpdateCheckCoroutine, addr 0xb4d7544, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UIUpdateCheckCoroutine() ;

/// [CompilerGenerated]
/// @brief Method <ActivatedClickBehavior>b__97_0, addr 0xb4d95fc, size 0x5c, virtual false, abstract: false, final false
inline void _ActivatedClickBehavior_b__97_0() ;

/// [CompilerGenerated]
/// @brief Method <SelectedClickBehavior>b__96_0, addr 0xb4d95f0, size 0xc, virtual false, abstract: false, final false
inline void _SelectedClickBehavior_b__96_0() ;

constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode const& __cordl_internal_get_m_ActivateClickAnimationMode() const;

constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode& __cordl_internal_get_m_ActivateClickAnimationMode() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_ActivatedClickAnimation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_ActivatedClickAnimation() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* const& __cordl_internal_get_m_BoundActivateInteractable() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*& __cordl_internal_get_m_BoundActivateInteractable() ;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* const& __cordl_internal_get_m_ClickAnimationCurve() const;

constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& __cordl_internal_get_m_ClickAnimationCurve() ;

constexpr float_t const& __cordl_internal_get_m_ClickAnimationDuration() const;

constexpr float_t& __cordl_internal_get_m_ClickAnimationDuration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* const& __cordl_internal_get_m_CurveInteractionDataProvider() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*& __cordl_internal_get_m_CurveInteractionDataProvider() ;

constexpr bool const& __cordl_internal_get_m_HasCurveInteractionDataProvider() const;

constexpr bool& __cordl_internal_get_m_HasCurveInteractionDataProvider() ;

constexpr bool const& __cordl_internal_get_m_HasHoverInteractor() const;

constexpr bool& __cordl_internal_get_m_HasHoverInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasInteractionStrengthInteractor() const;

constexpr bool& __cordl_internal_get_m_HasInteractionStrengthInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasRayInteractor() const;

constexpr bool& __cordl_internal_get_m_HasRayInteractor() ;

constexpr bool const& __cordl_internal_get_m_HasSelectInteractor() const;

constexpr bool& __cordl_internal_get_m_HasSelectInteractor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* const& __cordl_internal_get_m_HoverInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*& __cordl_internal_get_m_HoverInteractor() ;

constexpr bool const& __cordl_internal_get_m_IgnoreActivateEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreActivateEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreHoverEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreHoverEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreSelectEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreSelectEvents() ;

constexpr bool const& __cordl_internal_get_m_IgnoreUGUIHover() const;

constexpr bool& __cordl_internal_get_m_IgnoreUGUIHover() ;

constexpr bool const& __cordl_internal_get_m_IgnoreUGUISelect() const;

constexpr bool& __cordl_internal_get_m_IgnoreUGUISelect() ;

constexpr bool const& __cordl_internal_get_m_IgnoreXRInteractionEvents() const;

constexpr bool& __cordl_internal_get_m_IgnoreXRInteractionEvents() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor* const& __cordl_internal_get_m_InteractionStrengthInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*& __cordl_internal_get_m_InteractionStrengthInteractor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get_m_Interactor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get_m_Interactor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractorSource() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractorSource() ;

constexpr bool const& __cordl_internal_get_m_IsActivated() const;

constexpr bool& __cordl_internal_get_m_IsActivated() ;

constexpr bool const& __cordl_internal_get_m_IsBoundToInteractionEvents() const;

constexpr bool& __cordl_internal_get_m_IsBoundToInteractionEvents() ;

constexpr bool const& __cordl_internal_get_m_IsIXRInteractor() const;

constexpr bool& __cordl_internal_get_m_IsIXRInteractor() ;

constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

constexpr bool& __cordl_internal_get_m_IsRegistered() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get_m_RayInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get_m_RayInteractor() ;

constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode const& __cordl_internal_get_m_SelectClickAnimationMode() const;

constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode& __cordl_internal_get_m_SelectClickAnimationMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& __cordl_internal_get_m_SelectInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& __cordl_internal_get_m_SelectInteractor() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_SelectedClickAnimation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_SelectedClickAnimation() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_UGUIUpdateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_UGUIUpdateCoroutine() ;

constexpr bool const& __cordl_internal_get_m_UIHovering() const;

constexpr bool& __cordl_internal_get_m_UIHovering() ;

constexpr bool const& __cordl_internal_get_m_UISelecting() const;

constexpr bool& __cordl_internal_get_m_UISelecting() ;

constexpr void __cordl_internal_set_m_ActivateClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  value) ;

constexpr void __cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_BoundActivateInteractable(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_ClickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value) ;

constexpr void __cordl_internal_set_m_ClickAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_CurveInteractionDataProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  value) ;

constexpr void __cordl_internal_set_m_HasCurveInteractionDataProvider(bool  value) ;

constexpr void __cordl_internal_set_m_HasHoverInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasInteractionStrengthInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasRayInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HasSelectInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_HoverInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value) ;

constexpr void __cordl_internal_set_m_IgnoreActivateEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreHoverEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreSelectEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreUGUIHover(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreUGUISelect(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreXRInteractionEvents(bool  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengthInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*  value) ;

constexpr void __cordl_internal_set_m_Interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

constexpr void __cordl_internal_set_m_InteractorSource(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_IsActivated(bool  value) ;

constexpr void __cordl_internal_set_m_IsBoundToInteractionEvents(bool  value) ;

constexpr void __cordl_internal_set_m_IsIXRInteractor(bool  value) ;

constexpr void __cordl_internal_set_m_IsRegistered(bool  value) ;

constexpr void __cordl_internal_set_m_RayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

constexpr void __cordl_internal_set_m_SelectClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  value) ;

constexpr void __cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

constexpr void __cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_UGUIUpdateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_m_UIHovering(bool  value) ;

constexpr void __cordl_internal_set_m_UISelecting(bool  value) ;

/// @brief Method .ctor, addr 0xb4d94f8, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activateClickAnimationMode, addr 0xb4d6bc4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode get_activateClickAnimationMode() ;

/// @brief Method get_clickAnimationCurve, addr 0xb4d6be4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* get_clickAnimationCurve() ;

/// @brief Method get_clickAnimationDuration, addr 0xb4d6bd4, size 0x8, virtual false, abstract: false, final false
inline float_t get_clickAnimationDuration() ;

/// @brief Method get_hasUIHover, addr 0xb4d6a60, size 0x20, virtual true, abstract: false, final false
inline bool get_hasUIHover() ;

/// @brief Method get_hasUISelection, addr 0xb4d6b44, size 0x20, virtual true, abstract: false, final false
inline bool get_hasUISelection() ;

/// @brief Method get_hasXRHover, addr 0xb4d699c, size 0xc4, virtual true, abstract: false, final false
inline bool get_hasXRHover() ;

/// @brief Method get_hasXRSelection, addr 0xb4d6a80, size 0xc4, virtual true, abstract: false, final false
inline bool get_hasXRSelection() ;

/// @brief Method get_ignoreActivateEvents, addr 0xb4d695c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreActivateEvents() ;

/// @brief Method get_ignoreHoverEvents, addr 0xb4d693c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreHoverEvents() ;

/// @brief Method get_ignoreSelectEvents, addr 0xb4d694c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreSelectEvents() ;

/// @brief Method get_ignoreUGUIHover, addr 0xb4d696c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreUGUIHover() ;

/// @brief Method get_ignoreUGUISelect, addr 0xb4d697c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreUGUISelect() ;

/// @brief Method get_ignoreXRInteractionEvents, addr 0xb4d698c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreXRInteractionEvents() ;

/// @brief Method get_interactorSource, addr 0xb4d65a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_interactorSource() ;

/// @brief Method get_isActivated, addr 0xb4d6b64, size 0x20, virtual true, abstract: false, final false
inline bool get_isActivated() ;

/// @brief Method get_isBlockedByGroup, addr 0xb4d6b8c, size 0x28, virtual true, abstract: false, final false
inline bool get_isBlockedByGroup() ;

/// @brief Method get_isRegistered, addr 0xb4d6b84, size 0x8, virtual true, abstract: false, final false
inline bool get_isRegistered() ;

/// @brief Method get_selectClickAnimationMode, addr 0xb4d6bb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode get_selectClickAnimationMode() ;

/// @brief Method set_activateClickAnimationMode, addr 0xb4d6bcc, size 0x8, virtual false, abstract: false, final false
inline void set_activateClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  value) ;

/// @brief Method set_clickAnimationCurve, addr 0xb4d6bec, size 0x8, virtual false, abstract: false, final false
inline void set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value) ;

/// @brief Method set_clickAnimationDuration, addr 0xb4d6bdc, size 0x8, virtual false, abstract: false, final false
inline void set_clickAnimationDuration(float_t  value) ;

/// @brief Method set_ignoreActivateEvents, addr 0xb4d6964, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreActivateEvents(bool  value) ;

/// @brief Method set_ignoreHoverEvents, addr 0xb4d6944, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreHoverEvents(bool  value) ;

/// @brief Method set_ignoreSelectEvents, addr 0xb4d6954, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreSelectEvents(bool  value) ;

/// @brief Method set_ignoreUGUIHover, addr 0xb4d6974, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreUGUIHover(bool  value) ;

/// @brief Method set_ignoreUGUISelect, addr 0xb4d6984, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreUGUISelect(bool  value) ;

/// @brief Method set_ignoreXRInteractionEvents, addr 0xb4d6994, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreXRInteractionEvents(bool  value) ;

/// @brief Method set_interactorSource, addr 0xb4d65a8, size 0xc0, virtual false, abstract: false, final false
inline void set_interactorSource(::UnityEngine::Object*  value) ;

/// @brief Method set_selectClickAnimationMode, addr 0xb4d6bbc, size 0x8, virtual false, abstract: false, final false
inline void set_selectClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorAffordanceStateProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorAffordanceStateProvider(XRInteractorAffordanceStateProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorAffordanceStateProvider(XRInteractorAffordanceStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11740};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor))]
/// [Tooltip("The interactor component that drives the affordance states. If null, Unity will try and find an interactor component attached.")]
/// @brief Field m_InteractorSource, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractorSource;

/// [Header("Event Constraints")]
/// [SerializeField]
/// [Tooltip("When hover events are registered and this is true, the state will fallback to idle or disabled.")]
/// @brief Field m_IgnoreHoverEvents, offset: 0x70, size: 0x1, def value: None
 bool  ___m_IgnoreHoverEvents;

/// [SerializeField]
/// [Tooltip("When select events are registered and this is true, the state will fallback to idle or disabled. \nNote: Click animations must be disabled separately.")]
/// @brief Field m_IgnoreSelectEvents, offset: 0x71, size: 0x1, def value: None
 bool  ___m_IgnoreSelectEvents;

/// [SerializeField]
/// [Tooltip("When activate events are registered and this is true, the state will fallback to idle or disabled.\nNote: Click animations must be disabled separately.")]
/// @brief Field m_IgnoreActivateEvents, offset: 0x72, size: 0x1, def value: None
 bool  ___m_IgnoreActivateEvents;

/// [SerializeField]
/// [Tooltip("With the XR Ray Interactor it is possible to trigger select events from the ray interactor overlapping with a canvas.")]
/// @brief Field m_IgnoreUGUIHover, offset: 0x73, size: 0x1, def value: None
 bool  ___m_IgnoreUGUIHover;

/// [SerializeField]
/// [Tooltip("With the XR Ray Interactor it is possible to trigger select events from the ray interactor overlapping with a canvas and triggering the select input.")]
/// @brief Field m_IgnoreUGUISelect, offset: 0x74, size: 0x1, def value: None
 bool  ___m_IgnoreUGUISelect;

/// [SerializeField]
/// [Tooltip("This option will prevent Hover, Select, and Activate events from being triggered when they come from the XR Interaction Manager. UGUI hover and select events will still come through.")]
/// @brief Field m_IgnoreXRInteractionEvents, offset: 0x75, size: 0x1, def value: None
 bool  ___m_IgnoreXRInteractionEvents;

/// [Header("Click Animation Config")]
/// [SerializeField]
/// [Tooltip("Condition to trigger click animation for Selected interaction events.")]
/// @brief Field m_SelectClickAnimationMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  ___m_SelectClickAnimationMode;

/// [SerializeField]
/// [Tooltip("Condition to trigger click animation for activated interaction events.")]
/// @brief Field m_ActivateClickAnimationMode, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  ___m_ActivateClickAnimationMode;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Duration of click animations for selected and activated events.")]
/// @brief Field m_ClickAnimationDuration, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_ClickAnimationDuration;

/// [SerializeField]
/// [Tooltip("Animation curve reference for click animation events. Select the More menu (\u{22ee}) to choose between a direct reference and a reusable asset.")]
/// @brief Field m_ClickAnimationCurve, offset: 0x88, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  ___m_ClickAnimationCurve;

/// @brief Field m_Interactor, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ___m_Interactor;

/// @brief Field m_HoverInteractor, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  ___m_HoverInteractor;

/// @brief Field m_SelectInteractor, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  ___m_SelectInteractor;

/// @brief Field m_InteractionStrengthInteractor, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*  ___m_InteractionStrengthInteractor;

/// @brief Field m_RayInteractor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ___m_RayInteractor;

/// @brief Field m_CurveInteractionDataProvider, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  ___m_CurveInteractionDataProvider;

/// @brief Field m_IsBoundToInteractionEvents, offset: 0xc0, size: 0x1, def value: None
 bool  ___m_IsBoundToInteractionEvents;

/// @brief Field m_HasRayInteractor, offset: 0xc1, size: 0x1, def value: None
 bool  ___m_HasRayInteractor;

/// @brief Field m_HasCurveInteractionDataProvider, offset: 0xc2, size: 0x1, def value: None
 bool  ___m_HasCurveInteractionDataProvider;

/// @brief Field m_HasHoverInteractor, offset: 0xc3, size: 0x1, def value: None
 bool  ___m_HasHoverInteractor;

/// @brief Field m_HasSelectInteractor, offset: 0xc4, size: 0x1, def value: None
 bool  ___m_HasSelectInteractor;

/// @brief Field m_HasInteractionStrengthInteractor, offset: 0xc5, size: 0x1, def value: None
 bool  ___m_HasInteractionStrengthInteractor;

/// @brief Field m_IsIXRInteractor, offset: 0xc6, size: 0x1, def value: None
 bool  ___m_IsIXRInteractor;

/// @brief Field m_SelectedClickAnimation, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_SelectedClickAnimation;

/// @brief Field m_ActivatedClickAnimation, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_ActivatedClickAnimation;

/// @brief Field m_IsActivated, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_IsActivated;

/// @brief Field m_IsRegistered, offset: 0xd9, size: 0x1, def value: None
 bool  ___m_IsRegistered;

/// @brief Field m_BoundActivateInteractable, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  ___m_BoundActivateInteractable;

/// @brief Field m_UIHovering, offset: 0xe8, size: 0x1, def value: None
 bool  ___m_UIHovering;

/// @brief Field m_UISelecting, offset: 0xe9, size: 0x1, def value: None
 bool  ___m_UISelecting;

/// @brief Field m_UGUIUpdateCoroutine, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___m_UGUIUpdateCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_InteractorSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreHoverEvents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreSelectEvents) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreActivateEvents) == 0x72, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreUGUIHover) == 0x73, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreUGUISelect) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IgnoreXRInteractionEvents) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_SelectClickAnimationMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_ActivateClickAnimationMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_ClickAnimationDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_ClickAnimationCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_Interactor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HoverInteractor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_SelectInteractor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_InteractionStrengthInteractor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_RayInteractor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_CurveInteractionDataProvider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IsBoundToInteractionEvents) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HasRayInteractor) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HasCurveInteractionDataProvider) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HasHoverInteractor) == 0xc3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HasSelectInteractor) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_HasInteractionStrengthInteractor) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IsIXRInteractor) == 0xc6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_SelectedClickAnimation) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_ActivatedClickAnimation) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IsActivated) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_IsRegistered) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_BoundActivateInteractable) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_UIHovering) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_UISelecting) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider, ___m_UGUIUpdateCoroutine) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider) == 0xf8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider/<UIUpdateCheckCoroutine>d__99
class CORDL_TYPE XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb4d987c, size 0x29c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb4d9b18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb4d9b20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb4d9b58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb4d9878, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb4d9850, size 0x28, virtual false, abstract: false, final false
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
constexpr XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99(XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99(XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11739};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider/<ClickAnimation>d__98
class CORDL_TYPE XRInteractorAffordanceStateProvider__ClickAnimation_d__98 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  __4__this;

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

/// @brief Method MoveNext, addr 0xb4d9684, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb4d9808, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb4d9810, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb4d9848, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb4d9680, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>& __cordl_internal_get___4__this() ;

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

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  value) ;

constexpr void __cordl_internal_set__elapsedTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_targetStateIndex(uint8_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb4d9658, size 0x28, virtual false, abstract: false, final false
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
constexpr XRInteractorAffordanceStateProvider__ClickAnimation_d__98() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider__ClickAnimation_d__98", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorAffordanceStateProvider__ClickAnimation_d__98(XRInteractorAffordanceStateProvider__ClickAnimation_d__98 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorAffordanceStateProvider__ClickAnimation_d__98", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorAffordanceStateProvider__ClickAnimation_d__98(XRInteractorAffordanceStateProvider__ClickAnimation_d__98 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11738};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  _____4__this;

/// @brief Field targetStateIndex, offset: 0x30, size: 0x1, def value: None
 uint8_t  ___targetStateIndex;

/// @brief Field onComplete, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

/// @brief Field <elapsedTime>5__2, offset: 0x40, size: 0x4, def value: None
 float_t  ____elapsedTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, ___targetStateIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, ___onComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98, ____elapsedTime_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
