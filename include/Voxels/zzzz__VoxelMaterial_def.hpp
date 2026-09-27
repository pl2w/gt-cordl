#pragma once
// IWYU pragma private; include "Voxels/VoxelMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelMaterial)
namespace Pooling {
class PoolableFX;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Voxels {
struct VoxelMaterial;
}
// Write type traits
MARK_VAL_T(::Voxels::VoxelMaterial);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelMaterial, "Voxels", "VoxelMaterial");
// Dependencies 
namespace Voxels {
// Is value type: true
// CS Name: Voxels.VoxelMaterial
struct CORDL_TYPE VoxelMaterial {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMaterial() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hardness", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "digFX", ty: "::UnityW<::Pooling::PoolableFX>", modifiers: "", def_value: None, comment: None }, CppParam { name: "digBigFX", ty: "::UnityW<::Pooling::PoolableFX>", modifiers: "", def_value: None, comment: None }]
constexpr VoxelMaterial(::StringW  name, ::UnityW<::UnityEngine::Texture2D>  texture, int32_t  hardness, ::UnityW<::Pooling::PoolableFX>  digFX, ::UnityW<::Pooling::PoolableFX>  digBigFX) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5073};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field texture, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field hardness, offset: 0x10, size: 0x4, def value: None
 int32_t  hardness;

/// @brief Field digFX, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Pooling::PoolableFX>  digFX;

/// @brief Field digBigFX, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pooling::PoolableFX>  digBigFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelMaterial, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterial, texture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterial, hardness) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterial, digFX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelMaterial, digBigFX) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelMaterial) == 0x28, "Size mismatch!");

} // namespace end def Voxels
