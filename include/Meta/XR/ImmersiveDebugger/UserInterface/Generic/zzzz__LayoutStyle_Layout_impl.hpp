#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/LayoutStyle_Layout.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_Layout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutStyle_Layout::LayoutStyle_Layout(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutStyle_Layout::LayoutStyle_Layout()   {
}
constexpr ::GlobalNamespace::LayoutStyle_Layout  GlobalNamespace::LayoutStyle_Layout::Fixed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LayoutStyle_Layout  GlobalNamespace::LayoutStyle_Layout::Fill{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LayoutStyle_Layout  GlobalNamespace::LayoutStyle_Layout::FillHorizontal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LayoutStyle_Layout  GlobalNamespace::LayoutStyle_Layout::FillVertical{static_cast<int32_t>(0x3)};
