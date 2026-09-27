#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_SectionType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelSection)
namespace GlobalNamespace {
class GREntitySpawnPoint;
}
namespace GlobalNamespace {
class GRHazardousMaterial;
}
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
struct GameEntityCreateData;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactorLevelSectionConnector;
}
namespace GlobalNamespace {
struct GhostReactorLevelSection_SectionType;
}
namespace GlobalNamespace {
class GhostReactorLevelSection_SpawnPointGroup;
}
namespace GlobalNamespace {
class GhostReactorSpawnConfig;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
struct SRand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelSection;
}
namespace GlobalNamespace {
class GhostReactorLevelSection_SpawnPointGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelSection*);
MARK_REF_T(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelSection*, "", "GhostReactorLevelSection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*, "", "GhostReactorLevelSection/SpawnPointGroup");
// Dependencies GhostReactorLevelSection::SectionType, GhostReactorLevelSection::SpawnPointGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelSection
class CORDL_TYPE GhostReactorLevelSection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SectionType = ::GlobalNamespace::GhostReactorLevelSection_SectionType;

using SpawnPointGroup = ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup;

 __declspec(property(get=get_Anchor)) ::UnityW<::UnityEngine::Transform>  Anchor;

 __declspec(property(get=get_Anchors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  Anchors;

 __declspec(property(get=get_BoundingCollider)) ::UnityW<::UnityEngine::BoxCollider>  BoundingCollider;

 __declspec(property(get=get_Type)) ::GlobalNamespace::GhostReactorLevelSection_SectionType  Type;

/// @brief Field anchorTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorTransform, put=__cordl_internal_set_anchorTransform)) ::UnityW<::UnityEngine::Transform>  anchorTransform;

/// @brief Field anchors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchors, put=__cordl_internal_set_anchors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  anchors;

/// @brief Field boundingCollider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundingCollider, put=__cordl_internal_set_boundingCollider)) ::UnityW<::UnityEngine::BoxCollider>  boundingCollider;

/// @brief Field hazardousMaterials, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hazardousMaterials, put=__cordl_internal_set_hazardousMaterials)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*  hazardousMaterials;

/// @brief Field hidden, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_hidden, put=__cordl_internal_set_hidden)) bool  hidden;

/// @brief Field hubAnchorIndex, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_hubAnchorIndex, put=__cordl_internal_set_hubAnchorIndex)) int32_t  hubAnchorIndex;

/// @brief Field index, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field patrolPaths, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPaths, put=__cordl_internal_set_patrolPaths)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*  patrolPaths;

/// @brief Field prePlacedGameEntities, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_prePlacedGameEntities, put=__cordl_internal_set_prePlacedGameEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  prePlacedGameEntities;

/// @brief Field renderers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field rotatingIndexForRespawn, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotatingIndexForRespawn, put=__cordl_internal_set_rotatingIndexForRespawn)) int32_t  rotatingIndexForRespawn;

/// @brief Field sectionConnector, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sectionConnector, put=__cordl_internal_set_sectionConnector)) ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  sectionConnector;

/// @brief Field sectionType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sectionType, put=__cordl_internal_set_sectionType)) ::GlobalNamespace::GhostReactorLevelSection_SectionType  sectionType;

/// @brief Field spawnConfigs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnConfigs, put=__cordl_internal_set_spawnConfigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  spawnConfigs;

/// @brief Field spawnPointGroupLookup, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPointGroupLookup, put=__cordl_internal_set_spawnPointGroupLookup)) ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>  spawnPointGroupLookup;

/// @brief Field spawnPointGroups, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPointGroups, put=__cordl_internal_set_spawnPointGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*  spawnPointGroups;

/// @brief Field tempCreateEntitiesList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempCreateEntitiesList, put=setStaticF_tempCreateEntitiesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  tempCreateEntitiesList;

/// @brief Method Awake, addr 0x584d910, size 0x6e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAnchor, addr 0x584f274, size 0x58, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAnchor(int32_t  anchorIndex) ;

/// @brief Method GetDistSq, addr 0x584f218, size 0x5c, virtual false, abstract: false, final false
inline float_t GetDistSq(::UnityEngine::Vector3  pos) ;

/// @brief Method GetPatrolPath, addr 0x584efa8, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GetPatrolPath(int32_t  patrolPathIndex) ;

/// @brief Method Hide, addr 0x584f02c, size 0xfc, virtual false, abstract: false, final false
inline void Hide(bool  hide) ;

/// @brief Method InitLevelSection, addr 0x584e0f8, size 0xa4, virtual false, abstract: false, final false
inline void InitLevelSection(int32_t  sectionIndex, ::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GhostReactorLevelSection* New_ctor() ;

/// @brief Method RandomizeIndices, addr 0x584dff8, size 0x100, virtual false, abstract: false, final false
static inline void RandomizeIndices(::System::Collections::Generic::List_1<int32_t>*  list, int32_t  count, ::by_ref<::GlobalNamespace::SRand>  randomGenerator) ;

/// @brief Method RespawnEntity, addr 0x584ed6c, size 0x23c, virtual false, abstract: false, final false
inline void RespawnEntity(::by_ref<::GlobalNamespace::SRand>  randomGenerator, ::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  entityId, int64_t  entityCreateData, ::GlobalNamespace::GameEntityId  createdByEntityId) ;

/// @brief Method SpawnSectionEntities, addr 0x584e19c, size 0xb20, virtual false, abstract: false, final false
inline void SpawnSectionEntities(::by_ref<::GlobalNamespace::SRand>  randomGenerator, ::GlobalNamespace::GameEntityManager*  gameEntityManager, ::GlobalNamespace::GhostReactor*  reactor, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  spawnConfigs, float_t  respawnCount) ;

/// @brief Method UpdateDisable, addr 0x584f128, size 0xf0, virtual false, abstract: false, final false
inline void UpdateDisable(::UnityEngine::Vector3  playerPos) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchorTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchorTransform() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_anchors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_anchors() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_boundingCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_boundingCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>* const& __cordl_internal_get_hazardousMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*& __cordl_internal_get_hazardousMaterials() ;

constexpr bool const& __cordl_internal_get_hidden() const;

constexpr bool& __cordl_internal_get_hidden() ;

constexpr int32_t const& __cordl_internal_get_hubAnchorIndex() const;

constexpr int32_t& __cordl_internal_get_hubAnchorIndex() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>* const& __cordl_internal_get_patrolPaths() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*& __cordl_internal_get_patrolPaths() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_prePlacedGameEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_prePlacedGameEntities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr int32_t const& __cordl_internal_get_rotatingIndexForRespawn() const;

constexpr int32_t& __cordl_internal_get_rotatingIndexForRespawn() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector> const& __cordl_internal_get_sectionConnector() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>& __cordl_internal_get_sectionConnector() ;

constexpr ::GlobalNamespace::GhostReactorLevelSection_SectionType const& __cordl_internal_get_sectionType() const;

constexpr ::GlobalNamespace::GhostReactorLevelSection_SectionType& __cordl_internal_get_sectionType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>* const& __cordl_internal_get_spawnConfigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*& __cordl_internal_get_spawnConfigs() ;

constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*> const& __cordl_internal_get_spawnPointGroupLookup() const;

constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>& __cordl_internal_get_spawnPointGroupLookup() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* const& __cordl_internal_get_spawnPointGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*& __cordl_internal_get_spawnPointGroups() ;

constexpr void __cordl_internal_set_anchorTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_anchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_boundingCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_hazardousMaterials(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*  value) ;

constexpr void __cordl_internal_set_hidden(bool  value) ;

constexpr void __cordl_internal_set_hubAnchorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_patrolPaths(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*  value) ;

constexpr void __cordl_internal_set_prePlacedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_rotatingIndexForRespawn(int32_t  value) ;

constexpr void __cordl_internal_set_sectionConnector(::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  value) ;

constexpr void __cordl_internal_set_sectionType(::GlobalNamespace::GhostReactorLevelSection_SectionType  value) ;

constexpr void __cordl_internal_set_spawnConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  value) ;

constexpr void __cordl_internal_set_spawnPointGroupLookup(::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>  value) ;

constexpr void __cordl_internal_set_spawnPointGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*  value) ;

/// @brief Method .ctor, addr 0x584f2cc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* getStaticF_tempCreateEntitiesList() ;

/// @brief Method get_Anchor, addr 0x584d8f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Anchor() ;

/// @brief Method get_Anchors, addr 0x584d8f8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_Anchors() ;

/// @brief Method get_BoundingCollider, addr 0x584d908, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::BoxCollider> get_BoundingCollider() ;

/// @brief Method get_Type, addr 0x584d900, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GhostReactorLevelSection_SectionType get_Type() ;

static inline void setStaticF_tempCreateEntitiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelSection(GhostReactorLevelSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelSection(GhostReactorLevelSection const& ) = delete;

/// @brief Field HIDE_DIST offset 0xffffffff size 0x4
static constexpr float_t  HIDE_DIST{static_cast<float_t>(36.0f)};

/// @brief Field MAX_CREATE_PER_RPC offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CREATE_PER_RPC{static_cast<int32_t>(0x19)};

/// @brief Field SHOW_DIST offset 0xffffffff size 0x4
static constexpr float_t  SHOW_DIST{static_cast<float_t>(32.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1817};

/// [SerializeField]
/// @brief Field sectionType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorLevelSection_SectionType  ___sectionType;

/// [SerializeField]
/// [Tooltip("Single Anchor Transform used for End Caps and Blockers")]
/// @brief Field anchorTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchorTransform;

/// [SerializeField]
/// [Tooltip("A List of Anchors used as in and out connections for Hubs")]
/// @brief Field anchors, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___anchors;

/// [SerializeField]
/// @brief Field spawnPointGroups, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*  ___spawnPointGroups;

/// [SerializeField]
/// @brief Field spawnConfigs, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  ___spawnConfigs;

/// [SerializeField]
/// @brief Field patrolPaths, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*  ___patrolPaths;

/// [SerializeField]
/// @brief Field boundingCollider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___boundingCollider;

/// @brief Field renderers, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// @brief Field hidden, offset: 0x60, size: 0x1, def value: None
 bool  ___hidden;

/// @brief Field hazardousMaterials, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*  ___hazardousMaterials;

/// [HideInInspector]
/// @brief Field sectionConnector, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  ___sectionConnector;

/// [HideInInspector]
/// @brief Field hubAnchorIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  ___hubAnchorIndex;

/// @brief Field index, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field spawnPointGroupLookup, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>  ___spawnPointGroupLookup;

/// @brief Field prePlacedGameEntities, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___prePlacedGameEntities;

/// @brief Field rotatingIndexForRespawn, offset: 0x90, size: 0x4, def value: None
 int32_t  ___rotatingIndexForRespawn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___sectionType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___anchorTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___anchors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___spawnPointGroups) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___spawnConfigs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___patrolPaths) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___boundingCollider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___renderers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___hidden) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___hazardousMaterials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___sectionConnector) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___hubAnchorIndex) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___index) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___spawnPointGroupLookup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___prePlacedGameEntities) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection, ___rotatingIndexForRespawn) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelSection) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GhostReactorSpawnConfig::SpawnPointType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelSection/SpawnPointGroup
class CORDL_TYPE GhostReactorLevelSection_SpawnPointGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentIndex, put=set_CurrentIndex)) int32_t  CurrentIndex;

 __declspec(property(get=get_NeedsRandomization, put=set_NeedsRandomization)) bool  NeedsRandomization;

 __declspec(property(get=get_SpawnPointIndexes, put=set_SpawnPointIndexes)) ::System::Collections::Generic::List_1<int32_t>*  SpawnPointIndexes;

/// @brief Field currentIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field needsRandomization, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsRandomization, put=__cordl_internal_set_needsRandomization)) bool  needsRandomization;

/// @brief Field spawnPointIndexes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPointIndexes, put=__cordl_internal_set_spawnPointIndexes)) ::System::Collections::Generic::List_1<int32_t>*  spawnPointIndexes;

/// @brief Field spawnPoints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoints, put=__cordl_internal_set_spawnPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*  spawnPoints;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  type;

/// @brief Method GetNextSpawnPoint, addr 0x584ecbc, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GREntitySpawnPoint> GetNextSpawnPoint() ;

static inline ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr bool const& __cordl_internal_get_needsRandomization() const;

constexpr bool& __cordl_internal_get_needsRandomization() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_spawnPointIndexes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_spawnPointIndexes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>* const& __cordl_internal_get_spawnPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*& __cordl_internal_get_spawnPoints() ;

constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_needsRandomization(bool  value) ;

constexpr void __cordl_internal_set_spawnPointIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_spawnPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  value) ;

/// @brief Method .ctor, addr 0x584f420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentIndex, addr 0x584f400, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentIndex() ;

/// @brief Method get_NeedsRandomization, addr 0x584f3f0, size 0x8, virtual false, abstract: false, final false
inline bool get_NeedsRandomization() ;

/// @brief Method get_SpawnPointIndexes, addr 0x584f410, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_SpawnPointIndexes() ;

/// @brief Method set_CurrentIndex, addr 0x584f408, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentIndex(int32_t  value) ;

/// @brief Method set_NeedsRandomization, addr 0x584f3f8, size 0x8, virtual false, abstract: false, final false
inline void set_NeedsRandomization(bool  value) ;

/// @brief Method set_SpawnPointIndexes, addr 0x584f418, size 0x8, virtual false, abstract: false, final false
inline void set_SpawnPointIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelSection_SpawnPointGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSection_SpawnPointGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelSection_SpawnPointGroup(GhostReactorLevelSection_SpawnPointGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelSection_SpawnPointGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelSection_SpawnPointGroup(GhostReactorLevelSection_SpawnPointGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1816};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  ___type;

/// @brief Field spawnPoints, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*  ___spawnPoints;

/// @brief Field spawnPointIndexes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___spawnPointIndexes;

/// @brief Field needsRandomization, offset: 0x28, size: 0x1, def value: None
 bool  ___needsRandomization;

/// @brief Field currentIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___currentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup, ___spawnPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup, ___spawnPointIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup, ___needsRandomization) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup, ___currentIndex) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
