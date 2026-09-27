#pragma once
// IWYU pragma private; include "Fusion/Simulation_PlayerSimulationData.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__Simulation_PlayerSimulationData_def.hpp"
constexpr ::Fusion::PlayerRef& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Player()  {
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Player() const {
return this->___Player;
}
constexpr void GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
this->___Player = value;
}
constexpr ::Fusion::NetworkId& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
constexpr int32_t& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Actor()  {
return this->___Actor;
}
constexpr int32_t const& GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_get_Actor() const {
return this->___Actor;
}
constexpr void GlobalNamespace::Simulation_PlayerSimulationData::__cordl_internal_set_Actor(int32_t  value)  {
this->___Actor = value;
}
// Ctor Parameters [CppParam { name: "Player", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Actor", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_PlayerSimulationData::Simulation_PlayerSimulationData(::Fusion::PlayerRef  Player, ::Fusion::NetworkId  Object, int32_t  Actor) noexcept  {
this->Player = Player;
this->Object = Object;
this->Actor = Actor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_PlayerSimulationData::Simulation_PlayerSimulationData()   {
}
