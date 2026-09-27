#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNodeData_FlexStatus.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNodeData_FlexStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus::LayoutNodeData_FlexStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus::LayoutNodeData_FlexStatus()   {
}
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::IsDirty{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::HasNewLayout{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::DependsOnParentSize{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::UsesMeasure{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::UsesBaseline{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::Fixed{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::MinViolation{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::LayoutNodeData_FlexStatus  GlobalNamespace::LayoutNodeData_FlexStatus::MaxViolation{static_cast<int32_t>(0x20)};
