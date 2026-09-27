#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData_Type.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type::ProcessedBuilderData_DrawingData_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type::ProcessedBuilderData_DrawingData_Type()   {
}
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  GlobalNamespace::ProcessedBuilderData_DrawingData_Type::Invalid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  GlobalNamespace::ProcessedBuilderData_DrawingData_Type::Static{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  GlobalNamespace::ProcessedBuilderData_DrawingData_Type::Dynamic{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  GlobalNamespace::ProcessedBuilderData_DrawingData_Type::Persistent{static_cast<int32_t>(0x3)};
