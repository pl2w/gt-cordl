#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSVisemeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSEvent_1_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSVisemeEvent)
namespace Meta::WitAi::TTS::Data {
struct Viseme;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSVisemeEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSVisemeEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSVisemeEvent*, "Meta.WitAi.TTS.Data", "TTSVisemeEvent");
// Dependencies Meta.WitAi.TTS.Data.TTSEvent`1<TData>, Meta.WitAi.TTS.Data.Viseme
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSVisemeEvent
class CORDL_TYPE TTSVisemeEvent : public ::Meta::WitAi::TTS::Data::TTSEvent_1<::Meta::WitAi::TTS::Data::Viseme> {
public:
// Declarations
/// [Preserve]
/// @brief Method GetVisemeAot, addr 0x9e69670, size 0x70, virtual false, abstract: false, final false
static inline ::Meta::WitAi::TTS::Data::Viseme GetVisemeAot(::StringW  inViseme) ;

static inline ::Meta::WitAi::TTS::Data::TTSVisemeEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e696e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSVisemeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSVisemeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSVisemeEvent(TTSVisemeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSVisemeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSVisemeEvent(TTSVisemeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSVisemeEvent) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
