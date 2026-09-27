#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CombinerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdMeshCombinerPrefab_CombinerInfo)
namespace GlobalNamespace {
class EdMeshCombinerModifierUVOffset;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CombinerInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, "GorillaTag.Rendering", "EdMeshCombinerPrefab/CombinerInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.EdMeshCombinerPrefab/CombinerInfo
struct CORDL_TYPE EdMeshCombinerPrefab_CombinerInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerPrefab_CombinerInfo() ;

// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvOffsetModifier", ty: "::UnityW<::GlobalNamespace::EdMeshCombinerModifierUVOffset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "subMeshIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isSkinnedMesh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EdMeshCombinerPrefab_CombinerInfo(::UnityW<::UnityEngine::MeshFilter>  meshFilter, ::UnityW<::UnityEngine::Renderer>  renderer, ::UnityW<::GlobalNamespace::EdMeshCombinerModifierUVOffset>  uvOffsetModifier, int32_t  subMeshIndex, bool  isSkinnedMesh, int32_t  layer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field meshFilter, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field renderer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field uvOffsetModifier, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EdMeshCombinerModifierUVOffset>  uvOffsetModifier;

/// @brief Field subMeshIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  subMeshIndex;

/// @brief Field isSkinnedMesh, offset: 0x1c, size: 0x1, def value: None
 bool  isSkinnedMesh;

/// @brief Field layer, offset: 0x20, size: 0x4, def value: None
 int32_t  layer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, meshFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, renderer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, uvOffsetModifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, subMeshIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, isSkinnedMesh) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo, layer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
