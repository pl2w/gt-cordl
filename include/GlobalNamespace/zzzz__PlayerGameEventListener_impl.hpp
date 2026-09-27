#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEventListener.hpp"
#include "GlobalNamespace/zzzz__PlayerGameEvents_EventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerGameEventListener_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)()>(&::GlobalNamespace::PlayerGameEventListener::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56263c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)()>(&::GlobalNamespace::PlayerGameEventListener::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5626768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.SubscribeToEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)()>(&::GlobalNamespace::PlayerGameEventListener::SubscribeToEvents)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x56263cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"SubscribeToEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.UnsubscribeFromEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)()>(&::GlobalNamespace::PlayerGameEventListener::UnsubscribeFromEvents)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x562676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"UnsubscribeFromEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.OnGameMoveEventTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)(float_t, float_t)>(&::GlobalNamespace::PlayerGameEventListener::OnGameMoveEventTriggered)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5627e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameMoveEventTriggered", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.OnGameEventTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)(::StringW)>(&::GlobalNamespace::PlayerGameEventListener::OnGameEventTriggered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5627ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameEventTriggered", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener.OnGameEventTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)(::StringW, int32_t)>(&::GlobalNamespace::PlayerGameEventListener::OnGameEventTriggered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5627ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameEventTriggered", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventListener::*)()>(&::GlobalNamespace::PlayerGameEventListener::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5627fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerGameEvents_EventType& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::GlobalNamespace::PlayerGameEvents_EventType const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set_eventType(::GlobalNamespace::PlayerGameEvents_EventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::StringW& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::StringW const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set_filter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter = value;
}
constexpr float_t& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_onGameEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGameEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_onGameEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGameEvent;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set_onGameEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGameEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_onGameEventCounted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGameEventCounted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get_onGameEventCounted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGameEventCounted;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set_onGameEventCounted(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGameEventCounted = value;
}
constexpr float_t& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get__cooldownEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownEnd;
}
constexpr float_t const& GlobalNamespace::PlayerGameEventListener::__cordl_internal_get__cooldownEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownEnd;
}
constexpr void GlobalNamespace::PlayerGameEventListener::__cordl_internal_set__cooldownEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldownEnd = value;
}
inline void GlobalNamespace::PlayerGameEventListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGameEventListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGameEventListener::SubscribeToEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"SubscribeToEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGameEventListener::UnsubscribeFromEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"UnsubscribeFromEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGameEventListener::OnGameMoveEventTriggered(float_t  distance, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameMoveEventTriggered", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, speed);
}
inline void GlobalNamespace::PlayerGameEventListener::OnGameEventTriggered(::StringW  eventName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameEventTriggered", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline void GlobalNamespace::PlayerGameEventListener::OnGameEventTriggered(::StringW  eventName, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {"OnGameEventTriggered", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, count);
}
inline void GlobalNamespace::PlayerGameEventListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerGameEventListener* GlobalNamespace::PlayerGameEventListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerGameEventListener*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGameEventListener::PlayerGameEventListener()   {
}
