#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/AudioDurationTrackerFinishedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDurationTrackerFinishedEvent)
// Forward declare root types
namespace Meta::WitAi::Events {
class AudioDurationTrackerFinishedEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*, "Meta.WitAi.Events", "AudioDurationTrackerFinishedEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::WitAi::Events {
// Is value type: false
// CS Name: Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
class CORDL_TYPE AudioDurationTrackerFinishedEvent : public ::UnityEngine::Events::UnityEvent_2<int64_t,double_t> {
public:
// Declarations
static inline ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e94e6c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDurationTrackerFinishedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDurationTrackerFinishedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDurationTrackerFinishedEvent(AudioDurationTrackerFinishedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDurationTrackerFinishedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDurationTrackerFinishedEvent(AudioDurationTrackerFinishedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Events
