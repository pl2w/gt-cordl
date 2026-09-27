#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/UX/TTSSpeakerInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeakerInput)
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerInput__SpeakAsync_d__18;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
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
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerInput;
}
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerInput__SpeakAsync_d__18;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerInput*);
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerInput*, "Meta.WitAi.TTS.UX", "TTSSpeakerInput");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18*, "Meta.WitAi.TTS.UX", "TTSSpeakerInput/<SpeakAsync>d__18");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerInput
class CORDL_TYPE TTSSpeakerInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SpeakAsync_d__18 = ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18;

/// @brief Field _asyncClip, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncClip, put=__cordl_internal_set__asyncClip)) ::UnityW<::UnityEngine::AudioClip>  _asyncClip;

/// @brief Field _asyncToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncToggle, put=__cordl_internal_set__asyncToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _asyncToggle;

/// @brief Field _dateId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateId, put=__cordl_internal_set__dateId)) ::StringW  _dateId;

/// @brief Field _input, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::UnityW<::UnityEngine::UI::InputField>  _input;

/// @brief Field _loading, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__loading, put=__cordl_internal_set__loading)) bool  _loading;

/// @brief Field _pauseButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pauseButton, put=__cordl_internal_set__pauseButton)) ::UnityW<::UnityEngine::UI::Button>  _pauseButton;

/// @brief Field _paused, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__paused, put=__cordl_internal_set__paused)) bool  _paused;

/// @brief Field _queueButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__queueButton, put=__cordl_internal_set__queueButton)) ::UnityW<::UnityEngine::UI::Toggle>  _queueButton;

/// @brief Field _queuedText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedText, put=__cordl_internal_set__queuedText)) ::ArrayW<::StringW>  _queuedText;

/// @brief Field _speakButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__speakButton, put=__cordl_internal_set__speakButton)) ::UnityW<::UnityEngine::UI::Button>  _speakButton;

/// @brief Field _speaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__speaker, put=__cordl_internal_set__speaker)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _speaker;

/// @brief Field _speaking, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__speaking, put=__cordl_internal_set__speaking)) bool  _speaking;

/// @brief Field _stopButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopButton, put=__cordl_internal_set__stopButton)) ::UnityW<::UnityEngine::UI::Button>  _stopButton;

/// @brief Field _voice, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__voice, put=__cordl_internal_set__voice)) ::StringW  _voice;

/// @brief Method FormatText, addr 0x9e503f4, size 0xe8, virtual false, abstract: false, final false
inline ::StringW FormatText(::StringW  text) ;

static inline ::Meta::WitAi::TTS::UX::TTSSpeakerInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e50600, size 0xe8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e4ff38, size 0x148, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PauseClick, addr 0x9e501b4, size 0x2c, virtual false, abstract: false, final false
inline void PauseClick() ;

/// @brief Method RefreshPauseButton, addr 0x9e500e8, size 0xac, virtual false, abstract: false, final false
inline void RefreshPauseButton() ;

/// @brief Method RefreshStopButton, addr 0x9e50080, size 0x68, virtual false, abstract: false, final false
inline void RefreshStopButton() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.UX.TTSSpeakerInput::<SpeakAsync>d__18))]
/// @brief Method SpeakAsync, addr 0x9e504dc, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::StringW  phrase, bool  queued) ;

/// @brief Method SpeakClick, addr 0x9e50208, size 0x1ec, virtual false, abstract: false, final false
inline void SpeakClick() ;

/// @brief Method StopClick, addr 0x9e50194, size 0x20, virtual false, abstract: false, final false
inline void StopClick() ;

/// @brief Method Update, addr 0x9e506e8, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__asyncClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__asyncClip() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__asyncToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__asyncToggle() ;

constexpr ::StringW const& __cordl_internal_get__dateId() const;

constexpr ::StringW& __cordl_internal_get__dateId() ;

constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get__input() const;

constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get__input() ;

constexpr bool const& __cordl_internal_get__loading() const;

constexpr bool& __cordl_internal_get__loading() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__pauseButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__pauseButton() ;

constexpr bool const& __cordl_internal_get__paused() const;

constexpr bool& __cordl_internal_get__paused() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__queueButton() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__queueButton() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__queuedText() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__queuedText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__speakButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__speakButton() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get__speaker() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get__speaker() ;

constexpr bool const& __cordl_internal_get__speaking() const;

constexpr bool& __cordl_internal_get__speaking() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__stopButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__stopButton() ;

constexpr ::StringW const& __cordl_internal_get__voice() const;

constexpr ::StringW& __cordl_internal_get__voice() ;

constexpr void __cordl_internal_set__asyncClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__asyncToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__dateId(::StringW  value) ;

constexpr void __cordl_internal_set__input(::UnityW<::UnityEngine::UI::InputField>  value) ;

constexpr void __cordl_internal_set__loading(bool  value) ;

constexpr void __cordl_internal_set__pauseButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__paused(bool  value) ;

constexpr void __cordl_internal_set__queueButton(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__queuedText(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__speakButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__speaker(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set__speaking(bool  value) ;

constexpr void __cordl_internal_set__stopButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__voice(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e508c4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerInput(TTSSpeakerInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerInput(TTSSpeakerInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29085};

/// [SerializeField]
/// @brief Field _speaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  ____speaker;

/// [SerializeField]
/// @brief Field _input, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  ____input;

/// [SerializeField]
/// @brief Field _stopButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____stopButton;

/// [SerializeField]
/// @brief Field _pauseButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____pauseButton;

/// [SerializeField]
/// @brief Field _speakButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____speakButton;

/// [SerializeField]
/// @brief Field _queueButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____queueButton;

/// [SerializeField]
/// @brief Field _asyncToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____asyncToggle;

/// [SerializeField]
/// @brief Field _asyncClip, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____asyncClip;

/// [SerializeField]
/// @brief Field _dateId, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____dateId;

/// [SerializeField]
/// @brief Field _queuedText, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____queuedText;

/// @brief Field _voice, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____voice;

/// @brief Field _loading, offset: 0x78, size: 0x1, def value: None
 bool  ____loading;

/// @brief Field _speaking, offset: 0x79, size: 0x1, def value: None
 bool  ____speaking;

/// @brief Field _paused, offset: 0x7a, size: 0x1, def value: None
 bool  ____paused;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____speaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____input) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____stopButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____pauseButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____speakButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____queueButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____asyncToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____asyncClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____dateId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____queuedText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____voice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____loading) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____speaking) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput, ____paused) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerInput) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerInput/<SpeakAsync>d__18
class CORDL_TYPE TTSSpeakerInput__SpeakAsync_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>  __4__this;

/// @brief Field phrase, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_phrase, put=__cordl_internal_set_phrase)) ::StringW  phrase;

/// @brief Field queued, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_queued, put=__cordl_internal_set_queued)) bool  queued;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e50920, size 0x170, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e50c68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e50c70, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e50ca8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e5091c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_phrase() const;

constexpr ::StringW& __cordl_internal_get_phrase() ;

constexpr bool const& __cordl_internal_get_queued() const;

constexpr bool& __cordl_internal_get_queued() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>  value) ;

constexpr void __cordl_internal_set_phrase(::StringW  value) ;

constexpr void __cordl_internal_set_queued(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e505d8, size 0x28, virtual false, abstract: false, final false
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
constexpr TTSSpeakerInput__SpeakAsync_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerInput__SpeakAsync_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerInput__SpeakAsync_d__18(TTSSpeakerInput__SpeakAsync_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerInput__SpeakAsync_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerInput__SpeakAsync_d__18(TTSSpeakerInput__SpeakAsync_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29084};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field queued, offset: 0x20, size: 0x1, def value: None
 bool  ___queued;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::UX::TTSSpeakerInput>  _____4__this;

/// @brief Field phrase, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___phrase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18, ___queued) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18, ___phrase) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerInput__SpeakAsync_d__18) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
