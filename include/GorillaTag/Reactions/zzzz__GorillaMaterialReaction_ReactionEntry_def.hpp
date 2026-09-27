#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_ReactionEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_GameObjectStates_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMaterialReaction_ReactionEntry)
namespace GlobalNamespace {
struct GorillaMaterialReaction_GameObjectStates;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMaterialReaction_ReactionEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMaterialReaction_ReactionEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMaterialReaction_ReactionEntry, "GorillaTag.Reactions", "GorillaMaterialReaction/ReactionEntry");
// Dependencies GorillaTag.Reactions.GorillaMaterialReaction::GameObjectStates
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction/ReactionEntry
struct CORDL_TYPE GorillaMaterialReaction_ReactionEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction_ReactionEntry() ;

// Ctor Parameters [CppParam { name: "statusMaterialIndexes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameObjectStates", ty: "::ArrayW<::GlobalNamespace::GorillaMaterialReaction_GameObjectStates>", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMaterialReaction_ReactionEntry(::ArrayW<int32_t>  statusMaterialIndexes, ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_GameObjectStates>  gameObjectStates) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("If any of these statuses are true then this reaction will be executed.")]
/// @brief Field statusMaterialIndexes, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  statusMaterialIndexes;

/// @brief Field gameObjectStates, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_GameObjectStates>  gameObjectStates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_ReactionEntry, statusMaterialIndexes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_ReactionEntry, gameObjectStates) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMaterialReaction_ReactionEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
