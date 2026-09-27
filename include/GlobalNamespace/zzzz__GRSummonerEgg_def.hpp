#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSummonerEgg.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRSummonerEgg)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
class GRSummonedEntity;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSummonerEgg;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSummonerEgg*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSummonerEgg*, "", "GRSummonerEgg");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSummonerEgg
class CORDL_TYPE GRSummonerEgg : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field entityPrefabToSpawn, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityPrefabToSpawn, put=__cordl_internal_set_entityPrefabToSpawn)) ::UnityW<::GlobalNamespace::GameEntity>  entityPrefabToSpawn;

/// @brief Field hatchAudio, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatchAudio, put=__cordl_internal_set_hatchAudio)) ::UnityW<::UnityEngine::AudioSource>  hatchAudio;

/// @brief Field hatchSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatchSound, put=__cordl_internal_set_hatchSound)) ::GlobalNamespace::AbilitySound*  hatchSound;

/// @brief Field hatchTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hatchTime, put=__cordl_internal_set_hatchTime)) float_t  hatchTime;

/// @brief Field lootTableToSpawn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lootTableToSpawn, put=__cordl_internal_set_lootTableToSpawn)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  lootTableToSpawn;

/// @brief Field maxHatchTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHatchTime, put=__cordl_internal_set_maxHatchTime)) float_t  maxHatchTime;

/// @brief Field minHatchTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHatchTime, put=__cordl_internal_set_minHatchTime)) float_t  minHatchTime;

/// @brief Field spawnOffset, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_spawnOffset, put=__cordl_internal_set_spawnOffset)) ::UnityEngine::Vector3  spawnOffset;

/// @brief Field summonedEntity, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_summonedEntity, put=__cordl_internal_set_summonedEntity)) ::UnityW<::GlobalNamespace::GRSummonedEntity>  summonedEntity;

/// @brief Method Awake, addr 0x58b7ae8, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroySelf, addr 0x58b7fe4, size 0x48, virtual false, abstract: false, final false
inline void DestroySelf() ;

/// @brief Method HatchEgg, addr 0x58b7d14, size 0x2d0, virtual false, abstract: false, final false
inline void HatchEgg() ;

static inline ::GlobalNamespace::GRSummonerEgg* New_ctor() ;

/// @brief Method Start, addr 0x58b7b40, size 0x1d4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entityPrefabToSpawn() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entityPrefabToSpawn() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_hatchAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_hatchAudio() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_hatchSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_hatchSound() ;

constexpr float_t const& __cordl_internal_get_hatchTime() const;

constexpr float_t& __cordl_internal_get_hatchTime() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_lootTableToSpawn() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_lootTableToSpawn() ;

constexpr float_t const& __cordl_internal_get_maxHatchTime() const;

constexpr float_t& __cordl_internal_get_maxHatchTime() ;

constexpr float_t const& __cordl_internal_get_minHatchTime() const;

constexpr float_t& __cordl_internal_get_minHatchTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnOffset() ;

constexpr ::UnityW<::GlobalNamespace::GRSummonedEntity> const& __cordl_internal_get_summonedEntity() const;

constexpr ::UnityW<::GlobalNamespace::GRSummonedEntity>& __cordl_internal_get_summonedEntity() ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_entityPrefabToSpawn(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hatchAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_hatchSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_hatchTime(float_t  value) ;

constexpr void __cordl_internal_set_lootTableToSpawn(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

constexpr void __cordl_internal_set_maxHatchTime(float_t  value) ;

constexpr void __cordl_internal_set_minHatchTime(float_t  value) ;

constexpr void __cordl_internal_set_spawnOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_summonedEntity(::UnityW<::GlobalNamespace::GRSummonedEntity>  value) ;

/// @brief Method .ctor, addr 0x58b802c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSummonerEgg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSummonerEgg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSummonerEgg(GRSummonerEgg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSummonerEgg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSummonerEgg(GRSummonerEgg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2049};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field hatchAudio, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___hatchAudio;

/// @brief Field hatchSound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___hatchSound;

/// @brief Field entityPrefabToSpawn, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entityPrefabToSpawn;

/// @brief Field lootTableToSpawn, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___lootTableToSpawn;

/// @brief Field spawnOffset, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spawnOffset;

/// @brief Field minHatchTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___minHatchTime;

/// @brief Field maxHatchTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___maxHatchTime;

/// @brief Field hatchTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___hatchTime;

/// @brief Field summonedEntity, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRSummonedEntity>  ___summonedEntity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___hatchAudio) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___hatchSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___entityPrefabToSpawn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___lootTableToSpawn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___spawnOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___minHatchTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___maxHatchTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___hatchTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonerEgg, ___summonedEntity) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSummonerEgg) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
