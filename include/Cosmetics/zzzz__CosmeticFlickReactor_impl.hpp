#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticFlickReactor.hpp"
#include "Cosmetics/zzzz__CosmeticFlickReactor_AxisMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Cosmetics/zzzz__CosmeticFlickReactor_def.hpp"
#include "Cosmetics/zzzz__CosmeticFlickReactor_AxisMode_def.hpp"
#include "GlobalNamespace/zzzz__SimpleSpeedTracker_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::Reset)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d1ad1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::Awake)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5d1ae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d1b00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.ResolveAxisDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::ResolveAxisDirection)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5d1b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"ResolveAxisDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.GetSignedSpeedAlong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Cosmetics::CosmeticFlickReactor::*)(::UnityEngine::Vector3)>(&::Cosmetics::CosmeticFlickReactor::GetSignedSpeedAlong)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5d1b410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"GetSignedSpeedAlong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.FireEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)(float_t)>(&::Cosmetics::CosmeticFlickReactor::FireEvents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d1b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"FireEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::ResetState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d1aff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticFlickReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticFlickReactor::*)()>(&::Cosmetics::CosmeticFlickReactor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d1b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticFlickReactor_AxisMode& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_axisMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisMode;
}
constexpr ::GlobalNamespace::CosmeticFlickReactor_AxisMode const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_axisMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisMode;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_axisMode(::GlobalNamespace::CosmeticFlickReactor_AxisMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_axisReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisReference;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_axisReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisReference;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_axisReference(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisReference = value;
}
constexpr bool& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_useWorldAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldAxes;
}
constexpr bool const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_useWorldAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldAxes;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_useWorldAxes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWorldAxes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_worldSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpace;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_worldSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldSpace;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_worldSpace(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldSpace = value;
}
constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker>& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_speedTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTracker;
}
constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker> const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_speedTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTracker;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_speedTracker(::UnityW<::GlobalNamespace::SimpleSpeedTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedTracker = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_minSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeedThreshold;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_minSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minSpeedThreshold;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_minSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minSpeedThreshold = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_maxSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeedThreshold;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_maxSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeedThreshold;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_maxSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeedThreshold = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_directionChangeRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionChangeRequired;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_directionChangeRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionChangeRequired;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_directionChangeRequired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionChangeRequired = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_flickWindowSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flickWindowSeconds;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_flickWindowSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flickWindowSeconds;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_flickWindowSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flickWindowSeconds = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_retriggerBufferSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerBufferSeconds;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_retriggerBufferSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerBufferSeconds;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_retriggerBufferSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerBufferSeconds = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_OnFlickShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlickShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_OnFlickShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlickShared;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_OnFlickShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFlickShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_OnFlickLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlickLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_OnFlickLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFlickLocal;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_OnFlickLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFlickLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_onFlickStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFlickStrength;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_onFlickStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFlickStrength;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_onFlickStrength(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFlickStrength = value;
}
constexpr ::UnityEngine::Vector3& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr bool& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_hasLastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastPosition;
}
constexpr bool const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_hasLastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLastPosition;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_hasLastPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLastPosition = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakSpeed;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakSpeed;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_lastPeakSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPeakSpeed = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakTime;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakTime;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_lastPeakTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPeakTime = value;
}
constexpr int32_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakSign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakSign;
}
constexpr int32_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_lastPeakSign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPeakSign;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_lastPeakSign(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPeakSign = value;
}
constexpr float_t& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_blockUntilTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockUntilTime;
}
constexpr float_t const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_blockUntilTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockUntilTime;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_blockUntilTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockUntilTime = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr bool& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& Cosmetics::CosmeticFlickReactor::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void Cosmetics::CosmeticFlickReactor::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
inline void Cosmetics::CosmeticFlickReactor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticFlickReactor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticFlickReactor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Cosmetics::CosmeticFlickReactor::ResolveAxisDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"ResolveAxisDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Cosmetics::CosmeticFlickReactor::GetSignedSpeedAlong(::UnityEngine::Vector3  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"GetSignedSpeedAlong", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axis);
}
inline void Cosmetics::CosmeticFlickReactor::FireEvents(float_t  currentAbsSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"FireEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentAbsSpeed);
}
inline void Cosmetics::CosmeticFlickReactor::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticFlickReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticFlickReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CosmeticFlickReactor* Cosmetics::CosmeticFlickReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CosmeticFlickReactor*>());
}
// Ctor Parameters []
constexpr ::Cosmetics::CosmeticFlickReactor::CosmeticFlickReactor()   {
}
