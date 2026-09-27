#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipLogLevel.hpp"
#include "GlobalNamespace/zzzz__MothershipLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipLogLevel::MothershipLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipLogLevel::MothershipLogLevel()   {
}
constexpr ::GlobalNamespace::MothershipLogLevel  GlobalNamespace::MothershipLogLevel::INFO{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MothershipLogLevel  GlobalNamespace::MothershipLogLevel::WARN{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MothershipLogLevel  GlobalNamespace::MothershipLogLevel::ERROR{static_cast<int32_t>(0x2)};
