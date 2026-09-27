#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/AudioBufferEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBufferEvents)
namespace Meta::Voice {
struct VoiceAudioInputState;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace Meta::WitAi::Events {
class AudioBufferEvents_OnSampleReadyEvent;
}
namespace Meta::WitAi::Events {
class WitByteDataEvent;
}
namespace Meta::WitAi::Events {
class WitMicLevelChangedEvent;
}
namespace Meta::WitAi::Events {
class WitSampleEvent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class AudioBufferEvents;
}
namespace Meta::WitAi::Events {
class AudioBufferEvents_OnSampleReadyEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::AudioBufferEvents*);
MARK_REF_T(::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::AudioBufferEvents*, "Meta.WitAi.Events", "AudioBufferEvents");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*, "Meta.WitAi.Events", "AudioBufferEvents/OnSampleReadyEvent");
// Dependencies System.Object
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.AudioBufferEvents
class CORDL_TYPE AudioBufferEvents : public ::System::Object {
public:
// Declarations
using OnSampleReadyEvent = ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent;

/// @brief Field OnAudioStateChange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioStateChange, put=__cordl_internal_set_OnAudioStateChange)) ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  OnAudioStateChange;

/// @brief Field OnByteDataReady, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnByteDataReady, put=__cordl_internal_set_OnByteDataReady)) ::Meta::WitAi::Events::WitByteDataEvent*  OnByteDataReady;

/// @brief Field OnByteDataSent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnByteDataSent, put=__cordl_internal_set_OnByteDataSent)) ::Meta::WitAi::Events::WitByteDataEvent*  OnByteDataSent;

/// @brief Field OnMicLevelChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicLevelChanged, put=__cordl_internal_set_OnMicLevelChanged)) ::Meta::WitAi::Events::WitMicLevelChangedEvent*  OnMicLevelChanged;

/// @brief Field OnSampleReady, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSampleReady, put=__cordl_internal_set_OnSampleReady)) ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*  OnSampleReady;

/// @brief Field OnSampleReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSampleReceived, put=__cordl_internal_set_OnSampleReceived)) ::Meta::WitAi::Events::WitSampleEvent*  OnSampleReceived;

static inline ::Meta::WitAi::Events::AudioBufferEvents* New_ctor() ;

constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>* const& __cordl_internal_get_OnAudioStateChange() const;

constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*& __cordl_internal_get_OnAudioStateChange() ;

constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& __cordl_internal_get_OnByteDataReady() const;

constexpr ::Meta::WitAi::Events::WitByteDataEvent*& __cordl_internal_get_OnByteDataReady() ;

constexpr ::Meta::WitAi::Events::WitByteDataEvent* const& __cordl_internal_get_OnByteDataSent() const;

constexpr ::Meta::WitAi::Events::WitByteDataEvent*& __cordl_internal_get_OnByteDataSent() ;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& __cordl_internal_get_OnMicLevelChanged() const;

constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& __cordl_internal_get_OnMicLevelChanged() ;

constexpr ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent* const& __cordl_internal_get_OnSampleReady() const;

constexpr ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*& __cordl_internal_get_OnSampleReady() ;

constexpr ::Meta::WitAi::Events::WitSampleEvent* const& __cordl_internal_get_OnSampleReceived() const;

constexpr ::Meta::WitAi::Events::WitSampleEvent*& __cordl_internal_get_OnSampleReceived() ;

constexpr void __cordl_internal_set_OnAudioStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value) ;

constexpr void __cordl_internal_set_OnByteDataReady(::Meta::WitAi::Events::WitByteDataEvent*  value) ;

constexpr void __cordl_internal_set_OnByteDataSent(::Meta::WitAi::Events::WitByteDataEvent*  value) ;

constexpr void __cordl_internal_set_OnMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value) ;

constexpr void __cordl_internal_set_OnSampleReady(::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*  value) ;

constexpr void __cordl_internal_set_OnSampleReceived(::Meta::WitAi::Events::WitSampleEvent*  value) ;

/// @brief Method .ctor, addr 0x9e94cd0, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBufferEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBufferEvents(AudioBufferEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBufferEvents(AudioBufferEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25668};

/// @brief Field OnAudioStateChange, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  ___OnAudioStateChange;

/// @brief Field OnSampleReady, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent*  ___OnSampleReady;

/// [Tooltip("Fired when a sample is received from an audio input source")]
/// @brief Field OnSampleReceived, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitSampleEvent*  ___OnSampleReceived;

/// [Tooltip("Called when the volume level of the mic input has changed")]
/// @brief Field OnMicLevelChanged, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitMicLevelChangedEvent*  ___OnMicLevelChanged;

/// [Header("Data")]
/// @brief Field OnByteDataReady, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitByteDataEvent*  ___OnByteDataReady;

/// @brief Field OnByteDataSent, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Events::WitByteDataEvent*  ___OnByteDataSent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnAudioStateChange) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnSampleReady) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnSampleReceived) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnMicLevelChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnByteDataReady) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Events::AudioBufferEvents, ___OnByteDataSent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::AudioBufferEvents) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
class CORDL_TYPE AudioBufferEvents_OnSampleReadyEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e94e58, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax) ;

static inline ::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e84280, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBufferEvents_OnSampleReadyEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferEvents_OnSampleReadyEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBufferEvents_OnSampleReadyEvent(AudioBufferEvents_OnSampleReadyEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferEvents_OnSampleReadyEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBufferEvents_OnSampleReadyEvent(AudioBufferEvents_OnSampleReadyEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::AudioBufferEvents_OnSampleReadyEvent) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
