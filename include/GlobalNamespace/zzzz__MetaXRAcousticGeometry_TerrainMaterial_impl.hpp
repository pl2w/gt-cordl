#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_TerrainMaterial.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_TerrainMaterial_def.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
// Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "terrainMaterials", ty: "::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "treePrototypeMeshes", ty: "::ArrayW<::UnityW<::UnityEngine::Mesh>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial::MetaXRAcousticGeometry_TerrainMaterial(::UnityW<::UnityEngine::Terrain>  terrain, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  terrainMaterials, ::ArrayW<::UnityW<::UnityEngine::Mesh>>  treePrototypeMeshes) noexcept  {
this->terrain = terrain;
this->terrainMaterials = terrainMaterials;
this->treePrototypeMeshes = treePrototypeMeshes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial::MetaXRAcousticGeometry_TerrainMaterial()   {
}
