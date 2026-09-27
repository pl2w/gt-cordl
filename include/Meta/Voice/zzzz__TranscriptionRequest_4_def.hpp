#pragma once
// IWYU pragma private; include "Meta/Voice/TranscriptionRequest_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequest_4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TranscriptionRequest_4)
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace Meta::Voice {
struct VoiceAudioInputState;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
class TranscriptionRequest_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::TranscriptionRequest_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::TranscriptionRequest_4, "Meta.Voice", "TranscriptionRequest`4");
// Dependencies Meta.Voice.VoiceAudioInputState, Meta.Voice.VoiceRequest`4<TUnityEvent, TOptions, TEvents, TResults>
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
// Is value type: false
// CS Name: Meta.Voice.TranscriptionRequest`4<TUnityEvent,TOptions,TEvents,TResults>
class CORDL_TYPE TranscriptionRequest_4 : public ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults> {
public:
// Declarations
 __declspec(property(get=get_AudioInputState, put=set_AudioInputState)) ::Meta::Voice::VoiceAudioInputState  AudioInputState;

 __declspec(property(get=get_CanActivateAudio)) bool  CanActivateAudio;

 __declspec(property(get=get_IsAudioInputActivated)) bool  IsAudioInputActivated;

 __declspec(property(get=get_IsListening)) bool  IsListening;

 __declspec(property(get=get_Transcription)) ::StringW  Transcription;

/// @brief Field <AudioInputState>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioInputState_k__BackingField, put=__cordl_internal_set__AudioInputState_k__BackingField)) ::Meta::Voice::VoiceAudioInputState  _AudioInputState_k__BackingField;

/// @brief Method ActivateAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ActivateAudio() ;

/// @brief Method ApplyTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyTranscription(::StringW  transcription, bool  full) ;

/// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Cancel(::StringW  reason) ;

/// @brief Method DeactivateAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DeactivateAudio() ;

/// @brief Method GetActivateAudioError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method HandleAudioActivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleAudioActivation() ;

/// @brief Method HandleAudioDeactivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleAudioDeactivation() ;

/// @brief Method HasSentAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool HasSentAudio() ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel) ;

static inline ::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults>* New_ctor(TOptions  newOptions, TEvents  newEvents) ;

/// @brief Method OnAudioActivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAudioActivation() ;

/// @brief Method OnAudioDeactivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAudioDeactivation() ;

/// @brief Method OnCanActivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCanActivate() ;

/// @brief Method OnFullTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnFullTranscription() ;

/// @brief Method OnPartialTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnPartialTranscription() ;

/// @brief Method OnStartListening, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStartListening() ;

/// @brief Method OnStopListening, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStopListening() ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Send() ;

/// @brief Method SetAudioInputState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAudioInputState(::Meta::Voice::VoiceAudioInputState  newAudioInputState) ;

/// [CompilerGenerated]
/// @brief Method <OnFullTranscription>b__22_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _OnFullTranscription_b__22_0() ;

/// [CompilerGenerated]
/// @brief Method <OnPartialTranscription>b__21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _OnPartialTranscription_b__21_0() ;

constexpr ::Meta::Voice::VoiceAudioInputState const& __cordl_internal_get__AudioInputState_k__BackingField() const;

constexpr ::Meta::Voice::VoiceAudioInputState& __cordl_internal_get__AudioInputState_k__BackingField() ;

constexpr void __cordl_internal_set__AudioInputState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TOptions  newOptions, TEvents  newEvents) ;

/// [CompilerGenerated]
/// @brief Method get_AudioInputState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::VoiceAudioInputState get_AudioInputState() ;

/// @brief Method get_CanActivateAudio, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_CanActivateAudio() ;

/// @brief Method get_IsAudioInputActivated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsAudioInputActivated() ;

/// @brief Method get_IsListening, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsListening() ;

/// @brief Method get_Transcription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_Transcription() ;

/// [CompilerGenerated]
/// @brief Method set_AudioInputState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_AudioInputState(::Meta::Voice::VoiceAudioInputState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranscriptionRequest_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequest_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TranscriptionRequest_4(TranscriptionRequest_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequest_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranscriptionRequest_4(TranscriptionRequest_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25448};

/// [CompilerGenerated]
/// @brief Field <AudioInputState>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::Meta::Voice::VoiceAudioInputState  ____AudioInputState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
