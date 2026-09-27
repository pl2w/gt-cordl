#pragma once
// IWYU pragma private; include "Fusion/Statistics/RenderSimStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderSimStats)
// Forward declare root types
namespace Fusion::Statistics {
struct RenderSimStats;
}
// Write type traits
MARK_VAL_T(::Fusion::Statistics::RenderSimStats);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::RenderSimStats, "Fusion.Statistics", "RenderSimStats");
// [Flags]
// Dependencies 
namespace Fusion::Statistics {
// Is value type: true
// CS Name: Fusion.Statistics.RenderSimStats
struct CORDL_TYPE RenderSimStats {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderSimStats_Unwrapped
enum struct __RenderSimStats_Unwrapped : int32_t {
__E_InPackets = static_cast<int32_t>(0x1),
__E_OutPackets = static_cast<int32_t>(0x2),
__E_RTT = static_cast<int32_t>(0x4),
__E_InBandwidth = static_cast<int32_t>(0x8),
__E_OutBandwidth = static_cast<int32_t>(0x10),
__E_Resimulations = static_cast<int32_t>(0x20),
__E_ForwardTicks = static_cast<int32_t>(0x40),
__E_InputReceiveDelta = static_cast<int32_t>(0x80),
__E_TimeResets = static_cast<int32_t>(0x100),
__E_StateReceiveDelta = static_cast<int32_t>(0x200),
__E_SimulationTimeOffset = static_cast<int32_t>(0x400),
__E_SimulationSpeed = static_cast<int32_t>(0x800),
__E_InterpolationOffset = static_cast<int32_t>(0x1000),
__E_InterpolationSpeed = static_cast<int32_t>(0x2000),
__E_InputInBandwidth = static_cast<int32_t>(0x4000),
__E_InputOutBandwidth = static_cast<int32_t>(0x8000),
__E_AverageInPacketSize = static_cast<int32_t>(0x10000),
__E_AverageOutPacketSize = static_cast<int32_t>(0x20000),
__E_InObjectUpdates = static_cast<int32_t>(0x40000),
__E_OutObjectUpdates = static_cast<int32_t>(0x80000),
__E_ObjectsAllocatedMemoryInUse = static_cast<int32_t>(0x100000),
__E_GeneralAllocatedMemoryInUse = static_cast<int32_t>(0x200000),
__E_ObjectsAllocatedMemoryFree = static_cast<int32_t>(0x400000),
__E_GeneralAllocatedMemoryFree = static_cast<int32_t>(0x800000),
__E_WordsWrittenCount = static_cast<int32_t>(0x1000000),
__E_WordsWrittenSize = static_cast<int32_t>(0x2000000),
__E_WordsReadCount = static_cast<int32_t>(0x4000000),
__E_WordsReadSize = static_cast<int32_t>(0x8000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderSimStats_Unwrapped () const noexcept {
return static_cast<__RenderSimStats_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderSimStats() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderSimStats(int32_t  value__) noexcept;

/// @brief Field AverageInPacketSize value: I32(65536)
static ::Fusion::Statistics::RenderSimStats const AverageInPacketSize;

/// @brief Field AverageOutPacketSize value: I32(131072)
static ::Fusion::Statistics::RenderSimStats const AverageOutPacketSize;

/// @brief Field ForwardTicks value: I32(64)
static ::Fusion::Statistics::RenderSimStats const ForwardTicks;

/// @brief Field GeneralAllocatedMemoryFree value: I32(8388608)
static ::Fusion::Statistics::RenderSimStats const GeneralAllocatedMemoryFree;

/// @brief Field GeneralAllocatedMemoryInUse value: I32(2097152)
static ::Fusion::Statistics::RenderSimStats const GeneralAllocatedMemoryInUse;

/// @brief Field InBandwidth value: I32(8)
static ::Fusion::Statistics::RenderSimStats const InBandwidth;

/// @brief Field InObjectUpdates value: I32(262144)
static ::Fusion::Statistics::RenderSimStats const InObjectUpdates;

/// @brief Field InPackets value: I32(1)
static ::Fusion::Statistics::RenderSimStats const InPackets;

/// @brief Field InputInBandwidth value: I32(16384)
static ::Fusion::Statistics::RenderSimStats const InputInBandwidth;

/// @brief Field InputOutBandwidth value: I32(32768)
static ::Fusion::Statistics::RenderSimStats const InputOutBandwidth;

/// @brief Field InputReceiveDelta value: I32(128)
static ::Fusion::Statistics::RenderSimStats const InputReceiveDelta;

/// @brief Field InterpolationOffset value: I32(4096)
static ::Fusion::Statistics::RenderSimStats const InterpolationOffset;

/// @brief Field InterpolationSpeed value: I32(8192)
static ::Fusion::Statistics::RenderSimStats const InterpolationSpeed;

/// @brief Field ObjectsAllocatedMemoryFree value: I32(4194304)
static ::Fusion::Statistics::RenderSimStats const ObjectsAllocatedMemoryFree;

/// @brief Field ObjectsAllocatedMemoryInUse value: I32(1048576)
static ::Fusion::Statistics::RenderSimStats const ObjectsAllocatedMemoryInUse;

/// @brief Field OutBandwidth value: I32(16)
static ::Fusion::Statistics::RenderSimStats const OutBandwidth;

/// @brief Field OutObjectUpdates value: I32(524288)
static ::Fusion::Statistics::RenderSimStats const OutObjectUpdates;

/// @brief Field OutPackets value: I32(2)
static ::Fusion::Statistics::RenderSimStats const OutPackets;

/// @brief Field RTT value: I32(4)
static ::Fusion::Statistics::RenderSimStats const RTT;

/// @brief Field Resimulations value: I32(32)
static ::Fusion::Statistics::RenderSimStats const Resimulations;

/// @brief Field SimulationSpeed value: I32(2048)
static ::Fusion::Statistics::RenderSimStats const SimulationSpeed;

/// @brief Field SimulationTimeOffset value: I32(1024)
static ::Fusion::Statistics::RenderSimStats const SimulationTimeOffset;

/// @brief Field StateReceiveDelta value: I32(512)
static ::Fusion::Statistics::RenderSimStats const StateReceiveDelta;

/// @brief Field TimeResets value: I32(256)
static ::Fusion::Statistics::RenderSimStats const TimeResets;

/// @brief Field WordsReadCount value: I32(67108864)
static ::Fusion::Statistics::RenderSimStats const WordsReadCount;

/// @brief Field WordsReadSize value: I32(134217728)
static ::Fusion::Statistics::RenderSimStats const WordsReadSize;

/// @brief Field WordsWrittenCount value: I32(16777216)
static ::Fusion::Statistics::RenderSimStats const WordsWrittenCount;

/// @brief Field WordsWrittenSize value: I32(33554432)
static ::Fusion::Statistics::RenderSimStats const WordsWrittenSize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::RenderSimStats, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::RenderSimStats) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Statistics
