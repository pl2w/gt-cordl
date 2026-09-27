#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityIndexer_DecalEntityItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityIndexer_DecalEntityItem)
// Forward declare root types
namespace GlobalNamespace {
struct DecalEntityIndexer_DecalEntityItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem, "UnityEngine.Rendering.Universal", "DecalEntityIndexer/DecalEntityItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalEntityIndexer/DecalEntityItem
struct CORDL_TYPE DecalEntityIndexer_DecalEntityItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DecalEntityIndexer_DecalEntityItem() ;

// Ctor Parameters [CppParam { name: "chunkIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "arrayIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecalEntityIndexer_DecalEntityItem(int32_t  chunkIndex, int32_t  arrayIndex, int32_t  version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field chunkIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  chunkIndex;

/// @brief Field arrayIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  arrayIndex;

/// @brief Field version, offset: 0x8, size: 0x4, def value: None
 int32_t  version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem, chunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem, arrayIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem, version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecalEntityIndexer_DecalEntityItem) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
