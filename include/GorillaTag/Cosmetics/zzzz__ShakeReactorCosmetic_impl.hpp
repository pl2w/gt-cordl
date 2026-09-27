#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ShakeReactorCosmetic.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ShakeReactorCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5d9fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5da01e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::Update)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5da031c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.EnqueueHalfCycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(float_t)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::EnqueueHalfCycle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5da0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"EnqueueHalfCycle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.GetAverageHalfCycleDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::GetAverageHalfCycleDuration)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5da0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"GetAverageHalfCycleDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.ApplyStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(float_t)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::ApplyStrength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5da0eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"ApplyStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.OnShake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::OnShake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5da0f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnShake", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5da1098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ShakeReactorCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ShakeReactorCosmetic::*)()>(&::GorillaTag::Cosmetics::ShakeReactorCosmetic::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5da109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker>& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_speedTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTracker;
}
constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker> const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_speedTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTracker;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_speedTracker(::UnityW<::GlobalNamespace::SimpleSpeedTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedTracker = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_shakeRateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeRateThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_shakeRateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeRateThreshold;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_shakeRateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeRateThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_shakeAmplitudeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeAmplitudeThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_shakeAmplitudeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeAmplitudeThreshold;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_shakeAmplitudeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeAmplitudeThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_angleToleranceDeg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleToleranceDeg;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_angleToleranceDeg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleToleranceDeg;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_angleToleranceDeg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleToleranceDeg = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_minSpeedForReversal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeedForReversal;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_minSpeedForReversal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeedForReversal;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_minSpeedForReversal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeedForReversal = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_startCooldownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCooldownSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_startCooldownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCooldownSeconds;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_startCooldownSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startCooldownSeconds = value;
}
constexpr bool& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_useMaxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMaxes;
}
constexpr bool const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_useMaxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMaxes;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_useMaxes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMaxes = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_maxShakeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShakeRate;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_maxShakeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShakeRate;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_maxShakeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxShakeRate = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_maxShakeAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShakeAmplitude;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_maxShakeAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShakeAmplitude;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_maxShakeAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxShakeAmplitude = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_softMaxMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softMaxMultiplier;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_softMaxMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softMaxMultiplier;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_softMaxMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___softMaxMultiplier = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeStartLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeStartLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeStartLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeStartLocal;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_ShakeStartLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShakeStartLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeStartShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeStartShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeStartShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeStartShared;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_ShakeStartShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShakeStartShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeEndLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeEndLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeEndLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeEndLocal;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_ShakeEndLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShakeEndLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeEndShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeEndShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_ShakeEndShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeEndShared;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_ShakeEndShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShakeEndShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_MaxShake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShake;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_MaxShake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShake;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_MaxShake(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxShake = value;
}
constexpr bool& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_isShaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isShaking;
}
constexpr bool const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_isShaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isShaking;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_isShaking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isShaking = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastAmplitudeMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAmplitudeMeters;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastAmplitudeMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAmplitudeMeters;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_lastAmplitudeMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAmplitudeMeters = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_debugCurrentHalfCycleDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentHalfCycleDistance;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_debugCurrentHalfCycleDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentHalfCycleDistance;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_debugCurrentHalfCycleDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCurrentHalfCycleDistance = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_debugCurrentRateHz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentRateHz;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_debugCurrentRateHz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentRateHz;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_debugCurrentRateHz(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCurrentRateHz = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_recentHalfCycleDurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentHalfCycleDurations;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_recentHalfCycleDurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentHalfCycleDurations;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_recentHalfCycleDurations(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recentHalfCycleDurations = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastVelocityDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocityDir;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastVelocityDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVelocityDir;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_lastVelocityDir(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVelocityDir = value;
}
constexpr bool& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_hasLastDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastDir;
}
constexpr bool const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_hasLastDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastDir;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_hasLastDir(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLastDir = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastReversalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReversalTime;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastReversalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReversalTime;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_lastReversalTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReversalTime = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_pathSinceLastReversal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSinceLastReversal;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_pathSinceLastReversal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSinceLastReversal;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_pathSinceLastReversal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathSinceLastReversal = value;
}
constexpr float_t& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_nextAllowedShakeStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAllowedShakeStartTime;
}
constexpr float_t const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_nextAllowedShakeStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAllowedShakeStartTime;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_nextAllowedShakeStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextAllowedShakeStartTime = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribed;
}
constexpr bool const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get_subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribed;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set_subscribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribed = value;
}
constexpr bool& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ShakeReactorCosmetic::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::EnqueueHalfCycle(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"EnqueueHalfCycle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline float_t GorillaTag::Cosmetics::ShakeReactorCosmetic::GetAverageHalfCycleDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"GetAverageHalfCycleDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::ApplyStrength(float_t  strength01)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"ApplyStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength01);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::OnShake(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnShake", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline bool GorillaTag::Cosmetics::ShakeReactorCosmetic::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::ShakeReactorCosmetic::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ShakeReactorCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ShakeReactorCosmetic* GorillaTag::Cosmetics::ShakeReactorCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ShakeReactorCosmetic*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::ShakeReactorCosmetic::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::ShakeReactorCosmetic::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ShakeReactorCosmetic::ShakeReactorCosmetic()   {
}
