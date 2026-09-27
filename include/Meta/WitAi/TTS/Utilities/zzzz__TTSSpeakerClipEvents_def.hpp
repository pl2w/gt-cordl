#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerClipEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Speech/zzzz__VoiceSpeechEvents_def.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerClipEvents)
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipEvent;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipMessageEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerClipEvents");
// Dependencies Meta.WitAi.Speech.VoiceSpeechEvents
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
class CORDL_TYPE TTSSpeakerClipEvents : public ::Meta::WitAi::Speech::VoiceSpeechEvents {
public:
// Declarations
 __declspec(property(get=get_OnComplete)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnComplete;

 __declspec(property(get=get_OnInit)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnInit;

 __declspec(property(get=get_OnLoadAbort)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnLoadAbort;

 __declspec(property(get=get_OnLoadBegin)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnLoadBegin;

 __declspec(property(get=get_OnLoadFailed)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  OnLoadFailed;

 __declspec(property(get=get_OnLoadSuccess)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnLoadSuccess;

 __declspec(property(get=get_OnPlaybackCancelled)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  OnPlaybackCancelled;

 __declspec(property(get=get_OnPlaybackComplete)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnPlaybackComplete;

 __declspec(property(get=get_OnPlaybackReady)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnPlaybackReady;

 __declspec(property(get=get_OnPlaybackStart)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  OnPlaybackStart;

/// @brief Field _onComplete, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onComplete, put=__cordl_internal_set__onComplete)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onComplete;

/// @brief Field _onInit, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onInit, put=__cordl_internal_set__onInit)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onInit;

/// @brief Field _onLoadAbort, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLoadAbort, put=__cordl_internal_set__onLoadAbort)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onLoadAbort;

/// @brief Field _onLoadBegin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLoadBegin, put=__cordl_internal_set__onLoadBegin)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onLoadBegin;

/// @brief Field _onLoadFailed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLoadFailed, put=__cordl_internal_set__onLoadFailed)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  _onLoadFailed;

/// @brief Field _onLoadSuccess, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLoadSuccess, put=__cordl_internal_set__onLoadSuccess)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onLoadSuccess;

/// @brief Field _onPlaybackCancelled, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackCancelled, put=__cordl_internal_set__onPlaybackCancelled)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  _onPlaybackCancelled;

/// @brief Field _onPlaybackClipUpdated, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackClipUpdated, put=__cordl_internal_set__onPlaybackClipUpdated)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onPlaybackClipUpdated;

/// @brief Field _onPlaybackComplete, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackComplete, put=__cordl_internal_set__onPlaybackComplete)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onPlaybackComplete;

/// @brief Field _onPlaybackReady, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackReady, put=__cordl_internal_set__onPlaybackReady)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onPlaybackReady;

/// @brief Field _onPlaybackStart, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackStart, put=__cordl_internal_set__onPlaybackStart)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  _onPlaybackStart;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onComplete() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onComplete() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onInit() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onInit() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onLoadAbort() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onLoadAbort() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onLoadBegin() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onLoadBegin() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* const& __cordl_internal_get__onLoadFailed() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*& __cordl_internal_get__onLoadFailed() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onLoadSuccess() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onLoadSuccess() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* const& __cordl_internal_get__onPlaybackCancelled() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*& __cordl_internal_get__onPlaybackCancelled() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onPlaybackClipUpdated() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onPlaybackClipUpdated() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onPlaybackComplete() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onPlaybackComplete() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onPlaybackReady() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onPlaybackReady() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* const& __cordl_internal_get__onPlaybackStart() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*& __cordl_internal_get__onPlaybackStart() ;

constexpr void __cordl_internal_set__onComplete(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onInit(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  value) ;

constexpr void __cordl_internal_set__onLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackClipUpdated(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackComplete(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackStart(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  value) ;

/// @brief Method .ctor, addr 0x9e5bbac, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnComplete, addr 0x9e5bb64, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnComplete() ;

/// @brief Method get_OnInit, addr 0x9e5bb5c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnInit() ;

/// @brief Method get_OnLoadAbort, addr 0x9e5bb74, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadAbort() ;

/// @brief Method get_OnLoadBegin, addr 0x9e5bb6c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadBegin() ;

/// @brief Method get_OnLoadFailed, addr 0x9e5bb7c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* get_OnLoadFailed() ;

/// @brief Method get_OnLoadSuccess, addr 0x9e5bb84, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnLoadSuccess() ;

/// @brief Method get_OnPlaybackCancelled, addr 0x9e5bb9c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* get_OnPlaybackCancelled() ;

/// @brief Method get_OnPlaybackComplete, addr 0x9e5bba4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackComplete() ;

/// @brief Method get_OnPlaybackReady, addr 0x9e5bb8c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackReady() ;

/// @brief Method get_OnPlaybackStart, addr 0x9e5bb94, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* get_OnPlaybackStart() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerClipEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerClipEvents(TTSSpeakerClipEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerClipEvents(TTSSpeakerClipEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29137};

/// [Header("Speaker Lifecycle Events")]
/// [SerializeField]
/// [Tooltip("Initial callback as soon as the audio clip speak request is generated")]
/// @brief Field _onInit, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onInit;

/// [SerializeField]
/// [Tooltip("Final call for a \'Speak\' request that is called following a load failure, load abort, playback cancellation or playback completion")]
/// @brief Field _onComplete, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onComplete;

/// [Header("Speaker Loading Events")]
/// [SerializeField]
/// [Tooltip("Called when TTS audio clip load begins")]
/// @brief Field _onLoadBegin, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onLoadBegin;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip load is cancelled")]
/// @brief Field _onLoadAbort, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onLoadAbort;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip load fails due to a network or load error")]
/// @brief Field _onLoadFailed, offset: 0x68, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  ____onLoadFailed;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip load successfully")]
/// @brief Field _onLoadSuccess, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onLoadSuccess;

/// [Header("Speaker Playback Events")]
/// [SerializeField]
/// [Tooltip("Called when TTS audio clip playback is ready")]
/// @brief Field _onPlaybackReady, offset: 0x78, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onPlaybackReady;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip playback has begun")]
/// @brief Field _onPlaybackStart, offset: 0x80, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onPlaybackStart;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip playback been cancelled")]
/// @brief Field _onPlaybackCancelled, offset: 0x88, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*  ____onPlaybackCancelled;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip is updated during streamed playback")]
/// @brief Field _onPlaybackClipUpdated, offset: 0x90, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onPlaybackClipUpdated;

/// [SerializeField]
/// [Tooltip("Called when TTS audio clip playback completed successfully")]
/// @brief Field _onPlaybackComplete, offset: 0x98, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*  ____onPlaybackComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onInit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onComplete) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onLoadBegin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onLoadAbort) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onLoadFailed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onLoadSuccess) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onPlaybackReady) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onPlaybackStart) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onPlaybackCancelled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onPlaybackClipUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents, ____onPlaybackComplete) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents) == 0xa0, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
