#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGameManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsGameManager)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GT_CustomMapSupportRuntime {
class MapEntity;
}
namespace GlobalNamespace {
class CustomMapsAIBehaviourController;
}
namespace GlobalNamespace {
class CustomMapsGameManager__TEST_Spawn_d__16;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GameAgentManager;
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
class GhostReactorManager;
}
namespace GlobalNamespace {
class IGameEntityZoneComponent;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsGameManager;
}
namespace GlobalNamespace {
class CustomMapsGameManager__TEST_Spawn_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsGameManager*);
MARK_REF_T(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGameManager*, "", "CustomMapsGameManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16*, "", "CustomMapsGameManager/<TEST_Spawn>d__16");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGameManager
class CORDL_TYPE CustomMapsGameManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _TEST_Spawn_d__16 = ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16;

/// @brief Field TEST_index, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_TEST_index, put=__cordl_internal_set_TEST_index)) int32_t  TEST_index;

/// @brief Field agentsToCreateOnZoneInit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_agentsToCreateOnZoneInit, put=setStaticF_agentsToCreateOnZoneInit)) ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  agentsToCreateOnZoneInit;

/// @brief Field customMapsAgents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapsAgents, put=__cordl_internal_set_customMapsAgents)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*  customMapsAgents;

/// @brief Field gameAgentManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameAgentManager, put=__cordl_internal_set_gameAgentManager)) ::UnityW<::GlobalNamespace::GameAgentManager>  gameAgentManager;

/// @brief Field gameEntityManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntityManager, put=__cordl_internal_set_gameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  gameEntityManager;

/// @brief Field ghostReactorManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorManager, put=__cordl_internal_set_ghostReactorManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  ghostReactorManager;

/// @brief Field hasCreatedPlacedEntitiesForZone, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCreatedPlacedEntitiesForZone, put=__cordl_internal_set_hasCreatedPlacedEntitiesForZone)) bool  hasCreatedPlacedEntitiesForZone;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CustomMapsGameManager>  instance;

/// @brief Field spawnCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnCount, put=__cordl_internal_set_spawnCount)) int32_t  spawnCount;

/// @brief Field tempCreateEntitiesList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempCreateEntitiesList, put=setStaticF_tempCreateEntitiesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  tempCreateEntitiesList;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr operator  ::GlobalNamespace::IGameEntityZoneComponent*() noexcept;

/// @brief Method AddAgentsToCreate, addr 0x59c6564, size 0x118, virtual false, abstract: false, final false
static inline void AddAgentsToCreate(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  entitiesToCreate) ;

/// @brief Method Awake, addr 0x59c4aec, size 0x1f8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAgentsToCreate, addr 0x59be794, size 0x98, virtual false, abstract: false, final false
static inline void ClearAgentsToCreate() ;

/// @brief Method CreatePlacedEntities, addr 0x59c4ce8, size 0x8bc, virtual false, abstract: false, final false
inline void CreatePlacedEntities(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  entities) ;

/// @brief Method DeserializeZoneData, addr 0x59c62c4, size 0x4, virtual true, abstract: false, final true
inline void DeserializeZoneData(::System::IO::BinaryReader*  reader) ;

/// @brief Method DeserializeZoneEntityData, addr 0x59c62cc, size 0x4, virtual true, abstract: false, final true
inline void DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method DeserializeZonePlayerData, addr 0x59c62d4, size 0x4, virtual true, abstract: false, final true
inline void DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber) ;

/// @brief Method GetAgentManager, addr 0x59c6398, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameAgentManager> GetAgentManager() ;

/// @brief Method GetBehaviorControllerForEntity, addr 0x59c6458, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> GetBehaviorControllerForEntity(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method GetEntityManager, addr 0x59c62d8, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameEntityManager> GetEntityManager() ;

/// @brief Method IsAuthority, addr 0x59c6068, size 0x20, virtual false, abstract: false, final false
inline bool IsAuthority() ;

/// @brief Method IsDriver, addr 0x59c6088, size 0x50, virtual false, abstract: false, final false
inline bool IsDriver() ;

/// @brief Method IsZoneReady, addr 0x59c61d8, size 0xe0, virtual true, abstract: false, final true
inline bool IsZoneReady() ;

static inline ::GlobalNamespace::CustomMapsGameManager* New_ctor() ;

/// @brief Method OnCreateGameEntity, addr 0x59c62b8, size 0x4, virtual true, abstract: false, final true
inline void OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnPlayerHit, addr 0x59c2dcc, size 0x24, virtual false, abstract: false, final false
inline void OnPlayerHit(::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition) ;

/// @brief Method OnZoneClear, addr 0x59c61c8, size 0x8, virtual true, abstract: false, final true
inline void OnZoneClear(::GlobalNamespace::ZoneClearReason  reason) ;

/// @brief Method OnZoneCreate, addr 0x59c60d8, size 0x4, virtual true, abstract: false, final true
inline void OnZoneCreate() ;

/// @brief Method OnZoneInit, addr 0x59c60dc, size 0xec, virtual true, abstract: false, final true
inline void OnZoneInit() ;

/// @brief Method ProcessMigratedGameEntityCreateData, addr 0x59c5fe4, size 0x8, virtual true, abstract: false, final true
inline int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData) ;

/// @brief Method SerializeZoneData, addr 0x59c62c0, size 0x4, virtual true, abstract: false, final true
inline void SerializeZoneData(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SerializeZoneEntityData, addr 0x59c62c8, size 0x4, virtual true, abstract: false, final true
inline void SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method SerializeZonePlayerData, addr 0x59c62d0, size 0x4, virtual true, abstract: false, final true
inline void SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber) ;

/// @brief Method SetupCollisions, addr 0x59c62bc, size 0x4, virtual false, abstract: false, final false
inline void SetupCollisions(::UnityEngine::GameObject*  go) ;

/// @brief Method ShouldClearZone, addr 0x59c61d0, size 0x8, virtual true, abstract: false, final true
inline bool ShouldClearZone() ;

/// @brief Method SpawnEnemyAtLocation, addr 0x59c586c, size 0x2d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId SpawnEnemyAtLocation(int32_t  enemyTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SpawnEnemyClient, addr 0x59c5b3c, size 0x1d8, virtual false, abstract: false, final false
inline void SpawnEnemyClient(int32_t  enemyTypeId, int32_t  agentId) ;

/// @brief Method SpawnEnemyFromPoint, addr 0x59c56d4, size 0x198, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId SpawnEnemyFromPoint(::StringW  spawnPointId, int32_t  enemyTypeId) ;

/// @brief Method SpawnGrabbableAtLocation, addr 0x59c5d14, size 0x2d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId SpawnGrabbableAtLocation(int32_t  enemyTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Start, addr 0x59c4ce4, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(CustomMapsGameManager::<TEST_Spawn>d__16))]
/// @brief Method TEST_Spawn, addr 0x59c5640, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TEST_Spawn() ;

/// @brief Method TEST_Spawning, addr 0x59c55a4, size 0x9c, virtual false, abstract: false, final false
inline void TEST_Spawning() ;

/// @brief Method ValidateCreateItem, addr 0x59c6060, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method ValidateCreateItemBatchSize, addr 0x59c6058, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateItemBatchSize(int32_t  size) ;

/// @brief Method ValidateCreateMultipleItems, addr 0x59c5ff4, size 0x64, virtual true, abstract: false, final true
inline bool ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount) ;

/// @brief Method ValidateMigratedGameEntity, addr 0x59c5fec, size 0x8, virtual true, abstract: false, final true
inline bool ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr) ;

constexpr int32_t const& __cordl_internal_get_TEST_index() const;

constexpr int32_t& __cordl_internal_get_TEST_index() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>* const& __cordl_internal_get_customMapsAgents() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*& __cordl_internal_get_customMapsAgents() ;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& __cordl_internal_get_gameAgentManager() const;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& __cordl_internal_get_gameAgentManager() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_gameEntityManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_gameEntityManager() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_ghostReactorManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_ghostReactorManager() ;

constexpr bool const& __cordl_internal_get_hasCreatedPlacedEntitiesForZone() const;

constexpr bool& __cordl_internal_get_hasCreatedPlacedEntitiesForZone() ;

constexpr int32_t const& __cordl_internal_get_spawnCount() const;

constexpr int32_t& __cordl_internal_get_spawnCount() ;

constexpr void __cordl_internal_set_TEST_index(int32_t  value) ;

constexpr void __cordl_internal_set_customMapsAgents(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*  value) ;

constexpr void __cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value) ;

constexpr void __cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_hasCreatedPlacedEntitiesForZone(bool  value) ;

constexpr void __cordl_internal_set_spawnCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x59c667c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>* getStaticF_agentsToCreateOnZoneInit() ;

static inline ::UnityW<::GlobalNamespace::CustomMapsGameManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* getStaticF_tempCreateEntitiesList() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* i___GlobalNamespace__IGameEntityZoneComponent() noexcept;

static inline void setStaticF_agentsToCreateOnZoneInit(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value) ;

static inline void setStaticF_tempCreateEntitiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGameManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGameManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGameManager(CustomMapsGameManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGameManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGameManager(CustomMapsGameManager const& ) = delete;

/// @brief Field AGENT_PREFAB_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  AGENT_PREFAB_NAME{u"CustomMapsAIAgent"};

/// @brief Field GRABBABLE_PREFAB_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  GRABBABLE_PREFAB_NAME{u"CustomMapsGrabbableEntity"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2680};

/// @brief Field gameEntityManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___gameEntityManager;

/// @brief Field gameAgentManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgentManager>  ___gameAgentManager;

/// @brief Field ghostReactorManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___ghostReactorManager;

/// @brief Field customMapsAgents, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GT_CustomMapSupportRuntime::AIAgent>>*  ___customMapsAgents;

/// @brief Field hasCreatedPlacedEntitiesForZone, offset: 0x40, size: 0x1, def value: None
 bool  ___hasCreatedPlacedEntitiesForZone;

/// @brief Field TEST_index, offset: 0x44, size: 0x4, def value: None
 int32_t  ___TEST_index;

/// @brief Field spawnCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___spawnCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___gameEntityManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___gameAgentManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___ghostReactorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___customMapsAgents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___hasCreatedPlacedEntitiesForZone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___TEST_index) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager, ___spawnCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGameManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGameManager/<TEST_Spawn>d__16
class CORDL_TYPE CustomMapsGameManager__TEST_Spawn_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CustomMapsGameManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59c6778, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59c68d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59c68d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59c6910, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59c6774, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59c56ac, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGameManager__TEST_Spawn_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGameManager__TEST_Spawn_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGameManager__TEST_Spawn_d__16(CustomMapsGameManager__TEST_Spawn_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGameManager__TEST_Spawn_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGameManager__TEST_Spawn_d__16(CustomMapsGameManager__TEST_Spawn_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2679};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGameManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsGameManager__TEST_Spawn_d__16) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
