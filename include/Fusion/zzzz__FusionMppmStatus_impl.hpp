#pragma once
// IWYU pragma private; include "Fusion/FusionMppmStatus.hpp"
#include "Fusion/zzzz__FusionMppmStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::FusionMppmStatus::FusionMppmStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::FusionMppmStatus::FusionMppmStatus()   {
}
constexpr ::Fusion::FusionMppmStatus  Fusion::FusionMppmStatus::Disabled{static_cast<int32_t>(0x0)};
constexpr ::Fusion::FusionMppmStatus  Fusion::FusionMppmStatus::MainInstance{static_cast<int32_t>(0x1)};
constexpr ::Fusion::FusionMppmStatus  Fusion::FusionMppmStatus::VirtualInstance{static_cast<int32_t>(0x2)};
