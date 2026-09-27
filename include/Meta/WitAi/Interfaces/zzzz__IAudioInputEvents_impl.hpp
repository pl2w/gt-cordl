#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioInputEvents.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioInputEvents.get_OnMicAudioLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::Interfaces::IAudioInputEvents::*)()>(&::Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicAudioLevelChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioInputEvents.get_OnMicStartedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Interfaces::IAudioInputEvents::*)()>(&::Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicStartedListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioInputEvents.get_OnMicStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Interfaces::IAudioInputEvents::*)()>(&::Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicStoppedListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicAudioLevelChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicStartedListening()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Interfaces::IAudioInputEvents::get_OnMicStoppedListening()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioInputEvents*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
