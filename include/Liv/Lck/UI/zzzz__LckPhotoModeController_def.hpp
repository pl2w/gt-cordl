#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckPhotoModeController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckPhotoModeController)
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__CountdownSequence_d__18;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__FadeImageAlpha_d__20;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__FadeSequence_d__19;
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
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckPhotoModeController;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__CountdownSequence_d__18;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__FadeImageAlpha_d__20;
}
namespace Liv::Lck::UI {
class LckPhotoModeController__FadeSequence_d__19;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckPhotoModeController*);
MARK_REF_T(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*);
MARK_REF_T(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*);
MARK_REF_T(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckPhotoModeController*, "Liv.Lck.UI", "LckPhotoModeController");
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*, "Liv.Lck.UI", "LckPhotoModeController/<CountdownSequence>d__18");
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*, "Liv.Lck.UI", "LckPhotoModeController/<FadeImageAlpha>d__20");
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*, "Liv.Lck.UI", "LckPhotoModeController/<FadeSequence>d__19");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckPhotoModeController
class CORDL_TYPE LckPhotoModeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CountdownSequence_d__18 = ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18;

using _FadeImageAlpha_d__20 = ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20;

using _FadeSequence_d__19 = ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19;

/// @brief Field _audioController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _countdownBG, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__countdownBG, put=__cordl_internal_set__countdownBG)) ::UnityW<::UnityEngine::GameObject>  _countdownBG;

/// @brief Field _countdownText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__countdownText, put=__cordl_internal_set__countdownText)) ::UnityW<::TMPro::TMP_Text>  _countdownText;

/// @brief Field _delayBeforeFade, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayBeforeFade, put=__cordl_internal_set__delayBeforeFade)) float_t  _delayBeforeFade;

/// @brief Field _fadeOutDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutDuration, put=__cordl_internal_set__fadeOutDuration)) float_t  _fadeOutDuration;

/// @brief Field _flashAlpha, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__flashAlpha, put=__cordl_internal_set__flashAlpha)) float_t  _flashAlpha;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _notificationController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationController, put=__cordl_internal_set__notificationController)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _notificationController;

/// @brief Field _onPhotoCaptured, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPhotoCaptured, put=__cordl_internal_set__onPhotoCaptured)) ::UnityEngine::Events::UnityEvent*  _onPhotoCaptured;

/// @brief Field _photoFlash, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__photoFlash, put=__cordl_internal_set__photoFlash)) ::UnityW<::UnityEngine::UI::Image>  _photoFlash;

/// [IteratorStateMachine(typeof(Liv.Lck.UI.LckPhotoModeController::<CountdownSequence>d__18))]
/// @brief Method CountdownSequence, addr 0x9d4c20c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CountdownSequence() ;

/// [IteratorStateMachine(typeof(Liv.Lck.UI.LckPhotoModeController::<FadeImageAlpha>d__20))]
/// @brief Method FadeImageAlpha, addr 0x9d4c3b4, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeImageAlpha(float_t  startAlpha, float_t  endAlpha, float_t  duration) ;

/// [IteratorStateMachine(typeof(Liv.Lck.UI.LckPhotoModeController::<FadeSequence>d__19))]
/// @brief Method FadeSequence, addr 0x9d4c320, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeSequence() ;

static inline ::Liv::Lck::UI::LckPhotoModeController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d4c0c0, size 0xfc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d4bfd0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRecordingStarted, addr 0x9d4c1e0, size 0x4, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method PlayPhotoSequence, addr 0x9d4c1e4, size 0x28, virtual false, abstract: false, final false
inline void PlayPhotoSequence() ;

/// @brief Method ResetCountdownVisuals, addr 0x9d4c2dc, size 0x1c, virtual false, abstract: false, final false
inline void ResetCountdownVisuals() ;

/// @brief Method ResetFlashVisuals, addr 0x9d4c278, size 0x64, virtual false, abstract: false, final false
inline void ResetFlashVisuals() ;

/// @brief Method Start, addr 0x9d4bf8c, size 0x44, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopAndResetSequence, addr 0x9d4c1bc, size 0x24, virtual false, abstract: false, final false
inline void StopAndResetSequence() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__countdownBG() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__countdownBG() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__countdownText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__countdownText() ;

constexpr float_t const& __cordl_internal_get__delayBeforeFade() const;

constexpr float_t& __cordl_internal_get__delayBeforeFade() ;

constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

constexpr float_t& __cordl_internal_get__fadeOutDuration() ;

constexpr float_t const& __cordl_internal_get__flashAlpha() const;

constexpr float_t& __cordl_internal_get__flashAlpha() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get__notificationController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get__notificationController() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onPhotoCaptured() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onPhotoCaptured() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__photoFlash() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__photoFlash() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__countdownBG(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__countdownText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__delayBeforeFade(float_t  value) ;

constexpr void __cordl_internal_set__fadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set__flashAlpha(float_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set__onPhotoCaptured(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__photoFlash(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x9d4c46c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPhotoModeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoModeController(LckPhotoModeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoModeController(LckPhotoModeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24912};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Tooltip("The UI Image component that creates the \'flash\' effect when a photo is taken. It should cover the entire screen.")]
/// [SerializeField]
/// @brief Field _photoFlash, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____photoFlash;

/// [Tooltip("The parent GameObject for the countdown UI elements. This will be enabled and disabled by the controller.")]
/// [SerializeField]
/// @brief Field _countdownBG, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____countdownBG;

/// [Tooltip("The TextMeshPro text element used to display the \'3, 2, 1\' countdown.")]
/// [SerializeField]
/// @brief Field _countdownText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____countdownText;

/// [Tooltip("The duration in seconds for the flash effect to fade out.")]
/// [SerializeField]
/// @brief Field _fadeOutDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ____fadeOutDuration;

/// [Tooltip("A short delay in seconds after the flash appears before it begins to fade out.")]
/// [SerializeField]
/// @brief Field _delayBeforeFade, offset: 0x44, size: 0x4, def value: None
 float_t  ____delayBeforeFade;

/// [Tooltip("A reference to the controller responsible for playing short, non-diegetic audio clips like beeps and shutter sounds.")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// [Tooltip("A reference to the controller used to show the \'Photo Saved\' notification after the sequence is complete.")]
/// [SerializeField]
/// @brief Field _notificationController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  ____notificationController;

/// [Tooltip("This event is invoked at the exact moment the photo is captured. Use it to temporarily disable UI buttons or trigger other game-specific logic such as a flash light being enabled.")]
/// [SerializeField]
/// @brief Field _onPhotoCaptured, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onPhotoCaptured;

/// [Tooltip("The starting alpha (opacity) of the flash effect. A value of 0.9 is recommended over 1.0 to avoid a harsh, fully opaque flash.")]
/// @brief Field _flashAlpha, offset: 0x60, size: 0x4, def value: None
 float_t  ____flashAlpha;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____photoFlash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____countdownBG) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____countdownText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____fadeOutDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____delayBeforeFade) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____audioController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____notificationController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____onPhotoCaptured) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController, ____flashAlpha) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckPhotoModeController) == 0x68, "Size mismatch!");

} // namespace end def Liv::Lck::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckPhotoModeController/<FadeSequence>d__19
class CORDL_TYPE LckPhotoModeController__FadeSequence_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d4c92c, size 0x244, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d4cccc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d4ccd4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d4cd0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d4c928, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d4c38c, size 0x28, virtual false, abstract: false, final false
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
constexpr LckPhotoModeController__FadeSequence_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__FadeSequence_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoModeController__FadeSequence_d__19(LckPhotoModeController__FadeSequence_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__FadeSequence_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoModeController__FadeSequence_d__19(LckPhotoModeController__FadeSequence_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24911};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::UI
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Color
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckPhotoModeController/<FadeImageAlpha>d__20
class CORDL_TYPE LckPhotoModeController__FadeImageAlpha_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  __4__this;

/// @brief Field <currentColor>5__3, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor_5__3, put=__cordl_internal_set__currentColor_5__3)) ::UnityEngine::Color  _currentColor_5__3;

/// @brief Field <elapsedTime>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime_5__2, put=__cordl_internal_set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field endAlpha, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_endAlpha, put=__cordl_internal_set_endAlpha)) float_t  endAlpha;

/// @brief Field startAlpha, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startAlpha, put=__cordl_internal_set_startAlpha)) float_t  startAlpha;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d4c7a0, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d4c8e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d4c8e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d4c920, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d4c79c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor_5__3() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor_5__3() ;

constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

constexpr float_t& __cordl_internal_get__elapsedTime_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_endAlpha() const;

constexpr float_t& __cordl_internal_get_endAlpha() ;

constexpr float_t const& __cordl_internal_get_startAlpha() const;

constexpr float_t& __cordl_internal_get_startAlpha() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value) ;

constexpr void __cordl_internal_set__currentColor_5__3(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__elapsedTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_endAlpha(float_t  value) ;

constexpr void __cordl_internal_set_startAlpha(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d4c444, size 0x28, virtual false, abstract: false, final false
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
constexpr LckPhotoModeController__FadeImageAlpha_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__FadeImageAlpha_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoModeController__FadeImageAlpha_d__20(LckPhotoModeController__FadeImageAlpha_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__FadeImageAlpha_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoModeController__FadeImageAlpha_d__20(LckPhotoModeController__FadeImageAlpha_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24910};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field startAlpha, offset: 0x2c, size: 0x4, def value: None
 float_t  ___startAlpha;

/// @brief Field endAlpha, offset: 0x30, size: 0x4, def value: None
 float_t  ___endAlpha;

/// @brief Field <elapsedTime>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____elapsedTime_5__2;

/// @brief Field <currentColor>5__3, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, ___startAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, ___endAlpha) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, ____elapsedTime_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20, ____currentColor_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::UI
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckPhotoModeController/<CountdownSequence>d__18
class CORDL_TYPE LckPhotoModeController__CountdownSequence_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d4c490, size 0x2c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d4c754, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d4c75c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d4c794, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d4c48c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d4c2f8, size 0x28, virtual false, abstract: false, final false
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
constexpr LckPhotoModeController__CountdownSequence_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__CountdownSequence_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPhotoModeController__CountdownSequence_d__18(LckPhotoModeController__CountdownSequence_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPhotoModeController__CountdownSequence_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPhotoModeController__CountdownSequence_d__18(LckPhotoModeController__CountdownSequence_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24909};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::UI
