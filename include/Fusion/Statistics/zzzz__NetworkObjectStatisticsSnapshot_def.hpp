#pragma once
// IWYU pragma private; include "Fusion/Statistics/NetworkObjectStatisticsSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectStatisticsSnapshot)
// Forward declare root types
namespace Fusion::Statistics {
class NetworkObjectStatisticsSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::NetworkObjectStatisticsSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::NetworkObjectStatisticsSnapshot*, "Fusion.Statistics", "NetworkObjectStatisticsSnapshot");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.NetworkObjectStatisticsSnapshot
class CORDL_TYPE NetworkObjectStatisticsSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_InBandwidth, put=set_InBandwidth)) float_t  InBandwidth;

 __declspec(property(get=get_InPackets, put=set_InPackets)) int32_t  InPackets;

 __declspec(property(get=get_OutBandwidth, put=set_OutBandwidth)) float_t  OutBandwidth;

 __declspec(property(get=get_OutPackets, put=set_OutPackets)) int32_t  OutPackets;

/// @brief Field <InBandwidth>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__InBandwidth_k__BackingField, put=__cordl_internal_set__InBandwidth_k__BackingField)) float_t  _InBandwidth_k__BackingField;

/// @brief Field <InPackets>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__InPackets_k__BackingField, put=__cordl_internal_set__InPackets_k__BackingField)) int32_t  _InPackets_k__BackingField;

/// @brief Field <OutBandwidth>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__OutBandwidth_k__BackingField, put=__cordl_internal_set__OutBandwidth_k__BackingField)) float_t  _OutBandwidth_k__BackingField;

/// @brief Field <OutPackets>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__OutPackets_k__BackingField, put=__cordl_internal_set__OutPackets_k__BackingField)) int32_t  _OutPackets_k__BackingField;

/// [Conditional("DEBUG")]
/// @brief Method AddToInBandwidthStat, addr 0x60200b4, size 0x14, virtual false, abstract: false, final false
inline void AddToInBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToInPacketsStat, addr 0x602017c, size 0x14, virtual false, abstract: false, final false
inline void AddToInPacketsStat(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToOutBandwidthStat, addr 0x6020118, size 0x14, virtual false, abstract: false, final false
inline void AddToOutBandwidthStat(float_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method AddToOutPacketsStat, addr 0x60201e0, size 0x14, virtual false, abstract: false, final false
inline void AddToOutPacketsStat(int32_t  value, bool  overrideValue) ;

static inline ::Fusion::Statistics::NetworkObjectStatisticsSnapshot* New_ctor() ;

/// @brief Method Reset, addr 0x6020018, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get__InBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__InBandwidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__InPackets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__InPackets_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__OutBandwidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__OutBandwidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__OutPackets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__OutPackets_k__BackingField() ;

constexpr void __cordl_internal_set__InBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__InPackets_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__OutBandwidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__OutPackets_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x601fe24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_InBandwidth, addr 0x6020214, size 0x8, virtual false, abstract: false, final false
inline float_t get_InBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_InPackets, addr 0x60201f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InPackets() ;

/// [CompilerGenerated]
/// @brief Method get_OutBandwidth, addr 0x6020224, size 0x8, virtual false, abstract: false, final false
inline float_t get_OutBandwidth() ;

/// [CompilerGenerated]
/// @brief Method get_OutPackets, addr 0x6020204, size 0x8, virtual false, abstract: false, final false
inline int32_t get_OutPackets() ;

/// [CompilerGenerated]
/// @brief Method set_InBandwidth, addr 0x602021c, size 0x8, virtual false, abstract: false, final false
inline void set_InBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InPackets, addr 0x60201fc, size 0x8, virtual false, abstract: false, final false
inline void set_InPackets(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OutBandwidth, addr 0x602022c, size 0x3ac, virtual false, abstract: false, final false
inline void set_OutBandwidth(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_OutPackets, addr 0x602020c, size 0x8, virtual false, abstract: false, final false
inline void set_OutPackets(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectStatisticsSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectStatisticsSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectStatisticsSnapshot(NetworkObjectStatisticsSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectStatisticsSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectStatisticsSnapshot(NetworkObjectStatisticsSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19438};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InPackets>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____InPackets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <OutPackets>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____OutPackets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InBandwidth>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____InBandwidth_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <OutBandwidth>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____OutBandwidth_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsSnapshot, ____InPackets_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsSnapshot, ____OutPackets_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsSnapshot, ____InBandwidth_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::NetworkObjectStatisticsSnapshot, ____OutBandwidth_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::NetworkObjectStatisticsSnapshot) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
