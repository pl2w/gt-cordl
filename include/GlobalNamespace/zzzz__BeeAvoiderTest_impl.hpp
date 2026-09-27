#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeAvoiderTest.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeeAvoiderTest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeeAvoiderTest.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeAvoiderTest::*)()>(&::GlobalNamespace::BeeAvoiderTest::Update)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x5613404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeAvoiderTest*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeAvoiderTest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeAvoiderTest::*)()>(&::GlobalNamespace::BeeAvoiderTest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeAvoiderTest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_patrolPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_patrolPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPoints;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_patrolPoints(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPoints = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_avoidancePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidancePoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_avoidancePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidancePoints;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_avoidancePoints(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avoidancePoints = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_instability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instability;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_instability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instability;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_instability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instability = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_instabilityOffRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instabilityOffRadius;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_instabilityOffRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instabilityOffRadius;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_instabilityOffRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instabilityOffRadius = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_avoidRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidRadius;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_avoidRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___avoidRadius;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_avoidRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___avoidRadius = value;
}
constexpr float_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_patrolArrivedRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolArrivedRadius;
}
constexpr float_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_patrolArrivedRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolArrivedRadius;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_patrolArrivedRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolArrivedRadius = value;
}
constexpr int32_t& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_nextPatrolPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolPoint;
}
constexpr int32_t const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_nextPatrolPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolPoint;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_nextPatrolPoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeeAvoiderTest::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::BeeAvoiderTest::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline void GlobalNamespace::BeeAvoiderTest::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeAvoiderTest*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeAvoiderTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeAvoiderTest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeeAvoiderTest* GlobalNamespace::BeeAvoiderTest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeeAvoiderTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeeAvoiderTest::BeeAvoiderTest()   {
}
