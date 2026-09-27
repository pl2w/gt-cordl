#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Painter2D_Painter2DJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Painter2D_Painter2DJobData)
// Forward declare root types
namespace GlobalNamespace {
struct Painter2D_Painter2DJobData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Painter2D_Painter2DJobData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Painter2D_Painter2DJobData, "UnityEngine.UIElements", "Painter2D/Painter2DJobData");
// Dependencies UnityEngine.UIElements.UnsafeMeshGenerationNode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Painter2D/Painter2DJobData
struct CORDL_TYPE Painter2D_Painter2DJobData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Painter2D_Painter2DJobData() ;

// Ctor Parameters [CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapshotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Painter2D_Painter2DJobData(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, int32_t  snapshotIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UnsafeMeshGenerationNode  node;

/// @brief Field snapshotIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  snapshotIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Painter2D_Painter2DJobData, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Painter2D_Painter2DJobData, snapshotIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Painter2D_Painter2DJobData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
