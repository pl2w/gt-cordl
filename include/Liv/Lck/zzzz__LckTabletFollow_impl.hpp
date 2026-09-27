#pragma once
// IWYU pragma private; include "Liv/Lck/LckTabletFollow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/zzzz__LckTabletFollow_def.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckDoubleButton_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::OnEnable)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9ce8e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::OnDisable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9ce9024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ce9224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.SetInitialValuesFromDoubleButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::SetInitialValuesFromDoubleButtons)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ce92d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"SetInitialValuesFromDoubleButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::FixedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ce9344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.SetFollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)(::UnityEngine::Transform*)>(&::Liv::Lck::LckTabletFollow::SetFollowTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce96b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"SetFollowTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.ProcessTabletFollowingWithRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::ProcessTabletFollowingWithRigidbody)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x9ce9348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"ProcessTabletFollowingWithRigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)(::Liv::Lck::Tablet::CameraMode)>(&::Liv::Lck::LckTabletFollow::OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ce96bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnIsFollowToggled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)(bool)>(&::Liv::Lck::LckTabletFollow::OnIsFollowToggled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ce96cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnIsFollowToggled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnSmoothingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)(float_t)>(&::Liv::Lck::LckTabletFollow::OnSmoothingChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ce9778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnSmoothingChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.CalculateFollowSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckTabletFollow::*)(float_t)>(&::Liv::Lck::LckTabletFollow::CalculateFollowSmoothing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ce932c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"CalculateFollowSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow.OnFollowDistanceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)(float_t)>(&::Liv::Lck::LckTabletFollow::OnFollowDistanceChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ce9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnFollowDistanceChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckTabletFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckTabletFollow::*)()>(&::Liv::Lck::LckTabletFollow::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ce97a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::LckTabletFollow::__cordl_internal_get__heightOffsetForPlayerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffsetForPlayerHead;
}
constexpr float_t const& Liv::Lck::LckTabletFollow::__cordl_internal_get__heightOffsetForPlayerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heightOffsetForPlayerHead;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__heightOffsetForPlayerHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heightOffsetForPlayerHead = value;
}
constexpr float_t& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowSmoothing;
}
constexpr float_t const& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowSmoothing;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__minFollowSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minFollowSmoothing = value;
}
constexpr float_t& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowDistanceMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowDistanceMultiplier;
}
constexpr float_t const& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowDistanceMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowDistanceMultiplier;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__minFollowDistanceMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minFollowDistanceMultiplier = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController>& Liv::Lck::LckTabletFollow::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__controller(::UnityW<::Liv::Lck::Tablet::LCKCameraController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::LckTabletFollow::__cordl_internal_get__isFollowingToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowingToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__isFollowingToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowingToggle;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__isFollowingToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFollowingToggle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::LckTabletFollow::__cordl_internal_get__selfieCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__selfieCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__selfieCamera(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::LckTabletFollow::__cordl_internal_get__followTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__followTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTarget;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__followTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTarget = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::LckTabletFollow::__cordl_internal_get__smoothingDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__smoothingDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingDoubleButton;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__smoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothingDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::LckTabletFollow::__cordl_internal_get__followDistanceDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followDistanceDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__followDistanceDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followDistanceDoubleButton;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__followDistanceDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followDistanceDoubleButton = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Liv::Lck::LckTabletFollow::__cordl_internal_get__rigidbodyRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyRoot;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Liv::Lck::LckTabletFollow::__cordl_internal_get__rigidbodyRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyRoot;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__rigidbodyRoot(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodyRoot = value;
}
constexpr bool& Liv::Lck::LckTabletFollow::__cordl_internal_get__isInCorrectCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInCorrectCameraMode;
}
constexpr bool const& Liv::Lck::LckTabletFollow::__cordl_internal_get__isInCorrectCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInCorrectCameraMode;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__isInCorrectCameraMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInCorrectCameraMode = value;
}
constexpr bool& Liv::Lck::LckTabletFollow::__cordl_internal_get__isFollowToggleOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowToggleOn;
}
constexpr bool const& Liv::Lck::LckTabletFollow::__cordl_internal_get__isFollowToggleOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFollowToggleOn;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__isFollowToggleOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFollowToggleOn = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::LckTabletFollow::__cordl_internal_get__followVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followVelocity;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::LckTabletFollow::__cordl_internal_get__followVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followVelocity;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__followVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followVelocity = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::LckTabletFollow::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::LckTabletFollow::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr float_t& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowDistance;
}
constexpr float_t const& Liv::Lck::LckTabletFollow::__cordl_internal_get__minFollowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFollowDistance;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__minFollowDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minFollowDistance = value;
}
constexpr float_t& Liv::Lck::LckTabletFollow::__cordl_internal_get__followSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followSmoothing;
}
constexpr float_t const& Liv::Lck::LckTabletFollow::__cordl_internal_get__followSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followSmoothing;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__followSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followSmoothing = value;
}
constexpr ::UnityEngine::RigidbodyInterpolation& Liv::Lck::LckTabletFollow::__cordl_internal_get__defaultInterpolation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultInterpolation;
}
constexpr ::UnityEngine::RigidbodyInterpolation const& Liv::Lck::LckTabletFollow::__cordl_internal_get__defaultInterpolation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultInterpolation;
}
constexpr void Liv::Lck::LckTabletFollow::__cordl_internal_set__defaultInterpolation(::UnityEngine::RigidbodyInterpolation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultInterpolation = value;
}
inline void Liv::Lck::LckTabletFollow::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::SetInitialValuesFromDoubleButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"SetInitialValuesFromDoubleButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::SetFollowTarget(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"SetFollowTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Liv::Lck::LckTabletFollow::ProcessTabletFollowingWithRigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"ProcessTabletFollowingWithRigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckTabletFollow::OnCameraModeChanged(::Liv::Lck::Tablet::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::LckTabletFollow::OnIsFollowToggled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnIsFollowToggled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckTabletFollow::OnSmoothingChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnSmoothingChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::LckTabletFollow::CalculateFollowSmoothing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"CalculateFollowSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline void Liv::Lck::LckTabletFollow::OnFollowDistanceChanged(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {"OnFollowDistanceChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckTabletFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckTabletFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckTabletFollow* Liv::Lck::LckTabletFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckTabletFollow*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckTabletFollow::LckTabletFollow()   {
}
