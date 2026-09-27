#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerClipMessageEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerClipMessageEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipMessageEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerClipMessageEvent");
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent
class CORDL_TYPE TTSSpeakerClipMessageEvent : public ::UnityEngine::Events::UnityEvent_3<::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>,::Meta::WitAi::TTS::Data::TTSClipData*,::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e5bb14, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerClipMessageEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipMessageEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerClipMessageEvent(TTSSpeakerClipMessageEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipMessageEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerClipMessageEvent(TTSSpeakerClipMessageEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipMessageEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
