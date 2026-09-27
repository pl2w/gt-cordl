#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/EventHandlers/ActionEventHandler.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventTrigger_2_impl.hpp"
#include "Meta/WitAi/TTS/Events/EventHandlers/zzzz__ActionEventHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSActionEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler.get_OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>* (::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::*)()>(&::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::get_OnEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e66520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(),
                        {"get_OnEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler.OnEventTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::*)(::Meta::WitAi::TTS::Data::TTSActionEvent*)>(&::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::OnEventTriggered)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e66528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::*)()>(&::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e6664c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::__cordl_internal_get_onEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::__cordl_internal_get_onEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEvent;
}
constexpr void Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::__cordl_internal_set_onEvent(::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEvent = value;
}
inline ::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::get_OnEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(),
                        {"get_OnEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::Meta::WitAi::Json::WitResponseNode*>*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::OnEventTriggered(::Meta::WitAi::TTS::Data::TTSActionEvent*  queuedEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queuedEvent);
}
inline void Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler* Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::EventHandlers::ActionEventHandler::ActionEventHandler()   {
}
