#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VelocityBasedAudioTriggerCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__VelocityBasedAudioTriggerCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaVelocityTracker_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::*)()>(&::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5da43e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::*)()>(&::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::Update)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5da44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::*)()>(&::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5da4798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_velocityTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_velocityTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracker;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityTracker = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClip = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_soundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_soundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBank = value;
}
constexpr float_t& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_minVelocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocityThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_minVelocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocityThreshold;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_minVelocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVelocityThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_maxVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr float_t const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_maxVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_maxVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVelocity = value;
}
constexpr float_t& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_minOutputVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minOutputVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_minOutputVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minOutputVolume;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_minOutputVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minOutputVolume = value;
}
constexpr float_t& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_maxOutputVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOutputVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_get_maxOutputVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxOutputVolume;
}
constexpr void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::__cordl_internal_set_maxOutputVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxOutputVolume = value;
}
inline void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic* GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic::VelocityBasedAudioTriggerCosmetic()   {
}
