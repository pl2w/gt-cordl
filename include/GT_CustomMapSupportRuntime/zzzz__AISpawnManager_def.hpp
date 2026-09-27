#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AISpawnManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AISpawnManager)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GT_CustomMapSupportRuntime {
class AISpawnPoint;
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
class AISpawnManager;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::AISpawnManager*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AISpawnManager*, "GT_CustomMapSupportRuntime", "AISpawnManager");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.AISpawnManager
class CORDL_TYPE AISpawnManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enemyTypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemyTypes, put=__cordl_internal_set_enemyTypes)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  enemyTypes;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>  instance;

/// @brief Field spawnPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoints, put=__cordl_internal_set_spawnPoints)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*  spawnPoints;

/// @brief Method Awake, addr 0x9cb0f30, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindSpawnPoints, addr 0x9cb1184, size 0x10c, virtual false, abstract: false, final false
inline void FindSpawnPoints() ;

/// [NullableContext(2)]
/// @brief Method GetEnemyType, addr 0x9cb12f8, size 0xb4, virtual false, abstract: false, final false
inline bool GetEnemyType(int32_t  enemyTypeIndex, ::by_ref<::UnityEngine::GameObject*>  newEnemy) ;

/// @brief Method GetEnemyTypeTemplates, addr 0x9cb101c, size 0x168, virtual false, abstract: false, final false
inline void GetEnemyTypeTemplates() ;

/// @brief Method GetSpawnPoint, addr 0x9cb1290, size 0x68, virtual false, abstract: false, final false
inline bool GetSpawnPoint(::StringW  spawnPointID, ::by_ref<::GT_CustomMapSupportRuntime::AISpawnPoint*>  spawnPoint) ;

static inline ::GT_CustomMapSupportRuntime::AISpawnManager* New_ctor() ;

/// [NullableContext(2)]
/// @brief Method SpawnEnemy, addr 0x9cb15bc, size 0x164, virtual false, abstract: false, final false
inline bool SpawnEnemy(int32_t  enemyTypeIndex, ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>  newEnemy) ;

/// @brief Method SpawnEnemy, addr 0x9cb13ac, size 0x210, virtual false, abstract: false, final false
inline bool SpawnEnemy(::StringW  spawnPointID, int32_t  enemyTypeIndex, /* [Nullable(2)] */ ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>  newEnemy) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_enemyTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_enemyTypes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>* const& __cordl_internal_get_spawnPoints() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*& __cordl_internal_get_spawnPoints() ;

constexpr void __cordl_internal_set_enemyTypes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_spawnPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*  value) ;

/// @brief Method .ctor, addr 0x9cb1720, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager> getStaticF_instance() ;

/// @brief Method get_HasInstance, addr 0x9cb0ee8, size 0x48, virtual false, abstract: false, final false
static inline bool get_HasInstance() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AISpawnManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AISpawnManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AISpawnManager(AISpawnManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AISpawnManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AISpawnManager(AISpawnManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30876};

/// @brief Field enemyTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ___enemyTypes;

/// @brief Field spawnPoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*  ___spawnPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::AISpawnManager, ___enemyTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::AISpawnManager, ___spawnPoints) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::AISpawnManager) == 0x30, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
