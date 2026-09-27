#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry_MeshMaterial.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_MeshMaterial_def.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshMaterials", ty: "::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial::MetaXRAcousticGeometry_MeshMaterial(::UnityW<::UnityEngine::Mesh>  mesh, ::UnityW<::UnityEngine::Transform>  meshTransform, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  meshMaterials) noexcept  {
this->mesh = mesh;
this->meshTransform = meshTransform;
this->meshMaterials = meshMaterials;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial::MetaXRAcousticGeometry_MeshMaterial()   {
}
