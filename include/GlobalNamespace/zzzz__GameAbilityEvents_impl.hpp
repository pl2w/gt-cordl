#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAbilityEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameAbilityEvents_def.hpp"
#include "GlobalNamespace/zzzz__GameAbilityEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvents.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvents::*)()>(&::GlobalNamespace::GameAbilityEvents::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5866cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvents.OnAbilityStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvents::*)(float_t, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::GameAbilityEvents::OnAbilityStart)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5866d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"OnAbilityStart", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvents.OnAbilityStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvents::*)(float_t, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::GameAbilityEvents::OnAbilityStop)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5866e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"OnAbilityStop", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvents.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvents::*)(float_t, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::GameAbilityEvents::TryPlay)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5866eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"TryPlay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvents::*)()>(&::GlobalNamespace::GameAbilityEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5867028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameAbilityEvent*& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_startEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEvent;
}
constexpr ::GlobalNamespace::GameAbilityEvent* const& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_startEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEvent;
}
constexpr void GlobalNamespace::GameAbilityEvents::__cordl_internal_set_startEvent(::GlobalNamespace::GameAbilityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startEvent = value;
}
constexpr ::GlobalNamespace::GameAbilityEvent*& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_stopEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopEvent;
}
constexpr ::GlobalNamespace::GameAbilityEvent* const& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_stopEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopEvent;
}
constexpr void GlobalNamespace::GameAbilityEvents::__cordl_internal_set_stopEvent(::GlobalNamespace::GameAbilityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>* const& GlobalNamespace::GameAbilityEvents::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GlobalNamespace::GameAbilityEvents::__cordl_internal_set_events(::System::Collections::Generic::List_1<::GlobalNamespace::GameAbilityEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
inline void GlobalNamespace::GameAbilityEvents::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAbilityEvents::OnAbilityStart(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"OnAbilityStart", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, abilityTime, audioSource);
}
inline void GlobalNamespace::GameAbilityEvents::OnAbilityStop(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"OnAbilityStop", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, abilityTime, audioSource);
}
inline void GlobalNamespace::GameAbilityEvents::TryPlay(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {"TryPlay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, abilityTime, audioSource);
}
inline void GlobalNamespace::GameAbilityEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameAbilityEvents* GlobalNamespace::GameAbilityEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAbilityEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAbilityEvents::GameAbilityEvents()   {
}
