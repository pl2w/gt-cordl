#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHazardTower.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRHazardTower_def.hpp"
#include "GlobalNamespace/zzzz__GRRangedEnemyProjectile_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameProjectileLauncher_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)()>(&::GlobalNamespace::GRHazardTower::OnEntityInit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x589d89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)()>(&::GlobalNamespace::GRHazardTower::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)(int64_t, int64_t)>(&::GlobalNamespace::GRHazardTower::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)()>(&::GlobalNamespace::GRHazardTower::OnThink)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x589d998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnThink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::GRHazardTower::OnFire)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x589ddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnFire", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnProjectileInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)(::GlobalNamespace::GRRangedEnemyProjectile*)>(&::GlobalNamespace::GRHazardTower::OnProjectileInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589df7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnProjectileInit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower.OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)(::GlobalNamespace::GRRangedEnemyProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::GRHazardTower::OnProjectileHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRHazardTower._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRHazardTower::*)()>(&::GlobalNamespace::GRHazardTower::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589df84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRHazardTower::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRHazardTower::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GRHazardTower::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GRHazardTower::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GRHazardTower::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GRHazardTower::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr float_t& GlobalNamespace::GRHazardTower::__cordl_internal_get_projectileSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr float_t const& GlobalNamespace::GRHazardTower::__cordl_internal_get_projectileSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_projectileSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRHazardTower::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRHazardTower::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFrom;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_fireFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireFrom = value;
}
constexpr float_t& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireChargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireChargeTime;
}
constexpr float_t const& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireChargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireChargeTime;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_fireChargeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireChargeTime = value;
}
constexpr float_t& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldownTime;
}
constexpr float_t const& GlobalNamespace::GRHazardTower::__cordl_internal_get_fireCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldownTime;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_fireCooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCooldownTime = value;
}
constexpr double_t& GlobalNamespace::GRHazardTower::__cordl_internal_get_nextFireTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextFireTime;
}
constexpr double_t const& GlobalNamespace::GRHazardTower::__cordl_internal_get_nextFireTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextFireTime;
}
constexpr void GlobalNamespace::GRHazardTower::__cordl_internal_set_nextFireTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextFireTime = value;
}
inline void GlobalNamespace::GRHazardTower::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GRHazardTower*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GRHazardTower::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GRHazardTower*>();
}
inline void GlobalNamespace::GRHazardTower::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRHazardTower::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRHazardTower::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRHazardTower::OnThink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnThink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRHazardTower::OnFire(::UnityEngine::Vector3  fireFromPos, ::UnityEngine::Vector3  fireAtPos, double_t  fireAtTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnFire", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fireFromPos, fireAtPos, fireAtTime);
}
inline void GlobalNamespace::GRHazardTower::OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnProjectileInit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GlobalNamespace::GRHazardTower::OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::GRHazardTower::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRHazardTower*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRHazardTower* GlobalNamespace::GRHazardTower::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRHazardTower*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRHazardTower::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRHazardTower::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameProjectileLauncher"
constexpr  GlobalNamespace::GRHazardTower::operator ::GlobalNamespace::IGameProjectileLauncher*() noexcept {
return static_cast<::GlobalNamespace::IGameProjectileLauncher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameProjectileLauncher"
constexpr ::GlobalNamespace::IGameProjectileLauncher* GlobalNamespace::GRHazardTower::i___GlobalNamespace__IGameProjectileLauncher() noexcept {
return static_cast<::GlobalNamespace::IGameProjectileLauncher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRHazardTower::GRHazardTower()   {
}
