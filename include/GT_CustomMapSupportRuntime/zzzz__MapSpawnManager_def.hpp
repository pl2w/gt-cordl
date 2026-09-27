#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapSpawnManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapSpawnManager)
namespace GT_CustomMapSupportRuntime {
class MapEntity;
}
namespace GT_CustomMapSupportRuntime {
class MapSpawnPoint;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapSpawnManager;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapSpawnManager*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapSpawnManager*, "GT_CustomMapSupportRuntime", "MapSpawnManager");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapSpawnManager
class CORDL_TYPE MapSpawnManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entityTypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityTypes, put=__cordl_internal_set_entityTypes)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  entityTypes;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>  instance;

/// @brief Field spawnPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoints, put=__cordl_internal_set_spawnPoints)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*  spawnPoints;

/// @brief Method Awake, addr 0x9cb7430, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindSpawnPoints, addr 0x9cb7684, size 0x10c, virtual false, abstract: false, final false
inline void FindSpawnPoints() ;

/// [NullableContext(2)]
/// @brief Method GetEntityType, addr 0x9cb77f8, size 0xb4, virtual false, abstract: false, final false
inline bool GetEntityType(int32_t  enemyTypeIndex, ::by_ref<::UnityEngine::GameObject*>  newEntity) ;

/// @brief Method GetEntityTypeTemplates, addr 0x9cb751c, size 0x168, virtual false, abstract: false, final false
inline void GetEntityTypeTemplates() ;

/// @brief Method GetSpawnPoint, addr 0x9cb7790, size 0x68, virtual false, abstract: false, final false
inline bool GetSpawnPoint(::StringW  spawnPointID, ::by_ref<::GT_CustomMapSupportRuntime::MapSpawnPoint*>  spawnPoint) ;

static inline ::GT_CustomMapSupportRuntime::MapSpawnManager* New_ctor() ;

/// [NullableContext(2)]
/// @brief Method SpawnEntity, addr 0x9cb7abc, size 0x164, virtual false, abstract: false, final false
inline bool SpawnEntity(int32_t  enemyTypeIndex, ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>  newEnemy) ;

/// @brief Method SpawnEntity, addr 0x9cb78ac, size 0x210, virtual false, abstract: false, final false
inline bool SpawnEntity(::StringW  spawnPointID, int32_t  enemyTypeIndex, /* [Nullable(2)] */ ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>  newEntity) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_entityTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_entityTypes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>* const& __cordl_internal_get_spawnPoints() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*& __cordl_internal_get_spawnPoints() ;

constexpr void __cordl_internal_set_entityTypes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_spawnPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*  value) ;

/// @brief Method .ctor, addr 0x9cb7c20, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager> getStaticF_instance() ;

/// @brief Method get_HasInstance, addr 0x9cb73e8, size 0x48, virtual false, abstract: false, final false
static inline bool get_HasInstance() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapSpawnManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapSpawnManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapSpawnManager(MapSpawnManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapSpawnManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapSpawnManager(MapSpawnManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30914};

/// @brief Field entityTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ___entityTypes;

/// @brief Field spawnPoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*  ___spawnPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MapSpawnManager, ___entityTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapSpawnManager, ___spawnPoints) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MapSpawnManager) == 0x30, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
