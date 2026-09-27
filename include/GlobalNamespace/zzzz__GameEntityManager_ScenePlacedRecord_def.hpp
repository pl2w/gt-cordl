#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ScenePlacedRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameEntityManager_ScenePlacedRecord)
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityManager_ScenePlacedRecord;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityManager_ScenePlacedRecord);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ScenePlacedRecord, "", "GameEntityManager/ScenePlacedRecord");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityManager/ScenePlacedRecord
struct CORDL_TYPE GameEntityManager_ScenePlacedRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ScenePlacedRecord() ;

// Ctor Parameters [CppParam { name: "entity", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "uniformScale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityManager_ScenePlacedRecord(::UnityW<::GlobalNamespace::GameEntity>  entity, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  uniformScale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field entity, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field uniformScale, offset: 0x24, size: 0x4, def value: None
 float_t  uniformScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_ScenePlacedRecord, entity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ScenePlacedRecord, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ScenePlacedRecord, rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ScenePlacedRecord, uniformScale) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_ScenePlacedRecord) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
