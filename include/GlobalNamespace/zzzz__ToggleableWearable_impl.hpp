#pragma once
// IWYU pragma private; include "GlobalNamespace/ToggleableWearable.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_impl.hpp"
#include "UnityEngine/zzzz__Animator_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ToggleableWearable_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToggleableWearable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ToggleableWearable::*)()>(&::GlobalNamespace::ToggleableWearable::Awake)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x56b1368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableWearable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ToggleableWearable::*)()>(&::GlobalNamespace::ToggleableWearable::LateUpdate)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x56b1634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableWearable.LocalToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ToggleableWearable::*)(bool, bool, bool)>(&::GlobalNamespace::ToggleableWearable::LocalToggle)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x56b19f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"LocalToggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableWearable.SharedSetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ToggleableWearable::*)(bool, bool)>(&::GlobalNamespace::ToggleableWearable::SharedSetState)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56b1bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"SharedSetState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToggleableWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ToggleableWearable::*)()>(&::GlobalNamespace::ToggleableWearable::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56b1cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_animators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Animator>> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_animators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animators;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_animators(::ArrayW<::UnityW<::UnityEngine::Animator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animators = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_animationTransitionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTransitionDuration;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_animationTransitionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTransitionDuration;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_animationTransitionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationTransitionDuration = value;
}
constexpr bool& GlobalNamespace::ToggleableWearable::__cordl_internal_get_startOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOn;
}
constexpr bool const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_startOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startOn;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_startOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startOn = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnSound;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_toggleOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOnSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleOffSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleOffSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffSound;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_toggleOffSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOffSound = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ToggleableWearable::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_triggerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_triggerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_triggerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerRadius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ToggleableWearable::__cordl_internal_get_triggerOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_triggerOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOffset;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_triggerOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOffset = value;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& GlobalNamespace::ToggleableWearable::__cordl_internal_get_assignedSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_assignedSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlot;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_assignedSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignedSlot = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOnVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnVibrationDuration;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOnVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnVibrationDuration;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_turnOnVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOnVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOnVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnVibrationStrength;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOnVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOnVibrationStrength;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_turnOnVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOnVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOffVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffVibrationDuration;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOffVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffVibrationDuration;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_turnOffVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOffVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOffVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffVibrationStrength;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_turnOffVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffVibrationStrength;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_turnOffVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOffVibrationStrength = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr bool& GlobalNamespace::ToggleableWearable::__cordl_internal_get_ownerIsLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerIsLocal;
}
constexpr bool const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_ownerIsLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerIsLocal;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_ownerIsLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerIsLocal = value;
}
constexpr bool& GlobalNamespace::ToggleableWearable::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleCooldownRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleCooldownRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleCooldownRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleCooldownRange;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_toggleCooldownRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleCooldownRange = value;
}
constexpr bool& GlobalNamespace::ToggleableWearable::__cordl_internal_get_hasAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAudioSource;
}
constexpr bool const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_hasAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAudioSource;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_hasAudioSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasAudioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::ToggleableWearable::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr int32_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_framesSinceCooldownAndExitingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSinceCooldownAndExitingVolume;
}
constexpr int32_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_framesSinceCooldownAndExitingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesSinceCooldownAndExitingVolume;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_framesSinceCooldownAndExitingVolume(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framesSinceCooldownAndExitingVolume = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleCooldownTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleCooldownTimer;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleCooldownTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleCooldownTimer;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_toggleCooldownTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleCooldownTimer = value;
}
constexpr int32_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_assignedSlotBitIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlotBitIndex;
}
constexpr int32_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_assignedSlotBitIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignedSlotBitIndex;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_assignedSlotBitIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignedSlotBitIndex = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr bool& GlobalNamespace::ToggleableWearable::__cordl_internal_get_oneShot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneShot;
}
constexpr bool const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_oneShot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneShot;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_oneShot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneShot = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_resetTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTimer;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_resetTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetTimer;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_resetTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetTimer = value;
}
constexpr float_t& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleTimer;
}
constexpr float_t const& GlobalNamespace::ToggleableWearable::__cordl_internal_get_toggleTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleTimer;
}
constexpr void GlobalNamespace::ToggleableWearable::__cordl_internal_set_toggleTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleTimer = value;
}
inline void GlobalNamespace::ToggleableWearable::setStaticF_animParam_Progress(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "animParam_Progress", ::GlobalNamespace::ToggleableWearable*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ToggleableWearable::getStaticF_animParam_Progress()  {
return ::cordl_internals::getStaticField<int32_t, "animParam_Progress", ::GlobalNamespace::ToggleableWearable*>();
}
inline void GlobalNamespace::ToggleableWearable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ToggleableWearable::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ToggleableWearable::LocalToggle(bool  isLeftHand, bool  playAudio, bool  playHaptics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"LocalToggle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, playAudio, playHaptics);
}
inline void GlobalNamespace::ToggleableWearable::SharedSetState(bool  state, bool  playAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {"SharedSetState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, playAudio);
}
inline void GlobalNamespace::ToggleableWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ToggleableWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ToggleableWearable* GlobalNamespace::ToggleableWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ToggleableWearable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToggleableWearable::ToggleableWearable()   {
}
