#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_AppPerfFrameStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_AppPerfFrameStats)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_AppPerfFrameStats;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_AppPerfFrameStats);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, "", "OVRPlugin/AppPerfFrameStats");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/AppPerfFrameStats
struct CORDL_TYPE OVRPlugin_AppPerfFrameStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_AppPerfFrameStats() ;

// Ctor Parameters [CppParam { name: "HmdVsyncIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppFrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppDroppedFrameCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppMotionToPhotonLatency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppQueueAheadTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppCpuElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AppGpuElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorFrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorDroppedFrameCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorLatency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorCpuElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorGpuElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorCpuStartToGpuEndElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompositorGpuEndToVsyncElapsedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_AppPerfFrameStats(int32_t  HmdVsyncIndex, int32_t  AppFrameIndex, int32_t  AppDroppedFrameCount, float_t  AppMotionToPhotonLatency, float_t  AppQueueAheadTime, float_t  AppCpuElapsedTime, float_t  AppGpuElapsedTime, int32_t  CompositorFrameIndex, int32_t  CompositorDroppedFrameCount, float_t  CompositorLatency, float_t  CompositorCpuElapsedTime, float_t  CompositorGpuElapsedTime, float_t  CompositorCpuStartToGpuEndElapsedTime, float_t  CompositorGpuEndToVsyncElapsedTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field HmdVsyncIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  HmdVsyncIndex;

/// @brief Field AppFrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  AppFrameIndex;

/// @brief Field AppDroppedFrameCount, offset: 0x8, size: 0x4, def value: None
 int32_t  AppDroppedFrameCount;

/// @brief Field AppMotionToPhotonLatency, offset: 0xc, size: 0x4, def value: None
 float_t  AppMotionToPhotonLatency;

/// @brief Field AppQueueAheadTime, offset: 0x10, size: 0x4, def value: None
 float_t  AppQueueAheadTime;

/// @brief Field AppCpuElapsedTime, offset: 0x14, size: 0x4, def value: None
 float_t  AppCpuElapsedTime;

/// @brief Field AppGpuElapsedTime, offset: 0x18, size: 0x4, def value: None
 float_t  AppGpuElapsedTime;

/// @brief Field CompositorFrameIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  CompositorFrameIndex;

/// @brief Field CompositorDroppedFrameCount, offset: 0x20, size: 0x4, def value: None
 int32_t  CompositorDroppedFrameCount;

/// @brief Field CompositorLatency, offset: 0x24, size: 0x4, def value: None
 float_t  CompositorLatency;

/// @brief Field CompositorCpuElapsedTime, offset: 0x28, size: 0x4, def value: None
 float_t  CompositorCpuElapsedTime;

/// @brief Field CompositorGpuElapsedTime, offset: 0x2c, size: 0x4, def value: None
 float_t  CompositorGpuElapsedTime;

/// @brief Field CompositorCpuStartToGpuEndElapsedTime, offset: 0x30, size: 0x4, def value: None
 float_t  CompositorCpuStartToGpuEndElapsedTime;

/// @brief Field CompositorGpuEndToVsyncElapsedTime, offset: 0x34, size: 0x4, def value: None
 float_t  CompositorGpuEndToVsyncElapsedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, HmdVsyncIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppDroppedFrameCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppMotionToPhotonLatency) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppQueueAheadTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppCpuElapsedTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, AppGpuElapsedTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorFrameIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorDroppedFrameCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorLatency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorCpuElapsedTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorGpuElapsedTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorCpuStartToGpuEndElapsedTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats, CompositorGpuEndToVsyncElapsedTime) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_AppPerfFrameStats) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
