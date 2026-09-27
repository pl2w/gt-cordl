#pragma once
// IWYU pragma private; include "GlobalNamespace/MarkOneMitts.hpp"
#include "GlobalNamespace/zzzz__HandTapBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ForceOverLifetimeModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_impl.hpp"
#include "GlobalNamespace/zzzz__MarkOneMitts_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectContext_def.hpp"
#include "GlobalNamespace/zzzz__IProximityEffectReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__MarkOneMitts_def.hpp"
#include "GlobalNamespace/zzzz__ProximityEffect_def.hpp"
#include "GlobalNamespace/zzzz__ThermalSourceVolume_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57f0a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57f0bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57f0c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.OnProximityCalculated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(float_t, float_t, float_t)>(&::GlobalNamespace::MarkOneMitts::OnProximityCalculated)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x57f0cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnProximityCalculated", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.StartFlame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(::GlobalNamespace::MarkOneMitts_Mitt*, float_t, float_t, ::GlobalNamespace::ParticleSystem_MinMaxCurve)>(&::GlobalNamespace::MarkOneMitts::StartFlame)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x57f1064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"StartFlame", {}, {::i2c::type_of<::GlobalNamespace::MarkOneMitts_Mitt*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxCurve>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.RunTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(::GlobalNamespace::MarkOneMitts_Mitt*, bool)>(&::GlobalNamespace::MarkOneMitts::RunTimer)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x57f124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"RunTimer", {}, {::i2c::type_of<::GlobalNamespace::MarkOneMitts_Mitt*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.TryPlayProximityStartStopAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::MarkOneMitts::TryPlayProximityStartStopAudio)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57f1454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"TryPlayProximityStartStopAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.SetInterferenceAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(bool)>(&::GlobalNamespace::MarkOneMitts::SetInterferenceAudio)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57f11b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"SetInterferenceAudio", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f14d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(bool)>(&::GlobalNamespace::MarkOneMitts::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::Tick)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57f14e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts.OnTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)(::GlobalNamespace::HandEffectContext*)>(&::GlobalNamespace::MarkOneMitts::OnTap)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x57f15a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                    {::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts::*)()>(&::GlobalNamespace::MarkOneMitts::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57f184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MarkOneMitts_Mitt*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_leftMitt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMitt;
}
constexpr ::GlobalNamespace::MarkOneMitts_Mitt* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_leftMitt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMitt;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_leftMitt(::GlobalNamespace::MarkOneMitts_Mitt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftMitt = value;
}
constexpr ::GlobalNamespace::MarkOneMitts_Mitt*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_rightMitt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMitt;
}
constexpr ::GlobalNamespace::MarkOneMitts_Mitt* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_rightMitt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMitt;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_rightMitt(::GlobalNamespace::MarkOneMitts_Mitt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightMitt = value;
}
constexpr ::UnityW<::GlobalNamespace::ProximityEffect>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityEffect;
}
constexpr ::UnityW<::GlobalNamespace::ProximityEffect> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityEffect;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityEffect(::UnityW<::GlobalNamespace::ProximityEffect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityEffect = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_handSpeedToEffectStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToEffectStrength;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_handSpeedToEffectStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handSpeedToEffectStrength;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_handSpeedToEffectStrength(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handSpeedToEffectStrength = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_minEffectStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEffectStrength;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_minEffectStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEffectStrength;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_minEffectStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minEffectStrength = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameScale;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameScale;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_flameScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameScale = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameTime;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameTime;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_flameTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameTime = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameSpeed;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_flameSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameSpeed;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_flameSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameSpeed = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_heatMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heatMultiplier;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_heatMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heatMultiplier;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_heatMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heatMultiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximitySpeedCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximitySpeedCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximitySpeedCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximitySpeedCurve;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximitySpeedCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximitySpeedCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximitySpreadCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximitySpreadCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximitySpreadCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximitySpreadCurve;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximitySpreadCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximitySpreadCurve = value;
}
constexpr bool& GlobalNamespace::MarkOneMitts::__cordl_internal_get_vibrateController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrateController;
}
constexpr bool const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_vibrateController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrateController;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_vibrateController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrateController = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_vibrationStrengthMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationStrengthMult;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_vibrationStrengthMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationStrengthMult;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_vibrationStrengthMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationStrengthMult = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioSource;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityAudioSource = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioPitch;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioPitch;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityAudioPitch(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityAudioPitch = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioVolume;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioVolume;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityAudioVolume(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityAudioVolume = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioReactionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioReactionSpeed;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityAudioReactionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityAudioReactionSpeed;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityAudioReactionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityAudioReactionSpeed = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartStopAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartStopAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartStopAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartStopAudioSource;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityStartStopAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityStartStopAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartAudioClip;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityStartAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityStartAudioClip = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartAudioVolume;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStartAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStartAudioVolume;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityStartAudioVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityStartAudioVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStopAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStopAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStopAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStopAudioClip;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityStopAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityStopAudioClip = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStopAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStopAudioVolume;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_proximityStopAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityStopAudioVolume;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_proximityStopAudioVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityStopAudioVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::MarkOneMitts::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& GlobalNamespace::MarkOneMitts::__cordl_internal_get_emptyParticleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyParticleCurve;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& GlobalNamespace::MarkOneMitts::__cordl_internal_get_emptyParticleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyParticleCurve;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set_emptyParticleCurve(::GlobalNamespace::ParticleSystem_MinMaxCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyParticleCurve = value;
}
constexpr bool& GlobalNamespace::MarkOneMitts::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::MarkOneMitts::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::MarkOneMitts::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::MarkOneMitts::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts::OnProximityCalculated(float_t  distance, float_t  alignment, float_t  parallel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"OnProximityCalculated", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, alignment, parallel);
}
inline void GlobalNamespace::MarkOneMitts::StartFlame(::GlobalNamespace::MarkOneMitts_Mitt*  mitt, float_t  scale, float_t  speed, ::GlobalNamespace::ParticleSystem_MinMaxCurve  xy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"StartFlame", {}, {::i2c::type_of<::GlobalNamespace::MarkOneMitts_Mitt*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxCurve>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mitt, scale, speed, xy);
}
inline void GlobalNamespace::MarkOneMitts::RunTimer(::GlobalNamespace::MarkOneMitts_Mitt*  mitt, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"RunTimer", {}, {::i2c::type_of<::GlobalNamespace::MarkOneMitts_Mitt*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mitt, isLeftHand);
}
inline void GlobalNamespace::MarkOneMitts::TryPlayProximityStartStopAudio(::UnityEngine::AudioClip*  clip, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"TryPlayProximityStartStopAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, volume);
}
inline void GlobalNamespace::MarkOneMitts::SetInterferenceAudio(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"SetInterferenceAudio", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline bool GlobalNamespace::MarkOneMitts::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MarkOneMitts::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts::OnTap(::GlobalNamespace::HandEffectContext*  handContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handContext);
}
inline void GlobalNamespace::MarkOneMitts::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MarkOneMitts* GlobalNamespace::MarkOneMitts::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MarkOneMitts*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::MarkOneMitts::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::MarkOneMitts::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IProximityEffectReceiver"
constexpr  GlobalNamespace::MarkOneMitts::operator ::GlobalNamespace::IProximityEffectReceiver*() noexcept {
return static_cast<::GlobalNamespace::IProximityEffectReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IProximityEffectReceiver"
constexpr ::GlobalNamespace::IProximityEffectReceiver* GlobalNamespace::MarkOneMitts::i___GlobalNamespace__IProximityEffectReceiver() noexcept {
return static_cast<::GlobalNamespace::IProximityEffectReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MarkOneMitts::MarkOneMitts()   {
}
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts_Mitt.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts_Mitt::*)()>(&::GlobalNamespace::MarkOneMitts_Mitt::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x57f0ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts_Mitt*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MarkOneMitts_Mitt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MarkOneMitts_Mitt::*)()>(&::GlobalNamespace::MarkOneMitts_Mitt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts_Mitt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_burst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burst;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_burst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burst;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_burst(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___burst = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flame;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flame;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_flame(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flame = value;
}
constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_thermalSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalSource;
}
constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_thermalSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalSource;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_thermalSource(::UnityW<::GlobalNamespace::ThermalSourceVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thermalSource = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_lastTapStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTapStrength;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_lastTapStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTapStrength;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_lastTapStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTapStrength = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Burst>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_bursts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bursts;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Burst> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_bursts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bursts;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_bursts(::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bursts = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_burstTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_burstTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___burstTransform;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_burstTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___burstTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameTransform;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_flameTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameTransform = value;
}
constexpr float_t& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr float_t const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameMain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameMain;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameMain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameMain;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_flameMain(::GlobalNamespace::ParticleSystem_MainModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameMain = value;
}
constexpr ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameForce;
}
constexpr ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule const& GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_get_flameForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flameForce;
}
constexpr void GlobalNamespace::MarkOneMitts_Mitt::__cordl_internal_set_flameForce(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flameForce = value;
}
inline void GlobalNamespace::MarkOneMitts_Mitt::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts_Mitt*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MarkOneMitts_Mitt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MarkOneMitts_Mitt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MarkOneMitts_Mitt* GlobalNamespace::MarkOneMitts_Mitt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MarkOneMitts_Mitt*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MarkOneMitts_Mitt::MarkOneMitts_Mitt()   {
}
