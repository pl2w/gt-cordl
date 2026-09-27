#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent_Direction.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NavigationEvent_Direction::NavigationEvent_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NavigationEvent_Direction::NavigationEvent_Direction()   {
}
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Left{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Up{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Right{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Down{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Next{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NavigationEvent_Direction  GlobalNamespace::NavigationEvent_Direction::Previous{static_cast<int32_t>(0x6)};
