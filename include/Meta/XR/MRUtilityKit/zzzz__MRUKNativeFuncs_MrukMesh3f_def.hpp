#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukMesh3f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukMesh3f)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukMesh3f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukMesh3f");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukMesh3f
struct CORDL_TYPE MRUKNativeFuncs_MrukMesh3f {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukMesh3f() ;

// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::Vector3*", modifiers: "", def_value: None, comment: None }, CppParam { name: "numVertices", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "uint32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "numIndices", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukMesh3f(::UnityEngine::Vector3*  vertices, uint32_t  numVertices, uint32_t*  indices, uint32_t  numIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector3*  vertices;

/// @brief Field numVertices, offset: 0x8, size: 0x4, def value: None
 uint32_t  numVertices;

/// @brief Field indices, offset: 0x10, size: 0x8, def value: None
 uint32_t*  indices;

/// @brief Field numIndices, offset: 0x18, size: 0x4, def value: None
 uint32_t  numIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f, numVertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f, indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f, numIndices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukMesh3f) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
