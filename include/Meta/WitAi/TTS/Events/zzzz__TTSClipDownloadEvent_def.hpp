#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSClipDownloadEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSClipDownloadEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSClipDownloadEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*, "Meta.WitAi.TTS.Events", "TTSClipDownloadEvent");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSClipDownloadEvent
class CORDL_TYPE TTSClipDownloadEvent : public ::UnityEngine::Events::UnityEvent_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e65fa0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipDownloadEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipDownloadEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipDownloadEvent(TTSClipDownloadEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipDownloadEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipDownloadEvent(TTSClipDownloadEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
