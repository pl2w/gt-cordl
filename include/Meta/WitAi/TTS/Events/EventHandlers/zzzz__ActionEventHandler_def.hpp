#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/EventHandlers/ActionEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventTrigger_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActionEventHandler)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::TTS::Data {
class TTSActionEvent;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events::EventHandlers {
class ActionEventHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*, "Meta.WitAi.TTS.Events.EventHandlers", "ActionEventHandler");
// Dependencies Meta.WitAi.TTS.Integrations.TTSEventTrigger`2<TEvent, TData>
namespace Meta::WitAi::TTS::Events::EventHandlers {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.EventHandlers.ActionEventHandler
class CORDL_TYPE ActionEventHandler : public ::Meta::WitAi::TTS::Integrations::TTSEventTrigger_2<::Meta::WitAi::TTS::Data::TTSActionEvent*,::StringW> {
public:
// Declarations
 __declspec(property(get=get_OnEvent)) ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*  OnEvent;

/// @brief Field onEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEvent, put=__cordl_internal_set_onEvent)) ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*  onEvent;

static inline ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler* New_ctor() ;

/// @brief Method OnEventTriggered, addr 0x9e66528, size 0x74, virtual true, abstract: false, final false
inline void OnEventTriggered(::Meta::WitAi::TTS::Data::TTSActionEvent*  queuedEvent) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_onEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_onEvent() ;

constexpr void __cordl_internal_set_onEvent(::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

/// @brief Method .ctor, addr 0x9e6664c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnEvent, addr 0x9e66520, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>* get_OnEvent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionEventHandler(ActionEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionEventHandler(ActionEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29181};

/// [SerializeField]
/// @brief Field onEvent, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*  ___onEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler, ___onEvent) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events::EventHandlers
