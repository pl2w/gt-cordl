#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugSpawnPointChanger_GeoTriggersGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGeoHideShowTrigger_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugSpawnPointChanger_GeoTriggersGroup)
namespace GlobalNamespace {
class GorillaGeoHideShowTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
struct DebugSpawnPointChanger_GeoTriggersGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup, "", "DebugSpawnPointChanger/GeoTriggersGroup");
// Dependencies GorillaGeoHideShowTrigger
namespace GlobalNamespace {
// Is value type: true
// CS Name: DebugSpawnPointChanger/GeoTriggersGroup
struct CORDL_TYPE DebugSpawnPointChanger_GeoTriggersGroup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DebugSpawnPointChanger_GeoTriggersGroup() ;

// Ctor Parameters [CppParam { name: "levelName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "enterTrigger", ty: "::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>", modifiers: "", def_value: None, comment: None }, CppParam { name: "leaveTrigger", ty: "::ArrayW<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "canJumpToIndex", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr DebugSpawnPointChanger_GeoTriggersGroup(::StringW  levelName, ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  enterTrigger, ::ArrayW<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>  leaveTrigger, ::ArrayW<int32_t>  canJumpToIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field levelName, offset: 0x0, size: 0x8, def value: None
 ::StringW  levelName;

/// @brief Field enterTrigger, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>  enterTrigger;

/// @brief Field leaveTrigger, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaGeoHideShowTrigger>>  leaveTrigger;

/// @brief Field canJumpToIndex, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  canJumpToIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup, levelName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup, enterTrigger) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup, leaveTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup, canJumpToIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
