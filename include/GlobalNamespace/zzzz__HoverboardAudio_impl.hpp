#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HoverboardAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioAnimator_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoverboardAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardAudio::*)()>(&::GlobalNamespace::HoverboardAudio::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5955cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardAudio.PlayTurnSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardAudio::*)(float_t)>(&::GlobalNamespace::HoverboardAudio::PlayTurnSound)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5955d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"PlayTurnSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardAudio.UpdateAudioLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardAudio::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::HoverboardAudio::UpdateAudioLoop)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5955dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"UpdateAudioLoop", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardAudio.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardAudio::*)()>(&::GlobalNamespace::HoverboardAudio::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5955cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoverboardAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoverboardAudio::*)()>(&::GlobalNamespace::HoverboardAudio::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5955ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HoverboardAudio::__cordl_internal_get_hum1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hum1;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_hum1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hum1;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_hum1(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hum1 = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSounds;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSounds;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_turnSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSounds = value;
}
constexpr bool& GlobalNamespace::HoverboardAudio::__cordl_internal_get_didInitHum1BaseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitHum1BaseVolume;
}
constexpr bool const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_didInitHum1BaseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInitHum1BaseVolume;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_didInitHum1BaseVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didInitHum1BaseVolume = value;
}
constexpr float_t& GlobalNamespace::HoverboardAudio::__cordl_internal_get_hum1BaseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hum1BaseVolume;
}
constexpr float_t const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_hum1BaseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hum1BaseVolume;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_hum1BaseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hum1BaseVolume = value;
}
constexpr float_t& GlobalNamespace::HoverboardAudio::__cordl_internal_get_fadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeSpeed;
}
constexpr float_t const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_fadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeSpeed;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_fadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& GlobalNamespace::HoverboardAudio::__cordl_internal_get_windRushAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windRushAnimator;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_windRushAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windRushAnimator;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_windRushAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windRushAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& GlobalNamespace::HoverboardAudio::__cordl_internal_get_motorAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorAnimator;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_motorAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorAnimator;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_motorAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motorAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator>& GlobalNamespace::HoverboardAudio::__cordl_internal_get_grindAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindAnimator;
}
constexpr ::UnityW<::GlobalNamespace::AudioAnimator> const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_grindAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grindAnimator;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_grindAnimator(::UnityW<::GlobalNamespace::AudioAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grindAnimator = value;
}
constexpr float_t& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSoundCooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSoundCooldownDuration;
}
constexpr float_t const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSoundCooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSoundCooldownDuration;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_turnSoundCooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSoundCooldownDuration = value;
}
constexpr float_t& GlobalNamespace::HoverboardAudio::__cordl_internal_get_minAngleDeltaForTurnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngleDeltaForTurnSound;
}
constexpr float_t const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_minAngleDeltaForTurnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngleDeltaForTurnSound;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_minAngleDeltaForTurnSound(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAngleDeltaForTurnSound = value;
}
constexpr float_t& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSoundCooldownUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSoundCooldownUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::HoverboardAudio::__cordl_internal_get_turnSoundCooldownUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSoundCooldownUntilTimestamp;
}
constexpr void GlobalNamespace::HoverboardAudio::__cordl_internal_set_turnSoundCooldownUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSoundCooldownUntilTimestamp = value;
}
inline void GlobalNamespace::HoverboardAudio::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardAudio::PlayTurnSound(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"PlayTurnSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline void GlobalNamespace::HoverboardAudio::UpdateAudioLoop(float_t  speed, float_t  airspeed, float_t  strainLevel, float_t  grindLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"UpdateAudioLoop", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed, airspeed, strainLevel, grindLevel);
}
inline void GlobalNamespace::HoverboardAudio::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HoverboardAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoverboardAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoverboardAudio* GlobalNamespace::HoverboardAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoverboardAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoverboardAudio::HoverboardAudio()   {
}
