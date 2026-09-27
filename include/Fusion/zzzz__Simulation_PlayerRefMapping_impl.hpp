#pragma once
// IWYU pragma private; include "Fusion/Simulation_PlayerRefMapping.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__Simulation_PlayerRefMapping_def.hpp"
// Ctor Parameters [CppParam { name: "ActorId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerRef", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_PlayerRefMapping::Simulation_PlayerRefMapping(int32_t  ActorId, ::Fusion::PlayerRef  PlayerRef) noexcept  {
this->ActorId = ActorId;
this->PlayerRef = PlayerRef;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_PlayerRefMapping::Simulation_PlayerRefMapping()   {
}
