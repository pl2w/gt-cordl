#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSClipEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(TTSClipEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSClipEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSClipEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSClipEvent*, "Meta.WitAi.TTS.Events", "TTSClipEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSClipEvent
class CORDL_TYPE TTSClipEvent : public ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::TTS::Data::TTSClipData*> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Events::TTSClipEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e66248, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipEvent(TTSClipEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipEvent(TTSClipEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSClipEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
