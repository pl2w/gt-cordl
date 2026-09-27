#pragma once
// IWYU pragma private; include "BoingKit/UFOController.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__UFOController_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::BoingKit::UFOController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::UFOController::*)()>(&::BoingKit::UFOController::Start)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5e103c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::UFOController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::UFOController::*)()>(&::BoingKit::UFOController::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e105d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::UFOController.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::UFOController::*)()>(&::BoingKit::UFOController::FixedUpdate)> {
  constexpr static std::size_t size = 0xeb4;
  constexpr static std::size_t addrs = 0x5e105d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::UFOController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::UFOController::*)()>(&::BoingKit::UFOController::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e1148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_LinearThrust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearThrust;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_LinearThrust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearThrust;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_LinearThrust(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearThrust = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_MaxLinearSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLinearSpeed;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_MaxLinearSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLinearSpeed;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_MaxLinearSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLinearSpeed = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_LinearDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearDrag;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_LinearDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearDrag;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_LinearDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearDrag = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_Tilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_Tilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_Tilt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tilt = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_AngularThrust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularThrust;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_AngularThrust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularThrust;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_AngularThrust(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AngularThrust = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_MaxAngularSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngularSpeed;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_MaxAngularSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngularSpeed;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_MaxAngularSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAngularSpeed = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_AngularDrag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularDrag;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_AngularDrag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AngularDrag;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_AngularDrag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AngularDrag = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_Hover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hover;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_Hover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hover;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_Hover(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hover = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::UFOController::__cordl_internal_get_Eyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Eyes;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::UFOController::__cordl_internal_get_Eyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Eyes;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_Eyes(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Eyes = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_BlinkInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlinkInterval;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_BlinkInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlinkInterval;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_BlinkInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlinkInterval = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_m_blinkTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_blinkTimer;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_m_blinkTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_blinkTimer;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_blinkTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_blinkTimer = value;
}
constexpr bool& BoingKit::UFOController::__cordl_internal_get_m_lastBlinkWasDouble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastBlinkWasDouble;
}
constexpr bool const& BoingKit::UFOController::__cordl_internal_get_m_lastBlinkWasDouble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastBlinkWasDouble;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_lastBlinkWasDouble(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lastBlinkWasDouble = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::UFOController::__cordl_internal_get_m_eyeInitScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeInitScale;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::UFOController::__cordl_internal_get_m_eyeInitScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeInitScale;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_eyeInitScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyeInitScale = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::UFOController::__cordl_internal_get_m_eyeInitPositionLs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeInitPositionLs;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::UFOController::__cordl_internal_get_m_eyeInitPositionLs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeInitPositionLs;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_eyeInitPositionLs(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyeInitPositionLs = value;
}
constexpr ::BoingKit::Vector3Spring& BoingKit::UFOController::__cordl_internal_get_m_eyeScaleSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeScaleSpring;
}
constexpr ::BoingKit::Vector3Spring const& BoingKit::UFOController::__cordl_internal_get_m_eyeScaleSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeScaleSpring;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_eyeScaleSpring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyeScaleSpring = value;
}
constexpr ::BoingKit::Vector3Spring& BoingKit::UFOController::__cordl_internal_get_m_eyePositionLsSpring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyePositionLsSpring;
}
constexpr ::BoingKit::Vector3Spring const& BoingKit::UFOController::__cordl_internal_get_m_eyePositionLsSpring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyePositionLsSpring;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_eyePositionLsSpring(::BoingKit::Vector3Spring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyePositionLsSpring = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BoingKit::UFOController::__cordl_internal_get_Motor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Motor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BoingKit::UFOController::__cordl_internal_get_Motor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Motor;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_Motor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Motor = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_MotorBaseAngularSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MotorBaseAngularSpeed;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_MotorBaseAngularSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MotorBaseAngularSpeed;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_MotorBaseAngularSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MotorBaseAngularSpeed = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_MotorMaxAngularSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MotorMaxAngularSpeed;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_MotorMaxAngularSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MotorMaxAngularSpeed;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_MotorMaxAngularSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MotorMaxAngularSpeed = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& BoingKit::UFOController::__cordl_internal_get_BubbleEmitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleEmitter;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& BoingKit::UFOController::__cordl_internal_get_BubbleEmitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleEmitter;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_BubbleEmitter(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BubbleEmitter = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_BubbleBaseEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleBaseEmissionRate;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_BubbleBaseEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleBaseEmissionRate;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_BubbleBaseEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BubbleBaseEmissionRate = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_BubbleMaxEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleMaxEmissionRate;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_BubbleMaxEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BubbleMaxEmissionRate;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_BubbleMaxEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BubbleMaxEmissionRate = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::UFOController::__cordl_internal_get_m_linearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_linearVelocity;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::UFOController::__cordl_internal_get_m_linearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_linearVelocity;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_linearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_linearVelocity = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_m_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_angularVelocity;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_m_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_angularVelocity;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_angularVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_angularVelocity = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_m_yawAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yawAngle;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_m_yawAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yawAngle;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_yawAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yawAngle = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::UFOController::__cordl_internal_get_m_hoverCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverCenter;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::UFOController::__cordl_internal_get_m_hoverCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverCenter;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_hoverCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverCenter = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_m_hoverPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverPhase;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_m_hoverPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverPhase;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_hoverPhase(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverPhase = value;
}
constexpr float_t& BoingKit::UFOController::__cordl_internal_get_m_motorAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_motorAngle;
}
constexpr float_t const& BoingKit::UFOController::__cordl_internal_get_m_motorAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_motorAngle;
}
constexpr void BoingKit::UFOController::__cordl_internal_set_m_motorAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_motorAngle = value;
}
inline void BoingKit::UFOController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::UFOController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::UFOController::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::UFOController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::UFOController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::UFOController* BoingKit::UFOController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::UFOController*>());
}
// Ctor Parameters []
constexpr ::BoingKit::UFOController::UFOController()   {
}
