#pragma once
// IWYU pragma private; include "Meta/WitAi/Speech/VoiceAudioEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(VoiceAudioEvent)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Meta::WitAi::Speech {
class VoiceAudioEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Speech::VoiceAudioEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Speech::VoiceAudioEvent*, "Meta.WitAi.Speech", "VoiceAudioEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Speech {
// Is value type: false
// CS Name: Meta.WitAi.Speech.VoiceAudioEvent
class CORDL_TYPE VoiceAudioEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::AudioClip>> {
public:
// Declarations
static inline ::Meta::WitAi::Speech::VoiceAudioEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e3f698, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceAudioEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceAudioEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceAudioEvent(VoiceAudioEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceAudioEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceAudioEvent(VoiceAudioEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Speech::VoiceAudioEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Speech
