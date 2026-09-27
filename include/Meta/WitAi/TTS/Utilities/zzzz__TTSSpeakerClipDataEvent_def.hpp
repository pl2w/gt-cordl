#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerClipDataEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerClipDataEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipDataEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerClipDataEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
class CORDL_TYPE TTSSpeakerClipDataEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::TTS::Data::TTSClipData*> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e5bdb8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerClipDataEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipDataEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerClipDataEvent(TTSSpeakerClipDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerClipDataEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerClipDataEvent(TTSSpeakerClipDataEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipDataEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
