#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData_CapturedState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DrawingData_ProcessedBuilderData_CapturedState)
// Forward declare root types
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_CapturedState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState, "Drawing", "DrawingData/ProcessedBuilderData/CapturedState");
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/ProcessedBuilderData/CapturedState
struct CORDL_TYPE ProcessedBuilderData_DrawingData_CapturedState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProcessedBuilderData_DrawingData_CapturedState() ;

// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr ProcessedBuilderData_DrawingData_CapturedState(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Color  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27729};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field matrix, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  matrix;

/// @brief Field color, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState, matrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState, color) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProcessedBuilderData_DrawingData_CapturedState) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
