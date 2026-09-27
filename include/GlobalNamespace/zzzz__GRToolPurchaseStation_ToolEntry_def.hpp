#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolPurchaseStation_ToolEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolPurchaseStation_ToolEntry)
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRToolPurchaseStation_ToolEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolPurchaseStation_ToolEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, "", "GRToolPurchaseStation/ToolEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolPurchaseStation/ToolEntry
struct CORDL_TYPE GRToolPurchaseStation_ToolEntry {
public:
// Declarations
/// @brief Method GetEntityTypeId, addr 0x58c57f4, size 0x54, virtual false, abstract: false, final false
inline int32_t GetEntityTypeId() ;

// Ctor Parameters []
// @brief default ctor
constexpr GRToolPurchaseStation_ToolEntry() ;

// Ctor Parameters [CppParam { name: "displayToolParent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityPrefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "toolName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "toolCost", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityTypeIdSet", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GRToolPurchaseStation_ToolEntry(::UnityW<::UnityEngine::Transform>  displayToolParent, ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab, ::StringW  toolName, int32_t  toolCost, int32_t  entityTypeId, bool  entityTypeIdSet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2078};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field displayToolParent, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  displayToolParent;

/// @brief Field entityPrefab, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab;

/// @brief Field toolName, offset: 0x10, size: 0x8, def value: None
 ::StringW  toolName;

/// @brief Field toolCost, offset: 0x18, size: 0x4, def value: None
 int32_t  toolCost;

/// @brief Field entityTypeId, offset: 0x1c, size: 0x4, def value: None
 int32_t  entityTypeId;

/// @brief Field entityTypeIdSet, offset: 0x20, size: 0x1, def value: None
 bool  entityTypeIdSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, displayToolParent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, entityPrefab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, toolName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, toolCost) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, entityTypeId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry, entityTypeIdSet) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolPurchaseStation_ToolEntry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
