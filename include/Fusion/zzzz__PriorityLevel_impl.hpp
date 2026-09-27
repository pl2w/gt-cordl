#pragma once
// IWYU pragma private; include "Fusion/PriorityLevel.hpp"
#include "Fusion/zzzz__PriorityLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::PriorityLevel::PriorityLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::PriorityLevel::PriorityLevel()   {
}
constexpr ::Fusion::PriorityLevel  Fusion::PriorityLevel::Player{static_cast<int32_t>(0x1)};
constexpr ::Fusion::PriorityLevel  Fusion::PriorityLevel::High{static_cast<int32_t>(0x2)};
constexpr ::Fusion::PriorityLevel  Fusion::PriorityLevel::Medium{static_cast<int32_t>(0x3)};
constexpr ::Fusion::PriorityLevel  Fusion::PriorityLevel::Low{static_cast<int32_t>(0x4)};
constexpr ::Fusion::PriorityLevel  Fusion::PriorityLevel::Lowest{static_cast<int32_t>(0x5)};
