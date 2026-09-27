#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Int3PolygonClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int3PolygonClipper)
namespace Pathfinding {
struct Int3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
struct Int3PolygonClipper;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Voxels::Int3PolygonClipper);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::Int3PolygonClipper, "Pathfinding.Voxels", "Int3PolygonClipper");
// Dependencies 
namespace Pathfinding::Voxels {
// Is value type: true
// CS Name: Pathfinding.Voxels.Int3PolygonClipper
struct CORDL_TYPE Int3PolygonClipper {
public:
// Declarations
/// @brief Method ClipPolygon, addr 0x5ec92ec, size 0x280, virtual false, abstract: false, final false
inline int32_t ClipPolygon(::ArrayW<::Pathfinding::Int3>  vIn, int32_t  n, ::ArrayW<::Pathfinding::Int3>  vOut, int32_t  multi, int32_t  offset, int32_t  axis) ;

/// @brief Method Init, addr 0x5ec9250, size 0x9c, virtual false, abstract: false, final false
inline void Init() ;

// Ctor Parameters []
// @brief default ctor
constexpr Int3PolygonClipper() ;

// Ctor Parameters [CppParam { name: "clipPolygonCache", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipPolygonIntCache", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr Int3PolygonClipper(::ArrayW<float_t>  clipPolygonCache, ::ArrayW<int32_t>  clipPolygonIntCache) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field clipPolygonCache, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  clipPolygonCache;

/// @brief Field clipPolygonIntCache, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  clipPolygonIntCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::Int3PolygonClipper, clipPolygonCache) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::Int3PolygonClipper, clipPolygonIntCache) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::Int3PolygonClipper) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
