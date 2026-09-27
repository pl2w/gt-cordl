#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStream1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTVertexDataStream1)
// Forward declare root types
namespace GlobalNamespace {
struct GTVertexDataStream1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTVertexDataStream1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTVertexDataStream1, "", "GTVertexDataStream1");
// Dependencies Unity.Mathematics.float3, UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTVertexDataStream1
struct CORDL_TYPE GTVertexDataStream1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTVertexDataStream1() ;

// Ctor Parameters [CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }]
constexpr GTVertexDataStream1(::Unity::Mathematics::float3  normal, ::UnityEngine::Color32  tangent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{911};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field normal, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  normal;

/// @brief Field tangent, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Color32  tangent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTVertexDataStream1, normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTVertexDataStream1, tangent) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTVertexDataStream1) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
