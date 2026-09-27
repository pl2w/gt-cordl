#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/LinkedVoxelSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedVoxelSpan)
// Forward declare root types
namespace Pathfinding::Voxels {
struct LinkedVoxelSpan;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::LinkedVoxelSpan);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::LinkedVoxelSpan, "Pathfinding.Voxels", "LinkedVoxelSpan");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.LinkedVoxelSpan
struct CORDL_TYPE LinkedVoxelSpan {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ebf448, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  bottom, uint32_t  top, int32_t  area) ;

/// @brief Method .ctor, addr 0x5ebeb60, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  next) ;

// Ctor Parameters []
// @brief default ctor
constexpr LinkedVoxelSpan() ;

// Ctor Parameters [CppParam { name: "bottom", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "top", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "area", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LinkedVoxelSpan(uint32_t  bottom, uint32_t  top, int32_t  next, int32_t  area) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field bottom, offset: 0x0, size: 0x4, def value: None
 uint32_t  bottom;

/// @brief Field top, offset: 0x4, size: 0x4, def value: None
 uint32_t  top;

/// @brief Field next, offset: 0x8, size: 0x4, def value: None
 int32_t  next;

/// @brief Field area, offset: 0xc, size: 0x4, def value: None
 int32_t  area;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::LinkedVoxelSpan, bottom) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::LinkedVoxelSpan, top) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::LinkedVoxelSpan, next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::LinkedVoxelSpan, area) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::LinkedVoxelSpan) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
