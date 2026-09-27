#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatistics_FusionStatisticsStatCustomConfig.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_FusionStatisticsStatCustomConfig_def.hpp"
// Ctor Parameters [CppParam { name: "Stat", ty: "::Fusion::Statistics::RenderSimStats", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Threshold1", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Threshold2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Threshold3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IgnoreZeroOnBuffer", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IgnoreZeroOnAverageCalculation", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AccumulateTimeMs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig::FusionStatistics_FusionStatisticsStatCustomConfig(::Fusion::Statistics::RenderSimStats  Stat, float_t  Threshold1, float_t  Threshold2, float_t  Threshold3, bool  IgnoreZeroOnBuffer, bool  IgnoreZeroOnAverageCalculation, int32_t  AccumulateTimeMs) noexcept  {
this->Stat = Stat;
this->Threshold1 = Threshold1;
this->Threshold2 = Threshold2;
this->Threshold3 = Threshold3;
this->IgnoreZeroOnBuffer = IgnoreZeroOnBuffer;
this->IgnoreZeroOnAverageCalculation = IgnoreZeroOnAverageCalculation;
this->AccumulateTimeMs = AccumulateTimeMs;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig::FusionStatistics_FusionStatisticsStatCustomConfig()   {
}
