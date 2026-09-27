#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatisticsSnapshot)
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatisticsSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatisticsSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatisticsSnapshot*, "Fusion.Statistics", "FusionStatisticsSnapshot");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatisticsSnapshot
class CORDL_TYPE FusionStatisticsSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ForwardTicks, put=set_ForwardTicks)) int32_t  ForwardTicks;

 __declspec(property(get=get_GeneralAllocMemoryFreeInBytes, put=set_GeneralAllocMemoryFreeInBytes)) int32_t  GeneralAllocMemoryFreeInBytes;

 __declspec(property(get=get_GeneralAllocMemoryUsedInBytes, put=set_GeneralAllocMemoryUsedInBytes)) int32_t  GeneralAllocMemoryUsedInBytes;

 __declspec(property(get=get_InBandwidth, put=set_InBandwidth)) float_t  InBandwidth;

 __declspec(property(get=get_InObjectUpdates, put=set_InObjectUpdates)) int32_t  InObjectUpdates;

 __declspec(property(get=get_InPackets, put=set_InPackets)) int32_t  InPackets;

 __declspec(property(get=get_InputInBandwidth, put=set_InputInBandwidth)) float_t  InputInBandwidth;

 __declspec(property(get=get_InputOutBandwidth, put=set_InputOutBandwidth)) float_t  InputOutBandwidth;

 __declspec(property(get=get_InputReceiveDelta, put=set_InputReceiveDelta)) float_t  InputReceiveDelta;

 __declspec(property(get=get_InterpolationOffset, put=set_InterpolationOffset)) float_t  InterpolationOffset;

 __declspec(property(get=get_InterpolationSpeed, put=set_InterpolationSpeed)) float_t  InterpolationSpeed;

 __declspec(property(get=get_ObjectsAllocMemoryFreeInBytes, put=set_ObjectsAllocMemoryFreeInBytes)) int32_t  ObjectsAllocMemoryFreeInBytes;

 __declspec(property(get=get_ObjectsAllocMemoryUsedInBytes, put=set_ObjectsAllocMemoryUsedInBytes)) int32_t  ObjectsAllocMemoryUsedInBytes;

 __declspec(property(get=get_OutBandwidth, put=set_OutBandwidth)) float_t  OutBandwidth;

 __declspec(property(get=get_OutObjectUpdates, put=set_OutObjectUpdates)) int32_t  OutObjectUpdates;

 __declspec(property(get=get_OutPackets, put=set_OutPackets)) int32_t  OutPackets;

 __declspec(property(get=get_Resimulations, put=set_Resimulations)) int32_t  Resimulations;

 __declspec(property(get=get_RoundTripTime, put=set_RoundTripTime)) float_t  RoundTripTime;

 __declspec(property(get=get_SimulationSpeed, put=set_SimulationSpeed)) float_t  SimulationSpeed;

 __declspec(property(get=get_SimulationTimeOffset, put=set_SimulationTimeOffset)) float_t  SimulationTimeOffset;

 __declspec(property(get=get_StateReceiveDelta, put=set_StateReceiveDelta)) float_t  StateReceiveDelta;

 __declspec(property(get=get_TimeResets, put=set_TimeResets)) int32_t  TimeResets;

 __declspec(property(get=get_WordsReadCount, put=set_WordsReadCount)) int32_t  WordsReadCount;

 __declspec(property(get=get_WordsReadSize)) int32_t  WordsReadSize;

 __declspec(property(get=get_WordsWrittenCount, put=set_WordsWrittenCount)) int32_t  WordsWrittenCount;

 __declspec(property(get=get_WordsWrittenSize)) int32_t  WordsWrittenSize;

/// @brief Field <ForwardTicks>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__ForwardTicks_k__BackingField, put=__cordl_internal_set__ForwardTicks_k__BackingField)) int32_t  _ForwardTicks_k__BackingField;

/// @brief Field <GeneralAllocMemoryFreeInBytes>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__GeneralAllocMemoryFreeInBytes_k__BackingField, put=__cordl_internal_set__GeneralAllocMemoryFreeInBytes_k__BackingField)) int32_t  _GeneralAllocMemoryFreeInBytes_k__BackingField;

/// @brief Field <GeneralAllocMemoryUsedInBytes>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__GeneralAllocMemoryUsedInBytes_k__BackingField, put=__cordl_internal_set__GeneralAllocMemoryUsedInBytes_k__BackingField)) int32_t  _GeneralAllocMemoryUsedInBytes_k__BackingField;

/// @brief Field <InBandwidth>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__InBandwidth_k__BackingField, put=__cordl_internal_set__InBandwidth_k__BackingField)) float_t  _InBandwidth_k__BackingField;

/// @brief Field <InObjectUpdates>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__InObjectUpdates_k__BackingField, put=__cordl_internal_set__InObjectUpdates_k__BackingField)) int32_t  _InObjectUpdates_k__BackingField;

/// @brief Field <InPackets>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__InPackets_k__BackingField, put=__cordl_internal_set__InPackets_k__BackingField)) int32_t  _InPackets_k__BackingField;

/// @brief Field <InputInBandwidth>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__InputInBandwidth_k__BackingField, put=__cordl_internal_set__InputInBandwidth_k__BackingField)) float_t  _InputInBandwidth_k__BackingField;

/// @brief Field <InputOutBandwidth>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__InputOutBandwidth_k__BackingField, put=__cordl_internal_set__InputOutBandwidth_k__BackingField)) float_t  _InputOutBandwidth_k__BackingField;

/// @brief Field <InputReceiveDelta>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__InputReceiveDelta_k__BackingField, put=__cordl_internal_set__InputReceiveDelta_k__BackingField)) float_t  _InputReceiveDelta_k__BackingField;

/// @brief Field <InterpolationOffset>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__InterpolationOffset_k__BackingField, put=__cordl_internal_set__InterpolationOffset_k__BackingField)) float_t  _InterpolationOffset_k__BackingField;

/// @brief Field <InterpolationSpeed>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__InterpolationSpeed_k__BackingField, put=__cordl_internal_set__InterpolationSpeed_k__BackingField)) float_t  _InterpolationSpeed_k__BackingField;

/// @brief Field <ObjectsAllocMemoryFreeInBytes>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjectsAllocMemoryFreeInBytes_k__BackingField, put=__cordl_internal_set__ObjectsAllocMemoryFreeInBytes_k__BackingField)) int32_t  _ObjectsAllocMemoryFreeInBytes_k__BackingField;

/// @brief Field <ObjectsAllocMemoryUsedInBytes>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObjectsAllocMemoryUsedInBytes_k__BackingField, put=__cordl_internal_set__ObjectsAllocMemoryUsedInBytes_k__BackingField)) int32_t  _ObjectsAllocMemoryUsedInBytes_k__BackingField;

/// @brief Field <OutBandwidth>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__OutBandwidth_k__BackingField, put=__cordl_internal_set__OutBandwidth_k__BackingField)) float_t  _OutBandwidth_k__BackingField;

/// @brief Field <OutObjectUpdates>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__OutObjectUpdates_k__BackingField, put=__cordl_internal_set__OutObjectUpdates_k__BackingField)) int32_t  _OutObjectUpdates_k__BackingField;

/// @brief Field <OutPackets>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__OutPackets_k__BackingField, put=__cordl_internal_set__OutPackets_k__BackingField)) int32_t  _OutPackets_k__BackingField;

/// @brief Field <Resimulations>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resimulations_k__BackingField, put=__cordl_internal_set__Resimulations_k__BackingField)) int32_t  _Resimulations_k__BackingField;

/// @brief Field <RoundTripTime>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoundTripTime_k__BackingField, put=__cordl_internal_set__RoundTripTime_k__BackingField)) float_t  _RoundTripTime_k__BackingField;

/// @brief Field <SimulationSpeed>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__SimulationSpeed_k__BackingField, put=__cordl_internal_set__SimulationSpeed_k__BackingField)) float_t  _SimulationSpeed_k__BackingField;

/// @brief Field <SimulationTimeOffset>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__SimulationTimeOffset_k__BackingField, put=__cordl_internal_set__SimulationTimeOffset_k__BackingField)) float_t  _SimulationTimeOffset_k__BackingField;

/// @brief Field <StateReceiveDelta>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__StateReceiveDelta_k__BackingField, put=__cordl_internal_set__StateReceiveDelta_k__BackingField)) float_t  _StateReceiveDelta_k__BackingField;

/// @brief Field <TimeResets>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeResets_k__BackingField, put=__cordl_internal_set__TimeResets_k__BackingField)) int32_t  _TimeResets_k__BackingField;

/// @brief Field <WordsReadCount>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordsReadCount_k__BackingField, put=__cordl_internal_set__WordsReadCount_k__BackingField)) int32_t  _WordsReadCount_k__BackingField;

/// @brief Field <WordsWrittenCount>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordsWrittenCount_k__BackingField, put=__cordl_internal_set__WordsWrittenCount_k__BackingField)) int32_t  _WordsWrittenCount_k__BackingField;

/// [Conditional("DEBUG")]
/// @brief Method AddToForwardTicksStat, addr 0x601f8bc, size 0x14, virtual false, abstract: false, final false
inline void AddToForwardTicksStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToGeneralAllocMemoryFreeInBytesStat, addr 0x601f9c0, size 0x14, virtual false, abstract: false, final false
inline void AddToGeneralAllocMemoryFreeInBytesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToGeneralAllocMemoryUsedInBytesStat, addr 0x601f998, size 0x14, virtual false, abstract: false, final false
inline void AddToGeneralAllocMemoryUsedInBytesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInBandwidthStat, addr 0x601f8f8, size 0x14, virtual false, abstract: false, final false
inline void AddToInBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInObjectUpdatesStat, addr 0x601f95c, size 0x14, virtual false, abstract: false, final false
inline void AddToInObjectUpdatesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInPacketsStat, addr 0x601f8d0, size 0x14, virtual false, abstract: false, final false
inline void AddToInPacketsStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInputInBandwidthStat, addr 0x601f934, size 0x14, virtual false, abstract: false, final false
inline void AddToInputInBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInputOutBandwidthStat, addr 0x601f948, size 0x14, virtual false, abstract: false, final false
inline void AddToInputOutBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInputReceiveDeltaStat, addr 0x601fa6c, size 0x14, virtual false, abstract: false, final false
inline void AddToInputReceiveDeltaStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInterpolationOffsetStat, addr 0x601fad0, size 0x14, virtual false, abstract: false, final false
inline void AddToInterpolationOffsetStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInterpolationSpeedStat, addr 0x601fae4, size 0x14, virtual false, abstract: false, final false
inline void AddToInterpolationSpeedStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToObjectsAllocMemoryFreeInBytesStat, addr 0x601f9ac, size 0x14, virtual false, abstract: false, final false
inline void AddToObjectsAllocMemoryFreeInBytesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToObjectsAllocMemoryUsedInBytesStat, addr 0x601f984, size 0x14, virtual false, abstract: false, final false
inline void AddToObjectsAllocMemoryUsedInBytesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToOutBandwidthStat, addr 0x601f90c, size 0x14, virtual false, abstract: false, final false
inline void AddToOutBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToOutObjectUpdatesStat, addr 0x601f970, size 0x14, virtual false, abstract: false, final false
inline void AddToOutObjectUpdatesStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToOutPacketsStat, addr 0x601f8e4, size 0x14, virtual false, abstract: false, final false
inline void AddToOutPacketsStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToResimulationStat, addr 0x601f8a8, size 0x14, virtual false, abstract: false, final false
inline void AddToResimulationStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToRoundTripTimeStat, addr 0x601f920, size 0x14, virtual false, abstract: false, final false
inline void AddToRoundTripTimeStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToSimulationSpeedStat, addr 0x601fabc, size 0x14, virtual false, abstract: false, final false
inline void AddToSimulationSpeedStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToSimulationTimeOffsetStat, addr 0x601faa8, size 0x14, virtual false, abstract: false, final false
inline void AddToSimulationTimeOffsetStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToStateReceiveDeltaStat, addr 0x601fa94, size 0x14, virtual false, abstract: false, final false
inline void AddToStateReceiveDeltaStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToTimeResetsStat, addr 0x601fa80, size 0x14, virtual false, abstract: false, final false
inline void AddToTimeResetsStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToWordsReadCountStat, addr 0x601f9e8, size 0x14, virtual false, abstract: false, final false
inline void AddToWordsReadCountStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToWordsWrittenCountStat, addr 0x601f9d4, size 0x14, virtual false, abstract: false, final false
inline void AddToWordsWrittenCountStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method ClearSnapshot, addr 0x601f474, size 0x14, virtual false, abstract: false, final false
inline void ClearSnapshot() ;

/// [Conditional("DEBUG")]
/// @brief Method CopyFrom, addr 0x601f424, size 0x50, virtual false, abstract: false, final false
inline void CopyFrom(::Fusion::Statistics::FusionStatisticsSnapshot*  snapshot) ;

static inline ::Fusion::Statistics::FusionStatisticsSnapshot* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__ForwardTicks_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ForwardTicks_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GeneralAllocMemoryFreeInBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GeneralAllocMemoryFreeInBytes_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__GeneralAllocMemoryUsedInBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GeneralAllocMemoryUsedInBytes_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InBandwidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__InObjectUpdates_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__InObjectUpdates_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__InPackets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__InPackets_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InputInBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InputInBandwidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InputOutBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InputOutBandwidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InputReceiveDelta_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InputReceiveDelta_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InterpolationOffset_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InterpolationOffset_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__InterpolationSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InterpolationSpeed_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ObjectsAllocMemoryFreeInBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ObjectsAllocMemoryFreeInBytes_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ObjectsAllocMemoryUsedInBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ObjectsAllocMemoryUsedInBytes_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__OutBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__OutBandwidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__OutObjectUpdates_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__OutObjectUpdates_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__OutPackets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__OutPackets_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Resimulations_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Resimulations_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoundTripTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoundTripTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SimulationSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SimulationSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SimulationTimeOffset_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SimulationTimeOffset_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__StateReceiveDelta_k__BackingField() const;

constexpr float_t& __cordl_internal_get__StateReceiveDelta_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TimeResets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TimeResets_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordsReadCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordsReadCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordsWrittenCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordsWrittenCount_k__BackingField() ;

constexpr void __cordl_internal_set__ForwardTicks_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GeneralAllocMemoryFreeInBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__GeneralAllocMemoryUsedInBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__InBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InObjectUpdates_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__InPackets_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__InputInBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InputOutBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InputReceiveDelta_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InterpolationOffset_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InterpolationSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ObjectsAllocMemoryFreeInBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ObjectsAllocMemoryUsedInBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__OutBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__OutObjectUpdates_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__OutPackets_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Resimulations_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RoundTripTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SimulationSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SimulationTimeOffset_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__StateReceiveDelta_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TimeResets_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__WordsReadCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__WordsWrittenCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x601f284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ForwardTicks, addr 0x601f790, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ForwardTicks() ;

/// [CompilerGenerated]
/// @brief Method get_GeneralAllocMemoryFreeInBytes, addr 0x601f860, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GeneralAllocMemoryFreeInBytes() ;

/// [CompilerGenerated]
/// @brief Method get_GeneralAllocMemoryUsedInBytes, addr 0x601f840, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GeneralAllocMemoryUsedInBytes() ;

/// [CompilerGenerated]
/// @brief Method get_InBandwidth, addr 0x601f7c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_InBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_InObjectUpdates, addr 0x601f810, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InObjectUpdates() ;

/// [CompilerGenerated]
/// @brief Method get_InPackets, addr 0x601f7a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InPackets() ;

/// [CompilerGenerated]
/// @brief Method get_InputInBandwidth, addr 0x601f7f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_InputInBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_InputOutBandwidth, addr 0x601f800, size 0x8, virtual false, abstract: false, final false
inline float_t get_InputOutBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_InputReceiveDelta, addr 0x601f9fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_InputReceiveDelta() ;

/// [CompilerGenerated]
/// @brief Method get_InterpolationOffset, addr 0x601fa4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InterpolationOffset() ;

/// [CompilerGenerated]
/// @brief Method get_InterpolationSpeed, addr 0x601fa5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_InterpolationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_ObjectsAllocMemoryFreeInBytes, addr 0x601f850, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObjectsAllocMemoryFreeInBytes() ;

/// [CompilerGenerated]
/// @brief Method get_ObjectsAllocMemoryUsedInBytes, addr 0x601f830, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObjectsAllocMemoryUsedInBytes() ;

/// [CompilerGenerated]
/// @brief Method get_OutBandwidth, addr 0x601f7d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_OutBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_OutObjectUpdates, addr 0x601f820, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OutObjectUpdates() ;

/// [CompilerGenerated]
/// @brief Method get_OutPackets, addr 0x601f7b0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OutPackets() ;

/// [CompilerGenerated]
/// @brief Method get_Resimulations, addr 0x601f780, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Resimulations() ;

/// [CompilerGenerated]
/// @brief Method get_RoundTripTime, addr 0x601f7e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_RoundTripTime() ;

/// [CompilerGenerated]
/// @brief Method get_SimulationSpeed, addr 0x601fa3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SimulationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_SimulationTimeOffset, addr 0x601fa2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_SimulationTimeOffset() ;

/// [CompilerGenerated]
/// @brief Method get_StateReceiveDelta, addr 0x601fa1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_StateReceiveDelta() ;

/// [CompilerGenerated]
/// @brief Method get_TimeResets, addr 0x601fa0c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TimeResets() ;

/// [CompilerGenerated]
/// @brief Method get_WordsReadCount, addr 0x601f880, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordsReadCount() ;

/// @brief Method get_WordsReadSize, addr 0x601f89c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_WordsReadSize() ;

/// [CompilerGenerated]
/// @brief Method get_WordsWrittenCount, addr 0x601f870, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordsWrittenCount() ;

/// @brief Method get_WordsWrittenSize, addr 0x601f890, size 0xc, virtual false, abstract: false, final false
inline int32_t get_WordsWrittenSize() ;

/// [CompilerGenerated]
/// @brief Method set_ForwardTicks, addr 0x601f798, size 0x8, virtual false, abstract: false, final false
inline void set_ForwardTicks(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_GeneralAllocMemoryFreeInBytes, addr 0x601f868, size 0x8, virtual false, abstract: false, final false
inline void set_GeneralAllocMemoryFreeInBytes(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_GeneralAllocMemoryUsedInBytes, addr 0x601f848, size 0x8, virtual false, abstract: false, final false
inline void set_GeneralAllocMemoryUsedInBytes(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InBandwidth, addr 0x601f7c8, size 0x8, virtual false, abstract: false, final false
inline void set_InBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InObjectUpdates, addr 0x601f818, size 0x8, virtual false, abstract: false, final false
inline void set_InObjectUpdates(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InPackets, addr 0x601f7a8, size 0x8, virtual false, abstract: false, final false
inline void set_InPackets(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputInBandwidth, addr 0x601f7f8, size 0x8, virtual false, abstract: false, final false
inline void set_InputInBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputOutBandwidth, addr 0x601f808, size 0x8, virtual false, abstract: false, final false
inline void set_InputOutBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputReceiveDelta, addr 0x601fa04, size 0x8, virtual false, abstract: false, final false
inline void set_InputReceiveDelta(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InterpolationOffset, addr 0x601fa54, size 0x8, virtual false, abstract: false, final false
inline void set_InterpolationOffset(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InterpolationSpeed, addr 0x601fa64, size 0x8, virtual false, abstract: false, final false
inline void set_InterpolationSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ObjectsAllocMemoryFreeInBytes, addr 0x601f858, size 0x8, virtual false, abstract: false, final false
inline void set_ObjectsAllocMemoryFreeInBytes(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ObjectsAllocMemoryUsedInBytes, addr 0x601f838, size 0x8, virtual false, abstract: false, final false
inline void set_ObjectsAllocMemoryUsedInBytes(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OutBandwidth, addr 0x601f7d8, size 0x8, virtual false, abstract: false, final false
inline void set_OutBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OutObjectUpdates, addr 0x601f828, size 0x8, virtual false, abstract: false, final false
inline void set_OutObjectUpdates(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OutPackets, addr 0x601f7b8, size 0x8, virtual false, abstract: false, final false
inline void set_OutPackets(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Resimulations, addr 0x601f788, size 0x8, virtual false, abstract: false, final false
inline void set_Resimulations(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoundTripTime, addr 0x601f7e8, size 0x8, virtual false, abstract: false, final false
inline void set_RoundTripTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SimulationSpeed, addr 0x601fa44, size 0x8, virtual false, abstract: false, final false
inline void set_SimulationSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SimulationTimeOffset, addr 0x601fa34, size 0x8, virtual false, abstract: false, final false
inline void set_SimulationTimeOffset(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StateReceiveDelta, addr 0x601fa24, size 0x8, virtual false, abstract: false, final false
inline void set_StateReceiveDelta(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeResets, addr 0x601fa14, size 0x8, virtual false, abstract: false, final false
inline void set_TimeResets(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_WordsReadCount, addr 0x601f888, size 0x8, virtual false, abstract: false, final false
inline void set_WordsReadCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_WordsWrittenCount, addr 0x601f878, size 0x8, virtual false, abstract: false, final false
inline void set_WordsWrittenCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatisticsSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatisticsSnapshot(FusionStatisticsSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatisticsSnapshot(FusionStatisticsSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19432};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Resimulations>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Resimulations_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ForwardTicks>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____ForwardTicks_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InPackets>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____InPackets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <OutPackets>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____OutPackets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InBandwidth>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____InBandwidth_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <OutBandwidth>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____OutBandwidth_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RoundTripTime>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____RoundTripTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InputInBandwidth>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 float_t  ____InputInBandwidth_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InputOutBandwidth>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____InputOutBandwidth_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InObjectUpdates>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____InObjectUpdates_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <OutObjectUpdates>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____OutObjectUpdates_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ObjectsAllocMemoryUsedInBytes>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____ObjectsAllocMemoryUsedInBytes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <GeneralAllocMemoryUsedInBytes>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____GeneralAllocMemoryUsedInBytes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ObjectsAllocMemoryFreeInBytes>k__BackingField, offset: 0x44, size: 0x4, def value: None
 int32_t  ____ObjectsAllocMemoryFreeInBytes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <GeneralAllocMemoryFreeInBytes>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____GeneralAllocMemoryFreeInBytes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordsWrittenCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____WordsWrittenCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordsReadCount>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____WordsReadCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InputReceiveDelta>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____InputReceiveDelta_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TimeResets>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  ____TimeResets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <StateReceiveDelta>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____StateReceiveDelta_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SimulationTimeOffset>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____SimulationTimeOffset_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SimulationSpeed>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____SimulationSpeed_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InterpolationOffset>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____InterpolationOffset_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InterpolationSpeed>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 float_t  ____InterpolationSpeed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____Resimulations_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____ForwardTicks_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InPackets_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____OutPackets_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InBandwidth_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____OutBandwidth_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____RoundTripTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InputInBandwidth_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InputOutBandwidth_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InObjectUpdates_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____OutObjectUpdates_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____ObjectsAllocMemoryUsedInBytes_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____GeneralAllocMemoryUsedInBytes_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____ObjectsAllocMemoryFreeInBytes_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____GeneralAllocMemoryFreeInBytes_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____WordsWrittenCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____WordsReadCount_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InputReceiveDelta_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____TimeResets_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____StateReceiveDelta_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____SimulationTimeOffset_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____SimulationSpeed_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InterpolationOffset_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsSnapshot, ____InterpolationSpeed_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatisticsSnapshot) == 0x70, "Size mismatch!");

} // namespace end def Fusion::Statistics
