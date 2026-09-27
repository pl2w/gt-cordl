#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent_MeshSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DestructibleMeshComponent_MeshSegment)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DestructibleMeshComponent_MeshSegment);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, "Meta.XR.MRUtilityKit", "DestructibleMeshComponent/MeshSegment");
// Dependencies UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.DestructibleMeshComponent/MeshSegment
struct CORDL_TYPE DestructibleMeshComponent_MeshSegment {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DestructibleMeshComponent_MeshSegment() ;

// Ctor Parameters [CppParam { name: "positions", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }]
constexpr DestructibleMeshComponent_MeshSegment(::ArrayW<::UnityEngine::Vector3>  positions, ::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field positions, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  positions;

/// @brief Field indices, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  indices;

/// @brief Field uv, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  uv;

/// @brief Field tangents, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  tangents;

/// @brief Field colors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  colors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, indices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, tangents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment, colors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DestructibleMeshComponent_MeshSegment) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
