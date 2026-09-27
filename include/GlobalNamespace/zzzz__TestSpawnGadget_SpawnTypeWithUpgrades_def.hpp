#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSpawnGadget_SpawnTypeWithUpgrades.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TestSpawnGadget_SpawnTypeWithUpgrades)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Forward declare root types
namespace GlobalNamespace {
struct TestSpawnGadget_SpawnTypeWithUpgrades;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades, "", "TestSpawnGadget/SpawnTypeWithUpgrades");
// Dependencies SIUpgradeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: TestSpawnGadget/SpawnTypeWithUpgrades
struct CORDL_TYPE TestSpawnGadget_SpawnTypeWithUpgrades {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TestSpawnGadget_SpawnTypeWithUpgrades() ;

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "upgrades", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: None, comment: None }]
constexpr TestSpawnGadget_SpawnTypeWithUpgrades(::UnityW<::GlobalNamespace::GameEntity>  prefab, ::ArrayW<::GlobalNamespace::SIUpgradeType>  upgrades) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field prefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  prefab;

/// @brief Field upgrades, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  upgrades;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades, prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades, upgrades) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
