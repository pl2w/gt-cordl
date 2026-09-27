#pragma once
// IWYU pragma private; include "Meta/WitAi/Speech/VoiceTextEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceTextEvent)
// Forward declare root types
namespace Meta::WitAi::Speech {
class VoiceTextEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Speech::VoiceTextEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Speech::VoiceTextEvent*, "Meta.WitAi.Speech", "VoiceTextEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::Speech {
// Is value type: false
// CS Name: Meta.WitAi.Speech.VoiceTextEvent
class CORDL_TYPE VoiceTextEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::Speech::VoiceTextEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e3f650, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceTextEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceTextEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceTextEvent(VoiceTextEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceTextEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceTextEvent(VoiceTextEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Speech::VoiceTextEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Speech
