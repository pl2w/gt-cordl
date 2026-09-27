#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakableItemSpawnConfig_ItemProbability.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GRBreakableItemSpawnConfig_ItemProbability)
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRBreakableItemSpawnConfig_ItemProbability;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability, "", "GRBreakableItemSpawnConfig/ItemProbability");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRBreakableItemSpawnConfig/ItemProbability
struct CORDL_TYPE GRBreakableItemSpawnConfig_ItemProbability {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRBreakableItemSpawnConfig_ItemProbability() ;

// Ctor Parameters [CppParam { name: "entity", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probability", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GRBreakableItemSpawnConfig_ItemProbability(::UnityW<::GlobalNamespace::GameEntity>  entity, float_t  probability) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field entity, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field probability, offset: 0x8, size: 0x4, def value: None
 float_t  probability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability, entity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability, probability) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
