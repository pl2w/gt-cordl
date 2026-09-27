#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SharedModeSetAlwaysInterested.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__SimulationMessageInternal_SharedModeSetAlwaysInterested_def.hpp"
constexpr ::Fusion::NetworkId& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
constexpr int32_t& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Interested()  {
return this->___Interested;
}
constexpr int32_t const& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Interested() const {
return this->___Interested;
}
constexpr void Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_set_Interested(int32_t  value)  {
this->___Interested = value;
}
constexpr int32_t& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Player()  {
return this->___Player;
}
constexpr int32_t const& Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_get_Player() const {
return this->___Player;
}
constexpr void Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::__cordl_internal_set_Player(int32_t  value)  {
this->___Player = value;
}
// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Interested", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Player", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::SimulationMessageInternal_SharedModeSetAlwaysInterested(::Fusion::NetworkId  Object, int32_t  Interested, int32_t  Player) noexcept  {
this->Object = Object;
this->Interested = Interested;
this->Player = Player;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested::SimulationMessageInternal_SharedModeSetAlwaysInterested()   {
}
