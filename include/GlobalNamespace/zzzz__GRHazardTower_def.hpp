#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHazardTower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRHazardTower)
namespace GlobalNamespace {
class GRRangedEnemyProjectile;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GRSenseNearby;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameProjectileLauncher;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRHazardTower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRHazardTower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRHazardTower*, "", "GRHazardTower");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRHazardTower
class CORDL_TYPE GRHazardTower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fireChargeTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireChargeTime, put=__cordl_internal_set_fireChargeTime)) float_t  fireChargeTime;

/// @brief Field fireCooldownTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCooldownTime, put=__cordl_internal_set_fireCooldownTime)) float_t  fireCooldownTime;

/// @brief Field fireFrom, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireFrom, put=__cordl_internal_set_fireFrom)) ::UnityW<::UnityEngine::Transform>  fireFrom;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field nextFireTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextFireTime, put=__cordl_internal_set_nextFireTime)) double_t  nextFireTime;

/// @brief Field projectilePrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::GlobalNamespace::GameEntity>  projectilePrefab;

/// @brief Field projectileSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileSpeed, put=__cordl_internal_set_projectileSpeed)) float_t  projectileSpeed;

/// @brief Field senseLineOfSight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameProjectileLauncher"
constexpr operator  ::GlobalNamespace::IGameProjectileLauncher*() noexcept;

static inline ::GlobalNamespace::GRHazardTower* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x589d990, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x589d89c, size 0xf4, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x589d994, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnFire, addr 0x589ddac, size 0x1d0, virtual false, abstract: false, final false
inline void OnFire(::UnityEngine::Vector3  fireFromPos, ::UnityEngine::Vector3  fireAtPos, double_t  fireAtTime) ;

/// @brief Method OnProjectileHit, addr 0x589df80, size 0x4, virtual true, abstract: false, final true
inline void OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnProjectileInit, addr 0x589df7c, size 0x4, virtual true, abstract: false, final true
inline void OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile) ;

/// @brief Method OnThink, addr 0x589d998, size 0x414, virtual false, abstract: false, final false
inline void OnThink() ;

constexpr float_t const& __cordl_internal_get_fireChargeTime() const;

constexpr float_t& __cordl_internal_get_fireChargeTime() ;

constexpr float_t const& __cordl_internal_get_fireCooldownTime() const;

constexpr float_t& __cordl_internal_get_fireCooldownTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fireFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fireFrom() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr double_t const& __cordl_internal_get_nextFireTime() const;

constexpr double_t& __cordl_internal_get_nextFireTime() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_projectileSpeed() const;

constexpr float_t& __cordl_internal_get_projectileSpeed() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr void __cordl_internal_set_fireChargeTime(float_t  value) ;

constexpr void __cordl_internal_set_fireCooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_fireFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_nextFireTime(double_t  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_projectileSpeed(float_t  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

/// @brief Method .ctor, addr 0x589df84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameProjectileLauncher"
constexpr ::GlobalNamespace::IGameProjectileLauncher* i___GlobalNamespace__IGameProjectileLauncher() noexcept;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRHazardTower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRHazardTower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRHazardTower(GRHazardTower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRHazardTower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRHazardTower(GRHazardTower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1983};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field senseNearby, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field projectileSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___projectileSpeed;

/// @brief Field projectilePrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___projectilePrefab;

/// @brief Field fireFrom, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fireFrom;

/// @brief Field fireChargeTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___fireChargeTime;

/// @brief Field fireCooldownTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___fireCooldownTime;

/// @brief Field nextFireTime, offset: 0x58, size: 0x8, def value: None
 double_t  ___nextFireTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___senseNearby) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___senseLineOfSight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___projectileSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___projectilePrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___fireFrom) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___fireChargeTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___fireCooldownTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHazardTower, ___nextFireTime) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRHazardTower) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
