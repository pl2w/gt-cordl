#pragma once
// IWYU pragma private; include "Meta/Voice/TranscriptionRequestEvents_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__VoiceRequestEvents_1_def.hpp"
CORDL_MODULE_EXPORT(TranscriptionRequestEvents_1)
namespace Meta::Voice {
class TranscriptionRequestEvent;
}
namespace Meta::Voice {
class UserTranscriptionRequestEvent;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent>
class TranscriptionRequestEvents_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::TranscriptionRequestEvents_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::TranscriptionRequestEvents_1, "Meta.Voice", "TranscriptionRequestEvents`1");
// Dependencies Meta.Voice.VoiceRequestEvents`1<TUnityEvent>
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent>
// Is value type: false
// CS Name: Meta.Voice.TranscriptionRequestEvents`1<TUnityEvent>
class CORDL_TYPE TranscriptionRequestEvents_1 : public ::Meta::Voice::VoiceRequestEvents_1<TUnityEvent> {
public:
// Declarations
 __declspec(property(get=get_OnAudioActivation)) TUnityEvent  OnAudioActivation;

 __declspec(property(get=get_OnAudioDeactivation)) TUnityEvent  OnAudioDeactivation;

 __declspec(property(get=get_OnAudioInputStateChange)) TUnityEvent  OnAudioInputStateChange;

 __declspec(property(get=get_OnFullTranscription)) ::Meta::Voice::TranscriptionRequestEvent*  OnFullTranscription;

 __declspec(property(get=get_OnPartialTranscription)) ::Meta::Voice::TranscriptionRequestEvent*  OnPartialTranscription;

 __declspec(property(get=get_OnStartListening)) TUnityEvent  OnStartListening;

 __declspec(property(get=get_OnStopListening)) TUnityEvent  OnStopListening;

 __declspec(property(get=get_OnUserFullTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  OnUserFullTranscription;

 __declspec(property(get=get_OnUserPartialTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  OnUserPartialTranscription;

/// @brief Field _onAudioActivation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAudioActivation, put=__cordl_internal_set__onAudioActivation)) TUnityEvent  _onAudioActivation;

/// @brief Field _onAudioDeactivation, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAudioDeactivation, put=__cordl_internal_set__onAudioDeactivation)) TUnityEvent  _onAudioDeactivation;

/// @brief Field _onAudioInputStateChange, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAudioInputStateChange, put=__cordl_internal_set__onAudioInputStateChange)) TUnityEvent  _onAudioInputStateChange;

/// @brief Field _onFullTranscription, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onFullTranscription, put=__cordl_internal_set__onFullTranscription)) ::Meta::Voice::TranscriptionRequestEvent*  _onFullTranscription;

/// @brief Field _onPartialTranscription, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPartialTranscription, put=__cordl_internal_set__onPartialTranscription)) ::Meta::Voice::TranscriptionRequestEvent*  _onPartialTranscription;

/// @brief Field _onStartListening, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStartListening, put=__cordl_internal_set__onStartListening)) TUnityEvent  _onStartListening;

/// @brief Field _onStopListening, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStopListening, put=__cordl_internal_set__onStopListening)) TUnityEvent  _onStopListening;

/// @brief Field _onUserFullTranscription, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__onUserFullTranscription, put=__cordl_internal_set__onUserFullTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  _onUserFullTranscription;

/// @brief Field _onUserPartialTranscription, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__onUserPartialTranscription, put=__cordl_internal_set__onUserPartialTranscription)) ::Meta::Voice::UserTranscriptionRequestEvent*  _onUserPartialTranscription;

static inline ::Meta::Voice::TranscriptionRequestEvents_1<TUnityEvent>* New_ctor() ;

constexpr TUnityEvent const& __cordl_internal_get__onAudioActivation() const;

constexpr TUnityEvent& __cordl_internal_get__onAudioActivation() ;

constexpr TUnityEvent const& __cordl_internal_get__onAudioDeactivation() const;

constexpr TUnityEvent& __cordl_internal_get__onAudioDeactivation() ;

constexpr TUnityEvent const& __cordl_internal_get__onAudioInputStateChange() const;

constexpr TUnityEvent& __cordl_internal_get__onAudioInputStateChange() ;

constexpr ::Meta::Voice::TranscriptionRequestEvent* const& __cordl_internal_get__onFullTranscription() const;

constexpr ::Meta::Voice::TranscriptionRequestEvent*& __cordl_internal_get__onFullTranscription() ;

constexpr ::Meta::Voice::TranscriptionRequestEvent* const& __cordl_internal_get__onPartialTranscription() const;

constexpr ::Meta::Voice::TranscriptionRequestEvent*& __cordl_internal_get__onPartialTranscription() ;

constexpr TUnityEvent const& __cordl_internal_get__onStartListening() const;

constexpr TUnityEvent& __cordl_internal_get__onStartListening() ;

constexpr TUnityEvent const& __cordl_internal_get__onStopListening() const;

constexpr TUnityEvent& __cordl_internal_get__onStopListening() ;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& __cordl_internal_get__onUserFullTranscription() const;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& __cordl_internal_get__onUserFullTranscription() ;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent* const& __cordl_internal_get__onUserPartialTranscription() const;

constexpr ::Meta::Voice::UserTranscriptionRequestEvent*& __cordl_internal_get__onUserPartialTranscription() ;

constexpr void __cordl_internal_set__onAudioActivation(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onAudioDeactivation(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onAudioInputStateChange(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onFullTranscription(::Meta::Voice::TranscriptionRequestEvent*  value) ;

constexpr void __cordl_internal_set__onPartialTranscription(::Meta::Voice::TranscriptionRequestEvent*  value) ;

constexpr void __cordl_internal_set__onStartListening(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onStopListening(TUnityEvent  value) ;

constexpr void __cordl_internal_set__onUserFullTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value) ;

constexpr void __cordl_internal_set__onUserPartialTranscription(::Meta::Voice::UserTranscriptionRequestEvent*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnAudioActivation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnAudioActivation() ;

/// @brief Method get_OnAudioDeactivation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnAudioDeactivation() ;

/// @brief Method get_OnAudioInputStateChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnAudioInputStateChange() ;

/// @brief Method get_OnFullTranscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::TranscriptionRequestEvent* get_OnFullTranscription() ;

/// @brief Method get_OnPartialTranscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::TranscriptionRequestEvent* get_OnPartialTranscription() ;

/// @brief Method get_OnStartListening, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnStartListening() ;

/// @brief Method get_OnStopListening, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TUnityEvent get_OnStopListening() ;

/// @brief Method get_OnUserFullTranscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::UserTranscriptionRequestEvent* get_OnUserFullTranscription() ;

/// @brief Method get_OnUserPartialTranscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::UserTranscriptionRequestEvent* get_OnUserPartialTranscription() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TranscriptionRequestEvents_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequestEvents_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TranscriptionRequestEvents_1(TranscriptionRequestEvents_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TranscriptionRequestEvents_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TranscriptionRequestEvents_1(TranscriptionRequestEvents_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25451};

/// [Header("Audio Events")]
/// [Tooltip("Called every time audio input changes states.")]
/// [SerializeField]
/// @brief Field _onAudioInputStateChange, offset: 0x58, size: 0x8, def value: None
 TUnityEvent  ____onAudioInputStateChange;

/// [Tooltip("Called every time audio input changes states.")]
/// [SerializeField]
/// @brief Field _onAudioActivation, offset: 0x60, size: 0x8, def value: None
 TUnityEvent  ____onAudioActivation;

/// [Tooltip("Called when audio is being listened to for this request.")]
/// [SerializeField]
/// @brief Field _onStartListening, offset: 0x68, size: 0x8, def value: None
 TUnityEvent  ____onStartListening;

/// [Tooltip("Called when audio is no longer being listened to for this request.")]
/// [SerializeField]
/// @brief Field _onAudioDeactivation, offset: 0x70, size: 0x8, def value: None
 TUnityEvent  ____onAudioDeactivation;

/// [Tooltip("Called when audio is no longer being listened to for this request.")]
/// [SerializeField]
/// @brief Field _onStopListening, offset: 0x78, size: 0x8, def value: None
 TUnityEvent  ____onStopListening;

/// [Header("Transcription Events")]
/// [Tooltip("Called on request transcription while audio is still being analyzed.")]
/// [SerializeField]
/// @brief Field _onPartialTranscription, offset: 0x80, size: 0x8, def value: None
 ::Meta::Voice::TranscriptionRequestEvent*  ____onPartialTranscription;

/// [Tooltip("Called on request transcription when audio has been completely transferred.")]
/// [SerializeField]
/// @brief Field _onFullTranscription, offset: 0x88, size: 0x8, def value: None
 ::Meta::Voice::TranscriptionRequestEvent*  ____onFullTranscription;

/// [Tooltip("Called on request transcription while audio is still being analyzed.  Also returns client user id as first parameter")]
/// [SerializeField]
/// @brief Field _onUserPartialTranscription, offset: 0x90, size: 0x8, def value: None
 ::Meta::Voice::UserTranscriptionRequestEvent*  ____onUserPartialTranscription;

/// [Tooltip("Called on request transcription when audio has been completely transferred.  Also returns client user id as first parameter")]
/// [SerializeField]
/// @brief Field _onUserFullTranscription, offset: 0x98, size: 0x8, def value: None
 ::Meta::Voice::UserTranscriptionRequestEvent*  ____onUserFullTranscription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
