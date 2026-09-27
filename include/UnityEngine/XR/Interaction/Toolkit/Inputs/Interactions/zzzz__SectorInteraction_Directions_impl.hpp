#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/SectorInteraction_Directions.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_Directions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SectorInteraction_Directions::SectorInteraction_Directions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SectorInteraction_Directions::SectorInteraction_Directions()   {
}
constexpr ::GlobalNamespace::SectorInteraction_Directions  GlobalNamespace::SectorInteraction_Directions::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SectorInteraction_Directions  GlobalNamespace::SectorInteraction_Directions::North{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SectorInteraction_Directions  GlobalNamespace::SectorInteraction_Directions::South{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SectorInteraction_Directions  GlobalNamespace::SectorInteraction_Directions::East{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SectorInteraction_Directions  GlobalNamespace::SectorInteraction_Directions::West{static_cast<int32_t>(0x8)};
