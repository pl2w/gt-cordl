#pragma once
// IWYU pragma private; include "GlobalNamespace/SpinWithGorillaSpeed.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpinWithGorillaSpeed_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpinWithGorillaSpeed.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinWithGorillaSpeed::*)()>(&::GlobalNamespace::SpinWithGorillaSpeed::Awake)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x565b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpinWithGorillaSpeed.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinWithGorillaSpeed::*)()>(&::GlobalNamespace::SpinWithGorillaSpeed::Update)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x565b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpinWithGorillaSpeed.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinWithGorillaSpeed::*)()>(&::GlobalNamespace::SpinWithGorillaSpeed::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565bcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpinWithGorillaSpeed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpinWithGorillaSpeed::*)()>(&::GlobalNamespace::SpinWithGorillaSpeed::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x565bcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_optionalVelocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalVelocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_optionalVelocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalVelocityEstimator;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_optionalVelocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optionalVelocityEstimator = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_axisOfRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisOfRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_axisOfRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisOfRotation;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_axisOfRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisOfRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_centerOfRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_centerOfRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfRotation;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_centerOfRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfRotation = value;
}
constexpr float_t& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_degreesPerSecondAtSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerSecondAtSpeed;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_degreesPerSecondAtSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___degreesPerSecondAtSpeed;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_degreesPerSecondAtSpeed(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___degreesPerSecondAtSpeed = value;
}
constexpr bool& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_clockwise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockwise;
}
constexpr bool const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_clockwise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockwise;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_clockwise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockwise = value;
}
constexpr float_t& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_verticalSpeedInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSpeedInfluence;
}
constexpr float_t const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_verticalSpeedInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSpeedInfluence;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_verticalSpeedInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalSpeedInfluence = value;
}
constexpr float_t& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickSoundDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSoundDegrees;
}
constexpr float_t const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickSoundDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSoundDegrees;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickSoundDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickSoundDegrees = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickVolumeAtSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickVolumeAtSpeed;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickVolumeAtSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickVolumeAtSpeed;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickVolumeAtSpeed(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickVolumeAtSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickPitchAtSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickPitchAtSpeed;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickPitchAtSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickPitchAtSpeed;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickPitchAtSpeed(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickPitchAtSpeed = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickSound;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickSound = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickClips;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickClips = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_initialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_initialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRotation;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_spinAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_spinAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinAxis;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_spinAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinAxis = value;
}
constexpr float_t& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_currentAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr float_t const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_currentAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAngle;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_currentAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAngle = value;
}
constexpr float_t& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickAngle;
}
constexpr float_t const& GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_get_tickAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickAngle;
}
constexpr void GlobalNamespace::SpinWithGorillaSpeed::__cordl_internal_set_tickAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickAngle = value;
}
inline void GlobalNamespace::SpinWithGorillaSpeed::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpinWithGorillaSpeed::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpinWithGorillaSpeed::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpinWithGorillaSpeed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpinWithGorillaSpeed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpinWithGorillaSpeed* GlobalNamespace::SpinWithGorillaSpeed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpinWithGorillaSpeed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpinWithGorillaSpeed::SpinWithGorillaSpeed()   {
}
