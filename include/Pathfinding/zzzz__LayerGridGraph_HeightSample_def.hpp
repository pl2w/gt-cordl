#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraph_HeightSample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayerGridGraph_HeightSample)
// Forward declare root types
namespace GlobalNamespace {
struct LayerGridGraph_HeightSample;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayerGridGraph_HeightSample);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayerGridGraph_HeightSample, "Pathfinding", "LayerGridGraph/HeightSample");
// Dependencies UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.LayerGridGraph/HeightSample
struct CORDL_TYPE LayerGridGraph_HeightSample {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LayerGridGraph_HeightSample() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "hit", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "walkable", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr LayerGridGraph_HeightSample(::UnityEngine::Vector3  position, ::UnityEngine::RaycastHit  hit, float_t  height, bool  walkable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field hit, offset: 0xc, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  hit;

/// @brief Field height, offset: 0x38, size: 0x4, def value: None
 float_t  height;

/// @brief Field walkable, offset: 0x3c, size: 0x1, def value: None
 bool  walkable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayerGridGraph_HeightSample, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayerGridGraph_HeightSample, hit) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayerGridGraph_HeightSample, height) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayerGridGraph_HeightSample, walkable) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayerGridGraph_HeightSample) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
