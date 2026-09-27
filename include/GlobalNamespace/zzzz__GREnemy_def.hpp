#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemy)
namespace GlobalNamespace {
class GRDamageFlash;
}
namespace GlobalNamespace {
class GRHealthMeter;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameHittable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GREnemy;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemy*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemy*, "", "GREnemy");
// Dependencies GorillaTagScripts.GhostReactor.GREnemyType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemy
class CORDL_TYPE GREnemy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field damageFlash, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageFlash, put=__cordl_internal_set_damageFlash)) ::GlobalNamespace::GRDamageFlash*  damageFlash;

/// @brief Field enemyType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_enemyType, put=__cordl_internal_set_enemyType)) ::GorillaTagScripts::GhostReactor::GREnemyType  enemyType;

/// @brief Field gameEntity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field healthMeter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_healthMeter, put=__cordl_internal_set_healthMeter)) ::UnityW<::GlobalNamespace::GRHealthMeter>  healthMeter;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr operator  ::GlobalNamespace::IGameHittable*() noexcept;

/// @brief Method Awake, addr 0x587f0cc, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HideObjects, addr 0x587f420, size 0xfc, virtual false, abstract: false, final false
static inline void HideObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objects, bool  hide) ;

/// @brief Method HideRenderers, addr 0x587f324, size 0xfc, virtual false, abstract: false, final false
static inline void HideRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers, bool  hide) ;

/// @brief Method IsHitValid, addr 0x587f64c, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GREnemy* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x587f200, size 0x120, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x587f0e0, size 0x120, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x587f320, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnHit, addr 0x587f654, size 0x24, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnUpdate, addr 0x587f51c, size 0x14, virtual false, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method SetHP, addr 0x587f5b4, size 0x98, virtual false, abstract: false, final false
inline void SetHP(int32_t  newHp) ;

/// @brief Method SetMaxHP, addr 0x587f530, size 0x84, virtual false, abstract: false, final false
inline void SetMaxHP(int32_t  maxHp) ;

constexpr ::GlobalNamespace::GRDamageFlash* const& __cordl_internal_get_damageFlash() const;

constexpr ::GlobalNamespace::GRDamageFlash*& __cordl_internal_get_damageFlash() ;

constexpr ::GorillaTagScripts::GhostReactor::GREnemyType const& __cordl_internal_get_enemyType() const;

constexpr ::GorillaTagScripts::GhostReactor::GREnemyType& __cordl_internal_get_enemyType() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GRHealthMeter> const& __cordl_internal_get_healthMeter() const;

constexpr ::UnityW<::GlobalNamespace::GRHealthMeter>& __cordl_internal_get_healthMeter() ;

constexpr void __cordl_internal_set_damageFlash(::GlobalNamespace::GRDamageFlash*  value) ;

constexpr void __cordl_internal_set_enemyType(::GorillaTagScripts::GhostReactor::GREnemyType  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_healthMeter(::UnityW<::GlobalNamespace::GRHealthMeter>  value) ;

/// @brief Method .ctor, addr 0x587f678, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* i___GlobalNamespace__IGameHittable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemy(GREnemy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemy(GREnemy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1932};

/// @brief Field healthMeter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRHealthMeter>  ___healthMeter;

/// @brief Field enemyType, offset: 0x28, size: 0x4, def value: None
 ::GorillaTagScripts::GhostReactor::GREnemyType  ___enemyType;

/// @brief Field gameEntity, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field damageFlash, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::GRDamageFlash*  ___damageFlash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemy, ___healthMeter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemy, ___enemyType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemy, ___gameEntity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemy, ___damageFlash) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemy) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
