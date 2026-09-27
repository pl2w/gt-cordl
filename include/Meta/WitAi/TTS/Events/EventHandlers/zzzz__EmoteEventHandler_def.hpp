#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/EventHandlers/EmoteEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventTrigger_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EmoteEventHandler)
namespace Meta::WitAi::TTS::Data {
class TTSEmoteEvent;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events::EventHandlers {
class EmoteEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*, "Meta.WitAi.TTS.Events.EventHandlers", "EmoteEventHandler");
// Dependencies Meta.WitAi.TTS.Integrations.TTSEventTrigger`2<TEvent, TData>
namespace Meta::WitAi::TTS::Events::EventHandlers {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.EventHandlers.EmoteEventHandler
class CORDL_TYPE EmoteEventHandler : public ::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<::Meta::WitAi::TTS::Data::TTSEmoteEvent*,::StringW> {
public:
// Declarations
 __declspec(property(get=get_OnEmoteStart)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnEmoteStart;

 __declspec(property(get=get_OnEmoteStop)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnEmoteStop;

/// @brief Field _lastEmote, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastEmote, put=__cordl_internal_set__lastEmote)) ::Meta::WitAi::TTS::Data::TTSEmoteEvent*  _lastEmote;

/// @brief Field onEmoteStart, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEmoteStart, put=__cordl_internal_set_onEmoteStart)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  onEmoteStart;

/// @brief Field onEmoteStop, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEmoteStop, put=__cordl_internal_set_onEmoteStop)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  onEmoteStop;

static inline ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler* New_ctor() ;

/// @brief Method OnEventTriggered, addr 0x9e666f8, size 0xb0, virtual true, abstract: false, final false
inline void OnEventTriggered(::Meta::WitAi::TTS::Data::TTSEmoteEvent*  queuedEvent) ;

constexpr ::Meta::WitAi::TTS::Data::TTSEmoteEvent* const& __cordl_internal_get__lastEmote() const;

constexpr ::Meta::WitAi::TTS::Data::TTSEmoteEvent*& __cordl_internal_get__lastEmote() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_onEmoteStart() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_onEmoteStart() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_onEmoteStop() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_onEmoteStop() ;

constexpr void __cordl_internal_set__lastEmote(::Meta::WitAi::TTS::Data::TTSEmoteEvent*  value) ;

constexpr void __cordl_internal_set_onEmoteStart(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onEmoteStop(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e667a8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnEmoteStart, addr 0x9e666e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* get_OnEmoteStart() ;

/// @brief Method get_OnEmoteStop, addr 0x9e666f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* get_OnEmoteStop() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmoteEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmoteEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmoteEventHandler(EmoteEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmoteEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmoteEventHandler(EmoteEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29182};

/// [SerializeField]
/// @brief Field onEmoteStart, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___onEmoteStart;

/// [SerializeField]
/// @brief Field onEmoteStop, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___onEmoteStop;

/// @brief Field _lastEmote, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSEmoteEvent*  ____lastEmote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler, ___onEmoteStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler, ___onEmoteStop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler, ____lastEmote) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler) == 0x60, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events::EventHandlers
