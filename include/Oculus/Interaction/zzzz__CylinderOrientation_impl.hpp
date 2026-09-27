#pragma once
// IWYU pragma private; include "Oculus/Interaction/CylinderOrientation.hpp"
#include "Oculus/Interaction/zzzz__CylinderOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::CylinderOrientation::CylinderOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::CylinderOrientation::CylinderOrientation()   {
}
constexpr ::Oculus::Interaction::CylinderOrientation  Oculus::Interaction::CylinderOrientation::Vertical{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::CylinderOrientation  Oculus::Interaction::CylinderOrientation::Horizontal{static_cast<int32_t>(0x1)};
