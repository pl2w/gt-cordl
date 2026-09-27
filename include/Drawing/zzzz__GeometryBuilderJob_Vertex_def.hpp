#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilderJob_Vertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GeometryBuilderJob_Vertex)
// Forward declare root types
namespace GlobalNamespace {
struct GeometryBuilderJob_Vertex;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GeometryBuilderJob_Vertex);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeometryBuilderJob_Vertex, "Drawing", "GeometryBuilderJob/Vertex");
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.GeometryBuilderJob/Vertex
struct CORDL_TYPE GeometryBuilderJob_Vertex {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GeometryBuilderJob_Vertex() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr GeometryBuilderJob_Vertex(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  uv2, ::UnityEngine::Color32  color, ::Unity::Mathematics::float2  uv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field uv2, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  uv2;

/// @brief Field color, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Color32  color;

/// @brief Field uv, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  uv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_Vertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_Vertex, uv2) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_Vertex, color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilderJob_Vertex, uv) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeometryBuilderJob_Vertex) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
