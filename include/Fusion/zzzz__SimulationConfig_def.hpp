#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkProjectConfig_ReplicationFeatures_def.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_def.hpp"
#include "Fusion/zzzz__SimulationConfig_InputTransferModes_def.hpp"
#include "Fusion/zzzz__SimulationConfig_SimulationTimeMode_def.hpp"
#include "Fusion/zzzz__TickRate_Selection_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationConfig)
namespace GlobalNamespace {
struct SimulationConfig_DataConsistency;
}
namespace GlobalNamespace {
struct SimulationConfig_InputTransferModes;
}
namespace GlobalNamespace {
struct SimulationConfig_SimulationTimeMode;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
class SimulationConfig;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationConfig*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationConfig*, "Fusion", "SimulationConfig");
// Dependencies Fusion.NetworkProjectConfig::ReplicationFeatures, Fusion.SimulationConfig::DataConsistency, Fusion.SimulationConfig::InputTransferModes, Fusion.SimulationConfig::SimulationTimeMode, Fusion.TickRate::Selection, Fusion.Topologies, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationConfig
class CORDL_TYPE SimulationConfig : public ::System::Object {
public:
// Declarations
using DataConsistency = ::GlobalNamespace::SimulationConfig_DataConsistency;

using InputTransferModes = ::GlobalNamespace::SimulationConfig_InputTransferModes;

using SimulationTimeMode = ::GlobalNamespace::SimulationConfig_SimulationTimeMode;

 __declspec(property(get=get_AreaOfInterestEnabled)) bool  AreaOfInterestEnabled;

/// @brief Field EnableSerializers, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableSerializers, put=__cordl_internal_set_EnableSerializers)) bool  EnableSerializers;

/// @brief Field HostMigration, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_HostMigration, put=__cordl_internal_set_HostMigration)) bool  HostMigration;

/// @brief Field InputDataWordCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputDataWordCount, put=__cordl_internal_set_InputDataWordCount)) int32_t  InputDataWordCount;

 __declspec(property(get=get_InputTotalWordCount)) int32_t  InputTotalWordCount;

/// @brief Field InputTransferMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InputTransferMode, put=__cordl_internal_set_InputTransferMode)) ::GlobalNamespace::SimulationConfig_InputTransferModes  InputTransferMode;

/// @brief Field MaxObjectDestroysSentPerPacket, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_MaxObjectDestroysSentPerPacket, put=__cordl_internal_set_MaxObjectDestroysSentPerPacket)) uint8_t  MaxObjectDestroysSentPerPacket;

/// @brief Field ObjectDataConsistency, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ObjectDataConsistency, put=__cordl_internal_set_ObjectDataConsistency)) ::GlobalNamespace::SimulationConfig_DataConsistency  ObjectDataConsistency;

/// @brief Field PlayerCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerCount, put=__cordl_internal_set_PlayerCount)) int32_t  PlayerCount;

/// @brief Field ReplicationFeatures, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReplicationFeatures, put=__cordl_internal_set_ReplicationFeatures)) ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  ReplicationFeatures;

 __declspec(property(get=get_SchedulingEnabled)) bool  SchedulingEnabled;

 __declspec(property(get=get_SchedulingWithoutAOI)) bool  SchedulingWithoutAOI;

/// @brief Field SimulationUpdateTimeMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SimulationUpdateTimeMode, put=__cordl_internal_set_SimulationUpdateTimeMode)) ::GlobalNamespace::SimulationConfig_SimulationTimeMode  SimulationUpdateTimeMode;

/// @brief Field TickRateSelection, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_TickRateSelection, put=__cordl_internal_set_TickRateSelection)) ::GlobalNamespace::TickRate_Selection  TickRateSelection;

/// @brief Field Topology, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Topology, put=__cordl_internal_set_Topology)) ::Fusion::Topologies  Topology;

/// @brief Method Copy, addr 0x6001b34, size 0x80, virtual false, abstract: false, final false
inline ::Fusion::SimulationConfig* Copy() ;

/// @brief Method Init, addr 0x6001a80, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::SimulationConfig* Init(::System::Nullable_1<int32_t>  playerCountOverride, ::System::Nullable_1<int32_t>  inputWordCount) ;

static inline ::Fusion::SimulationConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_EnableSerializers() const;

constexpr bool& __cordl_internal_get_EnableSerializers() ;

constexpr bool const& __cordl_internal_get_HostMigration() const;

constexpr bool& __cordl_internal_get_HostMigration() ;

constexpr int32_t const& __cordl_internal_get_InputDataWordCount() const;

constexpr int32_t& __cordl_internal_get_InputDataWordCount() ;

constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes const& __cordl_internal_get_InputTransferMode() const;

constexpr ::GlobalNamespace::SimulationConfig_InputTransferModes& __cordl_internal_get_InputTransferMode() ;

constexpr uint8_t const& __cordl_internal_get_MaxObjectDestroysSentPerPacket() const;

constexpr uint8_t& __cordl_internal_get_MaxObjectDestroysSentPerPacket() ;

constexpr ::GlobalNamespace::SimulationConfig_DataConsistency const& __cordl_internal_get_ObjectDataConsistency() const;

constexpr ::GlobalNamespace::SimulationConfig_DataConsistency& __cordl_internal_get_ObjectDataConsistency() ;

constexpr int32_t const& __cordl_internal_get_PlayerCount() const;

constexpr int32_t& __cordl_internal_get_PlayerCount() ;

constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures const& __cordl_internal_get_ReplicationFeatures() const;

constexpr ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures& __cordl_internal_get_ReplicationFeatures() ;

constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode const& __cordl_internal_get_SimulationUpdateTimeMode() const;

constexpr ::GlobalNamespace::SimulationConfig_SimulationTimeMode& __cordl_internal_get_SimulationUpdateTimeMode() ;

constexpr ::GlobalNamespace::TickRate_Selection const& __cordl_internal_get_TickRateSelection() const;

constexpr ::GlobalNamespace::TickRate_Selection& __cordl_internal_get_TickRateSelection() ;

constexpr ::Fusion::Topologies const& __cordl_internal_get_Topology() const;

constexpr ::Fusion::Topologies& __cordl_internal_get_Topology() ;

constexpr void __cordl_internal_set_EnableSerializers(bool  value) ;

constexpr void __cordl_internal_set_HostMigration(bool  value) ;

constexpr void __cordl_internal_set_InputDataWordCount(int32_t  value) ;

constexpr void __cordl_internal_set_InputTransferMode(::GlobalNamespace::SimulationConfig_InputTransferModes  value) ;

constexpr void __cordl_internal_set_MaxObjectDestroysSentPerPacket(uint8_t  value) ;

constexpr void __cordl_internal_set_ObjectDataConsistency(::GlobalNamespace::SimulationConfig_DataConsistency  value) ;

constexpr void __cordl_internal_set_PlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_ReplicationFeatures(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  value) ;

constexpr void __cordl_internal_set_SimulationUpdateTimeMode(::GlobalNamespace::SimulationConfig_SimulationTimeMode  value) ;

constexpr void __cordl_internal_set_TickRateSelection(::GlobalNamespace::TickRate_Selection  value) ;

constexpr void __cordl_internal_set_Topology(::Fusion::Topologies  value) ;

/// @brief Method .ctor, addr 0x6001bb4, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AreaOfInterestEnabled, addr 0x5ffeee4, size 0x14, virtual false, abstract: false, final false
inline bool get_AreaOfInterestEnabled() ;

/// @brief Method get_InputTotalWordCount, addr 0x5ff5090, size 0xc, virtual false, abstract: false, final false
inline int32_t get_InputTotalWordCount() ;

/// @brief Method get_SchedulingEnabled, addr 0x5ffbf4c, size 0xc, virtual false, abstract: false, final false
inline bool get_SchedulingEnabled() ;

/// @brief Method get_SchedulingWithoutAOI, addr 0x6001a68, size 0x18, virtual false, abstract: false, final false
inline bool get_SchedulingWithoutAOI() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationConfig(SimulationConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationConfig(SimulationConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19333};

/// [HideInInspector]
/// [InlineHelp]
/// @brief Field InputDataWordCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___InputDataWordCount;

/// @brief Field ReplicationFeatures, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures  ___ReplicationFeatures;

/// [FormerlySerializedAs("inputTransferMode")]
/// [InlineHelp]
/// @brief Field InputTransferMode, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::SimulationConfig_InputTransferModes  ___InputTransferMode;

/// @brief Field ObjectDataConsistency, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::SimulationConfig_DataConsistency  ___ObjectDataConsistency;

/// [InlineHelp]
/// @brief Field SimulationUpdateTimeMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SimulationConfig_SimulationTimeMode  ___SimulationUpdateTimeMode;

/// [FormerlySerializedAs("DefaultPlayerCount")]
/// [FormerlySerializedAs("DefaultPlayers")]
/// [FormerlySerializedAs("Players")]
/// [Unit((Fusion.Units)0)]
/// [InlineHelp]
/// [RangeEx(1, 255)]
/// @brief Field PlayerCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___PlayerCount;

/// @brief Field TickRateSelection, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Selection  ___TickRateSelection;

/// @brief Field Topology, offset: 0x38, size: 0x4, def value: None
 ::Fusion::Topologies  ___Topology;

/// @brief Field HostMigration, offset: 0x3c, size: 0x1, def value: None
 bool  ___HostMigration;

/// [HideInInspector]
/// @brief Field MaxObjectDestroysSentPerPacket, offset: 0x3d, size: 0x1, def value: None
 uint8_t  ___MaxObjectDestroysSentPerPacket;

/// @brief Field EnableSerializers, offset: 0x3e, size: 0x1, def value: None
 bool  ___EnableSerializers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationConfig, ___InputDataWordCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___ReplicationFeatures) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___InputTransferMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___ObjectDataConsistency) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___SimulationUpdateTimeMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___PlayerCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___TickRateSelection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___Topology) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___HostMigration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___MaxObjectDestroysSentPerPacket) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationConfig, ___EnableSerializers) == 0x3e, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationConfig) == 0x40, "Size mismatch!");

} // namespace end def Fusion
