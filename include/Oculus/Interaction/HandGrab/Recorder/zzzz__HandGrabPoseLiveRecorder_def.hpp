#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/HandGrabPoseLiveRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabPoseLiveRecorder)
namespace GlobalNamespace {
struct HandGrabPoseLiveRecorder_RecorderStep;
}
namespace Oculus::Interaction::HandGrab::Recorder {
class HandGrabPoseLiveRecorder__DelayedSnapshot_d__32;
}
namespace Oculus::Interaction::HandGrab::Recorder {
class RigidbodyDetector;
}
namespace Oculus::Interaction::HandGrab::Recorder {
class TimerUIControl;
}
namespace Oculus::Interaction::HandGrab::Visuals {
class HandGhostProvider;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractable;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
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
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Recorder {
class HandGrabPoseLiveRecorder;
}
namespace Oculus::Interaction::HandGrab::Recorder {
class HandGrabPoseLiveRecorder__DelayedSnapshot_d__32;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*);
MARK_REF_T(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*, "Oculus.Interaction.HandGrab.Recorder", "HandGrabPoseLiveRecorder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*, "Oculus.Interaction.HandGrab.Recorder", "HandGrabPoseLiveRecorder/<DelayedSnapshot>d__32");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab::Recorder {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Recorder.HandGrabPoseLiveRecorder
class CORDL_TYPE HandGrabPoseLiveRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RecorderStep = ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep;

using _DelayedSnapshot_d__32 = ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_CurrentStepIndex, put=set_CurrentStepIndex)) int32_t  CurrentStepIndex;

 __declspec(property(get=get_GhostProvider)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  GhostProvider;

/// @brief Field WhenCanRedo, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenCanRedo, put=__cordl_internal_set_WhenCanRedo)) ::UnityEngine::Events::UnityEvent_1<bool>*  WhenCanRedo;

/// @brief Field WhenCanUndo, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenCanUndo, put=__cordl_internal_set_WhenCanUndo)) ::UnityEngine::Events::UnityEvent_1<bool>*  WhenCanUndo;

/// @brief Field WhenError, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenError, put=__cordl_internal_set_WhenError)) ::UnityEngine::Events::UnityEvent*  WhenError;

/// @brief Field WhenGrabAllowed, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenGrabAllowed, put=__cordl_internal_set_WhenGrabAllowed)) ::UnityEngine::Events::UnityEvent*  WhenGrabAllowed;

/// @brief Field WhenGrabDisallowed, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenGrabDisallowed, put=__cordl_internal_set_WhenGrabDisallowed)) ::UnityEngine::Events::UnityEvent*  WhenGrabDisallowed;

/// @brief Field WhenSnapshot, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSnapshot, put=__cordl_internal_set_WhenSnapshot)) ::UnityEngine::Events::UnityEvent*  WhenSnapshot;

/// @brief Field WhenTimeStep, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenTimeStep, put=__cordl_internal_set_WhenTimeStep)) ::UnityEngine::Events::UnityEvent*  WhenTimeStep;

/// @brief Field _currentStepIndex, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStepIndex, put=__cordl_internal_set__currentStepIndex)) int32_t  _currentStepIndex;

/// @brief Field _delayLabel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayLabel, put=__cordl_internal_set__delayLabel)) ::UnityW<::TMPro::TextMeshPro>  _delayLabel;

/// @brief Field _delayedSnapRoutine, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayedSnapRoutine, put=__cordl_internal_set__delayedSnapRoutine)) ::UnityEngine::Coroutine*  _delayedSnapRoutine;

/// @brief Field _ghostProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ghostProvider, put=__cordl_internal_set__ghostProvider)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  _ghostProvider;

/// @brief Field _grabbingEnabled, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__grabbingEnabled, put=__cordl_internal_set__grabbingEnabled)) bool  _grabbingEnabled;

/// @brief Field _handGhostProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGhostProvider, put=__cordl_internal_set__handGhostProvider)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  _handGhostProvider;

/// @brief Field _leftDetector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftDetector, put=__cordl_internal_set__leftDetector)) ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  _leftDetector;

/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  _leftHand;

/// @brief Field _recorderSteps, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorderSteps, put=__cordl_internal_set__recorderSteps)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*  _recorderSteps;

/// @brief Field _rightDetector, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightDetector, put=__cordl_internal_set__rightDetector)) ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  _rightDetector;

/// @brief Field _rightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  _rightHand;

/// @brief Field _timerControl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerControl, put=__cordl_internal_set__timerControl)) ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>  _timerControl;

/// @brief Field _waitOneSeconds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitOneSeconds, put=__cordl_internal_set__waitOneSeconds)) ::UnityEngine::WaitForSeconds*  _waitOneSeconds;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method AddHandGrabPose, addr 0xa433078, size 0x168, virtual false, abstract: false, final false
inline void AddHandGrabPose(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep  recorderStep, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabInteractable*>  interactable, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  handGrabPose) ;

/// @brief Method AttachGhost, addr 0xa4331e0, size 0x1ac, virtual false, abstract: false, final false
inline void AttachGhost(::Oculus::Interaction::HandGrab::HandGrabPose*  point, float_t  referenceScale) ;

/// @brief Method Awake, addr 0xa4322cc, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearSnapshot, addr 0xa43244c, size 0x6c, virtual false, abstract: false, final false
inline void ClearSnapshot() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.HandGrab.Recorder.HandGrabPoseLiveRecorder::<DelayedSnapshot>d__32))]
/// @brief Method DelayedSnapshot, addr 0xa432674, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedSnapshot(int32_t  seconds) ;

/// @brief Method EnableGrabbing, addr 0xa43259c, size 0x24, virtual false, abstract: false, final false
inline void EnableGrabbing(bool  enable) ;

/// @brief Method FindNearestItem, addr 0xa432878, size 0x220, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> FindNearestItem(::UnityEngine::Rigidbody*  handBody, ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*  detector, ::by_ref<float_t>  bestDistance) ;

static inline ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder* New_ctor() ;

/// @brief Method Record, addr 0xa432a98, size 0x378, virtual false, abstract: false, final false
inline bool Record(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Rigidbody*  item) ;

/// @brief Method Record, addr 0xa4325c0, size 0xb4, virtual false, abstract: false, final false
inline void Record() ;

/// @brief Method Redo, addr 0xa432f54, size 0x124, virtual false, abstract: false, final false
inline void Redo() ;

/// @brief Method Start, addr 0xa432334, size 0x118, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TakeSnapshot, addr 0xa4326f0, size 0x160, virtual false, abstract: false, final false
inline bool TakeSnapshot() ;

/// @brief Method TrackedPose, addr 0xa43338c, size 0x21c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::HandPose* TrackedPose(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method Undo, addr 0xa432e10, size 0x9c, virtual false, abstract: false, final false
inline void Undo() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_WhenCanRedo() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_WhenCanRedo() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_WhenCanUndo() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_WhenCanUndo() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenError() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenError() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenGrabAllowed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenGrabAllowed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenGrabDisallowed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenGrabDisallowed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenSnapshot() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenSnapshot() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenTimeStep() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenTimeStep() ;

constexpr int32_t const& __cordl_internal_get__currentStepIndex() const;

constexpr int32_t& __cordl_internal_get__currentStepIndex() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__delayLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__delayLabel() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__delayedSnapRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__delayedSnapRoutine() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& __cordl_internal_get__ghostProvider() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& __cordl_internal_get__ghostProvider() ;

constexpr bool const& __cordl_internal_get__grabbingEnabled() const;

constexpr bool& __cordl_internal_get__grabbingEnabled() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& __cordl_internal_get__handGhostProvider() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& __cordl_internal_get__handGhostProvider() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector> const& __cordl_internal_get__leftDetector() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>& __cordl_internal_get__leftDetector() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& __cordl_internal_get__leftHand() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>* const& __cordl_internal_get__recorderSteps() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*& __cordl_internal_get__recorderSteps() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector> const& __cordl_internal_get__rightDetector() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>& __cordl_internal_get__rightDetector() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& __cordl_internal_get__rightHand() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl> const& __cordl_internal_get__timerControl() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>& __cordl_internal_get__timerControl() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__waitOneSeconds() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitOneSeconds() ;

constexpr void __cordl_internal_set_WhenCanRedo(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_WhenCanUndo(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_WhenError(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenGrabAllowed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenGrabDisallowed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenSnapshot(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_WhenTimeStep(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__currentStepIndex(int32_t  value) ;

constexpr void __cordl_internal_set__delayLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__delayedSnapRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__ghostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value) ;

constexpr void __cordl_internal_set__grabbingEnabled(bool  value) ;

constexpr void __cordl_internal_set__handGhostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value) ;

constexpr void __cordl_internal_set__leftDetector(::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value) ;

constexpr void __cordl_internal_set__recorderSteps(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*  value) ;

constexpr void __cordl_internal_set__rightDetector(::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value) ;

constexpr void __cordl_internal_set__timerControl(::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>  value) ;

constexpr void __cordl_internal_set__waitOneSeconds(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0xa433670, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4322c4, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_CurrentStepIndex, addr 0xa432218, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentStepIndex() ;

/// @brief Method get_GhostProvider, addr 0xa432210, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> get_GhostProvider() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_CurrentStepIndex, addr 0xa432220, size 0xa4, virtual false, abstract: false, final false
inline void set_CurrentStepIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabPoseLiveRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPoseLiveRecorder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabPoseLiveRecorder(HandGrabPoseLiveRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPoseLiveRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabPoseLiveRecorder(HandGrabPoseLiveRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28283};

/// [SerializeField]
/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  ____leftHand;

/// [SerializeField]
/// @brief Field _rightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  ____rightHand;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("Prototypes of the static hands (ghosts) that visualize holding poses")]
/// @brief Field _ghostProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  ____ghostProvider;

/// [SerializeField]
/// [Tooltip("Prototypes of the static hands (ghosts) that visualize holding poses")]
/// @brief Field _handGhostProvider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  ____handGhostProvider;

/// [SerializeField]
/// [Optional]
/// @brief Field _timerControl, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>  ____timerControl;

/// [SerializeField]
/// [Optional]
/// @brief Field _delayLabel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____delayLabel;

/// @brief Field _leftDetector, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  ____leftDetector;

/// @brief Field _rightDetector, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  ____rightDetector;

/// @brief Field _waitOneSeconds, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____waitOneSeconds;

/// @brief Field _delayedSnapRoutine, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____delayedSnapRoutine;

/// @brief Field WhenTimeStep, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenTimeStep;

/// @brief Field WhenSnapshot, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenSnapshot;

/// @brief Field WhenError, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenError;

/// [Space]
/// @brief Field WhenCanUndo, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___WhenCanUndo;

/// @brief Field WhenCanRedo, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___WhenCanRedo;

/// @brief Field WhenGrabAllowed, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenGrabAllowed;

/// @brief Field WhenGrabDisallowed, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenGrabDisallowed;

/// @brief Field _recorderSteps, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*  ____recorderSteps;

/// @brief Field _currentStepIndex, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____currentStepIndex;

/// @brief Field _grabbingEnabled, offset: 0xb4, size: 0x1, def value: None
 bool  ____grabbingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____rightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____ghostProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____handGhostProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____timerControl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____delayLabel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____leftDetector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____rightDetector) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____waitOneSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____delayedSnapRoutine) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenTimeStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenSnapshot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenError) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenCanUndo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenCanRedo) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenGrabAllowed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ___WhenGrabDisallowed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____recorderSteps) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____currentStepIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder, ____grabbingEnabled) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder) == 0xb8, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Recorder
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab::Recorder {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Recorder.HandGrabPoseLiveRecorder/<DelayedSnapshot>d__32
class CORDL_TYPE HandGrabPoseLiveRecorder__DelayedSnapshot_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>  __4__this;

/// @brief Field <i>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field seconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_seconds, put=__cordl_internal_set_seconds)) int32_t  seconds;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4337a0, size 0x1bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa43395c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa433964, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa43399c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa43379c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr int32_t const& __cordl_internal_get_seconds() const;

constexpr int32_t& __cordl_internal_get_seconds() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_seconds(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa432850, size 0x28, virtual false, abstract: false, final false
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
constexpr HandGrabPoseLiveRecorder__DelayedSnapshot_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPoseLiveRecorder__DelayedSnapshot_d__32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabPoseLiveRecorder__DelayedSnapshot_d__32(HandGrabPoseLiveRecorder__DelayedSnapshot_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabPoseLiveRecorder__DelayedSnapshot_d__32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabPoseLiveRecorder__DelayedSnapshot_d__32(HandGrabPoseLiveRecorder__DelayedSnapshot_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28282};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field seconds, offset: 0x20, size: 0x4, def value: None
 int32_t  ___seconds;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>  _____4__this;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32, ___seconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32, ____i_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Recorder
