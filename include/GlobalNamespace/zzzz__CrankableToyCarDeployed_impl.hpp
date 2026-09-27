#pragma once
// IWYU pragma private; include "GlobalNamespace/CrankableToyCarDeployed.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrankableToyCarDeployed_def.hpp"
#include "GlobalNamespace/zzzz__CrankableToyCarHoldable_def.hpp"
#include "GlobalNamespace/zzzz__FakeWheelDriver_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarDeployed.Deploy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarDeployed::*)(::GlobalNamespace::CrankableToyCarHoldable*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::CrankableToyCarDeployed::Deploy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5648990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {"Deploy", {}, {::i2c::type_of<::GlobalNamespace::CrankableToyCarHoldable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarDeployed.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarDeployed::*)()>(&::GlobalNamespace::CrankableToyCarDeployed::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5648b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarDeployed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarDeployed::*)()>(&::GlobalNamespace::CrankableToyCarDeployed::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5648d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::FakeWheelDriver>& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_wheelDriver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelDriver;
}
constexpr ::UnityW<::GlobalNamespace::FakeWheelDriver> const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_wheelDriver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelDriver;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_wheelDriver(::UnityW<::GlobalNamespace::FakeWheelDriver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelDriver = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_maxThrust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThrust;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_maxThrust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThrust;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_maxThrust(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxThrust = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_thrustCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrustCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_thrustCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrustCurve;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_thrustCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thrustCurve = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_startedAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedAtTimestamp;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_startedAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedAtTimestamp;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_startedAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startedAtTimestamp = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_expiresAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expiresAtTimestamp;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_expiresAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expiresAtTimestamp;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_expiresAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expiresAtTimestamp = value;
}
constexpr ::UnityW<::GlobalNamespace::CrankableToyCarHoldable>& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_holdable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdable;
}
constexpr ::UnityW<::GlobalNamespace::CrankableToyCarHoldable> const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_holdable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdable;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_holdable(::UnityW<::GlobalNamespace::CrankableToyCarHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdable = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_drivingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drivingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_drivingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drivingAudio;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_drivingAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drivingAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_offGroundDrivingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offGroundDrivingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_offGroundDrivingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offGroundDrivingAudio;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_offGroundDrivingAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offGroundDrivingAudio = value;
}
constexpr bool& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_isRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRemote;
}
constexpr bool const& GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_get_isRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRemote;
}
constexpr void GlobalNamespace::CrankableToyCarDeployed::__cordl_internal_set_isRemote(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRemote = value;
}
inline void GlobalNamespace::CrankableToyCarDeployed::Deploy(::GlobalNamespace::CrankableToyCarHoldable*  holdable, ::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, float_t  lifetime, bool  isRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {"Deploy", {}, {::i2c::type_of<::GlobalNamespace::CrankableToyCarHoldable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holdable, launchPos, launchRot, releaseVel, lifetime, isRemote);
}
inline void GlobalNamespace::CrankableToyCarDeployed::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarDeployed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarDeployed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrankableToyCarDeployed* GlobalNamespace::CrankableToyCarDeployed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrankableToyCarDeployed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrankableToyCarDeployed::CrankableToyCarDeployed()   {
}
