#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapJointType.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SnapJointType::SnapJointType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapJointType::SnapJointType()   {
}
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::HandL{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::HandR{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::Chest{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::Back{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::Head{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::Holster{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::ForearmL{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::ForearmR{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::AuxHead{static_cast<int32_t>(0x200)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::AuxBody1{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::AuxBody2{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::AuxShoulderL{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::AuxShoulderR{static_cast<int32_t>(0x2000)};
constexpr ::GlobalNamespace::SnapJointType  GlobalNamespace::SnapJointType::Max{static_cast<int32_t>(0x4000)};
