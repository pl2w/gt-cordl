#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/TelemetryEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TelemetryEvents)
namespace Meta::WitAi::Events {
class AudioDurationTrackerFinishedEvent;
}
// Forward declare root types
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::TelemetryEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::TelemetryEvents*, "Meta.WitAi.Events", "TelemetryEvents");
// Dependencies System.Object
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.TelemetryEvents
class CORDL_TYPE TelemetryEvents : public ::System::Object {
public:
// Declarations
/// @brief Field OnAudioTrackerFinished, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioTrackerFinished, put=__cordl_internal_set_OnAudioTrackerFinished)) ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*  OnAudioTrackerFinished;

static inline ::Meta::WitAi::Events::TelemetryEvents* New_ctor() ;

constexpr ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent* const& __cordl_internal_get_OnAudioTrackerFinished() const;

constexpr ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*& __cordl_internal_get_OnAudioTrackerFinished() ;

constexpr void __cordl_internal_set_OnAudioTrackerFinished(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*  value) ;

/// @brief Method .ctor, addr 0x9e94f6c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TelemetryEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TelemetryEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TelemetryEvents(TelemetryEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TelemetryEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TelemetryEvents(TelemetryEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25672};

/// @brief Field OnAudioTrackerFinished, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*  ___OnAudioTrackerFinished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Events::TelemetryEvents, ___OnAudioTrackerFinished) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Events::TelemetryEvents) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
