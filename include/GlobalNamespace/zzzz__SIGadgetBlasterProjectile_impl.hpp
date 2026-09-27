#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterProjectile.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileType_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)()>(&::GlobalNamespace::SIGadgetBlasterProjectile::Tick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x57fb150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.InitializeProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)()>(&::GlobalNamespace::SIGadgetBlasterProjectile::InitializeProjectile)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x57fac0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"InitializeProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIGadgetBlasterProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x57fb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::SIGadgetBlasterProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x57fb4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.DespawnProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)()>(&::GlobalNamespace::SIGadgetBlasterProjectile::DespawnProjectile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57f6aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"DespawnProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.KnockbackWithHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)(::UnityEngine::Vector3, bool)>(&::GlobalNamespace::SIGadgetBlasterProjectile::KnockbackWithHaptics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f6f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"KnockbackWithHaptics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.KnockbackWithHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::SIGadgetBlasterProjectile::KnockbackWithHaptics)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x57f8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"KnockbackWithHaptics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.SpawnExplosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetBlasterProjectile::SpawnExplosion)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x57f64a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"SpawnExplosion", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile.DespawnExplosion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::SIGadgetBlasterProjectile::DespawnExplosion)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x57f6f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"DespawnExplosion", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlasterProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlasterProjectile::*)()>(&::GlobalNamespace::SIGadgetBlasterProjectile::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57fb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_poolId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolId;
}
constexpr int32_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_poolId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolId;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_poolId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolId = value;
}
constexpr ::GlobalNamespace::SIGadgetProjectileType*& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_projectileType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileType;
}
constexpr ::GlobalNamespace::SIGadgetProjectileType* const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_projectileType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileType;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_projectileType(::GlobalNamespace::SIGadgetProjectileType*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileType = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hitEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hitEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitEffect;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_hitEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitEffect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hitEffectPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitEffectPlayer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hitEffectPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitEffectPlayer;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_hitEffectPlayer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitEffectPlayer = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_maxLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLifetime;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_maxLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLifetime;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_maxLifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLifetime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_timeSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpawned;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_timeSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpawned;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_timeSpawned(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSpawned = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hapticHitStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticHitStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hapticHitStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticHitStrength;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_hapticHitStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticHitStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hapticHitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticHitDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_hapticHitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticHitDuration;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_hapticHitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticHitDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_parentBlaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBlaster;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_parentBlaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBlaster;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_parentBlaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentBlaster = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_projectileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr int32_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_projectileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_projectileId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileId = value;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_firedByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firedByPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_firedByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firedByPlayer;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_firedByPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firedByPlayer = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_startingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingVelocity;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_startingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingVelocity;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_startingVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingVelocity = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_exclusionZoneDespawnEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionZoneDespawnEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_exclusionZoneDespawnEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionZoneDespawnEffect;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_exclusionZoneDespawnEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusionZoneDespawnEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::SIGadgetBlasterProjectile::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::setStaticF_blasterProjectileExplosionPools(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "blasterProjectileExplosionPools", ::GlobalNamespace::SIGadgetBlasterProjectile*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* GlobalNamespace::SIGadgetBlasterProjectile::getStaticF_blasterProjectileExplosionPools()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "blasterProjectileExplosionPools", ::GlobalNamespace::SIGadgetBlasterProjectile*>();
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::setStaticF_explosionTypeKey(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "explosionTypeKey", ::GlobalNamespace::SIGadgetBlasterProjectile*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>* GlobalNamespace::SIGadgetBlasterProjectile::getStaticF_explosionTypeKey()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*, "explosionTypeKey", ::GlobalNamespace::SIGadgetBlasterProjectile*>();
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::InitializeProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"InitializeProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::DespawnProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"DespawnProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::KnockbackWithHaptics(::UnityEngine::Vector3  directionAndMagnitude, bool  adjustForDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"KnockbackWithHaptics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directionAndMagnitude, adjustForDirection);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::KnockbackWithHaptics(::UnityEngine::Vector3  directionAndMagnitude, float_t  hapticStrength, float_t  hapticDuration, bool  adjustForDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"KnockbackWithHaptics", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directionAndMagnitude, hapticStrength, hapticDuration, adjustForDirection);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIGadgetBlasterProjectile::SpawnExplosion(::UnityEngine::GameObject*  explosionPrefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"SpawnExplosion", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, explosionPrefab, position, rotation);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::DespawnExplosion(::UnityEngine::GameObject*  explosion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {"DespawnExplosion", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, explosion);
}
inline void GlobalNamespace::SIGadgetBlasterProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetBlasterProjectile* GlobalNamespace::SIGadgetBlasterProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetBlasterProjectile*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetBlasterProjectile::SIGadgetBlasterProjectile()   {
}
