#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController_RisingLavaState.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_RisingLavaState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState::InfectionLavaController_RisingLavaState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState::InfectionLavaController_RisingLavaState()   {
}
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState  GlobalNamespace::InfectionLavaController_RisingLavaState::Drained{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState  GlobalNamespace::InfectionLavaController_RisingLavaState::Erupting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState  GlobalNamespace::InfectionLavaController_RisingLavaState::Rising{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState  GlobalNamespace::InfectionLavaController_RisingLavaState::Full{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::InfectionLavaController_RisingLavaState  GlobalNamespace::InfectionLavaController_RisingLavaState::Draining{static_cast<int32_t>(0x4)};
