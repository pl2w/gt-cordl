#pragma once
// IWYU pragma private; include "GlobalNamespace/FakeWheelDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FakeWheelDriver_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver.get_hasCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FakeWheelDriver::*)()>(&::GlobalNamespace::FakeWheelDriver::get_hasCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564dadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"get_hasCollision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver.set_hasCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeWheelDriver::*)(bool)>(&::GlobalNamespace::FakeWheelDriver::set_hasCollision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564dae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"set_hasCollision", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver.SetThrust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeWheelDriver::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::FakeWheelDriver::SetThrust)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x564daec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"SetThrust", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeWheelDriver::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::FakeWheelDriver::OnCollisionStay)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x564daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeWheelDriver::*)()>(&::GlobalNamespace::FakeWheelDriver::FixedUpdate)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x564dcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeWheelDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeWheelDriver::*)()>(&::GlobalNamespace::FakeWheelDriver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564e0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_myRigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_myRigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRigidBody;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_myRigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRigidBody = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_thrust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrust;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_thrust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrust;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_thrust(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thrust = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_wheelCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_wheelCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wheelCollider;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_wheelCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wheelCollider = value;
}
constexpr float_t& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_lateralFrictionForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateralFrictionForce;
}
constexpr float_t const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_lateralFrictionForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lateralFrictionForce;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_lateralFrictionForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lateralFrictionForce = value;
}
constexpr bool& GlobalNamespace::FakeWheelDriver::__cordl_internal_get__hasCollision_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollision_k__BackingField;
}
constexpr bool const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get__hasCollision_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasCollision_k__BackingField;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set__hasCollision_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasCollision_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_collisionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_collisionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionPoint;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_collisionPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_collisionNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionNormal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FakeWheelDriver::__cordl_internal_get_collisionNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionNormal;
}
constexpr void GlobalNamespace::FakeWheelDriver::__cordl_internal_set_collisionNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionNormal = value;
}
inline bool GlobalNamespace::FakeWheelDriver::get_hasCollision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"get_hasCollision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FakeWheelDriver::set_hasCollision(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"set_hasCollision", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FakeWheelDriver::SetThrust(::UnityEngine::Vector3  thrust)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"SetThrust", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thrust);
}
inline void GlobalNamespace::FakeWheelDriver::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::FakeWheelDriver::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FakeWheelDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FakeWheelDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FakeWheelDriver* GlobalNamespace::FakeWheelDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FakeWheelDriver*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FakeWheelDriver::FakeWheelDriver()   {
}
