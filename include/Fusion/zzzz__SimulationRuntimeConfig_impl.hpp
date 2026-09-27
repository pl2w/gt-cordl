#pragma once
// IWYU pragma private; include "Fusion/SimulationRuntimeConfig.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__TickRate_Resolved_impl.hpp"
#include "Fusion/zzzz__Topologies_impl.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
constexpr ::GlobalNamespace::TickRate_Resolved& Fusion::SimulationRuntimeConfig::__cordl_internal_get_TickRate()  {
return this->___TickRate;
}
constexpr ::GlobalNamespace::TickRate_Resolved const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_TickRate() const {
return this->___TickRate;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_TickRate(::GlobalNamespace::TickRate_Resolved  value)  {
this->___TickRate = value;
}
constexpr ::Fusion::SimulationModes& Fusion::SimulationRuntimeConfig::__cordl_internal_get_ServerMode()  {
return this->___ServerMode;
}
constexpr ::Fusion::SimulationModes const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_ServerMode() const {
return this->___ServerMode;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_ServerMode(::Fusion::SimulationModes  value)  {
this->___ServerMode = value;
}
constexpr int32_t& Fusion::SimulationRuntimeConfig::__cordl_internal_get_PlayerMaxCount()  {
return this->___PlayerMaxCount;
}
constexpr int32_t const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_PlayerMaxCount() const {
return this->___PlayerMaxCount;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_PlayerMaxCount(int32_t  value)  {
this->___PlayerMaxCount = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationRuntimeConfig::__cordl_internal_get_MasterClient()  {
return this->___MasterClient;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_MasterClient() const {
return this->___MasterClient;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_MasterClient(::Fusion::PlayerRef  value)  {
this->___MasterClient = value;
}
constexpr ::Fusion::PlayerRef& Fusion::SimulationRuntimeConfig::__cordl_internal_get_HostPlayer()  {
return this->___HostPlayer;
}
constexpr ::Fusion::PlayerRef const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_HostPlayer() const {
return this->___HostPlayer;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_HostPlayer(::Fusion::PlayerRef  value)  {
this->___HostPlayer = value;
}
constexpr ::Fusion::Topologies& Fusion::SimulationRuntimeConfig::__cordl_internal_get_Topology()  {
return this->___Topology;
}
constexpr ::Fusion::Topologies const& Fusion::SimulationRuntimeConfig::__cordl_internal_get_Topology() const {
return this->___Topology;
}
constexpr void Fusion::SimulationRuntimeConfig::__cordl_internal_set_Topology(::Fusion::Topologies  value)  {
this->___Topology = value;
}
// Ctor Parameters [CppParam { name: "TickRate", ty: "::GlobalNamespace::TickRate_Resolved", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ServerMode", ty: "::Fusion::SimulationModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerMaxCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MasterClient", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HostPlayer", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Topology", ty: "::Fusion::Topologies", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationRuntimeConfig::SimulationRuntimeConfig(::GlobalNamespace::TickRate_Resolved  TickRate, ::Fusion::SimulationModes  ServerMode, int32_t  PlayerMaxCount, ::Fusion::PlayerRef  MasterClient, ::Fusion::PlayerRef  HostPlayer, ::Fusion::Topologies  Topology) noexcept  {
this->TickRate = TickRate;
this->ServerMode = ServerMode;
this->PlayerMaxCount = PlayerMaxCount;
this->MasterClient = MasterClient;
this->HostPlayer = HostPlayer;
this->Topology = Topology;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationRuntimeConfig::SimulationRuntimeConfig()   {
}
