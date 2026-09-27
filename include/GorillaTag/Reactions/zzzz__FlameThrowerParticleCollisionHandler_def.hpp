#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FlameThrowerParticleCollisionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlameThrowerParticleCollisionHandler)
namespace GlobalNamespace {
class SinglePool;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct ParticleCollisionEvent;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GorillaTag::Reactions {
class FlameThrowerParticleCollisionHandler;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler*, "GorillaTag.Reactions", "FlameThrowerParticleCollisionHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.FlameThrowerParticleCollisionHandler
class CORDL_TYPE FlameThrowerParticleCollisionHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _collisionEvents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__collisionEvents, put=__cordl_internal_set__collisionEvents)) ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  _collisionEvents;

/// @brief Field _extinguishAmount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__extinguishAmount, put=__cordl_internal_set__extinguishAmount)) float_t  _extinguishAmount;

/// @brief Field _hasPrefabToSpawn, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasPrefabToSpawn, put=__cordl_internal_set__hasPrefabToSpawn)) bool  _hasPrefabToSpawn;

/// @brief Field _isPrefabInPool, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPrefabInPool, put=__cordl_internal_set__isPrefabInPool)) bool  _isPrefabInPool;

/// @brief Field _lastCollisionTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCollisionTime, put=__cordl_internal_set__lastCollisionTime)) double_t  _lastCollisionTime;

/// @brief Field _maxParticleHitReactionRate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxParticleHitReactionRate, put=__cordl_internal_set__maxParticleHitReactionRate)) float_t  _maxParticleHitReactionRate;

/// @brief Field _particleSystem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _pool, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::GlobalNamespace::SinglePool*  _pool;

/// @brief Field _prefabToSpawn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefabToSpawn, put=__cordl_internal_set__prefabToSpawn)) ::UnityW<::UnityEngine::GameObject>  _prefabToSpawn;

static inline ::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d3fa60, size 0x480, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnParticleCollision, addr 0x5d3fee0, size 0x270, virtual false, abstract: false, final false
inline void OnParticleCollision(::UnityEngine::GameObject*  other) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* const& __cordl_internal_get__collisionEvents() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*& __cordl_internal_get__collisionEvents() ;

constexpr float_t const& __cordl_internal_get__extinguishAmount() const;

constexpr float_t& __cordl_internal_get__extinguishAmount() ;

constexpr bool const& __cordl_internal_get__hasPrefabToSpawn() const;

constexpr bool& __cordl_internal_get__hasPrefabToSpawn() ;

constexpr bool const& __cordl_internal_get__isPrefabInPool() const;

constexpr bool& __cordl_internal_get__isPrefabInPool() ;

constexpr double_t const& __cordl_internal_get__lastCollisionTime() const;

constexpr double_t& __cordl_internal_get__lastCollisionTime() ;

constexpr float_t const& __cordl_internal_get__maxParticleHitReactionRate() const;

constexpr float_t& __cordl_internal_get__maxParticleHitReactionRate() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr ::GlobalNamespace::SinglePool* const& __cordl_internal_get__pool() const;

constexpr ::GlobalNamespace::SinglePool*& __cordl_internal_get__pool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prefabToSpawn() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prefabToSpawn() ;

constexpr void __cordl_internal_set__collisionEvents(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  value) ;

constexpr void __cordl_internal_set__extinguishAmount(float_t  value) ;

constexpr void __cordl_internal_set__hasPrefabToSpawn(bool  value) ;

constexpr void __cordl_internal_set__isPrefabInPool(bool  value) ;

constexpr void __cordl_internal_set__lastCollisionTime(double_t  value) ;

constexpr void __cordl_internal_set__maxParticleHitReactionRate(float_t  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value) ;

constexpr void __cordl_internal_set__prefabToSpawn(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5d40150, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlameThrowerParticleCollisionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlameThrowerParticleCollisionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlameThrowerParticleCollisionHandler(FlameThrowerParticleCollisionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlameThrowerParticleCollisionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlameThrowerParticleCollisionHandler(FlameThrowerParticleCollisionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4701};

/// [Tooltip("The defaults are numbers for the flamethrower hair dryer.")]
/// @brief Field _maxParticleHitReactionRate, offset: 0x20, size: 0x4, def value: None
 float_t  ____maxParticleHitReactionRate;

/// [Tooltip("Must be in the global object pool and have a tag.")]
/// [SerializeField]
/// @brief Field _prefabToSpawn, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____prefabToSpawn;

/// [Tooltip("How much to extinguish any hit fire by.")]
/// [SerializeField]
/// @brief Field _extinguishAmount, offset: 0x30, size: 0x4, def value: None
 float_t  ____extinguishAmount;

/// @brief Field _particleSystem, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// @brief Field _collisionEvents, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  ____collisionEvents;

/// @brief Field _hasPrefabToSpawn, offset: 0x48, size: 0x1, def value: None
 bool  ____hasPrefabToSpawn;

/// @brief Field _isPrefabInPool, offset: 0x49, size: 0x1, def value: None
 bool  ____isPrefabInPool;

/// @brief Field _lastCollisionTime, offset: 0x50, size: 0x8, def value: None
 double_t  ____lastCollisionTime;

/// @brief Field _pool, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::SinglePool*  ____pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____maxParticleHitReactionRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____prefabToSpawn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____extinguishAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____particleSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____collisionEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____hasPrefabToSpawn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____isPrefabInPool) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____lastCollisionTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler, ____pool) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::FlameThrowerParticleCollisionHandler) == 0x60, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
