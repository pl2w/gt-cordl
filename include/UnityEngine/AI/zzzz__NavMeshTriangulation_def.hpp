#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshTriangulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshTriangulation)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshTriangulation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshTriangulation);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshTriangulation, "UnityEngine.AI", "NavMeshTriangulation");
// [UsedByNativeCode]
// [MovedFrom("UnityEngine")]
// Dependencies UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshTriangulation
struct CORDL_TYPE NavMeshTriangulation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshTriangulation() ;

// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "areas", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshTriangulation(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  indices, ::ArrayW<int32_t>  areas) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Field indices, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  indices;

/// @brief Field areas, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  areas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshTriangulation, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshTriangulation, indices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshTriangulation, areas) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshTriangulation) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AI
