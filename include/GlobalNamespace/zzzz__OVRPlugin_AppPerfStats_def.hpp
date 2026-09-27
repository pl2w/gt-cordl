#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_AppPerfStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_AppPerfFrameStats_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_AppPerfStats)
namespace GlobalNamespace {
struct OVRPlugin_AppPerfFrameStats;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_AppPerfStats;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_AppPerfStats);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_AppPerfStats, "", "OVRPlugin/AppPerfStats");
// Dependencies OVRPlugin::AppPerfFrameStats, OVRPlugin::Bool
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/AppPerfStats
struct CORDL_TYPE OVRPlugin_AppPerfStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_AppPerfStats() ;

// Ctor Parameters [CppParam { name: "FrameStats", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_AppPerfFrameStats>", modifiers: "", def_value: None, comment: None }, CppParam { name: "FrameStatsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AnyFrameStatsDropped", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdaptiveGpuPerformanceScale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_AppPerfStats(::ArrayW<::GlobalNamespace::OVRPlugin_AppPerfFrameStats>  FrameStats, int32_t  FrameStatsCount, ::GlobalNamespace::OVRPlugin_Bool  AnyFrameStatsDropped, float_t  AdaptiveGpuPerformanceScale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field FrameStats, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_AppPerfFrameStats>  FrameStats;

/// @brief Field FrameStatsCount, offset: 0x8, size: 0x4, def value: None
 int32_t  FrameStatsCount;

/// @brief Field AnyFrameStatsDropped, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  AnyFrameStatsDropped;

/// @brief Field AdaptiveGpuPerformanceScale, offset: 0x10, size: 0x4, def value: None
 float_t  AdaptiveGpuPerformanceScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfStats, FrameStats) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfStats, FrameStatsCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfStats, AnyFrameStatsDropped) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfStats, AdaptiveGpuPerformanceScale) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_AppPerfStats) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
