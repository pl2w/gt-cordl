#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipEvents_def.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerEvents)
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipDataEvent;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerEvent;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerEvents");
// Dependencies Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
class CORDL_TYPE TTSSpeakerEvents : public ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents {
public:
// Declarations
/// @brief Field OnCancelledSpeaking, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCancelledSpeaking, put=__cordl_internal_set_OnCancelledSpeaking)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnCancelledSpeaking;

/// @brief Field OnClipDataLoadAbort, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataLoadAbort, put=__cordl_internal_set_OnClipDataLoadAbort)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataLoadAbort;

/// @brief Field OnClipDataLoadBegin, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataLoadBegin, put=__cordl_internal_set_OnClipDataLoadBegin)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataLoadBegin;

/// @brief Field OnClipDataLoadFailed, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataLoadFailed, put=__cordl_internal_set_OnClipDataLoadFailed)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataLoadFailed;

/// @brief Field OnClipDataLoadSuccess, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataLoadSuccess, put=__cordl_internal_set_OnClipDataLoadSuccess)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataLoadSuccess;

/// @brief Field OnClipDataPlaybackCancelled, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataPlaybackCancelled, put=__cordl_internal_set_OnClipDataPlaybackCancelled)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataPlaybackCancelled;

/// @brief Field OnClipDataPlaybackFinished, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataPlaybackFinished, put=__cordl_internal_set_OnClipDataPlaybackFinished)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataPlaybackFinished;

/// @brief Field OnClipDataPlaybackReady, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataPlaybackReady, put=__cordl_internal_set_OnClipDataPlaybackReady)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataPlaybackReady;

/// @brief Field OnClipDataPlaybackStart, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataPlaybackStart, put=__cordl_internal_set_OnClipDataPlaybackStart)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataPlaybackStart;

/// @brief Field OnClipDataQueued, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipDataQueued, put=__cordl_internal_set_OnClipDataQueued)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  OnClipDataQueued;

/// @brief Field OnClipLoadAbort, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipLoadAbort, put=__cordl_internal_set_OnClipLoadAbort)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnClipLoadAbort;

/// @brief Field OnClipLoadBegin, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipLoadBegin, put=__cordl_internal_set_OnClipLoadBegin)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnClipLoadBegin;

/// @brief Field OnClipLoadFailed, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipLoadFailed, put=__cordl_internal_set_OnClipLoadFailed)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnClipLoadFailed;

/// @brief Field OnClipLoadSuccess, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipLoadSuccess, put=__cordl_internal_set_OnClipLoadSuccess)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnClipLoadSuccess;

/// @brief Field OnFinishedSpeaking, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFinishedSpeaking, put=__cordl_internal_set_OnFinishedSpeaking)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnFinishedSpeaking;

 __declspec(property(get=get_OnPlaybackQueueBegin)) ::UnityEngine::Events::UnityEvent*  OnPlaybackQueueBegin;

 __declspec(property(get=get_OnPlaybackQueueComplete)) ::UnityEngine::Events::UnityEvent*  OnPlaybackQueueComplete;

/// @brief Field OnStartSpeaking, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartSpeaking, put=__cordl_internal_set_OnStartSpeaking)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  OnStartSpeaking;

/// @brief Field _onPlaybackQueueBegin, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackQueueBegin, put=__cordl_internal_set__onPlaybackQueueBegin)) ::UnityEngine::Events::UnityEvent*  _onPlaybackQueueBegin;

/// @brief Field _onPlaybackQueueComplete, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPlaybackQueueComplete, put=__cordl_internal_set__onPlaybackQueueComplete)) ::UnityEngine::Events::UnityEvent*  _onPlaybackQueueComplete;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnCancelledSpeaking() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnCancelledSpeaking() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataLoadAbort() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataLoadAbort() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataLoadBegin() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataLoadBegin() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataLoadFailed() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataLoadFailed() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataLoadSuccess() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataLoadSuccess() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataPlaybackCancelled() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataPlaybackCancelled() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataPlaybackFinished() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataPlaybackFinished() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataPlaybackReady() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataPlaybackReady() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataPlaybackStart() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataPlaybackStart() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* const& __cordl_internal_get_OnClipDataQueued() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*& __cordl_internal_get_OnClipDataQueued() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnClipLoadAbort() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnClipLoadAbort() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnClipLoadBegin() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnClipLoadBegin() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnClipLoadFailed() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnClipLoadFailed() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnClipLoadSuccess() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnClipLoadSuccess() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnFinishedSpeaking() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnFinishedSpeaking() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent* const& __cordl_internal_get_OnStartSpeaking() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*& __cordl_internal_get_OnStartSpeaking() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onPlaybackQueueBegin() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onPlaybackQueueBegin() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onPlaybackQueueComplete() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onPlaybackQueueComplete() ;

constexpr void __cordl_internal_set_OnCancelledSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataPlaybackFinished(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataPlaybackStart(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipDataQueued(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  value) ;

constexpr void __cordl_internal_set_OnClipLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnClipLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnClipLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnClipLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnFinishedSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set_OnStartSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackQueueBegin(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onPlaybackQueueComplete(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9e5be10, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnPlaybackQueueBegin, addr 0x9e5be00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnPlaybackQueueBegin() ;

/// @brief Method get_OnPlaybackQueueComplete, addr 0x9e5be08, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnPlaybackQueueComplete() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerEvents(TTSSpeakerEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerEvents(TTSSpeakerEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29140};

/// [Header("Queue Events")]
/// [Tooltip("Called when a tts request is added to an empty queue")]
/// [SerializeField]
/// [FormerlySerializedAs("OnPlaybackQueueBegin")]
/// @brief Field _onPlaybackQueueBegin, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onPlaybackQueueBegin;

/// [Tooltip("Called the final request is removed from a queue")]
/// [SerializeField]
/// [FormerlySerializedAs("OnPlaybackQueueComplete")]
/// @brief Field _onPlaybackQueueComplete, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onPlaybackQueueComplete;

/// [Header("Deprecated Events")]
/// [Obsolete("Use \'OnLoadBegin\' event")]
/// @brief Field OnClipDataQueued, offset: 0xb0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataQueued;

/// [Obsolete("Use \'OnLoadBegin\' event")]
/// @brief Field OnClipLoadBegin, offset: 0xb8, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnClipLoadBegin;

/// [Obsolete("Use \'OnLoadBegin\' event")]
/// @brief Field OnClipDataLoadBegin, offset: 0xc0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataLoadBegin;

/// [Obsolete("Use \'OnLoadAbort\' event")]
/// @brief Field OnClipLoadAbort, offset: 0xc8, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnClipLoadAbort;

/// [Obsolete("Use \'OnLoadAbort\' event")]
/// @brief Field OnClipDataLoadAbort, offset: 0xd0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataLoadAbort;

/// [Obsolete("Use \'OnLoadFailed\' event")]
/// @brief Field OnClipLoadFailed, offset: 0xd8, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnClipLoadFailed;

/// [Obsolete("Use \'OnLoadFailed\' event")]
/// @brief Field OnClipDataLoadFailed, offset: 0xe0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataLoadFailed;

/// [Obsolete("Use \'OnLoadSuccess\' event")]
/// @brief Field OnClipLoadSuccess, offset: 0xe8, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnClipLoadSuccess;

/// [Obsolete("Use \'OnLoadSuccess\' event")]
/// @brief Field OnClipDataLoadSuccess, offset: 0xf0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataLoadSuccess;

/// [Obsolete("Use \'OnPlaybackReady\' event")]
/// @brief Field OnClipDataPlaybackReady, offset: 0xf8, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataPlaybackReady;

/// [Obsolete("Use \'OnPlaybackStart\' event")]
/// @brief Field OnStartSpeaking, offset: 0x100, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnStartSpeaking;

/// [Obsolete("Use \'OnPlaybackStart\' event")]
/// @brief Field OnClipDataPlaybackStart, offset: 0x108, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataPlaybackStart;

/// [Obsolete("Use \'OnPlaybackCancelled\' event")]
/// @brief Field OnCancelledSpeaking, offset: 0x110, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnCancelledSpeaking;

/// [Obsolete("Use \'OnPlaybackCancelled\' event")]
/// @brief Field OnClipDataPlaybackCancelled, offset: 0x118, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataPlaybackCancelled;

/// [Obsolete("Use \'OnPlaybackComplete\' event")]
/// @brief Field OnFinishedSpeaking, offset: 0x120, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvent*  ___OnFinishedSpeaking;

/// [Obsolete("Use \'OnPlaybackComplete\' event")]
/// @brief Field OnClipDataPlaybackFinished, offset: 0x128, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*  ___OnClipDataPlaybackFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ____onPlaybackQueueBegin) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ____onPlaybackQueueComplete) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataQueued) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipLoadBegin) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataLoadBegin) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipLoadAbort) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataLoadAbort) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipLoadFailed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataLoadFailed) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipLoadSuccess) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataLoadSuccess) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataPlaybackReady) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnStartSpeaking) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataPlaybackStart) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnCancelledSpeaking) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataPlaybackCancelled) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnFinishedSpeaking) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents, ___OnClipDataPlaybackFinished) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents) == 0x130, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
