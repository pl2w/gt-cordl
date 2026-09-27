#pragma once
// IWYU pragma private; include "Voxels/VoxelScoreBoard_VoxelScoreEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelScoreBoard_VoxelScoreEntry)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelScoreBoard_VoxelScoreEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry, "Voxels", "VoxelScoreBoard/VoxelScoreEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.VoxelScoreBoard/VoxelScoreEntry
struct CORDL_TYPE VoxelScoreBoard_VoxelScoreEntry {
public:
// Declarations
/// @brief Method Add, addr 0x5dcfa14, size 0x74, virtual false, abstract: false, final false
inline void Add(::ArrayW<int32_t>  resources) ;

/// @brief Method .ctor, addr 0x5dcf8e4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  actorNumber) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelScoreBoard_VoxelScoreEntry() ;

// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "amount1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "amount2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "amount3", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelScoreBoard_VoxelScoreEntry(int32_t  actorNumber, int32_t  amount1, int32_t  amount2, int32_t  amount3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5076};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field actorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  actorNumber;

/// @brief Field amount1, offset: 0x4, size: 0x4, def value: None
 int32_t  amount1;

/// @brief Field amount2, offset: 0x8, size: 0x4, def value: None
 int32_t  amount2;

/// @brief Field amount3, offset: 0xc, size: 0x4, def value: None
 int32_t  amount3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry, actorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry, amount1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry, amount2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry, amount3) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
