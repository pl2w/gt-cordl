#pragma once
// IWYU pragma private; include "Drawing/DetectedRenderPipeline.hpp"
#include "Drawing/zzzz__DetectedRenderPipeline_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::DetectedRenderPipeline::DetectedRenderPipeline(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Drawing::DetectedRenderPipeline::DetectedRenderPipeline()   {
}
constexpr ::Drawing::DetectedRenderPipeline  Drawing::DetectedRenderPipeline::BuiltInOrCustom{static_cast<int32_t>(0x0)};
constexpr ::Drawing::DetectedRenderPipeline  Drawing::DetectedRenderPipeline::HDRP{static_cast<int32_t>(0x1)};
constexpr ::Drawing::DetectedRenderPipeline  Drawing::DetectedRenderPipeline::URP{static_cast<int32_t>(0x2)};
