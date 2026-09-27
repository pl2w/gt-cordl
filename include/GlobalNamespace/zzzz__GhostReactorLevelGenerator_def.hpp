#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_NodeType_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelGenerator)
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GhostReactorLevelDepthConfig;
}
namespace GlobalNamespace {
struct GhostReactorLevelGeneratorV2_TreeLevelConfig;
}
namespace GlobalNamespace {
struct GhostReactorLevelGenerator_NodeType;
}
namespace GlobalNamespace {
class GhostReactorLevelGenerator_Node;
}
namespace GlobalNamespace {
class GhostReactorLevelSectionConnector;
}
namespace GlobalNamespace {
class GhostReactorLevelSection;
}
namespace GlobalNamespace {
class GhostReactorSpawnConfig;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelGenerator;
}
namespace GlobalNamespace {
class GhostReactorLevelGenerator_Node;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelGenerator*);
MARK_REF_T(::GlobalNamespace::GhostReactorLevelGenerator_Node*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGenerator*, "", "GhostReactorLevelGenerator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGenerator_Node*, "", "GhostReactorLevelGenerator/Node");
// Dependencies MonoBehaviourTick, SRand, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelGenerator
class CORDL_TYPE GhostReactorLevelGenerator : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using Node = ::GlobalNamespace::GhostReactorLevelGenerator_Node;

using NodeType = ::GlobalNamespace::GhostReactorLevelGenerator_NodeType;

 __declspec(property(get=get_TreeLevels)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*  TreeLevels;

/// @brief Field blockerOrder, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockerOrder, put=__cordl_internal_set_blockerOrder)) ::System::Collections::Generic::List_1<int32_t>*  blockerOrder;

/// @brief Field connectorOrder, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectorOrder, put=__cordl_internal_set_connectorOrder)) ::System::Collections::Generic::List_1<int32_t>*  connectorOrder;

/// @brief Field depthConfigIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthConfigIndex, put=__cordl_internal_set_depthConfigIndex)) int32_t  depthConfigIndex;

/// @brief Field depthConfigs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthConfigs, put=__cordl_internal_set_depthConfigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*  depthConfigs;

/// @brief Field endCapOrder, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_endCapOrder, put=__cordl_internal_set_endCapOrder)) ::System::Collections::Generic::List_1<int32_t>*  endCapOrder;

/// @brief Field entryAnchorOrder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryAnchorOrder, put=__cordl_internal_set_entryAnchorOrder)) ::System::Collections::Generic::List_1<int32_t>*  entryAnchorOrder;

/// @brief Field flip180, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get_flip180, put=__cordl_internal_set_flip180)) ::UnityEngine::Quaternion  flip180;

/// @brief Field generationOutput, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_generationOutput, put=__cordl_internal_set_generationOutput)) ::StringW  generationOutput;

/// @brief Field hubOrder, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hubOrder, put=__cordl_internal_set_hubOrder)) ::System::Collections::Generic::List_1<int32_t>*  hubOrder;

/// @brief Field mainHub, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainHub, put=__cordl_internal_set_mainHub)) ::UnityW<::GlobalNamespace::GhostReactorLevelSection>  mainHub;

/// @brief Field mainHubSpawnConfigs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainHubSpawnConfigs, put=__cordl_internal_set_mainHubSpawnConfigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  mainHubSpawnConfigs;

/// @brief Field nextVisCheckNodeIndex, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextVisCheckNodeIndex, put=__cordl_internal_set_nextVisCheckNodeIndex)) int32_t  nextVisCheckNodeIndex;

/// @brief Field nodeList, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeList, put=__cordl_internal_set_nodeList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*  nodeList;

/// @brief Field nodeTree, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeTree, put=__cordl_internal_set_nodeTree)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*  nodeTree;

/// @brief Field nonOverlapZones, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonOverlapZones, put=__cordl_internal_set_nonOverlapZones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  nonOverlapZones;

/// @brief Field randomGenerator, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomGenerator, put=__cordl_internal_set_randomGenerator)) ::GlobalNamespace::SRand  randomGenerator;

/// @brief Field reactor, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field seed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field spawnedHubHashSet, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedHubHashSet, put=__cordl_internal_set_spawnedHubHashSet)) ::System::Collections::Generic::HashSet_1<::StringW>*  spawnedHubHashSet;

/// @brief Field testColliderA, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_testColliderA, put=__cordl_internal_set_testColliderA)) ::UnityW<::UnityEngine::BoxCollider>  testColliderA;

/// @brief Field testColliderB, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_testColliderB, put=__cordl_internal_set_testColliderB)) ::UnityW<::UnityEngine::BoxCollider>  testColliderB;

/// @brief Field treeParents, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeParents, put=__cordl_internal_set_treeParents)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  treeParents;

/// @brief Method Awake, addr 0x5848788, size 0x1c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearLevelSections, addr 0x584ba58, size 0x360, virtual false, abstract: false, final false
inline void ClearLevelSections() ;

/// @brief Method DebugClear, addr 0x584bebc, size 0x4, virtual false, abstract: false, final false
inline void DebugClear() ;

/// @brief Method DebugGenerate, addr 0x5849e1c, size 0x8, virtual false, abstract: false, final false
inline void DebugGenerate() ;

/// @brief Method Generate, addr 0x5849e24, size 0x1c34, virtual false, abstract: false, final false
inline void Generate(int32_t  inputSeed) ;

/// @brief Method GetCurrentNode, addr 0x584c558, size 0x194, virtual false, abstract: false, final false
inline ::GlobalNamespace::GhostReactorLevelGenerator_Node* GetCurrentNode(::UnityEngine::Vector3  pos) ;

/// @brief Method GetExitFromCurrentSection, addr 0x584c220, size 0x338, virtual false, abstract: false, final false
inline bool GetExitFromCurrentSection(::UnityEngine::Vector3  pos, ::by_ref<::UnityEngine::Vector3>  exitPos, ::by_ref<::UnityEngine::Quaternion>  exitRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  connectorCorners) ;

/// @brief Method GetPatrolPath, addr 0x5844b70, size 0x98, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GetPatrolPath(int64_t  createData) ;

/// @brief Method GetTreeLevels, addr 0x584847c, size 0x30c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GetTreeLevels() ;

/// @brief Method Init, addr 0x584894c, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GhostReactorLevelGenerator* New_ctor() ;

/// @brief Method RandomizeIndices, addr 0x584bdb8, size 0x104, virtual false, abstract: false, final false
inline void RandomizeIndices(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  list, int32_t  count) ;

/// @brief Method RespawnEntity, addr 0x58454ec, size 0xc8, virtual false, abstract: false, final false
inline void RespawnEntity(int32_t  entityId, int64_t  entityCreateData, ::GlobalNamespace::GameEntityId  createdByEntityId) ;

/// @brief Method SpawnEntitiesInEachSection, addr 0x584bec0, size 0x360, virtual false, abstract: false, final false
inline void SpawnEntitiesInEachSection(float_t  respawnCount) ;

/// @brief Method TestForCollision, addr 0x5848e90, size 0xf8c, virtual false, abstract: false, final false
inline bool TestForCollision(::GlobalNamespace::GhostReactorLevelSection*  section, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  selfi, int32_t  selfj, int32_t  selfk) ;

/// @brief Method Tick, addr 0x5848954, size 0x358, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TreeLevelIsEnabledNow, addr 0x5848cac, size 0x1e4, virtual false, abstract: false, final false
static inline bool TreeLevelIsEnabledNow(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig  treeLevel) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_blockerOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_blockerOrder() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_connectorOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_connectorOrder() ;

constexpr int32_t const& __cordl_internal_get_depthConfigIndex() const;

constexpr int32_t& __cordl_internal_get_depthConfigIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>* const& __cordl_internal_get_depthConfigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*& __cordl_internal_get_depthConfigs() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_endCapOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_endCapOrder() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_entryAnchorOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_entryAnchorOrder() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_flip180() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_flip180() ;

constexpr ::StringW const& __cordl_internal_get_generationOutput() const;

constexpr ::StringW& __cordl_internal_get_generationOutput() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_hubOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_hubOrder() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection> const& __cordl_internal_get_mainHub() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection>& __cordl_internal_get_mainHub() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>* const& __cordl_internal_get_mainHubSpawnConfigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*& __cordl_internal_get_mainHubSpawnConfigs() ;

constexpr int32_t const& __cordl_internal_get_nextVisCheckNodeIndex() const;

constexpr int32_t& __cordl_internal_get_nextVisCheckNodeIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* const& __cordl_internal_get_nodeList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*& __cordl_internal_get_nodeList() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>* const& __cordl_internal_get_nodeTree() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*& __cordl_internal_get_nodeTree() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_nonOverlapZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_nonOverlapZones() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get_randomGenerator() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get_randomGenerator() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_spawnedHubHashSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_spawnedHubHashSet() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_testColliderA() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_testColliderA() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_testColliderB() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_testColliderB() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_treeParents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_treeParents() ;

constexpr void __cordl_internal_set_blockerOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_connectorOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_depthConfigIndex(int32_t  value) ;

constexpr void __cordl_internal_set_depthConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*  value) ;

constexpr void __cordl_internal_set_endCapOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_entryAnchorOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_flip180(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_generationOutput(::StringW  value) ;

constexpr void __cordl_internal_set_hubOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_mainHub(::UnityW<::GlobalNamespace::GhostReactorLevelSection>  value) ;

constexpr void __cordl_internal_set_mainHubSpawnConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  value) ;

constexpr void __cordl_internal_set_nextVisCheckNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*  value) ;

constexpr void __cordl_internal_set_nodeTree(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*  value) ;

constexpr void __cordl_internal_set_nonOverlapZones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_randomGenerator(::GlobalNamespace::SRand  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_spawnedHubHashSet(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_testColliderA(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_testColliderB(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_treeParents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x584c6ec, size 0x11fc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TreeLevels, addr 0x5848478, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* get_TreeLevels() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelGenerator(GhostReactorLevelGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelGenerator(GhostReactorLevelGenerator const& ) = delete;

/// @brief Field MAX_VIS_CHECKS_PER_FRAME offset 0xffffffff size 0x4
static constexpr int32_t  MAX_VIS_CHECKS_PER_FRAME{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1814};

/// @brief Field depthConfigs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*  ___depthConfigs;

/// [SerializeField]
/// @brief Field mainHub, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelSection>  ___mainHub;

/// [SerializeField]
/// @brief Field mainHubSpawnConfigs, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  ___mainHubSpawnConfigs;

/// [SerializeField]
/// @brief Field nonOverlapZones, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___nonOverlapZones;

/// @brief Field seed, offset: 0x48, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field nodeTree, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*  ___nodeTree;

/// @brief Field nodeList, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*  ___nodeList;

/// @brief Field spawnedHubHashSet, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___spawnedHubHashSet;

/// @brief Field hubOrder, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___hubOrder;

/// @brief Field connectorOrder, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___connectorOrder;

/// @brief Field endCapOrder, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___endCapOrder;

/// @brief Field blockerOrder, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___blockerOrder;

/// @brief Field entryAnchorOrder, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___entryAnchorOrder;

/// @brief Field treeParents, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___treeParents;

/// @brief Field generationOutput, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___generationOutput;

/// @brief Field randomGenerator, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ___randomGenerator;

/// @brief Field testColliderA, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___testColliderA;

/// @brief Field testColliderB, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___testColliderB;

/// @brief Field reactor, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field depthConfigIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___depthConfigIndex;

/// @brief Field flip180, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___flip180;

/// @brief Field nextVisCheckNodeIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___nextVisCheckNodeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___depthConfigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___mainHub) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___mainHubSpawnConfigs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___nonOverlapZones) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___seed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___nodeTree) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___nodeList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___spawnedHubHashSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___hubOrder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___connectorOrder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___endCapOrder) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___blockerOrder) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___entryAnchorOrder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___treeParents) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___generationOutput) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___randomGenerator) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___testColliderA) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___testColliderB) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___reactor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___depthConfigIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___flip180) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator, ___nextVisCheckNodeIndex) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGenerator) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GhostReactorLevelGenerator::NodeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelGenerator/Node
class CORDL_TYPE GhostReactorLevelGenerator_Node : public ::System::Object {
public:
// Declarations
/// @brief Field anchorCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchorCount, put=__cordl_internal_set_anchorCount)) int32_t  anchorCount;

/// @brief Field anchorOrder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOrder, put=__cordl_internal_set_anchorOrder)) ::System::Collections::Generic::List_1<int32_t>*  anchorOrder;

/// @brief Field attachAnchorIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachAnchorIndex, put=__cordl_internal_set_attachAnchorIndex)) int32_t  attachAnchorIndex;

/// @brief Field children, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>  children;

/// @brief Field configIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_configIndex, put=__cordl_internal_set_configIndex)) int32_t  configIndex;

/// @brief Field connectorInstance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectorInstance, put=__cordl_internal_set_connectorInstance)) ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  connectorInstance;

/// @brief Field parentAnchorIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_parentAnchorIndex, put=__cordl_internal_set_parentAnchorIndex)) int32_t  parentAnchorIndex;

/// @brief Field sectionInstance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sectionInstance, put=__cordl_internal_set_sectionInstance)) ::UnityW<::GlobalNamespace::GhostReactorLevelSection>  sectionInstance;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::GhostReactorLevelGenerator_NodeType  type;

static inline ::GlobalNamespace::GhostReactorLevelGenerator_Node* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_anchorCount() const;

constexpr int32_t& __cordl_internal_get_anchorCount() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_anchorOrder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_anchorOrder() ;

constexpr int32_t const& __cordl_internal_get_attachAnchorIndex() const;

constexpr int32_t& __cordl_internal_get_attachAnchorIndex() ;

constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*> const& __cordl_internal_get_children() const;

constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>& __cordl_internal_get_children() ;

constexpr int32_t const& __cordl_internal_get_configIndex() const;

constexpr int32_t& __cordl_internal_get_configIndex() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector> const& __cordl_internal_get_connectorInstance() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>& __cordl_internal_get_connectorInstance() ;

constexpr int32_t const& __cordl_internal_get_parentAnchorIndex() const;

constexpr int32_t& __cordl_internal_get_parentAnchorIndex() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection> const& __cordl_internal_get_sectionInstance() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection>& __cordl_internal_get_sectionInstance() ;

constexpr ::GlobalNamespace::GhostReactorLevelGenerator_NodeType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::GhostReactorLevelGenerator_NodeType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_anchorCount(int32_t  value) ;

constexpr void __cordl_internal_set_anchorOrder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_attachAnchorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_children(::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>  value) ;

constexpr void __cordl_internal_set_configIndex(int32_t  value) ;

constexpr void __cordl_internal_set_connectorInstance(::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  value) ;

constexpr void __cordl_internal_set_parentAnchorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sectionInstance(::UnityW<::GlobalNamespace::GhostReactorLevelSection>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::GhostReactorLevelGenerator_NodeType  value) ;

/// @brief Method .ctor, addr 0x584d8e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGenerator_Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenerator_Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelGenerator_Node(GhostReactorLevelGenerator_Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenerator_Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelGenerator_Node(GhostReactorLevelGenerator_Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1813};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GhostReactorLevelGenerator_NodeType  ___type;

/// @brief Field configIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___configIndex;

/// @brief Field parentAnchorIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___parentAnchorIndex;

/// @brief Field attachAnchorIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___attachAnchorIndex;

/// @brief Field anchorCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___anchorCount;

/// @brief Field anchorOrder, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___anchorOrder;

/// @brief Field sectionInstance, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelSection>  ___sectionInstance;

/// @brief Field connectorInstance, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  ___connectorInstance;

/// @brief Field children, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>  ___children;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___configIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___parentAnchorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___attachAnchorIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___anchorCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___anchorOrder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___sectionInstance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___connectorInstance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenerator_Node, ___children) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGenerator_Node) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
