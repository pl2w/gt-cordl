#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioSystem.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioSystem_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipSettings_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioSystem.set_ClipSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioSystem::*)(::Meta::Voice::Audio::AudioClipSettings)>(&::Meta::Voice::Audio::IAudioSystem::set_ClipSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioSystem.PreloadClipStreams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioSystem::*)(int32_t)>(&::Meta::Voice::Audio::IAudioSystem::PreloadClipStreams)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioSystem.GetAudioClipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (::Meta::Voice::Audio::IAudioSystem::*)()>(&::Meta::Voice::Audio::IAudioSystem::GetAudioClipStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioSystem.GetAudioPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioPlayer* (::Meta::Voice::Audio::IAudioSystem::*)(::UnityEngine::GameObject*)>(&::Meta::Voice::Audio::IAudioSystem::GetAudioPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::IAudioSystem::set_ClipSettings(::Meta::Voice::Audio::AudioClipSettings  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::IAudioSystem::PreloadClipStreams(int32_t  total)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, total);
}
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::Voice::Audio::IAudioSystem::GetAudioClipStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::IAudioPlayer* Meta::Voice::Audio::IAudioSystem::GetAudioPlayer(::UnityEngine::GameObject*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioSystem*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioPlayer*>(this, ___internal_method, root);
}
