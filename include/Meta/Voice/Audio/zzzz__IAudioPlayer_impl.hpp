#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioPlayer.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioPlayer_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.get_ClipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::get_ClipStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::get_IsPlaying)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.get_CanSetElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::get_CanSetElapsedSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.GetPlaybackErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::GetPlaybackErrors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioPlayer::*)(::Meta::Voice::Audio::IAudioClipStream*, int32_t, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Audio::IAudioPlayer::Play)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::Pause)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::Resume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioPlayer::*)()>(&::Meta::Voice::Audio::IAudioPlayer::Stop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 9}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::Voice::Audio::IAudioPlayer::get_ClipStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::IAudioPlayer::get_IsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::IAudioPlayer::get_CanSetElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::IAudioPlayer::get_ElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioPlayer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Audio::IAudioPlayer::GetPlaybackErrors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioPlayer::Play(::Meta::Voice::Audio::IAudioClipStream*  clipStream, int32_t  offsetSamples, ::Meta::WitAi::Json::WitResponseNode*  speechNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipStream, offsetSamples, speechNode);
}
inline void Meta::Voice::Audio::IAudioPlayer::Pause()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioPlayer::Resume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioPlayer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioPlayer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
