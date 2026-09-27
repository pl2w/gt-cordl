#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerClipEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerClipEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerClipEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
class CORDL_TYPE TTSSpeakerClipEvent : public ::UnityEngine::Events::UnityEvent_2<::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>,::Meta::WitAi::TTS::Data::TTSClipData*> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e5bacc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerClipEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerClipEvent(TTSSpeakerClipEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerClipEvent(TTSSpeakerClipEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
