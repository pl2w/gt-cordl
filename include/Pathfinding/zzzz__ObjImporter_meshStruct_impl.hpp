#pragma once
// IWYU pragma private; include "Pathfinding/ObjImporter_meshStruct.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__ObjImporter_meshStruct_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "faceData", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ObjImporter_meshStruct::ObjImporter_meshStruct(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  faceData, ::StringW  fileName) noexcept  {
this->vertices = vertices;
this->normals = normals;
this->uv = uv;
this->triangles = triangles;
this->faceData = faceData;
this->fileName = fileName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjImporter_meshStruct::ObjImporter_meshStruct()   {
}
