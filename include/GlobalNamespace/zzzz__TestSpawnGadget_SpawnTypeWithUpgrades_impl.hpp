#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSpawnGadget_SpawnTypeWithUpgrades.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_impl.hpp"
#include "GlobalNamespace/zzzz__TestSpawnGadget_SpawnTypeWithUpgrades_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "upgrades", ty: "::ArrayW<::GlobalNamespace::SIUpgradeType>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades::TestSpawnGadget_SpawnTypeWithUpgrades(::UnityW<::GlobalNamespace::GameEntity>  prefab, ::ArrayW<::GlobalNamespace::SIUpgradeType>  upgrades) noexcept  {
this->prefab = prefab;
this->upgrades = upgrades;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades::TestSpawnGadget_SpawnTypeWithUpgrades()   {
}
