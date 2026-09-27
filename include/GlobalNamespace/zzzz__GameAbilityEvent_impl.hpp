#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAbilityEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameAbilityEvent_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvent.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvent::*)()>(&::GlobalNamespace::GameAbilityEvent::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5866bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvent.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvent::*)(float_t, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::GameAbilityEvent::TryPlay)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5866be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {"TryPlay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAbilityEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAbilityEvent::*)()>(&::GlobalNamespace::GameAbilityEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5866cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GlobalNamespace::GameAbilityEvent::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::GameAbilityEvent::__cordl_internal_set_sound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_triggerEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* const& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_triggerEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEvent;
}
constexpr void GlobalNamespace::GameAbilityEvent::__cordl_internal_set_triggerEvent(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEvent = value;
}
constexpr bool& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_played()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr bool const& GlobalNamespace::GameAbilityEvent::__cordl_internal_get_played() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___played;
}
constexpr void GlobalNamespace::GameAbilityEvent::__cordl_internal_set_played(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___played = value;
}
inline void GlobalNamespace::GameAbilityEvent::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAbilityEvent::TryPlay(float_t  abilityTime, ::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {"TryPlay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, abilityTime, audioSource);
}
inline void GlobalNamespace::GameAbilityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAbilityEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameAbilityEvent* GlobalNamespace::GameAbilityEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAbilityEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAbilityEvent::GameAbilityEvent()   {
}
