#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckStreamButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStreamButton)
namespace GlobalNamespace {
struct LckStreamButton_State;
}
namespace GlobalNamespace {
struct LckStreamButton__ResetAfterError_d__17;
}
namespace GlobalNamespace {
struct LckStreamButton__WaitForTriggerExitOrDelay_d__20;
}
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
namespace Liv::Lck::Tablet {
class LckStreamButton__StoppingAnimationVisual_d__34;
}
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckStreamButton;
}
namespace Liv::Lck::Tablet {
class LckStreamButton__StoppingAnimationVisual_d__34;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckStreamButton*);
MARK_REF_T(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckStreamButton*, "Liv.Lck.Tablet", "LckStreamButton");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*, "Liv.Lck.Tablet", "LckStreamButton/<StoppingAnimationVisual>d__34");
// Dependencies Liv.Lck.Tablet.LckStreamButton::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckStreamButton
class CORDL_TYPE LckStreamButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::LckStreamButton_State;

using _ResetAfterError_d__17 = ::GlobalNamespace::LckStreamButton__ResetAfterError_d__17;

using _WaitForTriggerExitOrDelay_d__20 = ::GlobalNamespace::LckStreamButton__WaitForTriggerExitOrDelay_d__20;

using _StoppingAnimationVisual_d__34 = ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34;

/// @brief Field _audioController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _buttonPressedPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__buttonPressedPosition, put=__cordl_internal_set__buttonPressedPosition)) ::UnityEngine::Vector3  _buttonPressedPosition;

/// @brief Field _clickedObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickedObject, put=__cordl_internal_set__clickedObject)) ::UnityW<::UnityEngine::GameObject>  _clickedObject;

/// @brief Field _collided, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__collided, put=__cordl_internal_set__collided)) bool  _collided;

/// @brief Field _defaultColors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultColors, put=__cordl_internal_set__defaultColors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _defaultColors;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _renderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _state, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::LckStreamButton_State  _state;

/// @brief Field _streamButtonText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamButtonText, put=__cordl_internal_set__streamButtonText)) ::UnityW<::TMPro::TMP_Text>  _streamButtonText;

/// @brief Field _streamingColors, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingColors, put=__cordl_internal_set__streamingColors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _streamingColors;

/// @brief Field _streamingController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingController, put=__cordl_internal_set__streamingController)) ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  _streamingController;

/// @brief Field _visuals, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::RectTransform>  _visuals;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method IsValidTap, addr 0x9d5cebc, size 0x17c, virtual false, abstract: false, final false
inline bool IsValidTap(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::Tablet::LckStreamButton* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d5d0a4, size 0x4c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnDestroy, addr 0x9d5c864, size 0x1a8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [ContextMenu("test error")]
/// @brief Method OnError, addr 0x9d5c3f4, size 0x7c, virtual false, abstract: false, final false
inline void OnError() ;

/// @brief Method OnPointerDown, addr 0x9d5ca50, size 0xbc, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d5ca0c, size 0x44, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d5cd1c, size 0xc0, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d5cb78, size 0x1a4, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnStreamingStarted, addr 0x9d5c548, size 0x54, virtual false, abstract: false, final false
inline void OnStreamingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnStreamingStopped, addr 0x9d5c6ac, size 0xe0, virtual false, abstract: false, final false
inline void OnStreamingStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnTriggerEnter, addr 0x9d5cddc, size 0xe0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d5d038, size 0x6c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LckStreamButton::<ResetAfterError>d__17))]
/// @brief Method ResetAfterError, addr 0x9d5c470, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ResetAfterError() ;

/// @brief Method SetDefaultColor, addr 0x9d5d0f0, size 0x90, virtual false, abstract: false, final false
inline void SetDefaultColor(::UnityEngine::Color  color) ;

/// @brief Method SetStoppingAnimationValue, addr 0x9d5c59c, size 0x110, virtual false, abstract: false, final false
inline void SetStoppingAnimationValue(float_t  value) ;

/// @brief Method SetStreamingColor, addr 0x9d5d180, size 0x90, virtual false, abstract: false, final false
inline void SetStreamingColor(::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0x9d5bdd4, size 0x1a4, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(Liv.Lck.Tablet.LckStreamButton::<StoppingAnimationVisual>d__34))]
/// @brief Method StoppingAnimationVisual, addr 0x9d5cb0c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StoppingAnimationVisual() ;

/// @brief Method Update, addr 0x9d5c0c0, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateStreamDurationText, addr 0x9d5c0dc, size 0x318, virtual false, abstract: false, final false
inline void UpdateStreamDurationText() ;

/// @brief Method ValidateMeshColors, addr 0x9d5bf78, size 0x148, virtual false, abstract: false, final false
inline void ValidateMeshColors(bool  isPressed, bool  isHovering) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LckStreamButton::<WaitForTriggerExitOrDelay>d__20))]
/// @brief Method WaitForTriggerExitOrDelay, addr 0x9d5c78c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForTriggerExitOrDelay() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__buttonPressedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__buttonPressedPosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clickedObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clickedObject() ;

constexpr bool const& __cordl_internal_get__collided() const;

constexpr bool& __cordl_internal_get__collided() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__defaultColors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__defaultColors() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::GlobalNamespace::LckStreamButton_State const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::LckStreamButton_State& __cordl_internal_get__state() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__streamButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__streamButtonText() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__streamingColors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__streamingColors() ;

constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController> const& __cordl_internal_get__streamingController() const;

constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController>& __cordl_internal_get__streamingController() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__buttonPressedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__collided(bool  value) ;

constexpr void __cordl_internal_set__defaultColors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::LckStreamButton_State  value) ;

constexpr void __cordl_internal_set__streamButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__streamingColors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__streamingController(::UnityW<::Liv::Lck::Streaming::LckStreamingController>  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x9d5d238, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamButton(LckStreamButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamButton(LckStreamButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24952};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _streamingController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Streaming::LckStreamingController>  ____streamingController;

/// [SerializeField]
/// @brief Field _audioController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [SerializeField]
/// @brief Field _streamButtonText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____streamButtonText;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _visuals, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____visuals;

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _defaultColors, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____defaultColors;

/// [SerializeField]
/// @brief Field _streamingColors, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____streamingColors;

/// [SerializeField]
/// @brief Field _buttonPressedPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____buttonPressedPosition;

/// @brief Field _collided, offset: 0x6c, size: 0x1, def value: None
 bool  ____collided;

/// @brief Field _clickedObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____clickedObject;

/// @brief Field _state, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::LckStreamButton_State  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____streamingController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____audioController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____streamButtonText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____renderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____visuals) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____defaultColors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____streamingColors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____buttonPressedPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____collided) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____clickedObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton, ____state) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckStreamButton) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckStreamButton/<StoppingAnimationVisual>d__34
class CORDL_TYPE LckStreamButton__StoppingAnimationVisual_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::Tablet::LckStreamButton>  __4__this;

/// @brief Field <currentProgress>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentProgress_5__3, put=__cordl_internal_set__currentProgress_5__3)) float_t  _currentProgress_5__3;

/// @brief Field <startTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field <stoppingDuration>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__stoppingDuration_5__4, put=__cordl_internal_set__stoppingDuration_5__4)) float_t  _stoppingDuration_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d5d634, size 0x258, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d5d88c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d5d894, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d5d8cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d5d630, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckStreamButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckStreamButton>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__currentProgress_5__3() const;

constexpr float_t& __cordl_internal_get__currentProgress_5__3() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get__stoppingDuration_5__4() const;

constexpr float_t& __cordl_internal_get__stoppingDuration_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::Tablet::LckStreamButton>  value) ;

constexpr void __cordl_internal_set__currentProgress_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__stoppingDuration_5__4(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d5d210, size 0x28, virtual false, abstract: false, final false
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
constexpr LckStreamButton__StoppingAnimationVisual_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamButton__StoppingAnimationVisual_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamButton__StoppingAnimationVisual_d__34(LckStreamButton__StoppingAnimationVisual_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamButton__StoppingAnimationVisual_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamButton__StoppingAnimationVisual_d__34(LckStreamButton__StoppingAnimationVisual_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24950};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckStreamButton>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <currentProgress>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____currentProgress_5__3;

/// @brief Field <stoppingDuration>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____stoppingDuration_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, ____startTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, ____currentProgress_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34, ____stoppingDuration_5__4) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
