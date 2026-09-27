#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShieldCollider.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRShieldCollider_def.hpp"
#include "GlobalNamespace/zzzz__GRToolDirectionalShield_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider.get_KnockbackVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRShieldCollider::*)()>(&::GlobalNamespace::GRShieldCollider::get_KnockbackVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"get_KnockbackVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider.get_ShieldTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRToolDirectionalShield> (::GlobalNamespace::GRShieldCollider::*)()>(&::GlobalNamespace::GRShieldCollider::get_ShieldTool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"get_ShieldTool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShieldCollider::*)()>(&::GlobalNamespace::GRShieldCollider::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58b3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider.OnEnemyBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShieldCollider::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRShieldCollider::OnEnemyBlocked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58b3794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"OnEnemyBlocked", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider.BlockHittable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShieldCollider::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::GameHittable*)>(&::GlobalNamespace::GRShieldCollider::BlockHittable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58b3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"BlockHittable", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShieldCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShieldCollider::*)()>(&::GlobalNamespace::GRShieldCollider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b3cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRShieldCollider::__cordl_internal_get_knockbackVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr float_t const& GlobalNamespace::GRShieldCollider::__cordl_internal_get_knockbackVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr void GlobalNamespace::GRShieldCollider::__cordl_internal_set_knockbackVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackVelocity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolDirectionalShield>& GlobalNamespace::GRShieldCollider::__cordl_internal_get_shieldTool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldTool;
}
constexpr ::UnityW<::GlobalNamespace::GRToolDirectionalShield> const& GlobalNamespace::GRShieldCollider::__cordl_internal_get_shieldTool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldTool;
}
constexpr void GlobalNamespace::GRShieldCollider::__cordl_internal_set_shieldTool(::UnityW<::GlobalNamespace::GRToolDirectionalShield>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldTool = value;
}
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GRShieldCollider::__cordl_internal_get_lastBlockHittableEntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBlockHittableEntityId;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GRShieldCollider::__cordl_internal_get_lastBlockHittableEntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBlockHittableEntityId;
}
constexpr void GlobalNamespace::GRShieldCollider::__cordl_internal_set_lastBlockHittableEntityId(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBlockHittableEntityId = value;
}
constexpr double_t& GlobalNamespace::GRShieldCollider::__cordl_internal_get_lastBlockHittableTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBlockHittableTime;
}
constexpr double_t const& GlobalNamespace::GRShieldCollider::__cordl_internal_get_lastBlockHittableTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBlockHittableTime;
}
constexpr void GlobalNamespace::GRShieldCollider::__cordl_internal_set_lastBlockHittableTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBlockHittableTime = value;
}
inline float_t GlobalNamespace::GRShieldCollider::get_KnockbackVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"get_KnockbackVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRToolDirectionalShield> GlobalNamespace::GRShieldCollider::get_ShieldTool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"get_ShieldTool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRToolDirectionalShield>>(this, ___internal_method);
}
inline void GlobalNamespace::GRShieldCollider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShieldCollider::OnEnemyBlocked(::UnityEngine::Vector3  enemyPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"OnEnemyBlocked", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyPosition);
}
inline void GlobalNamespace::GRShieldCollider::BlockHittable(::UnityEngine::Vector3  enemyPosition, ::UnityEngine::Vector3  enemyAttackDirection, ::GlobalNamespace::GameHittable*  hittable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {"BlockHittable", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameHittable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enemyPosition, enemyAttackDirection, hittable);
}
inline void GlobalNamespace::GRShieldCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShieldCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShieldCollider* GlobalNamespace::GRShieldCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRShieldCollider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShieldCollider::GRShieldCollider()   {
}
