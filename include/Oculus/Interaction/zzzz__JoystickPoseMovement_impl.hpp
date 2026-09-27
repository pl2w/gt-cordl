#pragma once
// IWYU pragma private; include "Oculus/Interaction/JoystickPoseMovement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__JoystickPoseMovement_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::JoystickPoseMovement::*)()>(&::Oculus::Interaction::JoystickPoseMovement::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa47453c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::JoystickPoseMovement::*)()>(&::Oculus::Interaction::JoystickPoseMovement::get_Stopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa474550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)(::Oculus::Interaction::Input::IController*, float_t, float_t, float_t, float_t)>(&::Oculus::Interaction::JoystickPoseMovement::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4744cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::JoystickPoseMovement::MoveTo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa474558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::JoystickPoseMovement::UpdateTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4746a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::JoystickPoseMovement::StopAndSetPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4746c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)()>(&::Oculus::Interaction::JoystickPoseMovement::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4746e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.AdjustPoseWithJoystickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)()>(&::Oculus::Interaction::JoystickPoseMovement::AdjustPoseWithJoystickInput)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa4746e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"AdjustPoseWithJoystickInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::JoystickPoseMovement.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::JoystickPoseMovement::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::JoystickPoseMovement::InjectController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa474a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__currentPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__currentPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPose;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__currentPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__targetPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__targetPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPose;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__targetPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPose = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__localDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localDirection;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__localDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localDirection;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__localDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localDirection = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__controller(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr float_t& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__moveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSpeed;
}
constexpr float_t const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__moveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSpeed;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__moveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveSpeed = value;
}
constexpr float_t& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr float_t& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& Oculus::Interaction::JoystickPoseMovement::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void Oculus::Interaction::JoystickPoseMovement::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::JoystickPoseMovement::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::JoystickPoseMovement::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::JoystickPoseMovement::_ctor(::Oculus::Interaction::Input::IController*  controller, float_t  moveSpeed, float_t  rotationSpeed, float_t  minDistance, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, moveSpeed, rotationSpeed, minDistance, maxDistance);
}
inline void Oculus::Interaction::JoystickPoseMovement::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::JoystickPoseMovement::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::JoystickPoseMovement::StopAndSetPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::JoystickPoseMovement::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::JoystickPoseMovement::AdjustPoseWithJoystickInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"AdjustPoseWithJoystickInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::JoystickPoseMovement::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::JoystickPoseMovement*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::Oculus::Interaction::JoystickPoseMovement* Oculus::Interaction::JoystickPoseMovement::New_ctor(::Oculus::Interaction::Input::IController*  controller, float_t  moveSpeed, float_t  rotationSpeed, float_t  minDistance, float_t  maxDistance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::JoystickPoseMovement*>(controller, moveSpeed, rotationSpeed, minDistance, maxDistance));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::JoystickPoseMovement::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::JoystickPoseMovement::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::JoystickPoseMovement::JoystickPoseMovement()   {
}
