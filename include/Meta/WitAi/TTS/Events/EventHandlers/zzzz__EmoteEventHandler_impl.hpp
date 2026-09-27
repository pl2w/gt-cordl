#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/EventHandlers/EmoteEventHandler.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventTrigger_2_impl.hpp"
#include "Meta/WitAi/TTS/Events/EventHandlers/zzzz__EmoteEventHandler_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEmoteEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler.get_OnEmoteStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::StringW>* (::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::*)()>(&::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::get_OnEmoteStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e666e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {"get_OnEmoteStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler.get_OnEmoteStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::StringW>* (::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::*)()>(&::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::get_OnEmoteStop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e666f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {"get_OnEmoteStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler.OnEventTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::*)(::Meta::WitAi::TTS::Data::TTSEmoteEvent*)>(&::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::OnEventTriggered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e666f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::*)()>(&::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e667a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get_onEmoteStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmoteStart;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get_onEmoteStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmoteStart;
}
constexpr void Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_set_onEmoteStart(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEmoteStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get_onEmoteStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmoteStop;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get_onEmoteStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEmoteStop;
}
constexpr void Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_set_onEmoteStop(::UnityEngine::Events::UnityEvent_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEmoteStop = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSEmoteEvent*& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get__lastEmote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEmote;
}
constexpr ::Meta::WitAi::TTS::Data::TTSEmoteEvent* const& Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_get__lastEmote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEmote;
}
constexpr void Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::__cordl_internal_set__lastEmote(::Meta::WitAi::TTS::Data::TTSEmoteEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastEmote = value;
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::get_OnEmoteStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {"get_OnEmoteStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent_1<::StringW>* Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::get_OnEmoteStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {"get_OnEmoteStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::OnEventTriggered(::Meta::WitAi::TTS::Data::TTSEmoteEvent*  queuedEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queuedEvent);
}
inline void Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler* Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Events::EventHandlers::EmoteEventHandler::EmoteEventHandler()   {
}
