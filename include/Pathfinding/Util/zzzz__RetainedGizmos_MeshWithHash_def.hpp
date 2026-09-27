#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos_MeshWithHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetainedGizmos_MeshWithHash)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct RetainedGizmos_MeshWithHash;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RetainedGizmos_MeshWithHash);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RetainedGizmos_MeshWithHash, "Pathfinding.Util", "RetainedGizmos/MeshWithHash");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Util.RetainedGizmos/MeshWithHash
struct CORDL_TYPE RetainedGizmos_MeshWithHash {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RetainedGizmos_MeshWithHash() ;

// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lines", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RetainedGizmos_MeshWithHash(uint64_t  hash, ::UnityW<::UnityEngine::Mesh>  mesh, bool  lines) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21490};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hash, offset: 0x0, size: 0x8, def value: None
 uint64_t  hash;

/// @brief Field mesh, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field lines, offset: 0x10, size: 0x1, def value: None
 bool  lines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RetainedGizmos_MeshWithHash, hash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RetainedGizmos_MeshWithHash, mesh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RetainedGizmos_MeshWithHash, lines) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RetainedGizmos_MeshWithHash) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
