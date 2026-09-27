#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPNode_Axis.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SerializableBSPNode_Axis::SerializableBSPNode_Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializableBSPNode_Axis::SerializableBSPNode_Axis()   {
}
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::X{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::Y{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::Z{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::MatrixChain{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::MatrixFinal{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SerializableBSPNode_Axis  GlobalNamespace::SerializableBSPNode_Axis::Zone{static_cast<int32_t>(0x5)};
