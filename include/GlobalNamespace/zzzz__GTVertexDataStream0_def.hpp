#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStream0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTVertexDataStream0)
// Forward declare root types
namespace GlobalNamespace {
struct GTVertexDataStream0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTVertexDataStream0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTVertexDataStream0, "", "GTVertexDataStream0");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.half2, Unity.Mathematics.half4, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTVertexDataStream0
struct CORDL_TYPE GTVertexDataStream0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTVertexDataStream0() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv1", ty: "::Unity::Mathematics::half4", modifiers: "", def_value: None, comment: None }, CppParam { name: "lightmapUv", ty: "::Unity::Mathematics::half2", modifiers: "", def_value: None, comment: None }]
constexpr GTVertexDataStream0(::Unity::Mathematics::float3  position, ::UnityEngine::Color32  color, ::Unity::Mathematics::half4  uv1, ::Unity::Mathematics::half2  lightmapUv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field color, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Color32  color;

/// @brief Field uv1, offset: 0x10, size: 0x8, def value: None
 ::Unity::Mathematics::half4  uv1;

/// @brief Field lightmapUv, offset: 0x18, size: 0x4, def value: None
 ::Unity::Mathematics::half2  lightmapUv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTVertexDataStream0, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTVertexDataStream0, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTVertexDataStream0, uv1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTVertexDataStream0, lightmapUv) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTVertexDataStream0) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
