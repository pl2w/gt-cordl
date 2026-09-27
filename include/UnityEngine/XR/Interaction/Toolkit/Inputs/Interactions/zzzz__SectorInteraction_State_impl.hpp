#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/SectorInteraction_State.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SectorInteraction_State::SectorInteraction_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SectorInteraction_State::SectorInteraction_State()   {
}
constexpr ::GlobalNamespace::SectorInteraction_State  GlobalNamespace::SectorInteraction_State::Centered{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SectorInteraction_State  GlobalNamespace::SectorInteraction_State::StartedValidDirection{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SectorInteraction_State  GlobalNamespace::SectorInteraction_State::StartedInvalidDirection{static_cast<int32_t>(0x2)};
