#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSClipErrorEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSClipErrorEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSClipErrorEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*, "Meta.WitAi.TTS.Events", "TTSClipErrorEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSClipErrorEvent
class CORDL_TYPE TTSClipErrorEvent : public ::UnityEngine::Events::UnityEvent_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Events::TTSClipErrorEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e664d8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipErrorEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipErrorEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipErrorEvent(TTSClipErrorEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipErrorEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipErrorEvent(TTSClipErrorEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSClipErrorEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
