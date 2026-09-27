#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelPolygonClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelPolygonClipper)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
struct VoxelPolygonClipper;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::VoxelPolygonClipper);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelPolygonClipper, "Pathfinding.Voxels", "VoxelPolygonClipper");
// [DefaultMember("Item")]
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.VoxelPolygonClipper
struct CORDL_TYPE VoxelPolygonClipper {
public:
// Declarations
 __declspec(property(put=set_Item)) int32_t  Item;

/// @brief Method ClipPolygonAlongX, addr 0x5ec8d08, size 0x244, virtual false, abstract: false, final false
inline void ClipPolygonAlongX(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset) ;

/// @brief Method ClipPolygonAlongZWithY, addr 0x5ec9104, size 0x14c, virtual false, abstract: false, final false
inline void ClipPolygonAlongZWithY(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset) ;

/// @brief Method ClipPolygonAlongZWithYZ, addr 0x5ec8f4c, size 0x1b8, virtual false, abstract: false, final false
inline void ClipPolygonAlongZWithYZ(::by_ref<::Pathfinding::Voxels::VoxelPolygonClipper>  result, float_t  multi, float_t  offset) ;

/// @brief Method .ctor, addr 0x5ec8bf8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method set_Item, addr 0x5ec8c9c, size 0x6c, virtual false, abstract: false, final false
inline void set_Item(int32_t  i, ::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoxelPolygonClipper() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "n", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoxelPolygonClipper(::ArrayW<float_t>  x, ::ArrayW<float_t>  y, ::ArrayW<float_t>  z, int32_t  n) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<float_t>  y;

/// @brief Field z, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  z;

/// @brief Field n, offset: 0x18, size: 0x4, def value: None
 int32_t  n;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelPolygonClipper, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelPolygonClipper, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelPolygonClipper, z) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelPolygonClipper, n) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelPolygonClipper) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
