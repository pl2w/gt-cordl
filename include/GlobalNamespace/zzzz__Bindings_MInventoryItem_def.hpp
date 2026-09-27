#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_MInventoryItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_MInventoryItem)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_MInventoryItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_MInventoryItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_MInventoryItem, "", "Bindings/MInventoryItem");
// [BurstCompile]
// Dependencies Unity.Collections.FixedString512Bytes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/MInventoryItem
struct CORDL_TYPE Bindings_MInventoryItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_MInventoryItem() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Quantity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InGameId", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayName", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayDescription", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cordl_ID", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_MInventoryItem(::Unity::Collections::FixedString512Bytes  Name, int32_t  Quantity, ::Unity::Collections::FixedString512Bytes  InGameId, ::Unity::Collections::FixedString512Bytes  DisplayName, ::Unity::Collections::FixedString512Bytes  DisplayDescription, ::Unity::Collections::FixedString512Bytes  _cordl_ID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa04};

/// @brief Field Name, offset: 0x0, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  Name;

/// @brief Field Quantity, offset: 0x200, size: 0x4, def value: None
 int32_t  Quantity;

/// @brief Field InGameId, offset: 0x204, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  InGameId;

/// @brief Field DisplayName, offset: 0x404, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  DisplayName;

/// @brief Field DisplayDescription, offset: 0x604, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  DisplayDescription;

/// @brief Field ID, offset: 0x804, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  _cordl_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, Quantity) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, InGameId) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, DisplayName) == 0x404, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, DisplayDescription) == 0x604, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MInventoryItem, _cordl_ID) == 0x804, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_MInventoryItem) == 0xa04, "Size mismatch!");

} // namespace end def GlobalNamespace
