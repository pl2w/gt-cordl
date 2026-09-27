#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice_DrawStatistics.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_DrawStatistics_def.hpp"
// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "skippedCommandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disableCommandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UIRenderDevice_DrawStatistics::UIRenderDevice_DrawStatistics(int32_t  currentFrameIndex, uint32_t  totalIndices, uint32_t  commandCount, uint32_t  skippedCommandCount, uint32_t  drawCommandCount, uint32_t  disableCommandCount, uint32_t  materialSetCount, uint32_t  drawRangeCount, uint32_t  drawRangeCallCount, uint32_t  immediateDraws, uint32_t  stencilRefChanges) noexcept  {
this->currentFrameIndex = currentFrameIndex;
this->totalIndices = totalIndices;
this->commandCount = commandCount;
this->skippedCommandCount = skippedCommandCount;
this->drawCommandCount = drawCommandCount;
this->disableCommandCount = disableCommandCount;
this->materialSetCount = materialSetCount;
this->drawRangeCount = drawRangeCount;
this->drawRangeCallCount = drawRangeCallCount;
this->immediateDraws = immediateDraws;
this->stencilRefChanges = stencilRefChanges;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIRenderDevice_DrawStatistics::UIRenderDevice_DrawStatistics()   {
}
