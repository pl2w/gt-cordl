#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallBallEjectZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallBallEjectZone_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallBallEjectZone.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallBallEjectZone::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::MonkeBallBallEjectZone::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x57aa418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallEjectZone*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallBallEjectZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallBallEjectZone::*)()>(&::GlobalNamespace::MonkeBallBallEjectZone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57aa5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallEjectZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_get_ejectVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectVelocity;
}
constexpr float_t const& GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_get_ejectVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectVelocity;
}
constexpr void GlobalNamespace::MonkeBallBallEjectZone::__cordl_internal_set_ejectVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectVelocity = value;
}
inline void GlobalNamespace::MonkeBallBallEjectZone::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallEjectZone*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::MonkeBallBallEjectZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallEjectZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallBallEjectZone* GlobalNamespace::MonkeBallBallEjectZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallBallEjectZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallBallEjectZone::MonkeBallBallEjectZone()   {
}
