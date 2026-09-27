#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterCurrent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterCurrent_def.hpp"
#include "GlobalNamespace/zzzz__CatmullRomSpline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::get_Speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce32dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.get_Accel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::get_Accel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce32e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_Accel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.get_InwardSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::get_InwardSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce32ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_InwardSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.get_InwardAccel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::get_InwardAccel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce32f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_InwardAccel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.GetCurrentAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::WaterCurrent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::Swimming::WaterCurrent::GetCurrentAtPoint)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x5ce0398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"GetCurrentAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ce32fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5ce3410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent.DrawGizmoCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterCurrent::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::GorillaLocomotion::Swimming::WaterCurrent::DrawGizmoCircle)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ce3608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"DrawGizmoCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::WaterCurrent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::WaterCurrent::*)()>(&::GorillaLocomotion::Swimming::WaterCurrent::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ce37a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_splines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splines;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>* const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_splines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splines;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_splines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splines = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_fullEffectDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullEffectDistance;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_fullEffectDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullEffectDistance;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_fullEffectDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullEffectDistance = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_fadeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDistance;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_fadeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDistance;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_fadeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeDistance = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeed = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_currentAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAccel;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_currentAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAccel;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_currentAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAccel = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_velocityAnticipationAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityAnticipationAdjustment;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_velocityAnticipationAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityAnticipationAdjustment;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_velocityAnticipationAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityAnticipationAdjustment = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentFullEffectRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentFullEffectRadius;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentFullEffectRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentFullEffectRadius;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_inwardCurrentFullEffectRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inwardCurrentFullEffectRadius = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentNoEffectRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentNoEffectRadius;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentNoEffectRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentNoEffectRadius;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_inwardCurrentNoEffectRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inwardCurrentNoEffectRadius = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentSpeed;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentSpeed;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_inwardCurrentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inwardCurrentSpeed = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentAccel;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_inwardCurrentAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inwardCurrentAccel;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_inwardCurrentAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inwardCurrentAccel = value;
}
constexpr float_t& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_dampingHalfLife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampingHalfLife;
}
constexpr float_t const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_dampingHalfLife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampingHalfLife;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_dampingHalfLife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampingHalfLife = value;
}
constexpr bool& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugDrawCurrentQueries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawCurrentQueries;
}
constexpr bool const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugDrawCurrentQueries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawCurrentQueries;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_debugDrawCurrentQueries(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawCurrentQueries = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugCurrentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugCurrentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCurrentVelocity;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_debugCurrentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCurrentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugSplinePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSplinePoint;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_get_debugSplinePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSplinePoint;
}
constexpr void GorillaLocomotion::Swimming::WaterCurrent::__cordl_internal_set_debugSplinePoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugSplinePoint = value;
}
inline float_t GorillaLocomotion::Swimming::WaterCurrent::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Swimming::WaterCurrent::get_Accel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_Accel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Swimming::WaterCurrent::get_InwardSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_InwardSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Swimming::WaterCurrent::get_InwardAccel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"get_InwardAccel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GorillaLocomotion::Swimming::WaterCurrent::GetCurrentAtPoint(::UnityEngine::Vector3  worldPoint, ::UnityEngine::Vector3  startingVelocity, float_t  dt, ::by_ref<::UnityEngine::Vector3>  currentVelocity, ::by_ref<::UnityEngine::Vector3>  velocityChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"GetCurrentAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPoint, startingVelocity, dt, currentVelocity, velocityChange);
}
inline void GorillaLocomotion::Swimming::WaterCurrent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterCurrent::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Swimming::WaterCurrent::DrawGizmoCircle(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {"DrawGizmoCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, rotation, radius);
}
inline void GorillaLocomotion::Swimming::WaterCurrent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::WaterCurrent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::WaterCurrent* GorillaLocomotion::Swimming::WaterCurrent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::WaterCurrent*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::WaterCurrent::WaterCurrent()   {
}
