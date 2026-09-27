#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRangedEnemyProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRRangedEnemyProjectile_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGameHitter_def.hpp"
#include "GlobalNamespace/zzzz__IGameProjectileLauncher_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x58a6970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58a6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58a6ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::OnEntityInit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58a6d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a6ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(int64_t, int64_t)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a6ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.FindOwningEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::FindOwningEntity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58a6e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"FindOwningEntity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x58a6edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58a718c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a7364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnHit)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58a736c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnHitByClub)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x58a7478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnHitByFlash)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a75d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnHitByShield)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58a75dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.PlayImpactFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::PlayImpactFX)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58a7694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"PlayImpactFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnSuccessfulHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnSuccessfulHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a7754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile.OnSuccessfulHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)(::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRRangedEnemyProjectile::OnSuccessfulHitPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58a7758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnSuccessfulHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRangedEnemyProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRangedEnemyProjectile::*)()>(&::GlobalNamespace::GRRangedEnemyProjectile::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_owningEntityNetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owningEntityNetID;
}
constexpr int32_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_owningEntityNetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owningEntityNetID;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_owningEntityNetID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owningEntityNetID = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_owningEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owningEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_owningEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owningEntity;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_owningEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owningEntity = value;
}
constexpr ::GlobalNamespace::IGameProjectileLauncher*& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileLauncher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileLauncher;
}
constexpr ::GlobalNamespace::IGameProjectileLauncher* const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileLauncher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileLauncher;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileLauncher(::GlobalNamespace::IGameProjectileLauncher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileLauncher = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileRigidbody;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr float_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr float_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSpeed = value;
}
constexpr float_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileHitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHitRadius;
}
constexpr float_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileHitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHitRadius;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileHitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHitRadius = value;
}
constexpr float_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_postImpactLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postImpactLifetime;
}
constexpr float_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_postImpactLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postImpactLifetime;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_postImpactLifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postImpactLifetime = value;
}
constexpr bool& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileHasImpacted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHasImpacted;
}
constexpr bool const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileHasImpacted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHasImpacted;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileHasImpacted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHasImpacted = value;
}
constexpr double_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileImpactTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileImpactTime;
}
constexpr double_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_projectileImpactTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileImpactTime;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_projectileImpactTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileImpactTime = value;
}
constexpr float_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr bool& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_applyFreezeEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFreezeEffect;
}
constexpr bool const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_applyFreezeEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFreezeEffect;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_applyFreezeEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyFreezeEffect = value;
}
constexpr bool& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_canHitPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHitPlayer;
}
constexpr bool const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_canHitPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHitPlayer;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_canHitPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canHitPlayer = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_hitSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSFX;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_get_hitSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSFX;
}
constexpr void GlobalNamespace::GRRangedEnemyProjectile::__cordl_internal_set_hitSFX(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSFX = value;
}
inline void GlobalNamespace::GRRangedEnemyProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GRRangedEnemyProjectile::FindOwningEntity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"FindOwningEntity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline bool GlobalNamespace::GRRangedEnemyProjectile::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grTool, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::PlayImpactFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"PlayImpactFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnSuccessfulHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnSuccessfulHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::OnSuccessfulHitPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {"OnSuccessfulHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, hitPosition);
}
inline void GlobalNamespace::GRRangedEnemyProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRangedEnemyProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRRangedEnemyProjectile* GlobalNamespace::GRRangedEnemyProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRRangedEnemyProjectile*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRRangedEnemyProjectile::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRRangedEnemyProjectile::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GRRangedEnemyProjectile::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GRRangedEnemyProjectile::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr  GlobalNamespace::GRRangedEnemyProjectile::operator ::GlobalNamespace::IGameHitter*() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* GlobalNamespace::GRRangedEnemyProjectile::i___GlobalNamespace__IGameHitter() noexcept {
return static_cast<::GlobalNamespace::IGameHitter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRRangedEnemyProjectile::GRRangedEnemyProjectile()   {
}
