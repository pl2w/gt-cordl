#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CombinerCriteria.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityLayer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdMeshCombinerPrefab_CombinerCriteria)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class PhysicsMaterial;
}
// Forward declare root types
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CombinerCriteria;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, "GorillaTag.Rendering", "EdMeshCombinerPrefab/CombinerCriteria");
// Dependencies UnityLayer
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.EdMeshCombinerPrefab/CombinerCriteria
struct CORDL_TYPE EdMeshCombinerPrefab_CombinerCriteria {
public:
// Declarations
/// @brief Method GetHashCode, addr 0x5d58eb8, size 0xd8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerPrefab_CombinerCriteria() ;

// Ctor Parameters [CppParam { name: "mat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "staticFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightmapIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasMeshCollider", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshCollPhysicsMat", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfOverrideIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfExtraVelMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfExtraVelMaxMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfSendOnTapEvent", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectLayer", ty: "::GlobalNamespace::UnityLayer", modifiers: "", def_value: None, comment: None }]
constexpr EdMeshCombinerPrefab_CombinerCriteria(::UnityW<::UnityEngine::Material>  mat, int32_t  staticFlags, int32_t  lightmapIndex, bool  hasMeshCollider, ::UnityW<::UnityEngine::PhysicsMaterial>  meshCollPhysicsMat, int32_t  surfOverrideIndex, float_t  surfExtraVelMultiplier, float_t  surfExtraVelMaxMultiplier, bool  surfSendOnTapEvent, ::GlobalNamespace::UnityLayer  objectLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field mat, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  mat;

/// @brief Field staticFlags, offset: 0x8, size: 0x4, def value: None
 int32_t  staticFlags;

/// @brief Field lightmapIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  lightmapIndex;

/// @brief Field hasMeshCollider, offset: 0x10, size: 0x1, def value: None
 bool  hasMeshCollider;

/// @brief Field meshCollPhysicsMat, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  meshCollPhysicsMat;

/// @brief Field surfOverrideIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  surfOverrideIndex;

/// @brief Field surfExtraVelMultiplier, offset: 0x24, size: 0x4, def value: None
 float_t  surfExtraVelMultiplier;

/// @brief Field surfExtraVelMaxMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  surfExtraVelMaxMultiplier;

/// @brief Field surfSendOnTapEvent, offset: 0x2c, size: 0x1, def value: None
 bool  surfSendOnTapEvent;

/// @brief Field objectLayer, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::UnityLayer  objectLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, mat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, staticFlags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, lightmapIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, hasMeshCollider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, meshCollPhysicsMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, surfOverrideIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, surfExtraVelMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, surfExtraVelMaxMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, surfSendOnTapEvent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria, objectLayer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
