#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/CompactVoxelSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompactVoxelSpan)
// Forward declare root types
namespace Pathfinding::Voxels {
struct CompactVoxelSpan;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::CompactVoxelSpan);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::CompactVoxelSpan, "Pathfinding.Voxels", "CompactVoxelSpan");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.CompactVoxelSpan
struct CORDL_TYPE CompactVoxelSpan {
public:
// Declarations
/// @brief Method GetConnection, addr 0x5ebfa70, size 0x18, virtual false, abstract: false, final false
inline int32_t GetConnection(int32_t  dir) ;

/// @brief Method SetConnection, addr 0x5ebfa44, size 0x2c, virtual false, abstract: false, final false
inline void SetConnection(int32_t  dir, uint32_t  value) ;

/// @brief Method .ctor, addr 0x5ebfa30, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint16_t  bottom, uint32_t  height) ;

// Ctor Parameters []
// @brief default ctor
constexpr CompactVoxelSpan() ;

// Ctor Parameters [CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "con", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reg", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompactVoxelSpan(uint16_t  y, uint32_t  con, uint32_t  h, int32_t  reg) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field y, offset: 0x0, size: 0x2, def value: None
 uint16_t  y;

/// @brief Field con, offset: 0x4, size: 0x4, def value: None
 uint32_t  con;

/// @brief Field h, offset: 0x8, size: 0x4, def value: None
 uint32_t  h;

/// @brief Field reg, offset: 0xc, size: 0x4, def value: None
 int32_t  reg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelSpan, y) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelSpan, con) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelSpan, h) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::CompactVoxelSpan, reg) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::CompactVoxelSpan) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
