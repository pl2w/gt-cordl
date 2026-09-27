#pragma once
// IWYU pragma private; include "Fusion/SimulationRuntimeConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationRuntimeConfig)
// Forward declare root types
namespace Fusion {
struct SimulationRuntimeConfig;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationRuntimeConfig);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationRuntimeConfig, "Fusion", "SimulationRuntimeConfig");
// Dependencies Fusion.PlayerRef, Fusion.SimulationModes, Fusion.TickRate::Resolved, Fusion.Topologies
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationRuntimeConfig
struct CORDL_TYPE SimulationRuntimeConfig {
public:
// Declarations
/// @brief Field HostPlayer, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_HostPlayer, put=__cordl_internal_set_HostPlayer)) ::Fusion::PlayerRef  HostPlayer;

/// @brief Field MasterClient, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MasterClient, put=__cordl_internal_set_MasterClient)) ::Fusion::PlayerRef  MasterClient;

/// @brief Field PlayerMaxCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerMaxCount, put=__cordl_internal_set_PlayerMaxCount)) int32_t  PlayerMaxCount;

/// @brief Field ServerMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ServerMode, put=__cordl_internal_set_ServerMode)) ::Fusion::SimulationModes  ServerMode;

/// @brief Field TickRate, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_TickRate, put=__cordl_internal_set_TickRate)) ::GlobalNamespace::TickRate_Resolved  TickRate;

/// @brief Field Topology, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Topology, put=__cordl_internal_set_Topology)) ::Fusion::Topologies  Topology;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_HostPlayer() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_HostPlayer() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_MasterClient() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_MasterClient() ;

constexpr int32_t const& __cordl_internal_get_PlayerMaxCount() const;

constexpr int32_t& __cordl_internal_get_PlayerMaxCount() ;

constexpr ::Fusion::SimulationModes const& __cordl_internal_get_ServerMode() const;

constexpr ::Fusion::SimulationModes& __cordl_internal_get_ServerMode() ;

constexpr ::GlobalNamespace::TickRate_Resolved const& __cordl_internal_get_TickRate() const;

constexpr ::GlobalNamespace::TickRate_Resolved& __cordl_internal_get_TickRate() ;

constexpr ::Fusion::Topologies const& __cordl_internal_get_Topology() const;

constexpr ::Fusion::Topologies& __cordl_internal_get_Topology() ;

constexpr void __cordl_internal_set_HostPlayer(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_MasterClient(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set_PlayerMaxCount(int32_t  value) ;

constexpr void __cordl_internal_set_ServerMode(::Fusion::SimulationModes  value) ;

constexpr void __cordl_internal_set_TickRate(::GlobalNamespace::TickRate_Resolved  value) ;

constexpr void __cordl_internal_set_Topology(::Fusion::Topologies  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationRuntimeConfig() ;

// Ctor Parameters [CppParam { name: "TickRate", ty: "::GlobalNamespace::TickRate_Resolved", modifiers: "", def_value: None, comment: None }, CppParam { name: "ServerMode", ty: "::Fusion::SimulationModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerMaxCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MasterClient", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "HostPlayer", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Topology", ty: "::Fusion::Topologies", modifiers: "", def_value: None, comment: None }]
constexpr SimulationRuntimeConfig(::GlobalNamespace::TickRate_Resolved  TickRate, ::Fusion::SimulationModes  ServerMode, int32_t  PlayerMaxCount, ::Fusion::PlayerRef  MasterClient, ::Fusion::PlayerRef  HostPlayer, ::Fusion::Topologies  Topology) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___TickRate_padding[0x0];
/// @brief Field TickRate, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Resolved  ___TickRate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___TickRate_padding_forAlignment[0x0];
/// @brief Field TickRate, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::TickRate_Resolved  ___TickRate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___ServerMode_padding[0x10];
/// @brief Field ServerMode, offset: 0x10, size: 0x4, def value: None
 ::Fusion::SimulationModes  ___ServerMode;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___ServerMode_padding_forAlignment[0x10];
/// @brief Field ServerMode, offset: 0x10, size: 0x4, def value: None
 ::Fusion::SimulationModes  ___ServerMode_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___PlayerMaxCount_padding[0x14];
/// @brief Field PlayerMaxCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___PlayerMaxCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___PlayerMaxCount_padding_forAlignment[0x14];
/// @brief Field PlayerMaxCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___PlayerMaxCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___MasterClient_padding[0x18];
/// @brief Field MasterClient, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___MasterClient;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___MasterClient_padding_forAlignment[0x18];
/// @brief Field MasterClient, offset: 0x18, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___MasterClient_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___HostPlayer_padding[0x1c];
/// @brief Field HostPlayer, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___HostPlayer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___HostPlayer_padding_forAlignment[0x1c];
/// @brief Field HostPlayer, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___HostPlayer_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___Topology_padding[0x20];
/// @brief Field Topology, offset: 0x20, size: 0x4, def value: None
 ::Fusion::Topologies  ___Topology;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___Topology_padding_forAlignment[0x20];
/// @brief Field Topology, offset: 0x20, size: 0x4, def value: None
 ::Fusion::Topologies  ___Topology_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationRuntimeConfig) == 0x24, "Size mismatch!");

} // namespace end def Fusion
