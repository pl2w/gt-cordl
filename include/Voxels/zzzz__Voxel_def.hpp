#pragma once
// IWYU pragma private; include "Voxels/Voxel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Voxel)
// Forward declare root types
namespace Voxels {
struct Voxel;
}
// Write type traits
MARK_VAL_T(::Voxels::Voxel);
DEFINE_IL2CPP_CLASS(::Voxels::Voxel, "Voxels", "Voxel");
// Dependencies 
namespace Voxels {
// Is value type: true
// CS Name: Voxels.Voxel
struct CORDL_TYPE Voxel {
public:
// Declarations
/// @brief Method .ctor, addr 0x5dc41bc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint8_t  material, uint8_t  density) ;

// Ctor Parameters []
// @brief default ctor
constexpr Voxel() ;

// Ctor Parameters [CppParam { name: "Material", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Density", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Voxel(uint8_t  Material, uint8_t  Density) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field Material, offset: 0x0, size: 0x1, def value: None
 uint8_t  Material;

/// @brief Field Density, offset: 0x1, size: 0x1, def value: None
 uint8_t  Density;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::Voxel, Material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::Voxel, Density) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Voxels::Voxel) == 0x2, "Size mismatch!");

} // namespace end def Voxels
