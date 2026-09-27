#pragma once
// IWYU pragma private; include "Meta/WitAi/Speech/VoiceSpeechEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VoiceSpeechEvents)
namespace Meta::WitAi::Speech {
class VoiceAudioEvent;
}
namespace Meta::WitAi::Speech {
class VoiceTextEvent;
}
// Forward declare root types
namespace Meta::WitAi::Speech {
class VoiceSpeechEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Speech::VoiceSpeechEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Speech::VoiceSpeechEvents*, "Meta.WitAi.Speech", "VoiceSpeechEvents");
// Dependencies System.Object
namespace Meta::WitAi::Speech {
// Is value type: false
// CS Name: Meta.WitAi.Speech.VoiceSpeechEvents
class CORDL_TYPE VoiceSpeechEvents : public ::System::Object {
public:
// Declarations
/// @brief Field OnAudioClipPlaybackCancelled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioClipPlaybackCancelled, put=__cordl_internal_set_OnAudioClipPlaybackCancelled)) ::Meta::WitAi::Speech::VoiceAudioEvent*  OnAudioClipPlaybackCancelled;

/// @brief Field OnAudioClipPlaybackFinished, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioClipPlaybackFinished, put=__cordl_internal_set_OnAudioClipPlaybackFinished)) ::Meta::WitAi::Speech::VoiceAudioEvent*  OnAudioClipPlaybackFinished;

/// @brief Field OnAudioClipPlaybackReady, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioClipPlaybackReady, put=__cordl_internal_set_OnAudioClipPlaybackReady)) ::Meta::WitAi::Speech::VoiceAudioEvent*  OnAudioClipPlaybackReady;

/// @brief Field OnAudioClipPlaybackStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioClipPlaybackStart, put=__cordl_internal_set_OnAudioClipPlaybackStart)) ::Meta::WitAi::Speech::VoiceAudioEvent*  OnAudioClipPlaybackStart;

/// @brief Field OnTextPlaybackCancelled, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTextPlaybackCancelled, put=__cordl_internal_set_OnTextPlaybackCancelled)) ::Meta::WitAi::Speech::VoiceTextEvent*  OnTextPlaybackCancelled;

/// @brief Field OnTextPlaybackFinished, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTextPlaybackFinished, put=__cordl_internal_set_OnTextPlaybackFinished)) ::Meta::WitAi::Speech::VoiceTextEvent*  OnTextPlaybackFinished;

/// @brief Field OnTextPlaybackStart, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTextPlaybackStart, put=__cordl_internal_set_OnTextPlaybackStart)) ::Meta::WitAi::Speech::VoiceTextEvent*  OnTextPlaybackStart;

static inline ::Meta::WitAi::Speech::VoiceSpeechEvents* New_ctor() ;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& __cordl_internal_get_OnAudioClipPlaybackCancelled() const;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& __cordl_internal_get_OnAudioClipPlaybackCancelled() ;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& __cordl_internal_get_OnAudioClipPlaybackFinished() const;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& __cordl_internal_get_OnAudioClipPlaybackFinished() ;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& __cordl_internal_get_OnAudioClipPlaybackReady() const;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& __cordl_internal_get_OnAudioClipPlaybackReady() ;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent* const& __cordl_internal_get_OnAudioClipPlaybackStart() const;

constexpr ::Meta::WitAi::Speech::VoiceAudioEvent*& __cordl_internal_get_OnAudioClipPlaybackStart() ;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& __cordl_internal_get_OnTextPlaybackCancelled() const;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& __cordl_internal_get_OnTextPlaybackCancelled() ;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& __cordl_internal_get_OnTextPlaybackFinished() const;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& __cordl_internal_get_OnTextPlaybackFinished() ;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent* const& __cordl_internal_get_OnTextPlaybackStart() const;

constexpr ::Meta::WitAi::Speech::VoiceTextEvent*& __cordl_internal_get_OnTextPlaybackStart() ;

constexpr void __cordl_internal_set_OnAudioClipPlaybackCancelled(::Meta::WitAi::Speech::VoiceAudioEvent*  value) ;

constexpr void __cordl_internal_set_OnAudioClipPlaybackFinished(::Meta::WitAi::Speech::VoiceAudioEvent*  value) ;

constexpr void __cordl_internal_set_OnAudioClipPlaybackReady(::Meta::WitAi::Speech::VoiceAudioEvent*  value) ;

constexpr void __cordl_internal_set_OnAudioClipPlaybackStart(::Meta::WitAi::Speech::VoiceAudioEvent*  value) ;

constexpr void __cordl_internal_set_OnTextPlaybackCancelled(::Meta::WitAi::Speech::VoiceTextEvent*  value) ;

constexpr void __cordl_internal_set_OnTextPlaybackFinished(::Meta::WitAi::Speech::VoiceTextEvent*  value) ;

constexpr void __cordl_internal_set_OnTextPlaybackStart(::Meta::WitAi::Speech::VoiceTextEvent*  value) ;

/// @brief Method .ctor, addr 0x9e3f6e0, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSpeechEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSpeechEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSpeechEvents(VoiceSpeechEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSpeechEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSpeechEvents(VoiceSpeechEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31008};

/// [Header("Text Events")]
/// [Tooltip("Called when speech begins with the provided phrase")]
/// @brief Field OnTextPlaybackStart, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceTextEvent*  ___OnTextPlaybackStart;

/// [Tooltip("Called when speech playback is cancelled")]
/// @brief Field OnTextPlaybackCancelled, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceTextEvent*  ___OnTextPlaybackCancelled;

/// [Tooltip("Called when speech playback completes successfully")]
/// @brief Field OnTextPlaybackFinished, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceTextEvent*  ___OnTextPlaybackFinished;

/// [Header("Audio Clip Events")]
/// [Tooltip("Called when a clip is ready for playback")]
/// @brief Field OnAudioClipPlaybackReady, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceAudioEvent*  ___OnAudioClipPlaybackReady;

/// [Tooltip("Called when a clip playback has begun")]
/// @brief Field OnAudioClipPlaybackStart, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceAudioEvent*  ___OnAudioClipPlaybackStart;

/// [Tooltip("Called when a clip playback has been cancelled")]
/// @brief Field OnAudioClipPlaybackCancelled, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceAudioEvent*  ___OnAudioClipPlaybackCancelled;

/// [Tooltip("Called when a clip playback has completed successfully")]
/// @brief Field OnAudioClipPlaybackFinished, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::Speech::VoiceAudioEvent*  ___OnAudioClipPlaybackFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnTextPlaybackStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnTextPlaybackCancelled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnTextPlaybackFinished) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnAudioClipPlaybackReady) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnAudioClipPlaybackStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnAudioClipPlaybackCancelled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Speech::VoiceSpeechEvents, ___OnAudioClipPlaybackFinished) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Speech::VoiceSpeechEvents) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::Speech
