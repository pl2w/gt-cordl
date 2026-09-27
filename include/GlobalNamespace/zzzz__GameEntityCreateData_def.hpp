#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityCreateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityCreateData)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityCreateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityCreateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityCreateData, "", "GameEntityCreateData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityCreateData
struct CORDL_TYPE GameEntityCreateData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityCreateData() ;

// Ctor Parameters [CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "createData", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "createdByEntityId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "slotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityCreateData(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityId, int32_t  slotIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field entityTypeId, offset: 0x0, size: 0x4, def value: None
 int32_t  entityTypeId;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field createData, offset: 0x20, size: 0x8, def value: None
 int64_t  createData;

/// @brief Field createdByEntityId, offset: 0x28, size: 0x4, def value: None
 int32_t  createdByEntityId;

/// @brief Field slotIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  slotIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, entityTypeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, rotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, createData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, createdByEntityId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityCreateData, slotIndex) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityCreateData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
