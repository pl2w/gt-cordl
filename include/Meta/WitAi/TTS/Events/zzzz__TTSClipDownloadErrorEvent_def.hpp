#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSClipDownloadErrorEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSClipDownloadErrorEvent)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSClipDownloadErrorEvent;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*, "Meta.WitAi.TTS.Events", "TTSClipDownloadErrorEvent");
// Dependencies UnityEngine.Events.UnityEvent`3<T0, T1, T2>
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
class CORDL_TYPE TTSClipDownloadErrorEvent : public ::UnityEngine::Events::UnityEvent_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW> {
public:
// Declarations
static inline ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x9e65fe8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipDownloadErrorEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipDownloadErrorEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipDownloadErrorEvent(TTSClipDownloadErrorEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipDownloadErrorEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipDownloadErrorEvent(TTSClipDownloadErrorEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
