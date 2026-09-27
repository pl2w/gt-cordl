#pragma once
// IWYU pragma private; include "Fusion/JoinProcessStage.hpp"
#include "Fusion/zzzz__JoinProcessStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::JoinProcessStage::JoinProcessStage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::JoinProcessStage::JoinProcessStage()   {
}
constexpr ::Fusion::JoinProcessStage  Fusion::JoinProcessStage::Idle{static_cast<int32_t>(0x0)};
constexpr ::Fusion::JoinProcessStage  Fusion::JoinProcessStage::Joining{static_cast<int32_t>(0x1)};
constexpr ::Fusion::JoinProcessStage  Fusion::JoinProcessStage::Done{static_cast<int32_t>(0x2)};
constexpr ::Fusion::JoinProcessStage  Fusion::JoinProcessStage::Fail{static_cast<int32_t>(0x3)};
