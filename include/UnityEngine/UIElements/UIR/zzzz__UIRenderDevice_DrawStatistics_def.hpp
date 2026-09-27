#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_DrawStatistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice_DrawStatistics)
// Forward declare root types
namespace GlobalNamespace {
struct UIRenderDevice_DrawStatistics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIRenderDevice_DrawStatistics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIRenderDevice_DrawStatistics, "UnityEngine.UIElements.UIR", "UIRenderDevice/DrawStatistics");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct CORDL_TYPE UIRenderDevice_DrawStatistics {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UIRenderDevice_DrawStatistics() ;

// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "skippedCommandCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disableCommandCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr UIRenderDevice_DrawStatistics(int32_t  currentFrameIndex, uint32_t  totalIndices, uint32_t  commandCount, uint32_t  skippedCommandCount, uint32_t  drawCommandCount, uint32_t  disableCommandCount, uint32_t  materialSetCount, uint32_t  drawRangeCount, uint32_t  drawRangeCallCount, uint32_t  immediateDraws, uint32_t  stencilRefChanges) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8606};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field currentFrameIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  currentFrameIndex;

/// @brief Field totalIndices, offset: 0x4, size: 0x4, def value: None
 uint32_t  totalIndices;

/// @brief Field commandCount, offset: 0x8, size: 0x4, def value: None
 uint32_t  commandCount;

/// @brief Field skippedCommandCount, offset: 0xc, size: 0x4, def value: None
 uint32_t  skippedCommandCount;

/// @brief Field drawCommandCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  drawCommandCount;

/// @brief Field disableCommandCount, offset: 0x14, size: 0x4, def value: None
 uint32_t  disableCommandCount;

/// @brief Field materialSetCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  materialSetCount;

/// @brief Field drawRangeCount, offset: 0x1c, size: 0x4, def value: None
 uint32_t  drawRangeCount;

/// @brief Field drawRangeCallCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  drawRangeCallCount;

/// @brief Field immediateDraws, offset: 0x24, size: 0x4, def value: None
 uint32_t  immediateDraws;

/// @brief Field stencilRefChanges, offset: 0x28, size: 0x4, def value: None
 uint32_t  stencilRefChanges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, currentFrameIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, totalIndices) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, commandCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, skippedCommandCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, drawCommandCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, disableCommandCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, materialSetCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, drawRangeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, drawRangeCallCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, immediateDraws) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIRenderDevice_DrawStatistics, stencilRefChanges) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIRenderDevice_DrawStatistics) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
