#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSummonedEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRSummonedEntity)
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGRSummoningEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSummonedEntity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSummonedEntity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSummonedEntity*, "", "GRSummonedEntity");
// Dependencies GameEntityId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSummonedEntity
class CORDL_TYPE GRSummonedEntity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field summoner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_summoner, put=__cordl_internal_set_summoner)) ::GlobalNamespace::IGRSummoningEntity*  summoner;

/// @brief Field summonerEntityId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_summonerEntityId, put=__cordl_internal_set_summonerEntityId)) ::GlobalNamespace::GameEntityId  summonerEntityId;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x58b7730, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindSummoner, addr 0x58b78a0, size 0x120, virtual false, abstract: false, final false
inline ::GlobalNamespace::IGRSummoningEntity* FindSummoner() ;

/// @brief Method GetSummonerID, addr 0x58b79c0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId GetSummonerID() ;

static inline ::GlobalNamespace::GRSummonedEntity* New_ctor() ;

/// @brief Method OnEntityDestroy, addr 0x58b79c8, size 0xb4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58b7788, size 0x118, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58b7a7c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::GlobalNamespace::IGRSummoningEntity* const& __cordl_internal_get_summoner() const;

constexpr ::GlobalNamespace::IGRSummoningEntity*& __cordl_internal_get_summoner() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get_summonerEntityId() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get_summonerEntityId() ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_summoner(::GlobalNamespace::IGRSummoningEntity*  value) ;

constexpr void __cordl_internal_set_summonerEntityId(::GlobalNamespace::GameEntityId  value) ;

/// @brief Method .ctor, addr 0x58b7a80, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSummonedEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSummonedEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSummonedEntity(GRSummonedEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSummonedEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSummonedEntity(GRSummonedEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2048};

/// @brief Field summonerEntityId, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  ___summonerEntityId;

/// @brief Field entity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field summoner, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::IGRSummoningEntity*  ___summoner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSummonedEntity, ___summonerEntityId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonedEntity, ___entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSummonedEntity, ___summoner) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSummonedEntity) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
