#pragma once
// IWYU pragma private; include "Pathfinding/ObjImporter_meshStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjImporter_meshStruct)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ObjImporter_meshStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjImporter_meshStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjImporter_meshStruct, "Pathfinding", "ObjImporter/meshStruct");
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.ObjImporter/meshStruct
struct CORDL_TYPE ObjImporter_meshStruct {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ObjImporter_meshStruct() ;

// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "faceData", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ObjImporter_meshStruct(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Vector3>  faceData, ::StringW  fileName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Field normals, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  normals;

/// @brief Field uv, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv;

/// @brief Field triangles, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  triangles;

/// @brief Field faceData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  faceData;

/// @brief Field fileName, offset: 0x28, size: 0x8, def value: None
 ::StringW  fileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, normals) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, triangles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, faceData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjImporter_meshStruct, fileName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjImporter_meshStruct) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
