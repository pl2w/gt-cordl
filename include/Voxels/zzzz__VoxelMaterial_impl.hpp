#pragma once
// IWYU pragma private; include "Voxels/VoxelMaterial.hpp"
#include "Voxels/zzzz__VoxelMaterial_def.hpp"
#include "Pooling/zzzz__PoolableFX_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hardness", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "digFX", ty: "::UnityW<::Pooling::PoolableFX>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "digBigFX", ty: "::UnityW<::Pooling::PoolableFX>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::VoxelMaterial::VoxelMaterial(::StringW  name, ::UnityW<::UnityEngine::Texture2D>  texture, int32_t  hardness, ::UnityW<::Pooling::PoolableFX>  digFX, ::UnityW<::Pooling::PoolableFX>  digBigFX) noexcept  {
this->name = name;
this->texture = texture;
this->hardness = hardness;
this->digFX = digFX;
this->digBigFX = digBigFX;
}
// Ctor Parameters []
constexpr ::Voxels::VoxelMaterial::VoxelMaterial()   {
}
