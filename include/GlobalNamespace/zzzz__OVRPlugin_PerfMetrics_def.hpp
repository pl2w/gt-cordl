#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PerfMetrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PerfMetrics)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PerfMetrics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PerfMetrics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PerfMetrics, "", "OVRPlugin/PerfMetrics");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PerfMetrics
struct CORDL_TYPE OVRPlugin_PerfMetrics {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_PerfMetrics_Unwrapped
enum struct __OVRPlugin_PerfMetrics_Unwrapped : int32_t {
__E_App_CpuTime_Float = static_cast<int32_t>(0x0),
__E_App_GpuTime_Float = static_cast<int32_t>(0x1),
__E_Compositor_CpuTime_Float = static_cast<int32_t>(0x3),
__E_Compositor_GpuTime_Float = static_cast<int32_t>(0x4),
__E_Compositor_DroppedFrameCount_Int = static_cast<int32_t>(0x5),
__E_System_GpuUtilPercentage_Float = static_cast<int32_t>(0x7),
__E_System_CpuUtilAveragePercentage_Float = static_cast<int32_t>(0x8),
__E_System_CpuUtilWorstPercentage_Float = static_cast<int32_t>(0x9),
__E_Device_CpuClockFrequencyInMHz_Float = static_cast<int32_t>(0xa),
__E_Device_GpuClockFrequencyInMHz_Float = static_cast<int32_t>(0xb),
__E_Device_CpuClockLevel_Int = static_cast<int32_t>(0xc),
__E_Device_GpuClockLevel_Int = static_cast<int32_t>(0xd),
__E_Compositor_SpaceWarp_Mode_Int = static_cast<int32_t>(0xe),
__E_Device_CpuCore0UtilPercentage_Float = static_cast<int32_t>(0x20),
__E_Device_CpuCore1UtilPercentage_Float = static_cast<int32_t>(0x21),
__E_Device_CpuCore2UtilPercentage_Float = static_cast<int32_t>(0x22),
__E_Device_CpuCore3UtilPercentage_Float = static_cast<int32_t>(0x23),
__E_Device_CpuCore4UtilPercentage_Float = static_cast<int32_t>(0x24),
__E_Device_CpuCore5UtilPercentage_Float = static_cast<int32_t>(0x25),
__E_Device_CpuCore6UtilPercentage_Float = static_cast<int32_t>(0x26),
__E_Device_CpuCore7UtilPercentage_Float = static_cast<int32_t>(0x27),
__E_Count = static_cast<int32_t>(0x28),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_PerfMetrics_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_PerfMetrics_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PerfMetrics() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PerfMetrics(int32_t  value__) noexcept;

/// @brief Field App_CpuTime_Float value: I32(0)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const App_CpuTime_Float;

/// @brief Field App_GpuTime_Float value: I32(1)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const App_GpuTime_Float;

/// @brief Field Compositor_CpuTime_Float value: I32(3)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Compositor_CpuTime_Float;

/// @brief Field Compositor_DroppedFrameCount_Int value: I32(5)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Compositor_DroppedFrameCount_Int;

/// @brief Field Compositor_GpuTime_Float value: I32(4)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Compositor_GpuTime_Float;

/// @brief Field Compositor_SpaceWarp_Mode_Int value: I32(14)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Compositor_SpaceWarp_Mode_Int;

/// @brief Field Count value: I32(40)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Count;

/// @brief Field Device_CpuClockFrequencyInMHz_Float value: I32(10)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuClockFrequencyInMHz_Float;

/// @brief Field Device_CpuClockLevel_Int value: I32(12)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuClockLevel_Int;

/// @brief Field Device_CpuCore0UtilPercentage_Float value: I32(32)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore0UtilPercentage_Float;

/// @brief Field Device_CpuCore1UtilPercentage_Float value: I32(33)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore1UtilPercentage_Float;

/// @brief Field Device_CpuCore2UtilPercentage_Float value: I32(34)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore2UtilPercentage_Float;

/// @brief Field Device_CpuCore3UtilPercentage_Float value: I32(35)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore3UtilPercentage_Float;

/// @brief Field Device_CpuCore4UtilPercentage_Float value: I32(36)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore4UtilPercentage_Float;

/// @brief Field Device_CpuCore5UtilPercentage_Float value: I32(37)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore5UtilPercentage_Float;

/// @brief Field Device_CpuCore6UtilPercentage_Float value: I32(38)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore6UtilPercentage_Float;

/// @brief Field Device_CpuCore7UtilPercentage_Float value: I32(39)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_CpuCore7UtilPercentage_Float;

/// @brief Field Device_GpuClockFrequencyInMHz_Float value: I32(11)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_GpuClockFrequencyInMHz_Float;

/// @brief Field Device_GpuClockLevel_Int value: I32(13)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const Device_GpuClockLevel_Int;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const EnumSize;

/// @brief Field System_CpuUtilAveragePercentage_Float value: I32(8)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const System_CpuUtilAveragePercentage_Float;

/// @brief Field System_CpuUtilWorstPercentage_Float value: I32(9)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const System_CpuUtilWorstPercentage_Float;

/// @brief Field System_GpuUtilPercentage_Float value: I32(7)
static ::GlobalNamespace::OVRPlugin_PerfMetrics const System_GpuUtilPercentage_Float;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12078};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PerfMetrics, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PerfMetrics) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
