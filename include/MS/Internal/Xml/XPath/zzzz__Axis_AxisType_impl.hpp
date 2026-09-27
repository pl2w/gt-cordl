#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Axis_AxisType.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_AxisType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Axis_AxisType::Axis_AxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Axis_AxisType::Axis_AxisType()   {
}
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Ancestor{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::AncestorOrSelf{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Child{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Descendant{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::DescendantOrSelf{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Following{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::FollowingSibling{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Namespace{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Parent{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Preceding{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::PrecedingSibling{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::Self{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::Axis_AxisType  GlobalNamespace::Axis_AxisType::None{static_cast<int32_t>(0xd)};
