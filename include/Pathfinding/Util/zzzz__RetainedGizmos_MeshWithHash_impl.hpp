#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos_MeshWithHash.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_MeshWithHash_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lines", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RetainedGizmos_MeshWithHash::RetainedGizmos_MeshWithHash(uint64_t  hash, ::UnityW<::UnityEngine::Mesh>  mesh, bool  lines) noexcept  {
this->hash = hash;
this->mesh = mesh;
this->lines = lines;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RetainedGizmos_MeshWithHash::RetainedGizmos_MeshWithHash()   {
}
