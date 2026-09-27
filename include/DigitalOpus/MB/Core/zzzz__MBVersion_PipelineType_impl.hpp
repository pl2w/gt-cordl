#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersion_PipelineType.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersion_PipelineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MBVersion_PipelineType::MBVersion_PipelineType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MBVersion_PipelineType::MBVersion_PipelineType()   {
}
constexpr ::GlobalNamespace::MBVersion_PipelineType  GlobalNamespace::MBVersion_PipelineType::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MBVersion_PipelineType  GlobalNamespace::MBVersion_PipelineType::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MBVersion_PipelineType  GlobalNamespace::MBVersion_PipelineType::URP{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MBVersion_PipelineType  GlobalNamespace::MBVersion_PipelineType::HDRP{static_cast<int32_t>(0x3)};
