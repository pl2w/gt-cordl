#pragma once
// IWYU pragma private; include "GlobalNamespace/HorseStickNoiseMaker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HorseStickNoiseMaker_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HorseStickNoiseMaker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HorseStickNoiseMaker::*)()>(&::GlobalNamespace::HorseStickNoiseMaker::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5e084f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HorseStickNoiseMaker.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HorseStickNoiseMaker::*)()>(&::GlobalNamespace::HorseStickNoiseMaker::LateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e08774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HorseStickNoiseMaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HorseStickNoiseMaker::*)()>(&::GlobalNamespace::HorseStickNoiseMaker::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e088fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_metersPerClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metersPerClip;
}
constexpr float_t const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_metersPerClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metersPerClip;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_metersPerClip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metersPerClip = value;
}
constexpr float_t& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_minSecBetweenClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSecBetweenClips;
}
constexpr float_t const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_minSecBetweenClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSecBetweenClips;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_minSecBetweenClips(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSecBetweenClips = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_gorillaPlayerXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPlayerXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_gorillaPlayerXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPlayerXform;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_gorillaPlayerXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaPlayerXform = value;
}
constexpr ::StringW& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_gorillaPlayerXform_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPlayerXform_path;
}
constexpr ::StringW const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_gorillaPlayerXform_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPlayerXform_path;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_gorillaPlayerXform_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaPlayerXform_path = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_particleFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_particleFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFX = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_oldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_oldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldPos;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_oldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldPos = value;
}
constexpr float_t& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_timeSincePlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSincePlay;
}
constexpr float_t const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_timeSincePlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSincePlay;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_timeSincePlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSincePlay = value;
}
constexpr float_t& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_distElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distElapsed;
}
constexpr float_t const& GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_get_distElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distElapsed;
}
constexpr void GlobalNamespace::HorseStickNoiseMaker::__cordl_internal_set_distElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distElapsed = value;
}
inline void GlobalNamespace::HorseStickNoiseMaker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HorseStickNoiseMaker::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HorseStickNoiseMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HorseStickNoiseMaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HorseStickNoiseMaker* GlobalNamespace::HorseStickNoiseMaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HorseStickNoiseMaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HorseStickNoiseMaker::HorseStickNoiseMaker()   {
}
