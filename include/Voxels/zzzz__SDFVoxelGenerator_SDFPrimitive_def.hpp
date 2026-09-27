#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator_SDFPrimitive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Operation_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Shape_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFVoxelGenerator_SDFPrimitive)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace GlobalNamespace {
struct SDFVoxelGenerator_SDFPrimitive;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, "Voxels", "SDFVoxelGenerator/SDFPrimitive");
// Dependencies Unity.Mathematics.float3, Voxels.SDFVoxelGenerator::Operation, Voxels.SDFVoxelGenerator::Shape
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.SDFVoxelGenerator/SDFPrimitive
struct CORDL_TYPE SDFVoxelGenerator_SDFPrimitive {
public:
// Declarations
 __declspec(property(get=get_ShowRadius)) bool  ShowRadius;

 __declspec(property(get=get_ShowSize)) bool  ShowSize;

/// @brief Method GetBounds, addr 0x5db0b58, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method get_ShowRadius, addr 0x5db0ebc, size 0x10, virtual false, abstract: false, final false
inline bool get_ShowRadius() ;

/// @brief Method get_ShowSize, addr 0x5db0ecc, size 0x10, virtual false, abstract: false, final false
inline bool get_ShowSize() ;

// Ctor Parameters []
// @brief default ctor
constexpr SDFVoxelGenerator_SDFPrimitive() ;

// Ctor Parameters [CppParam { name: "Operation", ty: "::GlobalNamespace::SDFVoxelGenerator_Operation", modifiers: "", def_value: None, comment: None }, CppParam { name: "Shape", ty: "::GlobalNamespace::SDFVoxelGenerator_Shape", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Material", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr SDFVoxelGenerator_SDFPrimitive(::GlobalNamespace::SDFVoxelGenerator_Operation  Operation, ::GlobalNamespace::SDFVoxelGenerator_Shape  Shape, ::Unity::Mathematics::float3  Position, float_t  Radius, ::Unity::Mathematics::float3  Size, uint8_t  Material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Operation, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SDFVoxelGenerator_Operation  Operation;

/// @brief Field Shape, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::SDFVoxelGenerator_Shape  Shape;

/// @brief Field Position, offset: 0x8, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Radius, offset: 0x14, size: 0x4, def value: None
 float_t  Radius;

/// @brief Field Size, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Size;

/// @brief Field Material, offset: 0x24, size: 0x1, def value: None
 uint8_t  Material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Shape) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Radius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, Material) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
