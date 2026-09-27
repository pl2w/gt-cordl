#pragma once
// IWYU pragma private; include "Fusion/NATPunchStage.hpp"
#include "Fusion/zzzz__NATPunchStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NATPunchStage::NATPunchStage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NATPunchStage::NATPunchStage()   {
}
constexpr ::Fusion::NATPunchStage  Fusion::NATPunchStage::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NATPunchStage  Fusion::NATPunchStage::Local{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NATPunchStage  Fusion::NATPunchStage::Public{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NATPunchStage  Fusion::NATPunchStage::Relay{static_cast<int32_t>(0x3)};
