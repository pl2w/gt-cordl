#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/INativeAudioPlayer.hpp"
#include "Liv/NativeAudioBridge/zzzz__INativeAudioPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::NativeAudioBridge::INativeAudioPlayer.PreloadAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::INativeAudioPlayer::*)(::UnityEngine::AudioClip*, float_t, bool)>(&::Liv::NativeAudioBridge::INativeAudioPlayer::PreloadAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(),
                    {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::INativeAudioPlayer.PlayAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::INativeAudioPlayer::*)(::UnityEngine::AudioClip*, float_t)>(&::Liv::NativeAudioBridge::INativeAudioPlayer::PlayAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(),
                    {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::INativeAudioPlayer.StopAllAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::INativeAudioPlayer::*)()>(&::Liv::NativeAudioBridge::INativeAudioPlayer::StopAllAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(),
                    {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Liv::NativeAudioBridge::INativeAudioPlayer::PreloadAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, volume, forceReload);
}
inline void Liv::NativeAudioBridge::INativeAudioPlayer::PlayAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, volume);
}
inline void Liv::NativeAudioBridge::INativeAudioPlayer::StopAllAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::NativeAudioBridge::INativeAudioPlayer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::NativeAudioBridge::INativeAudioPlayer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
