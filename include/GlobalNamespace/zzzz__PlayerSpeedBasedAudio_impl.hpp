#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpeedBasedAudio.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpeedBasedAudio_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeedBasedAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeedBasedAudio::*)()>(&::GlobalNamespace::PlayerSpeedBasedAudio::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x564693c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeedBasedAudio.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeedBasedAudio::*)()>(&::GlobalNamespace::PlayerSpeedBasedAudio::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56469b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpeedBasedAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpeedBasedAudio::*)()>(&::GlobalNamespace::PlayerSpeedBasedAudio::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_minVolumeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolumeSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_minVolumeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolumeSpeed;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_minVolumeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolumeSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fullVolumeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullVolumeSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fullVolumeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullVolumeSpeed;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_fullVolumeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullVolumeSpeed = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_localPlayerVelocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerVelocityEstimator;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_localPlayerVelocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerVelocityEstimator;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_localPlayerVelocityEstimator(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerVelocityEstimator = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_baseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolume;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_baseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolume;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_baseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseVolume = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fadeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_fadeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_fadeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeRate = value;
}
constexpr float_t& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_currentFadeLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFadeLevel;
}
constexpr float_t const& GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_get_currentFadeLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFadeLevel;
}
constexpr void GlobalNamespace::PlayerSpeedBasedAudio::__cordl_internal_set_currentFadeLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFadeLevel = value;
}
inline void GlobalNamespace::PlayerSpeedBasedAudio::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeedBasedAudio::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpeedBasedAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSpeedBasedAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpeedBasedAudio* GlobalNamespace::PlayerSpeedBasedAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSpeedBasedAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpeedBasedAudio::PlayerSpeedBasedAudio()   {
}
