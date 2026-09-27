#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/SimulatedAudioPlayer.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioPlayer_impl.hpp"
#include "Meta/Voice/Audio/zzzz__SimulatedAudioPlayer_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::get_IsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.get_CanSetElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::get_CanSetElapsedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e6cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6cde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e6cdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.GetPlaybackErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::GetPlaybackErrors)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e6cdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)(int32_t)>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Play)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9e6ce08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Pause)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6d0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Resume)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e6d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Stop)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e6d104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e6d138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.GetSamplesFromSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::SimulatedAudioPlayer::*)(float_t)>(&::Meta::Voice::Audio::SimulatedAudioPlayer::GetSamplesFromSeconds)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9e6cc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"GetSamplesFromSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer.GetSecondsFromSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::SimulatedAudioPlayer::*)(int32_t)>(&::Meta::Voice::Audio::SimulatedAudioPlayer::GetSecondsFromSamples)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e6cf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"GetSecondsFromSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::SimulatedAudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::SimulatedAudioPlayer::*)()>(&::Meta::Voice::Audio::SimulatedAudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e6d290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__elapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime;
}
constexpr float_t const& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__elapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime;
}
constexpr void Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_set__elapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedTime = value;
}
constexpr bool& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr bool const& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_set__playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playing = value;
}
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Audio::SimulatedAudioPlayer::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
inline bool Meta::Voice::Audio::SimulatedAudioPlayer::get_IsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::SimulatedAudioPlayer::get_CanSetElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::SimulatedAudioPlayer::get_ElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Audio::SimulatedAudioPlayer::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Audio::SimulatedAudioPlayer::GetPlaybackErrors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Play(int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offsetSamples);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Pause()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Resume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::SimulatedAudioPlayer::GetSamplesFromSeconds(float_t  elapsedSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"GetSamplesFromSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elapsedSeconds);
}
inline float_t Meta::Voice::Audio::SimulatedAudioPlayer::GetSecondsFromSamples(int32_t  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {"GetSecondsFromSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, samples);
}
inline void Meta::Voice::Audio::SimulatedAudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::SimulatedAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::SimulatedAudioPlayer* Meta::Voice::Audio::SimulatedAudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::SimulatedAudioPlayer*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::SimulatedAudioPlayer::SimulatedAudioPlayer()   {
}
