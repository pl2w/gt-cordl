#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableSubMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableSubMesh)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTableSubMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTableSubMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableSubMesh, "", "BuilderTableSubMesh");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderTableSubMesh
struct CORDL_TYPE BuilderTableSubMesh {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableSubMesh() ;

// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startVertex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTableSubMesh(int32_t  startIndex, int32_t  indexCount, int32_t  startVertex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field startIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  startIndex;

/// @brief Field indexCount, offset: 0x4, size: 0x4, def value: None
 int32_t  indexCount;

/// @brief Field startVertex, offset: 0x8, size: 0x4, def value: None
 int32_t  startVertex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableSubMesh, startIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSubMesh, indexCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableSubMesh, startVertex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableSubMesh) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
