#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_TerrainMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetaXRAcousticGeometry_TerrainMaterial)
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_TerrainMaterial;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial, "", "MetaXRAcousticGeometry/TerrainMaterial");
// Dependencies Meta.XR.Acoustics.IMaterialDataProvider, UnityEngine.Mesh
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAcousticGeometry/TerrainMaterial
struct CORDL_TYPE MetaXRAcousticGeometry_TerrainMaterial {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry_TerrainMaterial() ;

// Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: None, comment: None }, CppParam { name: "terrainMaterials", ty: "::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "treePrototypeMeshes", ty: "::ArrayW<::UnityW<::UnityEngine::Mesh>>", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAcousticGeometry_TerrainMaterial(::UnityW<::UnityEngine::Terrain>  terrain, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  terrainMaterials, ::ArrayW<::UnityW<::UnityEngine::Mesh>>  treePrototypeMeshes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field terrain, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field terrainMaterials, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  terrainMaterials;

/// @brief Field treePrototypeMeshes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Mesh>>  treePrototypeMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial, terrain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial, terrainMaterials) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial, treePrototypeMeshes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
