#pragma once
// IWYU pragma private; include "GlobalNamespace/GRVendingMachine_VendingEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRVendingMachine_VendingEntry)
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRVendingMachine_VendingEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRVendingMachine_VendingEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRVendingMachine_VendingEntry, "", "GRVendingMachine/VendingEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRVendingMachine/VendingEntry
struct CORDL_TYPE GRVendingMachine_VendingEntry {
public:
// Declarations
/// @brief Method GetEntityTypeId, addr 0x58efaf0, size 0x54, virtual false, abstract: false, final false
inline int32_t GetEntityTypeId() ;

// Ctor Parameters []
// @brief default ctor
constexpr GRVendingMachine_VendingEntry() ;

// Ctor Parameters [CppParam { name: "transportVisual", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityPrefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: None, comment: None }, CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityTypeIdSet", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GRVendingMachine_VendingEntry(::UnityW<::UnityEngine::Transform>  transportVisual, ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab, ::StringW  itemName, int32_t  entityTypeId, bool  entityTypeIdSet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field transportVisual, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transportVisual;

/// @brief Field entityPrefab, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab;

/// @brief Field itemName, offset: 0x10, size: 0x8, def value: None
 ::StringW  itemName;

/// @brief Field entityTypeId, offset: 0x18, size: 0x4, def value: None
 int32_t  entityTypeId;

/// @brief Field entityTypeIdSet, offset: 0x1c, size: 0x1, def value: None
 bool  entityTypeIdSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRVendingMachine_VendingEntry, transportVisual) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine_VendingEntry, entityPrefab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine_VendingEntry, itemName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine_VendingEntry, entityTypeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine_VendingEntry, entityTypeIdSet) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRVendingMachine_VendingEntry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
