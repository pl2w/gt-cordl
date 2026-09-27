#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilderJob_TextVertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GeometryBuilderJob_TextVertex)
// Forward declare root types
namespace GlobalNamespace {
struct GeometryBuilderJob_TextVertex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GeometryBuilderJob_TextVertex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeometryBuilderJob_TextVertex, "Drawing", "GeometryBuilderJob/TextVertex");
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.GeometryBuilderJob/TextVertex
struct CORDL_TYPE GeometryBuilderJob_TextVertex {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GeometryBuilderJob_TextVertex() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr GeometryBuilderJob_TextVertex(::Unity::Mathematics::float3  position, ::UnityEngine::Color32  color, ::Unity::Mathematics::float2  uv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field color, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Color32  color;

/// @brief Field uv, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::float2  uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_TextVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_TextVertex, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_TextVertex, uv) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeometryBuilderJob_TextVertex) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
