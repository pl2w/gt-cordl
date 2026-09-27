#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatistics_FusionStatisticsStatCustomConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatistics_FusionStatisticsStatCustomConfig)
// Forward declare root types
namespace GlobalNamespace {
struct FusionStatistics_FusionStatisticsStatCustomConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, "Fusion.Statistics", "FusionStatistics/FusionStatisticsStatCustomConfig");
// Dependencies Fusion.Statistics.RenderSimStats
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Statistics.FusionStatistics/FusionStatisticsStatCustomConfig
struct CORDL_TYPE FusionStatistics_FusionStatisticsStatCustomConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatistics_FusionStatisticsStatCustomConfig() ;

// Ctor Parameters [CppParam { name: "Stat", ty: "::Fusion::Statistics::RenderSimStats", modifiers: "", def_value: None, comment: None }, CppParam { name: "Threshold1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Threshold2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Threshold3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IgnoreZeroOnBuffer", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IgnoreZeroOnAverageCalculation", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AccumulateTimeMs", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionStatistics_FusionStatisticsStatCustomConfig(::Fusion::Statistics::RenderSimStats  Stat, float_t  Threshold1, float_t  Threshold2, float_t  Threshold3, bool  IgnoreZeroOnBuffer, bool  IgnoreZeroOnAverageCalculation, int32_t  AccumulateTimeMs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Stat, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Statistics::RenderSimStats  Stat;

/// @brief Field Threshold1, offset: 0x4, size: 0x4, def value: None
 float_t  Threshold1;

/// @brief Field Threshold2, offset: 0x8, size: 0x4, def value: None
 float_t  Threshold2;

/// @brief Field Threshold3, offset: 0xc, size: 0x4, def value: None
 float_t  Threshold3;

/// @brief Field IgnoreZeroOnBuffer, offset: 0x10, size: 0x1, def value: None
 bool  IgnoreZeroOnBuffer;

/// @brief Field IgnoreZeroOnAverageCalculation, offset: 0x11, size: 0x1, def value: None
 bool  IgnoreZeroOnAverageCalculation;

/// @brief Field AccumulateTimeMs, offset: 0x14, size: 0x4, def value: None
 int32_t  AccumulateTimeMs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, Stat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, Threshold1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, Threshold2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, Threshold3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, IgnoreZeroOnBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, IgnoreZeroOnAverageCalculation) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig, AccumulateTimeMs) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
