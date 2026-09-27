#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSpawnGadget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestSpawnGadget)
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
struct TestSpawnGadget_SpawnTypeWithUpgrades;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TestSpawnGadget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestSpawnGadget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestSpawnGadget*, "", "TestSpawnGadget");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestSpawnGadget
class CORDL_TYPE TestSpawnGadget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnTypeWithUpgrades = ::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades;

/// @brief Field skipEntityList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_skipEntityList, put=__cordl_internal_set_skipEntityList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  skipEntityList;

/// @brief Field spawnAllGadgets, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnAllGadgets, put=__cordl_internal_set_spawnAllGadgets)) bool  spawnAllGadgets;

/// @brief Field spawnBatchSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnBatchSize, put=__cordl_internal_set_spawnBatchSize)) int32_t  spawnBatchSize;

/// @brief Field testSpawnList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_testSpawnList, put=__cordl_internal_set_testSpawnList)) ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*  testSpawnList;

static inline ::GlobalNamespace::TestSpawnGadget* New_ctor() ;

/// @brief Method Spawn, addr 0x5bf8208, size 0x34c, virtual false, abstract: false, final false
inline void Spawn(::GlobalNamespace::GameEntityManager*  gameEntityManager) ;

/// @brief Method SpawnGadgetBatch, addr 0x5bf8554, size 0x12c, virtual false, abstract: false, final false
inline void SpawnGadgetBatch(::GlobalNamespace::GameEntityManager*  gameEntityManager, ::GlobalNamespace::GameEntity*  entityToSpawn, ::GlobalNamespace::SIUpgradeSet  upgrades) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_skipEntityList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_skipEntityList() ;

constexpr bool const& __cordl_internal_get_spawnAllGadgets() const;

constexpr bool& __cordl_internal_get_spawnAllGadgets() ;

constexpr int32_t const& __cordl_internal_get_spawnBatchSize() const;

constexpr int32_t& __cordl_internal_get_spawnBatchSize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>* const& __cordl_internal_get_testSpawnList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*& __cordl_internal_get_testSpawnList() ;

constexpr void __cordl_internal_set_skipEntityList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_spawnAllGadgets(bool  value) ;

constexpr void __cordl_internal_set_spawnBatchSize(int32_t  value) ;

constexpr void __cordl_internal_set_testSpawnList(::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*  value) ;

/// @brief Method .ctor, addr 0x5bf8680, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestSpawnGadget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestSpawnGadget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestSpawnGadget(TestSpawnGadget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestSpawnGadget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestSpawnGadget(TestSpawnGadget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{396};

/// @brief Field spawnBatchSize, offset: 0x20, size: 0x4, def value: None
 int32_t  ___spawnBatchSize;

/// @brief Field testSpawnList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*  ___testSpawnList;

/// @brief Field spawnAllGadgets, offset: 0x30, size: 0x1, def value: None
 bool  ___spawnAllGadgets;

/// @brief Field skipEntityList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___skipEntityList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestSpawnGadget, ___spawnBatchSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSpawnGadget, ___testSpawnList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSpawnGadget, ___spawnAllGadgets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSpawnGadget, ___skipEntityList) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestSpawnGadget) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
