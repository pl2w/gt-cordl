#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService_BurstLogType.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_BurstLogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstCompilerService_BurstLogType::BurstCompilerService_BurstLogType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstCompilerService_BurstLogType::BurstCompilerService_BurstLogType()   {
}
constexpr ::GlobalNamespace::BurstCompilerService_BurstLogType  GlobalNamespace::BurstCompilerService_BurstLogType::Info{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BurstCompilerService_BurstLogType  GlobalNamespace::BurstCompilerService_BurstLogType::Warning{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BurstCompilerService_BurstLogType  GlobalNamespace::BurstCompilerService_BurstLogType::Error{static_cast<int32_t>(0x2)};
