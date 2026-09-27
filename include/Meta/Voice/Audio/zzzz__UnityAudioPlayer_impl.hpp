#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/UnityAudioPlayer.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioPlayer_impl.hpp"
#include "Meta/Voice/Audio/zzzz__UnityAudioPlayer_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioSourceProvider_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.get_AudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::get_AudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"get_AudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.get_CloneAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::get_CloneAudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6d3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"get_CloneAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::get_IsPlaying)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e6d3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.get_CanSetElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::get_CanSetElapsedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e6d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e6d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::Init)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9e6d588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.GetPlaybackErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::GetPlaybackErrors)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e6d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)(int32_t)>(&::Meta::Voice::Audio::UnityAudioPlayer::Play)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9e6d9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.OnSetRawPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)(int32_t)>(&::Meta::Voice::Audio::UnityAudioPlayer::OnSetRawPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"OnSetRawPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.OnReadRawSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)(::ArrayW<float_t>)>(&::Meta::Voice::Audio::UnityAudioPlayer::OnReadRawSamples)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e6dcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"OnReadRawSamples", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::Pause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e6ddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::Resume)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e6de04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::Stop)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e6de40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::UnityAudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::UnityAudioPlayer::*)()>(&::Meta::Voice::Audio::UnityAudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6df48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr bool& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__cloneAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloneAudioSource;
}
constexpr bool const& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__cloneAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloneAudioSource;
}
constexpr void Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_set__cloneAudioSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cloneAudioSource = value;
}
constexpr bool& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr bool const& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr void Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_set__local(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____local = value;
}
constexpr int32_t& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr int32_t const& Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void Meta::Voice::Audio::UnityAudioPlayer::__cordl_internal_set__offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
inline ::UnityW<::UnityEngine::AudioSource> Meta::Voice::Audio::UnityAudioPlayer::get_AudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"get_AudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::UnityAudioPlayer::get_CloneAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"get_CloneAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::UnityAudioPlayer::get_IsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::UnityAudioPlayer::get_CanSetElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::UnityAudioPlayer::get_ElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Audio::UnityAudioPlayer::GetPlaybackErrors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Play(int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offsetSamples);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::OnSetRawPosition(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"OnSetRawPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::OnReadRawSamples(::ArrayW<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {"OnReadRawSamples", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Pause()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Resume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::UnityAudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::UnityAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::UnityAudioPlayer* Meta::Voice::Audio::UnityAudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::UnityAudioPlayer*>());
}
/// @brief Convert operator to "::Meta::Voice::Audio::IAudioSourceProvider"
constexpr  Meta::Voice::Audio::UnityAudioPlayer::operator ::Meta::Voice::Audio::IAudioSourceProvider*() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioSourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::IAudioSourceProvider"
constexpr ::Meta::Voice::Audio::IAudioSourceProvider* Meta::Voice::Audio::UnityAudioPlayer::i___Meta__Voice__Audio__IAudioSourceProvider() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioSourceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::UnityAudioPlayer::UnityAudioPlayer()   {
}
