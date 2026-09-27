#pragma once
// IWYU pragma private; include "GlobalNamespace/EControllerInputPressFlags.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EControllerInputPressFlags::EControllerInputPressFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EControllerInputPressFlags::EControllerInputPressFlags()   {
}
constexpr ::GlobalNamespace::EControllerInputPressFlags  GlobalNamespace::EControllerInputPressFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EControllerInputPressFlags  GlobalNamespace::EControllerInputPressFlags::Index{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EControllerInputPressFlags  GlobalNamespace::EControllerInputPressFlags::Grip{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EControllerInputPressFlags  GlobalNamespace::EControllerInputPressFlags::Primary{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EControllerInputPressFlags  GlobalNamespace::EControllerInputPressFlags::Secondary{static_cast<int32_t>(0x8)};
