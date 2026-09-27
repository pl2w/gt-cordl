#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceVolume.hpp"
#include "GlobalNamespace/zzzz__ForceVolume_AudioState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ForceVolume_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ForceVolumeProperties_def.hpp"
#include "GlobalNamespace/zzzz__ForceVolume_AudioState_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a986ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a9870c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a98718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::SliceUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a98724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.TriggerFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ForceVolume::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Rigidbody*>, ::by_ref<::UnityEngine::Transform*>)>(&::GlobalNamespace::ForceVolume::TriggerFilter)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5a987f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ForceVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a98a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ForceVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a98b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ForceVolume::OnTriggerStay)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x5a98c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a99684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume.SetPropertiesFromPlaceholder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)(::GT_CustomMapSupportRuntime::ForceVolumeProperties, ::UnityEngine::AudioSource*, ::UnityEngine::Collider*)>(&::GlobalNamespace::ForceVolume::SetPropertiesFromPlaceholder)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5a997d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"SetPropertiesFromPlaceholder", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ForceVolumeProperties>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceVolume::*)()>(&::GlobalNamespace::ForceVolume::_ctor)> {
  constexpr static std::size_t size = 0x304c;
  constexpr static std::size_t addrs = 0x5a99948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ForceVolume::__cordl_internal_get_scaleWithSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr bool const& GlobalNamespace::ForceVolume::__cordl_internal_get_scaleWithSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_scaleWithSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleWithSize = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_accel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_accel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_accel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accel = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_maxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr bool& GlobalNamespace::ForceVolume::__cordl_internal_get_disableGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr bool const& GlobalNamespace::ForceVolume::__cordl_internal_get_disableGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_disableGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrip = value;
}
constexpr bool& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenLateralVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr bool const& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenLateralVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_dampenLateralVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenLateralVelocity = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenXVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenXVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_dampenXVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenXVelPerc = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenZVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVelPerc;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_dampenZVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVelPerc;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_dampenZVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenZVelPerc = value;
}
constexpr bool& GlobalNamespace::ForceVolume::__cordl_internal_get_applyPullToCenterAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr bool const& GlobalNamespace::ForceVolume::__cordl_internal_get_applyPullToCenterAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_applyPullToCenterAcceleration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyPullToCenterAcceleration = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_pullToCenterAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_pullToCenterAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_pullToCenterAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterAccel = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_pullToCenterMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_pullToCenterMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_pullToCenterMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::ForceVolume::__cordl_internal_get_pullTOCenterMinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr float_t const& GlobalNamespace::ForceVolume::__cordl_internal_get_pullTOCenterMinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_pullTOCenterMinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullTOCenterMinDistance = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::ForceVolume::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::ForceVolume::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ForceVolume::__cordl_internal_get_enterClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ForceVolume::__cordl_internal_get_enterClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterClip;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_enterClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ForceVolume::__cordl_internal_get_exitClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ForceVolume::__cordl_internal_get_exitClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ForceVolume::__cordl_internal_get_loopClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ForceVolume::__cordl_internal_get_loopClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ForceVolume::__cordl_internal_get_loopCresendoClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCresendoClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ForceVolume::__cordl_internal_get_loopCresendoClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCresendoClip;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_loopCresendoClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopCresendoClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ForceVolume::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ForceVolume::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ForceVolume::__cordl_internal_get_enterPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ForceVolume::__cordl_internal_get_enterPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_enterPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterPos = value;
}
constexpr ::GlobalNamespace::ForceVolume_AudioState& GlobalNamespace::ForceVolume::__cordl_internal_get_audioState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioState;
}
constexpr ::GlobalNamespace::ForceVolume_AudioState const& GlobalNamespace::ForceVolume::__cordl_internal_get_audioState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioState;
}
constexpr void GlobalNamespace::ForceVolume::__cordl_internal_set_audioState(::GlobalNamespace::ForceVolume_AudioState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioState = value;
}
inline void GlobalNamespace::ForceVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceVolume::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ForceVolume::TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, rb, xf);
}
inline void GlobalNamespace::ForceVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ForceVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ForceVolume::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ForceVolume::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceVolume::SetPropertiesFromPlaceholder(::GT_CustomMapSupportRuntime::ForceVolumeProperties  properties, ::UnityEngine::AudioSource*  volumeAudioSource, ::UnityEngine::Collider*  colliderVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {"SetPropertiesFromPlaceholder", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ForceVolumeProperties>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, volumeAudioSource, colliderVolume);
}
inline void GlobalNamespace::ForceVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ForceVolume* GlobalNamespace::ForceVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ForceVolume*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::ForceVolume::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::ForceVolume::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ForceVolume::ForceVolume()   {
}
