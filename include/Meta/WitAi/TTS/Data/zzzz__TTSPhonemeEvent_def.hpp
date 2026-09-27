#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSPhonemeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSStringEvent_def.hpp"
CORDL_MODULE_EXPORT(TTSPhonemeEvent)
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSPhonemeEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSPhonemeEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSPhonemeEvent*, "Meta.WitAi.TTS.Data", "TTSPhonemeEvent");
// Dependencies Meta.WitAi.TTS.Data.TTSStringEvent
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSPhonemeEvent
class CORDL_TYPE TTSPhonemeEvent : public ::Meta::WitAi::TTS::Data::TTSStringEvent {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Data::TTSPhonemeEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e6966c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSPhonemeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSPhonemeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSPhonemeEvent(TTSPhonemeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSPhonemeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSPhonemeEvent(TTSPhonemeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSPhonemeEvent) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
