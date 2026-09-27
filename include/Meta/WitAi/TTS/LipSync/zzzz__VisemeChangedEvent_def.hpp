#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(VisemeChangedEvent)
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class VisemeChangedEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*, "Meta.WitAi.TTS.LipSync", "VisemeChangedEvent");
// Dependencies Meta.WitAi.TTS.Data.Viseme, UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.VisemeChangedEvent
class CORDL_TYPE VisemeChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::TTS::Data::Viseme> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e53e7c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisemeChangedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisemeChangedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisemeChangedEvent(VisemeChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisemeChangedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisemeChangedEvent(VisemeChangedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
