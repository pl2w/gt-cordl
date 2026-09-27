#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBug.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_AudioState_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_BugName_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeacon_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_AudioState_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_BugName_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b30ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(bool)>(&::GlobalNamespace::ThrowableBug::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b31000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::Start)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b31008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::OnEnable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b31110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::OnDisable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b31890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*)>(&::GlobalNamespace::ThrowableBug::isValid)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b31dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"isValid", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ThrowableBugBeacon_OnCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*)>(&::GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnCall)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b31f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnCall", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ThrowableBugBeacon_OnLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*)>(&::GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnLock)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b31fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnLock", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ThrowableBugBeacon_OnDismiss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*)>(&::GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnDismiss)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b32060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnDismiss", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ThrowableBugBeacon_OnUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*)>(&::GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnUnlock)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b320f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnUnlock", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ThrowableBugBeacon_OnChangeSpeedMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::ThrowableBugBeacon*, float_t)>(&::GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnChangeSpeedMultiplier)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b32114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnChangeSpeedMultiplier", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3213c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::LateUpdateShared)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x5b32144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x1274;
  constexpr static std::size_t addrs = 0x5b3250c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.RandomizeBobingFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::RandomizeBobingFrequency)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b33780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"RandomizeBobingFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBug::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ThrowableBug::OnRelease)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5b33794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::ThrowableBug::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b339f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::Tick)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b33a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBug._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBug::*)()>(&::GlobalNamespace::ThrowableBug::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b33a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ThrowableBugReliableState>& GlobalNamespace::ThrowableBug::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableBugReliableState> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_reliableState(::UnityW<::GlobalNamespace::ThrowableBugReliableState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_slowingDownProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowingDownProgress;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_slowingDownProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowingDownProgress;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_slowingDownProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowingDownProgress = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_startingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSpeed;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_startingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSpeed;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_startingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingSpeed = value;
}
constexpr int32_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_raycastFramePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastFramePeriod;
}
constexpr int32_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_raycastFramePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastFramePeriod;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_raycastFramePeriod(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastFramePeriod = value;
}
constexpr int32_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_raycastFrameCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastFrameCounter;
}
constexpr int32_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_raycastFrameCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastFrameCounter;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_raycastFrameCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastFrameCounter = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingSpeed;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingSpeed;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bobingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobingSpeed = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobMagnintude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobMagnintude;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobMagnintude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobMagnintude;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bobMagnintude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobMagnintude = value;
}
constexpr bool& GlobalNamespace::ThrowableBug::__cordl_internal_get_shouldRandomizeFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRandomizeFrequency;
}
constexpr bool const& GlobalNamespace::ThrowableBug::__cordl_internal_get_shouldRandomizeFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRandomizeFrequency;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_shouldRandomizeFrequency(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldRandomizeFrequency = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_minRandFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRandFrequency;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_minRandFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRandFrequency;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_minRandFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRandFrequency = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_maxRandFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRandFrequency;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_maxRandFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRandFrequency;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_maxRandFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRandFrequency = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingFrequency;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingFrequency;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bobingFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobingFrequency = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingState;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobingState;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bobingState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobingState = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_thrownYVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownYVelocity;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_thrownYVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownYVelocity;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_thrownYVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thrownYVelocity = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_collisionHitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionHitRadius;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_collisionHitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionHitRadius;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_collisionHitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionHitRadius = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ThrowableBug::__cordl_internal_get_collisionCheckMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCheckMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ThrowableBug::__cordl_internal_get_collisionCheckMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCheckMask;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_collisionCheckMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionCheckMask = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ThrowableBug::__cordl_internal_get_thrownVeloicity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownVeloicity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ThrowableBug::__cordl_internal_get_thrownVeloicity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownVeloicity;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_thrownVeloicity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thrownVeloicity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ThrowableBug::__cordl_internal_get_targetVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ThrowableBug::__cordl_internal_get_targetVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVelocity;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_targetVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVelocity = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ThrowableBug::__cordl_internal_get_bugRotationalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bugRotationalVelocity;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bugRotationalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bugRotationalVelocity;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bugRotationalVelocity(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bugRotationalVelocity = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::ThrowableBug::__cordl_internal_get_rayCastNonAllocColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_rayCastNonAllocColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_rayCastNonAllocColliders(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastNonAllocColliders = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::ThrowableBug::__cordl_internal_get_rayCastNonAllocColliders2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders2;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_rayCastNonAllocColliders2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastNonAllocColliders2;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_rayCastNonAllocColliders2(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastNonAllocColliders2 = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ThrowableBug::__cordl_internal_get_followingRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_followingRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followingRig;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_followingRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followingRig = value;
}
constexpr bool& GlobalNamespace::ThrowableBug::__cordl_internal_get_isTooHighTravelingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTooHighTravelingDown;
}
constexpr bool const& GlobalNamespace::ThrowableBug::__cordl_internal_get_isTooHighTravelingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTooHighTravelingDown;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_isTooHighTravelingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTooHighTravelingDown = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentSlerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentSlerp;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentSlerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentSlerp;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_descentSlerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descentSlerp = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentSlerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentSlerp;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentSlerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentSlerp;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_ascentSlerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascentSlerp = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_maxNaturalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNaturalSpeed;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_maxNaturalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNaturalSpeed;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_maxNaturalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNaturalSpeed = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_slowdownAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownAcceleration;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_slowdownAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownAcceleration;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_slowdownAcceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownAcceleration = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStartingDescent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumHeightOffOfTheGroundBeforeStartingDescent;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStartingDescent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumHeightOffOfTheGroundBeforeStartingDescent;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_maximumHeightOffOfTheGroundBeforeStartingDescent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumHeightOffOfTheGroundBeforeStartingDescent = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStoppingDescent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeightOffOfTheGroundBeforeStoppingDescent;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStoppingDescent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeightOffOfTheGroundBeforeStoppingDescent;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_minimumHeightOffOfTheGroundBeforeStoppingDescent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumHeightOffOfTheGroundBeforeStoppingDescent = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentRate;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentRate;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_descentRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descentRate = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentSlerpRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentSlerpRate;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_descentSlerpRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descentSlerpRate;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_descentSlerpRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descentSlerpRate = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStartingAscent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeightOffOfTheGroundBeforeStartingAscent;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStartingAscent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumHeightOffOfTheGroundBeforeStartingAscent;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_minimumHeightOffOfTheGroundBeforeStartingAscent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumHeightOffOfTheGroundBeforeStartingAscent = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStoppingAscent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumHeightOffOfTheGroundBeforeStoppingAscent;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStoppingAscent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumHeightOffOfTheGroundBeforeStoppingAscent;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_maximumHeightOffOfTheGroundBeforeStoppingAscent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumHeightOffOfTheGroundBeforeStoppingAscent = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentRate;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentRate;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_ascentRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascentRate = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentSlerpRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentSlerpRate;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_ascentSlerpRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascentSlerpRate;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_ascentSlerpRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascentSlerpRate = value;
}
constexpr bool& GlobalNamespace::ThrowableBug::__cordl_internal_get_isTooLowTravelingUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTooLowTravelingUp;
}
constexpr bool const& GlobalNamespace::ThrowableBug::__cordl_internal_get_isTooLowTravelingUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTooLowTravelingUp;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_isTooLowTravelingUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTooLowTravelingUp = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::ThrowableBug::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ThrowableBug::__cordl_internal_get_grabBugAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabBugAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_grabBugAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabBugAudioClip;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_grabBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabBugAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ThrowableBug::__cordl_internal_get_releaseBugAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseBugAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_releaseBugAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseBugAudioClip;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_releaseBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseBugAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::ThrowableBug::__cordl_internal_get_flyingBugAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingBugAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_flyingBugAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyingBugAudioClip;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_flyingBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flyingBugAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ThrowableBug::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ThrowableBug::__cordl_internal_get_startZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ThrowableBug::__cordl_internal_get_startZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startZone;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_startZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startZone = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::ThrowableBug::__cordl_internal_get_currentZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::ThrowableBug::__cordl_internal_get_currentZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZone;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_currentZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentZone = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobbingDefaultFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobbingDefaultFrequency;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bobbingDefaultFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bobbingDefaultFrequency;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bobbingDefaultFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bobbingDefaultFrequency = value;
}
constexpr int32_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_updateMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMultiplier;
}
constexpr int32_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_updateMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMultiplier;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_updateMultiplier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMultiplier = value;
}
constexpr ::GlobalNamespace::ThrowableBug_AudioState& GlobalNamespace::ThrowableBug::__cordl_internal_get_currentAudioState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAudioState;
}
constexpr ::GlobalNamespace::ThrowableBug_AudioState const& GlobalNamespace::ThrowableBug::__cordl_internal_get_currentAudioState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAudioState;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_currentAudioState(::GlobalNamespace::ThrowableBug_AudioState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAudioState = value;
}
constexpr float_t& GlobalNamespace::ThrowableBug::__cordl_internal_get_speedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedMultiplier;
}
constexpr float_t const& GlobalNamespace::ThrowableBug::__cordl_internal_get_speedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedMultiplier;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_speedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedMultiplier = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::ThrowableBug::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr bool& GlobalNamespace::ThrowableBug::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::ThrowableBug::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::ThrowableBug_BugName& GlobalNamespace::ThrowableBug::__cordl_internal_get_bugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bugName;
}
constexpr ::GlobalNamespace::ThrowableBug_BugName const& GlobalNamespace::ThrowableBug::__cordl_internal_get_bugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bugName;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_bugName(::GlobalNamespace::ThrowableBug_BugName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bugName = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ThrowableBug::__cordl_internal_get_lockedTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ThrowableBug::__cordl_internal_get_lockedTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedTarget;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_lockedTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedTarget = value;
}
constexpr bool& GlobalNamespace::ThrowableBug::__cordl_internal_get_locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr bool const& GlobalNamespace::ThrowableBug::__cordl_internal_get_locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr void GlobalNamespace::ThrowableBug::__cordl_internal_set_locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locked = value;
}
inline void GlobalNamespace::ThrowableBug::setStaticF__g_IsHeld(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_g_IsHeld", ::GlobalNamespace::ThrowableBug*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ThrowableBug::getStaticF__g_IsHeld()  {
return ::cordl_internals::getStaticField<int32_t, "_g_IsHeld", ::GlobalNamespace::ThrowableBug*>();
}
inline bool GlobalNamespace::ThrowableBug::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ThrowableBug::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ThrowableBug::isValid(::GlobalNamespace::ThrowableBugBeacon*  tbb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"isValid", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tbb);
}
inline void GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnCall(::GlobalNamespace::ThrowableBugBeacon*  tbb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnCall", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbb);
}
inline void GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnLock(::GlobalNamespace::ThrowableBugBeacon*  tbb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnLock", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbb);
}
inline void GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnDismiss(::GlobalNamespace::ThrowableBugBeacon*  tbb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnDismiss", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbb);
}
inline void GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnUnlock(::GlobalNamespace::ThrowableBugBeacon*  tbb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnUnlock", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbb);
}
inline void GlobalNamespace::ThrowableBug::ThrowableBugBeacon_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon*  tbb, float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"ThrowableBugBeacon_OnChangeSpeedMultiplier", {}, {::i2c::type_of<::GlobalNamespace::ThrowableBugBeacon*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tbb, f);
}
inline bool GlobalNamespace::ThrowableBug::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ThrowableBug::RandomizeBobingFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"RandomizeBobingFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ThrowableBug::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableBug*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::ThrowableBug::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::ThrowableBug::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBug::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBug*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThrowableBug* GlobalNamespace::ThrowableBug::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableBug*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::ThrowableBug::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::ThrowableBug::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBug::ThrowableBug()   {
}
