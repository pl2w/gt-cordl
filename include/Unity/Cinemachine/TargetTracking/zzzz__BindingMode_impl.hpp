#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/BindingMode.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode::BindingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode::BindingMode()   {
}
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::LockToTargetOnAssign{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::LockToTargetWithWorldUp{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::LockToTargetNoRoll{static_cast<int32_t>(0x2)};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::LockToTarget{static_cast<int32_t>(0x3)};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::WorldSpace{static_cast<int32_t>(0x4)};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode  Unity::Cinemachine::TargetTracking::BindingMode::LazyFollow{static_cast<int32_t>(0x5)};
